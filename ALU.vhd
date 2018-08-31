----------------------------------------------------------------------------------
-- Company: UBB
-- Engineer: Sebastian Guajardo Herrera
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;



entity ALU is
	port (
			dbus : in STD_LOGIC_VECTOR(7 downto 0); 
			sbus : in STD_LOGIC_VECTOR(7 downto 0);
			aluop : in STD_LOGIC_VECTOR(1 downto 0);
			aluout : out STD_LOGIC_VECTOR(7 downto 0));			
end ALU;

architecture Behavioral of ALU is

begin
	
   with aluop select
      aluout <= dbus and sbus when "00",
					 dbus or sbus when "01",
					 dbus + sbus when "10",
					 dbus - sbus when others;
			

end Behavioral;

