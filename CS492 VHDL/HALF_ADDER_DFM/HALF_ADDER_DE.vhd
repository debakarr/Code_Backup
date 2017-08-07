----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:12:11 02/18/2017 
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
    Port ( A1,B1 : in  STD_LOGIC;
           S1,C1out : out  STD_LOGIC);
end HALF_ADDER_DE;

architecture Behavioral of HALF_ADDER_DE is

begin

S1 <= A1 XOR B1;
C1out <= A1 AND B1;

end Behavioral;

