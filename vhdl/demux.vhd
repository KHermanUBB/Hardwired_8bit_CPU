library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity demux is
port (
      out0 : out std_logic;   
      out1 : out std_logic;   
      out2 : out std_logic;   
      out3 : out std_logic;   
      drs : in std_logic_vector(1 downto 0);
      dwrite : in std_logic   
     );
end demux;

architecture Behavioral of demux is

begin
process(dwrite,drs)
begin
case drs is
  when "00" => out0 <= dwrite; out1 <= '0'; out2 <= '0'; out3 <='0';
  when "01" => out1 <= dwrite; out0 <= '0'; out2 <= '0'; out3 <='0';
  when "10" => out2 <= dwrite; out0 <= '0'; out1 <= '0'; out3 <='0';
  when others => out3 <= dwrite;  out0 <= '0'; out1 <= '0'; out2 <='0';
end case;
end process;

end Behavioral;

