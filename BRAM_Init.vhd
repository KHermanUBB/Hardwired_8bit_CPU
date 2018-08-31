----------------------------------------------------------------------------------
-- Company: UBB	
-- Engineer: Krzysztof Herman
-- 
-- Create Date:    13:12:55 11/20/2017 
-- Design Name:    B RAM init from file
-- Module Name:    BRAM_Init - Behavioral 
-- Project Name:   Time Delay Beamforming on FPGA

library IEEE;
use ieee.std_logic_1164.all;              
use ieee.std_logic_unsigned.all;          
use std.textio.all; 

entity BRAM_Init is
	generic(fname : string  := "data.txt"); 
    port(clk  : in std_logic;
         readwrite   : in std_logic;
         addr : in std_logic_vector(7 downto 0);
			datain : in std_logic_vector(7 downto 0);
         dataout : out std_logic_vector(7 downto 0));
end BRAM_Init;

architecture Behavioral of BRAM_Init is

    type RamType is array(0 to 255) of bit_vector(7 downto 0);    

    impure function InitRamFromFile (RamFileName : in string) return RamType is
        FILE RamFile         : text is in RamFileName;                       
        variable RamFileLine : line;                                 
        variable RAM         : RamType;
	variable I           : integer;                                   
    begin 
        I := 0;                                                  
        while (not endfile(RamFile)) loop                                  
            readline (RamFile, RamFileLine);                             
            read (RamFileLine, RAM(I));                                  
            I := I + 1;                                                  
        end loop;                                                    
        return RAM;                                                  
    end function;                                                

    signal RAM : RamType := InitRamFromFile(fname);
    
begin

    process (clk)                                  --editar              
    begin                                                        
        if clk'event and clk = '1' then     
			if readwrite = '1' then 
            RAM(conv_integer(addr)) <= to_bitvector(datain);   				 
			end if;
			   dataout <= to_stdlogicvector(RAM(conv_integer(addr)));			
        end if;                                                      
    end process; 

end Behavioral;

