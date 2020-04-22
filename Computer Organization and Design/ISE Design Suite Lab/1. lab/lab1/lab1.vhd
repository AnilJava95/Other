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
-- Description: s giriþine göre 8 iþlemden birini yapýyor a ve b yi kullanarak ve sonucu f ye yazýyor
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
use IEEE.STD_LOGIC_SIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity alu is
	port(
		A,B:in std_logic_vector(3 downto 0);
		S:in std_logic_vector(2 downto 0);
		F:out std_logic_vector(3 downto 0));
end alu;

architecture Behavioral of alu is 
begin 
	process(A,B,S)
	begin
	case S is
		when "000" => 
			F<="0000";
		when "001" => 
			F<=B-A;
		when "010" => 
			F<=A-B;
		when "011" => 
			F<=A+B;
		when "100" => 
			F<=A XOR B;
		when "101"=>
			F<=A OR B;
		when "110"=>
			f<=A AND B;
		when "111" => 
			F<="1111";
		when OTHERS => 
			f<="1111";
	end case;
	end process;
end Behavioral;