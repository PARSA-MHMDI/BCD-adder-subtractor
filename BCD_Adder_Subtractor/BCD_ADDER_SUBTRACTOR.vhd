library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity BCD_ADDER_SUBTRACTOR is
	port(
			A : in std_logic_vector(3 downto 0);
			B : in std_logic_vector(3 downto 0);
			control : in std_logic;
			S : out std_logic_vector(3 downto 0);
			Cout : out std_logic
	);
end BCD_ADDER_SUBTRACTOR;

architecture Behavioral of BCD_ADDER_SUBTRACTOR is

component four_bit_adder is
        Port ( a : in  STD_LOGIC_VECTOR (3 downto 0);
               b : in  STD_LOGIC_VECTOR (3 downto 0);
               Cin : in  STD_LOGIC;
               s : out  STD_LOGIC_VECTOR (3 downto 0);
               Cout : out  STD_LOGIC);
end component; 

signal temp1, temp2, temp3, result1, result2 : std_logic_vector(3 downto 0);
signal cout1, cout2, cout3, x  : std_logic;

begin

temp1(0) <= B(0) xor control;
temp1(1) <= B(1) xor control;
temp1(2) <= B(2) xor control;
temp1(3) <= B(3) xor control;

temp2(0) <= control;
temp2(1) <= '0';
temp2(2) <= '0';
temp2(3) <= control;

FBA1 : four_bit_adder port map(a=>temp2, b=>temp1, Cin=>control, s=>result1, Cout=>cout1);
FBA2 : four_bit_adder port map(a=>A, b=>result1, Cin=>control, s=>result2, Cout=>cout2);

x <= (cout2 or (result2(3) and result2(2)) or (result2(3) and result2(1)));

Cout <= x;

temp3(0) <= '0';
temp3(1) <= x;
temp3(2) <= x;
temp3(3) <= '0';

FBA3 : four_bit_adder port map(a=>temp3, b=>result2, Cin=>'0', s=>S, Cout=>cout3);


end Behavioral;

