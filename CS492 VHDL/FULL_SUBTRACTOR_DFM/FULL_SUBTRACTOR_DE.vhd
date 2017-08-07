----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:10:16 02/18/2017 
-- Design Name: 
-- Module Name:    FULL_SUBTRACTOR_DE - Behavioral 
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

entity FULL_SUBTRACTOR_DE is
    Port ( A,B,Bin : in  STD_LOGIC;
           D,Bout : out  STD_LOGIC);
end FULL_SUBTRACTOR_DE;

architecture Behavioral of FULL_SUBTRACTOR_DE is

begin

D <= (A XOR B) XOR Bin;
Bout <= (((NOT A) AND B) OR ((NOT (A XOR B)) AND Bin));

end Behavioral;

