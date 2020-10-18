Kernel API
-----

[![Build Status](https://travis-ci.org/tapaswenipathak/KAPIs.svg?branch=master)](https://travis-ci.org/tapaswenipathak/KAPIs.svg?branch=master)

Kernel APIs are how you would interact with the kernel. Kernel APIs are called KAPIs in short. From memory manipulation, devices, clock, firmware, hardware, IPC (inter-process communication), all inside kernel realized using KAPIs.

This project implements kernel APIs as shell commands.

You can run any of the Kernel API commands from the command line. Kernel APIs are wrappers over how the rest of the OS can interact with the kernel. Any kernel API can be accessed indirectly, using a kernel API program utilizing the relevant library. None of the kernel APIs are directly accessible in the shell. This project implements kernel APIs as commands where you can execute from the command line.