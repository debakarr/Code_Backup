----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:17:58 02/25/2017 
-- Design Name: 
-- Module Name:    FULL_ADDER_DE - Behavioral 
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

entity FULL_ADDER_DE is
    Port ( A,B,Cin : in  STD_LOGIC;
           S,Cout : out  STD_LOGIC);
end FULL_ADDER_DE;

architecture Behavioral of FULL_ADDER_DE is

component HALF_ADDER_DE is
    Port ( A1,B1 : in  STD_LOGIC;
           S1,C1out : out  STD_LOGIC);
end component;			 
component OR_DE is
    Port ( A2,B2 : in  STD_LOGIC;
           C2 : out  STD_LOGIC);
end component;
signal sum1, sum2, carry1, carry2 : STD_LOGIC;

begin

HA1 : HALF_ADDER_DE port map (A1=>A,B1=>B,S1=>sum1,C1out=>carry1);
HA2 : HALF_ADDER_DE port map (A1=>Cin,B1=>sum1,S1=>S,C1out=>carry2);
OR1 : OR_DE port map (A2=>carry1,B2=>carry2,C2=>Cout);

end Behavioral;

