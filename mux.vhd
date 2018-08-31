library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux is port 
 (

  r0,r1,r2,r3: in std_logic_vector(7 downto 0);
  drs: in std_logic_vector(1 downto 0);
  dbus: out std_logic_vector(7 downto 0)
  );

end mux;

architecture bhv of mux is
begin
	process(r0,r1,r2,r3,drs)
	begin
		case drs is
		when "00" =>  dbus <= r0;
		when "01" =>  dbus <= r1;
		when "10" =>  dbus <= r2;
		when others =>  dbus <= r3;
		end case;
	end process;
end bhv;

