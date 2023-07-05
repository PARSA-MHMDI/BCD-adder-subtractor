LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
  
ENTITY fourbit_adder_TB IS
END fourbit_adder_TB;
 
ARCHITECTURE behavior OF fourbit_adder_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT four_bit_adder
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         Cin : IN  std_logic;
         s : OUT  std_logic_vector(3 downto 0);
         Cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');
   signal Cin : std_logic := '0';

 	--Outputs
   signal s : std_logic_vector(3 downto 0);
   signal Cout : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: four_bit_adder PORT MAP (
          a => a,
          b => b,
          Cin => Cin,
          s => s,
          Cout => Cout
        );
 

   -- Stimulus process
   stim_proc: process
   begin
	
	for i in 0 to 16 loop
		for j in 0 to 16 loop
			a <= std_logic_vector(to_unsigned(i,4));
			b <= std_logic_vector(to_unsigned(j,4));
			cin <= '0';
			wait for 0.0000001 ps;
			wait for 100 ns;
		end loop;
	end loop;
	
      wait;
   end process;

END;
