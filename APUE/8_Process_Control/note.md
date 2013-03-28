8.2 Process Identifiers
--------------------------
Process ID 0 is usually the scheduler process and is often know as the **swapper**.
Process ID 1 is usually the **init** process and is invoked by the kernel at he end of the bootstrap procedure.

8.3 for Function
------------------

In general, we never know whether the child stats executing before the parent or vice versa. This depends on the scheduling algorithem used by the kernel.

The parent and the child share a file table entry for every open descriptor.

The differences between the parent and child are:

+ The return value from *fork*
+ The process IDs
+ The two processes have different parent process IDs
+ The child tms_utime, tms_s_time, tms_cutime, and tms_cstime values are set to 0
+ File locks set by the parent are no inherited by the child
+ Pending alarms anre cleared for the child
+ The set of pending signals for the child is set to the empty set

8.4 vfork Function
------------------
Firstly, *vfork* is used to call *exec* and it is more efficiency than *fork*, since it would not copy the address space of the parent into child

Secondly, *vfork* guarantees that the child runs first.

8.5 exit Functions
--------------------
UNIX System terminology, a process that has terminated, but whose parent has not yet waied for it, is called a **zombie**
