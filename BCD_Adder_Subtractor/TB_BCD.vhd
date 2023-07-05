LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
  
ENTITY TB_BCD IS
END TB_BCD;
 
ARCHITECTURE behavior OF TB_BCD IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BCD_ADDER_SUBTRACTOR
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         control : IN  std_logic;
         S : OUT  std_logic_vector(3 downto 0);
         Cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal control : std_logic := '0';

 	--Outputs
   signal S : std_logic_vector(3 downto 0);
   signal Cout : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BCD_ADDER_SUBTRACTOR PORT MAP (
          A => A,
          B => B,
          control => control,
          S => S,
          Cout => Cout
        );
		  
   -- Stimulus process
   stim_proc: process
	
   begin		
	for i in 9 downto 0 loop
		for j in 0 to 9 loop
			if (i - j > 0) then
				A <= std_logic_vector(to_unsigned(i,4));
				B <= std_logic_vector(to_unsigned(j,4));
				control <= '1';
				wait for 0.0000001 ps;
				wait for 1 ns;
			end if;
		end loop;
	end loop;
	
      wait;
   end process;

END;
