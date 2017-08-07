--------------------------------------------------------------------------------
-- Copyright (c) 1995-2007 Xilinx, Inc.
-- All Right Reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 9.2i
--  \   \         Application : ISE
--  /   /         Filename : HALF_ADDER_S.vhw
-- /___/   /\     Timestamp : Sat Feb 25 20:00:46 2017
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: 
--Design Name: HALF_ADDER_S
--Device: Xilinx
--

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE IEEE.STD_LOGIC_TEXTIO.ALL;
USE STD.TEXTIO.ALL;

ENTITY HALF_ADDER_S IS
END HALF_ADDER_S;

ARCHITECTURE testbench_arch OF HALF_ADDER_S IS
    FILE RESULTS: TEXT OPEN WRITE_MODE IS "results.txt";

    COMPONENT HALF_ADDER_DE
        PORT (
            A : In std_logic;
            B : In std_logic;
            S : Out std_logic;
            Cout : Out std_logic
        );
    END COMPONENT;

    SIGNAL A : std_logic := '0';
    SIGNAL B : std_logic := '0';
    SIGNAL S : std_logic := '0';
    SIGNAL Cout : std_logic := '0';

    BEGIN
        UUT : HALF_ADDER_DE
        PORT MAP (
            A => A,
            B => B,
            S => S,
            Cout => Cout
        );

        PROCESS
            BEGIN
                -- -------------  Current Time:  200ns
                WAIT FOR 200 ns;
                B <= '1';
                -- -------------------------------------
                -- -------------  Current Time:  300ns
                WAIT FOR 100 ns;
                A <= '1';
                B <= '0';
                -- -------------------------------------
                -- -------------  Current Time:  400ns
                WAIT FOR 100 ns;
                B <= '1';
                -- -------------------------------------
                WAIT FOR 600 ns;

            END PROCESS;

    END testbench_arch;

