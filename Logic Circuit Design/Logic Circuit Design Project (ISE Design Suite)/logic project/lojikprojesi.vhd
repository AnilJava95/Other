----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:13:48 12/19/2016 
-- Design Name: 
-- Module Name:    lojikprojesi - dataflow 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL; 

entity lojikprojesi is
	Port ( 
		a5,a4,a3,a2,a1,a0 : in  STD_LOGIC;
      f1,f2,f3 : out  STD_LOGIC
	);
end lojikprojesi;

architecture dataflow of lojikprojesi is
begin
	f1 <= (not a1 and not a0) or (a3 and not a2) or (not a3 and a1 and not a0) or (a5 and a1 and not a0);
	f2 <= (not a5 and not a3 and a0) or (not a5 and a3 and a2 and a1) or (not a4 and a0);
	f3 <= (a3 and a0) or (a5 and a4 and not a3 and not a2) or (a5 and a4 and not a3 and not a1) or
		(a5 and not a3 and not a2 and not a1) or (a5 and not a4 and not a3 and not a2 and a0) or
		(a5 and not a4 and not a3 and not a1 and a0) or (a5 and not a4 and not a3 and a2 and a1 and not a0)
		or (not a5 and a4 and not a3 and a2 and a1 and a0);

end dataflow;