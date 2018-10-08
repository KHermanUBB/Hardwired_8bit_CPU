----------------------------------------------------------------------------------
-- Company: UBB
-- Engineer:  Diego Anabalon

----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library IEEE;
use IEEE.STD_LOGIC_1164.all;
 
entity mux_4to1 is
 port 
  (
     pc,imval,sbus,dbus : in STD_LOGIC_VECTOR(7 downto 0);
     addrsel: in STD_LOGIC_VECTOR(1 downto 0);
     addr: out STD_LOGIC_VECTOR(7 downto 0)
  );
end mux_4to1;
 
architecture bhv of mux_4to1 is
begin
	
--muxproc:	process (pc,imval,sbus,dbus,addrsel)
--			begin
--			  if (addrsel = "00" )then
--					 addr <= pc;
--			  elsif (addrsel(0) ='0' and addrsel(1) = '1') then
--					addr <= imval;
--			  elsif (addrsel(0) ='1' and addrsel(1) = '0') then
--					addr <= sbus;
--			  else
--					addr <= dbus;
--			  end if;
--		  end process;
--		  

addr <= pc    when addrsel = "00" else 
        imval when addrsel = "01" else 
        sbus  when addrsel = "10" else	dbus;	  
		  
end bhv;
