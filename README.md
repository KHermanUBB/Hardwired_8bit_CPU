# Hardwired 8 bit CPU made by UBB students
Eight bit von Neuman CPU inspired by the https://minnie.tuhs.org/CompArch/Tutes/week03.html design made in Logisim by Warren Toomey.

The vhdl folder contains all the sources to synthesise the circuit together with testbench (tb_cpu.vhd) file and program/data memory load (data.txt). 

The Logisim folder contains Logisim files with blocks, buses and control signals that correspond to the vhdl modules.

The ise folder contains the project in ISE 14.7.

The ISim folder contains the dump from ISim (testbench results). 
It can be open in ISim program File->Open-> isim.wcfg
To update the timing diagram go to menu Simulation->Restart and then Simulation->Run.

You can expand the signals from Main buses, control signals and Registers.

The result should be similar to the following 

![dummy text](ISIM.png?raw=true "CPU simulation")





