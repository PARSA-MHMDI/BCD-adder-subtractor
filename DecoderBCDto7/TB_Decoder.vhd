LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
  
ENTITY TB_Decoder IS
END TB_Decoder;
 
ARCHITECTURE behavior OF TB_Decoder IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Decoder
    PORT(
         B0 : IN  std_logic;
         B1 : IN  std_logic;
         B2 : IN  std_logic;
         B3 : IN  std_logic;
         A : OUT  std_logic;
         B : OUT  std_logic;
         C : OUT  std_logic;
         D : OUT  std_logic;
         E : OUT  std_logic;
         F : OUT  std_logic;
         G : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal B0 : std_logic := '0';
   signal B1 : std_logic := '0';
   signal B2 : std_logic := '0';
   signal B3 : std_logic := '0';

 	--Outputs
   signal A : std_logic;
   signal B : std_logic;
   signal C : std_logic;
   signal D : std_logic;
   signal E : std_logic;
   signal F : std_logic;
   signal G : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 

 
BEGIN

 
	-- Instantiate the Unit Under Test (UUT)
   uut: Decoder PORT MAP (
          B0 => B0,
          B1 => B1,
          B2 => B2,
          B3 => B3,
          A => A,
          B => B,
          C => C,
          D => D,
          E => E,
          F => F,
          G => G
        ); 

   -- Stimulus process
   stim_proc: process
	variable bcd : std_logic_vector(3 downto 0) := "0000";

   begin		
		for i in 0 to 9 loop
				bcd  := std_logic_vector(to_unsigned(i,4));
				B0 <= bcd(3);
            B1 <= bcd(2);
            B2 <= bcd(1);
            B3 <= bcd(0);
				wait for 0.0000001 ps;
				wait for 100 ns;
		end loop;
      wait;
 
      wait;
   end process;

END;
