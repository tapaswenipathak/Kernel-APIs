KAPIs
-----

Kernel APIs are how you would interact with the kernel. Kernel APIs in short are called
KAPIs. From memory manipulation, devices, clock, firmware, hardware, IPC(inter process
communication), all inside kernel are implemented using KAPIs.

This project implements all available KAPIs as system calls.

A system call is how communication from user level would happen with kernel level
process.

Each dir has example of KAPI as userspace and/or kernelspace programs.
