----------------------------------------------------------------------------------
-- Company: UBB
-- Engineer:  Diego Anabalon
--------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity RegFile is
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
end RegFile;

architecture Behavioral of RegFile is

signal  dw0, dw1, dw2, dw3:  std_logic;

signal  x:  std_logic;
signal  q0, q1, q2, q3, dbus2 :  std_logic_vector(7 downto 0);

component demux 
port (
      out0 : out std_logic;   
      out1 : out std_logic;   
      out2 : out std_logic;   
      out3 : out std_logic;   
      drs : in std_logic_vector(1 downto 0);
      dwrite : in std_logic   
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

component mux 
 port(
   r0,r1,r2,r3: in std_logic_vector(7 downto 0);
   drs: in std_logic_vector(1 downto 0);
   dbus: out std_logic_vector(7 downto 0)
  );
end component;



begin

dmux1: demux port map(dw0, dw1, dw2, dw3, dregsel, dwrite);
ff0:  ff port map (clk, rst, regin, dw0, q0 );
ff1:  ff port map (clk, rst, regin, dw1, q1 );
ff2:  ff port map (clk, rst, regin, dw2, q2 );
ff3:  ff port map (clk, rst, regin, dw3, q3 );
mux1: mux port map (q0, q1, q2, q3, dregsel, dbus2);
mux2: mux port map (q0, q1, q2, q3, sregsel, sbus);

dbus <= dbus2;
zero <= dbus2(7);
x <=  dbus2(7) or dbus2(6) or dbus2(5) or dbus2(4) or dbus2(3) or dbus2(2) or dbus2(1) or dbus2(0) ;
neg <= not x;

end Behavioral;

