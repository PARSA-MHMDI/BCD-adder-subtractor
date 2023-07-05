library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Decoder is
	port(
			B0,B1,B2,B3 : in STD_LOGIC;
			A : out std_logic;
			B : out std_logic;
			C : out std_logic;
			D : out std_logic;
			E : out std_logic;
			F : out std_logic;
			G : out std_logic
	);
end Decoder;

architecture Behavioral of Decoder is

begin

A <= B0 OR B2 OR (B1 AND B3) OR (NOT B1 AND NOT B3);
B <= (NOT B1) OR (NOT B2 AND NOT B3) OR (B2 AND B3);
C <= B1 OR NOT B2 OR B3;
D <= (NOT B1 AND NOT B3) OR (B2 AND NOT B3) OR (B1 AND NOT B2 AND B3) OR (NOT B1 AND B2) OR B0;
E <= (NOT B1 AND NOT B3) OR (B2 AND NOT B3);
F <= B0 OR (NOT B2 AND NOT B3) OR (B1 AND NOT B2) OR (B1 AND NOT B3);
G <= B0 OR (B1 AND NOT B2) OR ( NOT B1 AND B2) OR (B2 AND NOT B3);
 

end Behavioral;

