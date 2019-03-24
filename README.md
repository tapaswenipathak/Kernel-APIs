KAPIs
-----

Kernel APIs are how you would interact with the kernel. Kernel APIs in short are called
KAPIs. From memory manipulation, devices, clock, firmware, hardware, IPC(inter process
communication), all inside kernel are implemented using KAPIs.

This project implements all available KAPIs as system calls.

A system call is how communication from user level would happen with kernel level
process.

Each dir has example of KAPI as userspace and/or kernelspace programs.


## List of Kernel APIs

- Data types
  - DLLs
- Basic C Library
  - String Conversions
	- String Manipulations
	- Bit Operations
- Basic Kernel Library Functions
  - Bitmap Operations
	- Command Line Parsing
	- CRC Functions
	- idr/ida Functions
- Memory Management in Linux
  - The Slab Cache
	- User Space Memory Access
	- More Memory Management Functions
- Kernel IPC facilities
  - IPC Utilities
- FIFO Buffer
  - Kfifo interface
- Relay Interface Support
  - Relay Interface
- Module Support
  - Module Loading
	- Inter Module Support
- Hardware Interfaces
  - Interrupt Handling
	- DMA Channels
	- Resource Management
	- MTRR Handling
	- PCI Support Library
	- PCI Hotplug Support Library
- Firmware Interfaces
  - DMI Interfaces
	- EDD Interfaces
- Security Framework
  - security_init
	- security_module_enable
	- security_add_hooks
	- securityfs_create_file
	- securityfs_create_dir
	- securityfs_remove
- Audit Interfaces
  - audit_log_start
	- audit_log_format
	- audit_log_end
	- audit_log
	- audit_log_secctx
	- audit_alloc
	  - audit_free
		- audit_syscall_entry
		- audit_syscall_exit
		- audit_reusename
		- audit_getname
		- audit_inode
	- auditsc_get_stamp
	- audit_set_loginuid
	  - audit_mq_open
		- audit_mq_sendrecv
		- audit_mq_notify
		- audit_mq_getsetattr
		- audit_ipc_obj
		- audit_ipc_set_perm
		- audit_socketcall
		- audit_fd_pair
		- audit_sockaddr
	- audit_signal_info
	  - audit_log_bprm_fcaps
		- audit_log_capset
	- audit_core_dumps
	- audit_rule_change
	- audit_list_rules_send
	- parent_len
	- audit_compare_dname_path
- Char devices
  - register_chrdev_region
