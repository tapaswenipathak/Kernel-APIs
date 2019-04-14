Kernel API
-----

[![Build Status](https://travis-ci.org/tapaswenipathak/KAPIs.svg?branch=master)](https://travis-ci.org/tapaswenipathak/KAPIs.svg?branch=master)

Kernel APIs are how you would interact with the kernel. Kernel APIs in short are called
KAPIs. From memory manipulation, devices, clock, firmware, hardware, IPC(inter process
communication), all inside kernel are implemented using KAPIs.

This project implements kernel APIs as shell commands.

Any of the Kernel API command can be run from the command line. Kernel APIs are
wrappers over how OS can interact with core kernel. Any kernel API can be accessed
using a kernel API program including the relevant library. A kernel API cannot be
accessed in the shell. This project implements kernel APIs as commands where you can
run any command from the command line. This is based on MacOS Darwin Kernel version.

Each dir has example of Kernel API as userspace and/or kernelspace programs.
