library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity ff is
	port( 
	      clk: in std_logic;
	      rst: in std_logic;
		   d: in std_logic_vector(7 downto 0);
		   ce: in std_logic;
	      q: out std_logic_vector(7 downto 0)
		);
end ff;

architecture Behavioral of ff is

begin

-- 8 bit Flip Flop ;	
	process(clk, rst)
	begin
		if rst = '1' then
			q <= (others => '0');
		elsif rising_edge(clk) then 
				if ce = '1' then 
					 q <= d;
				end if; 	
		end if;	
	end process;

end Behavioral;

