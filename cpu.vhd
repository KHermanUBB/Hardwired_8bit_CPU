----------------------------------------------------------------------------------
-- Company: UBB
-- Engineer:  Krzysztof Herman 
-- Here add all modules form that constitute the CPU
-- use hierarchical design 
-- use generics
-- name all signals 
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity cpu is
	port( rst: in  std_logic;
         clk : IN  std_logic
	);
end cpu;

architecture Behavioral of cpu is
	
	------------------------------------------ BEGIN BUSES --------------------------------------------
	-- destination bus 
	signal dbus: std_logic_vector(7 downto 0);
	-- source bus 
	signal sbus: std_logic_vector(7 downto 0); 
   -- ALU output 
	signal aluout: std_logic_vector(7 downto 0);
	-- address bus
	signal addr: std_logic_vector(7 downto 0);
	-- data from RAM
	signal dataout: std_logic_vector(7 downto 0);
	-- data to RAM
	signal datain: std_logic_vector(7 downto 0);
	-- Reg File input 
	signal regin: std_logic_vector(7 downto 0);
	-- Immediate Value
   signal imval: std_logic_vector(7 downto 0);
	-- program counter
   signal pc: std_logic_vector(7 downto 0);
	-- instruction
   signal instr: std_logic_vector(7 downto 0);
	------------------------------------------ END BUSES ----------------------------------------------
	
	
   ------------------------------------------ BEGIN CONTROL SIGNALS-----------------------------------
	signal readwrite: std_logic;
	signal irload: std_logic;
	signal imload: std_logic;
	signal dwrite: std_logic;
	signal zero: std_logic;
	signal neg: std_logic;
	signal pcsel: std_logic;
	signal pcload: std_logic;
	signal addrsel:   std_logic_vector(1 downto 0);
	signal regsel:   std_logic_vector(1 downto 0);
	signal aluop:   std_logic_vector(1 downto 0);
	signal sregsel:   std_logic_vector(1 downto 0);
	signal dregsel:   std_logic_vector(1 downto 0);
	signal phase: std_logic_vector(1 downto 0);
	
	------------------------------------------  END CONTROL SIGNALS------------------------------------
	
	------------------------------------------ BEGIN COMPONENTS ----------------------------------
    COMPONENT mux_4to1
    PORT(
         pc : IN  std_logic_vector(7 downto 0);
         imval : IN  std_logic_vector(7 downto 0);
         sbus : IN  std_logic_vector(7 downto 0);
         dbus : IN  std_logic_vector(7 downto 0);
         addrsel : IN  std_logic_vector(1 downto 0);
         addr : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
	 
	 COMPONENT ALU
    PORT(
         dbus : IN  std_logic_vector(7 downto 0);
         sbus : IN  std_logic_vector(7 downto 0);
         aluop : IN  std_logic_vector(1 downto 0);
         aluout : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    
	 COMPONENT BRAM_Init
	 generic(fname : string  := "data.txt"); 
    port(clk :       in std_logic;
         readwrite:  in std_logic;
         addr :      in std_logic_vector(7 downto 0);
			datain :    in std_logic_vector(7 downto 0);
         dataout :   out std_logic_vector(7 downto 0));
    END COMPONENT;
	 
	component ControlLogic 
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
	end component;
    
	component RegFile 
	port( clk : in std_logic;
	     rst : in std_logic;
	     regin: in std_logic_vector(7 downto 0);
	     dwrite: in std_logic;
        sregsel: in std_logic_vector(1 downto 0);
        dregsel: in std_logic_vector(1 downto 0); 
        dbus: out std_logic_vector(7 downto 0);
        sbus: out std_logic_vector(7 downto 0);
   	  neg: out std_logic;
   	  zero: out std_logic
	);
	end component;
	
	component ff 
	port( 
	      clk: in std_logic;
	      rst: in std_logic;
		   d: in std_logic_vector(7 downto 0);
		   ce: in std_logic;
	      q: out std_logic_vector(7 downto 0)
		);
	end component;
	
	
	Component PCnt 
	port( clk: in std_logic;
	      rst: in std_logic;
		  pcsel: in std_logic;
		  pcload: in std_logic;
		  inp: in std_logic_vector(7 downto 0);
	      outp: out std_logic_vector(7 downto 0)
		);
	END component;
	
	------------------------------------------  END COMPONENTS ------------------------------------
	
	
begin

ADDRMUX:        mux_4to1 PORT MAP (pc, imval, sbus, dbus, addrsel, addr);
REGMUX:         mux_4to1 PORT MAP (imval, sbus, dataout, aluout, regsel, regin);
ALU1:           ALU      PORT MAP (dbus, sbus, aluop, aluout);
RAM:            BRAM_Init  generic map(fname => "data.txt")
                         port map (clk, readwrite, addr, aluout,  dataout);
Ctrl:           ControlLogic port map (clk, rst, instr, zero, neg, irload, imload, dwrite, readwrite, pcsel, pcload, addrsel, aluop, regsel, sregsel, dregsel, phase);
RegFile1:       RegFile port map (clk, rst, regin, dwrite, sregsel, dregsel, dbus, sbus, neg, zero);
ir:             ff port map(clk, rst, dataout, irload, instr);
immedate:       ff port map(clk, rst, dataout, imload, imval);
PC1:            PCnt port map (clk, rst, pcsel, pcload, imval, pc);
end Behavioral;

