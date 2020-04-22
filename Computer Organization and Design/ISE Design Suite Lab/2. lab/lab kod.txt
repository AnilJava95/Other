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
-- Description: ilk baþta iki mux2x1 var. bunlar s0 a göre iki giriþten birini seçiyor ve çýkýþlarý
--  üçüncü mux2x1 e baðlanýyor. bu mux'un seçimi ise s1 ile yapýlýyor. yani mux4x2 yapmýþ oluyoruz.
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

entity mux2x1 is
	port(
		w0,w1,s:IN std_logic;
		f:out std_logic
	);
end mux2x1;

architecture Behavioral of mux2x1 is
begin
	process(W0,W1,s)
	begin
		if s = '0' then
		   f <= w0;
		elsif s = '1' then
		   f <= w1;
		end if;
	end process;
end Behavioral;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux4x1 is
	port(
		s1,s0,w0x,w1x,w2x,w3x:IN std_logic;
		fx:out std_logic
	);
end mux4x1;

architecture structural of mux4x1 is
component mux2x1 is
	port(
		w0,w1,s:IN std_logic;
		f:out std_logic
	);
end component;

signal a1,a2:std_logic;
begin
	m1: mux2x1 port map(w0x,w1x,s0,a1);
	m2: mux2x1 port map(w2x,w3x,s0,a2);
	m3: mux2x1 port map(a1,a2,s1,fx);
end structural;
