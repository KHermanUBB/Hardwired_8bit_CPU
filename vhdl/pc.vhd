-- Designer: Krzysztof Herman
-- Date: 14.04.2018
-- Semaphore controller module
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.numeric_std.all;
use ieee.std_logic_unsigned.all;
 

 
ENTITY PCnt IS
	port( clk: in std_logic;
	      rst: in std_logic;
		  pcsel: in std_logic;
		  pcload: in std_logic;
		  inp: in std_logic_vector(7 downto 0);
	      outp: out std_logic_vector(7 downto 0)
		);

END PCnt;
 
ARCHITECTURE behavior OF PCnt IS 

	signal  q: std_logic_vector(7 downto 0);
	signal  qinc: std_logic_vector(7 downto 0);
	signal  d: std_logic_vector(7 downto 0);
	
	component ff 
	port( 
	      clk: in std_logic;
	      rst: in std_logic;
		   d: in std_logic_vector(7 downto 0);
		   ce: in std_logic;
	      q: out std_logic_vector(7 downto 0)
		);
	end component;


begin


PC_FF: FF port map(clk, rst, d, pcload, q);  
		
qinc  <=  q + 1;	
d <= inp when pcsel = '0' else qinc;	
outp <= q;

END;
