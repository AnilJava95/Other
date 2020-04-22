----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:51:06 10/21/2016 
-- Design Name: 
-- Module Name:    alu - Behavioral 
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
--------------------------------------------------------------------------------------------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;


ENTITY flipflop IS 
 PORT (  D, Clock  : IN STD_LOGIC ; 
			Q    : INOUT  STD_LOGIC; 
			Qx : INOUT STD_LOGIC) ; 
END flipflop ; 
ARCHITECTURE Behavior OF flipflop IS 
BEGIN 
 PROCESS ( Clock ) 
 BEGIN 
  IF Clock'EVENT AND Clock = '1' THEN 
		Q <= D ; 
		Qx <= NOT D;
  END IF ; 
   
 END PROCESS ; 
END Behavior ; 




LIBRARY ieee ; 
USE ieee.std_logic_1164.all ; 

entity devre is
    Port ( x : in  STD_LOGIC;
           saat : in  STD_LOGIC;
           z : out  STD_LOGIC);
end devre;

architecture STRUCTURAL of devre is
	component flipflop is PORT (  D, Clock  : IN STD_LOGIC ; 
			Q    : INOUT  STD_LOGIC; 
			Qx : INOUT STD_LOGIC); end component;

signal D1,Q1,Q1x,D2,Q2,Q2x :std_logic;

begin

D1<= Q1x OR Q2;
D2<= X AND Q2x;

ff1 : flipflop port map(D1,saat,Q1,Q1x);
ff2 : flipflop port map(D2,saat,Q2,Q2x);

Z<= Q2x OR Q1;

end structural;

