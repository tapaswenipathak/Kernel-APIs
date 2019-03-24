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
  - alloc_chrdev_region
  - __register_chrdev
  - unregister_chrdev_region
  - __unregister_chrdev
  - cdev_add
  - cdev_del
  - cdev_alloc
  - cdev_init
- Miscellaneous Devices
  - misc_register
  - misc_deregister
- Clock
  - struct clk_notifier
  - struct clk_notifier_data
  - clk_get_accuracy
  - clk_set_phase
  - clk_get_phase
  - clk_is_match
  - clk_prepare
  - clk_unprepare
  - clk_get
  - devm_clk_get
  - clk_enable
  - clk_disable
  - clk_get_rate
  - clk_put
  - devm_clk_put
  - clk_round_rate
  - clk_set_rate
  - clk_set_rate_range
  - clk_set_min_rate
  - clk_set_max_rate
- Blk devices
  - blk_delay_queue
  - blk_start_queue_async
  - blk_start_queue
  - blk_stop_queue
  - blk_sync_queue
  - __blk_run_queue_uncond
  - __blk_run_queue
  - blk_run_queue_async
  - blk_run_queue
  - blk_queue_bypass_start
  - blk_queue_bypass_end
  - blk_cleanup_queue
  - blk_init_queue
  - blk_requeue_request
  - part_round_stats 
  - generic_make_request
  - submit_bio
  - blk_insert_cloned_request
  - blk_rq_err_bytes
  - blk_peek_request
  - blk_start_request
  - blk_fetch_request
  - blk_update_request
  - blk_unprep_request
  - blk_end_request
  - blk_end_request_all
  - blk_end_request_cur
  - blk_limits_io_opt
  - blk_queue_io_opt
  - blk_queue_stack_limits
  - blk_stack_limits 
  - bdev_stack_limits
  - disk_stack_limits 
  - blk_queue_dma_pad 
  - blk_queue_update_dma_pad
  - blk_execute_rq
