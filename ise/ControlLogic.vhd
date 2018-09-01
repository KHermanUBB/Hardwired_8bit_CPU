----------------------------------------------------------------------------------
-- Company: UBB 
-- Engineer: Krzysztof Herman

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ControlLogic is
	port( clk:        in  std_logic;
	      rst:        in  std_logic;
	      instr: 		in  std_logic_vector(7 downto 0);
	      zero: 		in  std_logic;
			neg:     	in  std_logic;
			irload:     out std_logic;
			imload:     out std_logic;
			dwrite:     out std_logic;
			readwrite:  out std_logic;
			pcsel:      out std_logic;
			pcload:     out std_logic;
		   addrsel:    out std_logic_vector(1 downto 0);
			aluop:      out std_logic_vector(1 downto 0);
			regsel:     out std_logic_vector(1 downto 0);
			sregsel:    out std_logic_vector(1 downto 0);
			dregsel:    out std_logic_vector(1 downto 0);
			phase: 		out std_logic_vector(1 downto 0)
	);
end ControlLogic;

architecture Behavioral of ControlLogic is
	
	-- FSM state counter
	signal phs: std_logic_vector(1 downto 0);
	-- Auxilliary  signals
	signal pcloads1: std_logic;
	signal pcloads2: std_logic;
	signal dwrites1: std_logic;
	signal regsels1: std_logic_vector(1 downto 0);
	signal addrsels1: std_logic_vector(1 downto 0);
	signal op2: 	  std_logic_vector(1 downto 0);
	signal op:       std_logic_vector(3 downto 0);
	

begin
--  state counter
PhaseCounter: process(clk,rst)
				  begin 
				  if rst = '1' then 
						phs <= "00";
				  elsif 	rising_edge(clk) then 
						phs <= phs + 1; 
				  end if;		
				  end process;
-- contiunous assignment 
	phase <= phs;
				
-- sregsel logic  bits 1 and 0 of instruction byte
 sregsel <= instr(1 downto 0);	
-- dregsel logic  bits 3 and 2 of instruction byte
 dregsel <= instr(3 downto 2);	
 
op2 <=  instr(5 downto 4);
op  <=  instr(7 downto 4); 
-- ALU operation
aluop <=  op2;

-- Program Counter pcsel logic
 pcsel <= '1' when (phs = "00" or phs = "01") else '0';
-- Immediate load imload logic
 imload <= '1' when phs = "01" else '0'; 		
-- Instruction Register load irload  logic
 irload <= '1' when phs = "00" else '0'; 
-- PC Load pcload logic
-- output mux 
 pcload <= '1'        when phs = "00" else 
			  instr(7)   when phs = "01" else 
			  pcloads1 when phs = "10" else '0'; 
			  
 pcloads1 <= (instr(7) and instr(6) and instr(5) and instr(4)) or ( (not instr(6)) and instr(7) and pcloads2);			  
-- input mux
 pcloads2 <=  zero                     when op2 = "00" else 
              not zero                 when op2 = "01" else 
              (not zero) and (not neg) when op2 = "10" else
				  neg                      when op2 = "11";   
				  
-- Read/Write readwrite logic					
readwrite <= (instr(4) and (not instr(5)) and instr(6)) when phs = "10" else '0';				
				
-- Register Select regsel logic		
regsel <= regsels1 when phs = "10" else "00";			
regsels1 <= "01" when (op = "0110") else 				
				"10" when (op = "0100" or op ="1100") else
            "11" when (op = "0000" or op = "0001" or op = "0010" or op = "0011") else "00";				

-- Address Select addrsel Logic 	
addrsel <= addrsels1 when phs = "10" else "00";			
addrsels1 <= "01" when (op = "1101" or op = "1110") else 				
				 "10" when (op = "0100" or op = "0101") else "00";

-- Destination Register Write dwrite logic		
dwrite <= dwrites1 when phs = "10" else  '0';			
dwrites1 <= '1' when (op = "0101" or op = "0111" or op = "1000" or op = "1001" or
                      op = "1010" or op = "1011" or op = "1101" or op = "1111")  else 	'0';			
	

end Behavioral;

