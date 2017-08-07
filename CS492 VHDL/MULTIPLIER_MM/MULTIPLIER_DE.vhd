----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:35:39 03/01/2017 
-- Design Name: 
-- Module Name:    MULTIPLIER_MM_M - Behavioral 
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

entity MULTIPLIER_DE is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           P : out  STD_LOGIC_VECTOR (7 downto 0));
end MULTIPLIER_DE;

architecture Behavioral of MULTIPLIER_DE is

component ADDER_DE is
    Port ( A,B,Cin : in  STD_LOGIC;
           S,Cout : out  STD_LOGIC);
end component;

signal S : STD_LOGIC_VECTOR(15 downto 1);
signal C : STD_LOGIC_VECTOR(10 downto 0);
signal A : STD_LOGIC_VECTOR(7 downto 0);

begin

L1 : P(0) <= X(0) AND Y(0);
L2 : S(1) <= X(1) AND Y(0);
L3 : S(2) <= X(2) AND Y(0);
L4 : S(3) <= X(3) AND Y(0);
L5 : S(4) <= X(0) AND Y(1);
L6 : S(5) <= X(1) AND Y(1);
L7 : S(6) <= X(2) AND Y(1);
L8 : S(7) <= X(3) AND Y(1);
L9 : S(8) <= X(0) AND Y(2);
L10 : S(9) <= X(1) AND Y(2);
L11 : S(10) <= X(2) AND Y(2);
L12 : S(11) <= X(3) AND Y(2);
L13 : S(12) <= X(0) AND Y(3);
L14 : S(13) <= X(1) AND Y(3);
L15 : S(14) <= X(2) AND Y(3);
L16 : S(15) <= X(3) AND Y(3);
L17 : ADDER_DE port map (S(1), S(4), '0', P(1), C(0));
L18 : ADDER_DE port map (S(2), S(5), C(0), A(1), C(1));
L19 : ADDER_DE port map (S(3), S(6), C(1), A(2), C(2));
L20 : ADDER_DE port map ('0', S(7), C(2), A(3), C(3));
L21 : ADDER_DE port map (A(1), S(8), '0', P(2), C(4));
L22 : ADDER_DE port map (A(2), S(9), C(4), A(5), C(5));
L23 : ADDER_DE port map (A(3), S(10), C(5), A(6), C(6));
L24 : ADDER_DE port map (C(3), S(11), C(6), A(7), C(7));
L25 : ADDER_DE port map (A(5), S(12), '0', P(3), C(8));
L26 : ADDER_DE port map (A(6), S(13), C(8), P(4), C(9));
L27 : ADDER_DE port map (A(7), S(14), C(9), P(5), C(10));
L28 : ADDER_DE port map (C(7), S(15), C(10), P(6), P(7));

end Behavioral;

