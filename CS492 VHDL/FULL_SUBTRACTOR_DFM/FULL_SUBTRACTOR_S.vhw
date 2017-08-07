--------------------------------------------------------------------------------
-- Copyright (c) 1995-2007 Xilinx, Inc.
-- All Right Reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 9.2i
--  \   \         Application : ISE
--  /   /         Filename : FULL_SUBTRACTOR_S.vhw
-- /___/   /\     Timestamp : Sat Feb 18 10:21:52 2017
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: 
--Design Name: FULL_SUBTRACTOR_S
--Device: Xilinx
--

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE IEEE.STD_LOGIC_TEXTIO.ALL;
USE STD.TEXTIO.ALL;

ENTITY FULL_SUBTRACTOR_S IS
END FULL_SUBTRACTOR_S;

ARCHITECTURE testbench_arch OF FULL_SUBTRACTOR_S IS
    FILE RESULTS: TEXT OPEN WRITE_MODE IS "results.txt";

    COMPONENT FULL_SUBTRACTOR_DE
        PORT (
            A : In std_logic;
            B : In std_logic;
            Bin : In std_logic;
            D : Out std_logic;
            Bout : Out std_logic
        );
    END COMPONENT;

    SIGNAL A : std_logic := '0';
    SIGNAL B : std_logic := '0';
    SIGNAL Bin : std_logic := '0';
    SIGNAL D : std_logic := '0';
    SIGNAL Bout : std_logic := '0';

    BEGIN
        UUT : FULL_SUBTRACTOR_DE
        PORT MAP (
            A => A,
            B => B,
            Bin => Bin,
            D => D,
            Bout => Bout
        );

        PROCESS
            BEGIN
                -- -------------  Current Time:  200ns
                WAIT FOR 200 ns;
                Bin <= '1';
                -- -------------------------------------
                -- -------------  Current Time:  300ns
                WAIT FOR 100 ns;
                B <= '1';
                Bin <= '0';
                -- -------------------------------------
                -- -------------  Current Time:  400ns
                WAIT FOR 100 ns;
                Bin <= '1';
                -- -------------------------------------
                -- -------------  Current Time:  500ns
                WAIT FOR 100 ns;
                A <= '1';
                B <= '0';
                Bin <= '0';
                -- -------------------------------------
                -- -------------  Current Time:  600ns
                WAIT FOR 100 ns;
                Bin <= '1';
                -- -------------------------------------
                -- -------------  Current Time:  700ns
                WAIT FOR 100 ns;
                B <= '1';
                Bin <= '0';
                -- -------------------------------------
                -- -------------  Current Time:  800ns
                WAIT FOR 100 ns;
                Bin <= '1';
                -- -------------------------------------
                WAIT FOR 200 ns;

            END PROCESS;

    END testbench_arch;

