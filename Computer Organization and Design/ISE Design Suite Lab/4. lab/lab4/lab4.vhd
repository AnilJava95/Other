-- Description: toplama cikarma islemi yapar. put a ... put b ... put m 1- cikar 0 topla

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;   --standart k�t�phane bildirimi

entity tam is
--�telemeli toplay�c�y� yap�sal mimari ile tasarlamak i�in �nce tam toplay�c� tasarlamam�z gerekir
	port( 
		x,y,z : in std_logic;
		c,s: out std_logic
	);    --tam toplay�c�n�n �� giri� (x, y, z) ve iki ��k�� (c ve s) portu bulunur
end tam;

architecture dataflow of tam is   --veri ak��� mimarisi kullan�yoruz
	begin
		C <= (x and y) or (z and y) or (z and x);   --C ve S'nin karakteristik denklemleri
		S <= (not z and not x and y) or (not z and x and not y) or (z and not x and not y) or (z and x and y);
end dataflow;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;   --standart k�t�phane bildirimi

entity nbitadder is
--n bit toplayicinin �� giri� (A, B, M) ve iki ��k�� (S ve C) portu bulunur
	port( 
		A,B: in STD_LOGIC_VECTOR (3 downto 0);
		S: out STD_LOGIC_VECTOR (3 downto 0);
		M: in std_logic;
		C: out std_logic
	);
end nbitadder;

architecture Structural of nbitadder is
	component tam is   --component bildirimi
		port( 
			x,y,z : in std_logic;
			c,s: out std_logic
		);
	end component;

signal x0,x1,x2,x3,c1,c2,c3 : std_logic;
--x sinyalleri xor dan gelen xor'lanmi' bitlerini tutar. c sinyalleri ise tam toplay�c�lardan tam 
--toplay�c�lara giden �� adet eldeyi ifade tutar
begin
	x0 <= M xor B(0);   --xor mapping i�lemleri
	x1 <= M xor B(1);
	x2 <= M xor B(2);  
	x3 <= M xor B(3);
	
	tam1: tam port map(A(0),x0,M,c1,S(0));   --tam toplayici mapping i�lemleri
	tam2: tam port map(A(1),x1,c1,c2,S(1));
	tam3: tam port map(A(2),x2,c2,c3,S(2));
	tam4: tam port map(A(3),x3,c3,C,S(3));
end Structural;
