# benchmark-c
Measuring time in C.

clock() returns CPU clock cycles, so it must be divided by CLOCKS_PER_SEC in order to obtain time in seconds. The same compilation may return different results for different machines.
