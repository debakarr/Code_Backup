----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:51:24 02/25/2017 
-- Design Name: 
-- Module Name:    HALF_ADDER_DE - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity HALF_ADDER_DE is
    Port ( A,B : in  STD_LOGIC;
           S,Cout : out  STD_LOGIC);
end HALF_ADDER_DE;

architecture Behavioral of HALF_ADDER_DE is

component AND_DE is
    Port ( A1,B1 : in  STD_LOGIC;
           C1 : out  STD_LOGIC);
end component;

component XOR_DE is
    Port ( A2,B2 : in  STD_LOGIC;
           C2 : out  STD_LOGIC);
end component;

begin

XOR1 : XOR_DE port map (A2=>A,B2=>B,C2=>S);
AND1 : AND_DE port map (A1=>A,B1=>B,C1=>Cout);

end Behavioral;

