--------------------------------------------------------------------------------
-- Copyright (c) 1995-2007 Xilinx, Inc.
-- All Right Reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 9.2i
--  \   \         Application : ISE
--  /   /         Filename : MULTIPLIER_S.vhw
-- /___/   /\     Timestamp : Mon Mar 06 06:20:03 2017
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: 
--Design Name: MULTIPLIER_S
--Device: Xilinx
--

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
USE IEEE.STD_LOGIC_TEXTIO.ALL;
USE STD.TEXTIO.ALL;

ENTITY MULTIPLIER_S IS
END MULTIPLIER_S;

ARCHITECTURE testbench_arch OF MULTIPLIER_S IS
    FILE RESULTS: TEXT OPEN WRITE_MODE IS "results.txt";

    COMPONENT MULTIPLIER_DE
        PORT (
            X : In std_logic_vector (3 DownTo 0);
            Y : In std_logic_vector (3 DownTo 0);
            P : Out std_logic_vector (7 DownTo 0)
        );
    END COMPONENT;

    SIGNAL X : std_logic_vector (3 DownTo 0) := "0000";
    SIGNAL Y : std_logic_vector (3 DownTo 0) := "0000";
    SIGNAL P : std_logic_vector (7 DownTo 0) := "00000000";

    BEGIN
        UUT : MULTIPLIER_DE
        PORT MAP (
            X => X,
            Y => Y,
            P => P
        );

        PROCESS
            BEGIN
                -- -------------  Current Time:  100ns
                WAIT FOR 100 ns;
                X <= "0010";
                Y <= "0010";
                -- -------------------------------------
                WAIT FOR 900 ns;

            END PROCESS;

    END testbench_arch;

