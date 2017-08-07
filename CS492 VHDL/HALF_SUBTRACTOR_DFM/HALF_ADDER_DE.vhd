----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:01:26 02/18/2017 
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
           D,Bout : out  STD_LOGIC);
end HALF_ADDER_DE;

architecture Behavioral of HALF_ADDER_DE is

begin

D <= A XOR B;
Bout <= (NOT A) AND B;

end Behavioral;

