/*
   Kafel - syscalls (RISC-V 64)
   -----------------------------------------

   Copyright 2016 Google LLC

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#include <stddef.h>

#include "../syscall.h"

#define ARG_0 0
#define ARG_1 1
#define ARG_2 2
#define ARG_3 3
#define ARG_4 4
#define ARG_5 5

#define NORMAL false

const struct syscall_descriptor riscv64_syscall_list[] = {
    {"accept",
     202,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"upeer_sockaddr", 8},
         [ARG_2] = {"upeer_addrlen", 8},
     }},
    {"accept4",
     242,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"upeer_sockaddr", 8},
         [ARG_2] = {"upeer_addrlen", 8},
         [ARG_3] = {"flags", 4},
     }},
    {"acct",
     89,

     {
         [ARG_0] = {"name", 8},
     }},
    {"add_key",
     217,

     {
         [ARG_0] = {"_type", 8},
         [ARG_1] = {"_description", 8},
         [ARG_2] = {"_payload", 8},
         [ARG_3] = {"plen", 8},
         [ARG_4] = {"ringid", 4},
     }},
    {"adjtimex",
     171,

     {
         [ARG_0] = {"txc_p", 8},
     }},
    {"bind",
     200,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"umyaddr", 8},
         [ARG_2] = {"addrlen", 4},
     }},
    {"bpf",
     280,

     {
         [ARG_0] = {"cmd", 4},
         [ARG_1] = {"uattr", 8},
         [ARG_2] = {"size", 4},
     }},
    {"brk",
     214,

     {
         [ARG_0] = {"brk", 8},
     }},
    {"capget",
     90,

     {
         [ARG_0] = {"header", 8},
         [ARG_1] = {"dataptr", 8},
     }},
    {"capset",
     91,

     {
         [ARG_0] = {"header", 8},
         [ARG_1] = {"data", 8},
     }},
    {"chdir",
     49,

     {
         [ARG_0] = {"filename", 8},
     }},
    {"chroot",
     51,

     {
         [ARG_0] = {"filename", 8},
     }},
    {"clock_adjtime",
     266,

     {
         [ARG_0] = {"which_clock", 4},
         [ARG_1] = {"utx", 8},
     }},
    {"clock_getres",
     114,

     {
         [ARG_0] = {"which_clock", 4},
         [ARG_1] = {"tp", 8},
     }},
    {"clock_gettime",
     113,

     {
         [ARG_0] = {"which_clock", 4},
         [ARG_1] = {"tp", 8},
     }},
    {"clock_nanosleep",
     115,

     {
         [ARG_0] = {"which_clock", 4},
         [ARG_1] = {"flags", 4},
         [ARG_2] = {"rqtp", 8},
         [ARG_3] = {"rmtp", 8},
     }},
    {"clock_settime",
     112,

     {
         [ARG_0] = {"which_clock", 4},
         [ARG_1] = {"tp", 8},
     }},
    {"clone",
     220,

     {
         [ARG_0] = {"clone_flags", 8},
         [ARG_1] = {"newsp", 8},
         [ARG_2] = {"parent_tidptr", 8},
         [ARG_3] = {"child_tidptr", 8},
         [ARG_4] = {"tls", 8},
     }},
    {"close",
     57,

     {
         [ARG_0] = {"fd", 4},
     }},
    {"connect",
     203,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"uservaddr", 8},
         [ARG_2] = {"addrlen", 4},
     }},
    {"copy_file_range",
     285,

     {
         [ARG_0] = {"fd_in", 4},
         [ARG_1] = {"off_in", 8},
         [ARG_2] = {"fd_out", 4},
         [ARG_3] = {"off_out", 8},
         [ARG_4] = {"len", 8},
         [ARG_5] = {"flags", 4},
     }},
    {"delete_module",
     106,

     {
         [ARG_0] = {"name_user", 8},
         [ARG_1] = {"flags", 4},
     }},
    {"dup",
     23,

     {
         [ARG_0] = {"fildes", 4},
     }},
    {"dup3",
     24,

     {
         [ARG_0] = {"oldfd", 4},
         [ARG_1] = {"newfd", 4},
         [ARG_2] = {"flags", 4},
     }},
    {"epoll_create1",
     20,

     {
         [ARG_0] = {"flags", 4},
     }},
    {"epoll_ctl",
     21,

     {
         [ARG_0] = {"epfd", 4},
         [ARG_1] = {"op", 4},
         [ARG_2] = {"fd", 4},
         [ARG_3] = {"event", 8},
     }},
    {"epoll_pwait",
     22,

     {
         [ARG_0] = {"epfd", 4},
         [ARG_1] = {"events", 8},
         [ARG_2] = {"maxevents", 4},
         [ARG_3] = {"timeout", 4},
         [ARG_4] = {"sigmask", 8},
         [ARG_5] = {"sigsetsize", 8},
     }},
    {"eventfd2",
     19,

     {
         [ARG_0] = {"count", 4},
         [ARG_1] = {"flags", 4},
     }},
    {"execve",
     221,

     {
         [ARG_0] = {"filename", 8},
         [ARG_1] = {"argv", 8},
         [ARG_2] = {"envp", 8},
     }},
    {"execveat",
     281,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"filename", 8},
         [ARG_2] = {"argv", 8},
         [ARG_3] = {"envp", 8},
         [ARG_4] = {"flags", 4},
     }},
    {"exit",
     93,

     {
         [ARG_0] = {"error_code", 4},
     }},
    {"exit_group",
     94,

     {
         [ARG_0] = {"error_code", 4},
     }},
    {"faccessat",
     48,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"filename", 8},
         [ARG_2] = {"mode", 4},
     }},
    {"fadvise64",
     223,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"offset", 8},
         [ARG_2] = {"len", 8},
         [ARG_3] = {"advice", 4},
     }},
    {"fallocate",
     47,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"mode", 4},
         [ARG_2] = {"offset", 8},
         [ARG_3] = {"len", 8},
     }},
    {"fanotify_init",
     262,

     {
         [ARG_0] = {"flags", 4},
         [ARG_1] = {"event_f_flags", 4},
     }},
    {"fanotify_mark",
     263,

     {
         [ARG_0] = {"fanotify_fd", 4},
         [ARG_1] = {"flags", 4},
         [ARG_2] = {"mask", 8},
         [ARG_3] = {"dfd", 4},
         [ARG_4] = {"pathname", 8},
     }},
    {"fchdir",
     50,

     {
         [ARG_0] = {"fd", 4},
     }},
    {"fchmod",
     52,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"mode", 2},
     }},
    {"fchmodat",
     53,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"filename", 8},
         [ARG_2] = {"mode", 2},
     }},
    {"fchown",
     55,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"user", 4},
         [ARG_2] = {"group", 4},
     }},
    {"fchownat",
     54,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"filename", 8},
         [ARG_2] = {"user", 4},
         [ARG_3] = {"group", 4},
         [ARG_4] = {"flag", 4},
     }},
    {"fcntl",
     25,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"cmd", 4},
         [ARG_2] = {"arg", 8},
     }},
    {"fdatasync",
     83,

     {
         [ARG_0] = {"fd", 4},
     }},
    {"fgetxattr",
     10,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"name", 8},
         [ARG_2] = {"value", 8},
         [ARG_3] = {"size", 8},
     }},
    {"finit_module",
     273,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"uargs", 8},
         [ARG_2] = {"flags", 4},
     }},
    {"flistxattr",
     13,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"list", 8},
         [ARG_2] = {"size", 8},
     }},
    {"flock",
     32,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"cmd", 4},
     }},
    {"fremovexattr",
     16,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"name", 8},
     }},
    {"fsetxattr",
     7,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"name", 8},
         [ARG_2] = {"value", 8},
         [ARG_3] = {"size", 8},
         [ARG_4] = {"flags", 4},
     }},
    {"fstatfs",
     44,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"buf", 8},
     }},
    {"fsync",
     82,

     {
         [ARG_0] = {"fd", 4},
     }},
    {"ftruncate",
     46,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"length", 8},
     }},
    {"futex",
     98,

     {
         [ARG_0] = {"uaddr", 8},
         [ARG_1] = {"op", 4},
         [ARG_2] = {"val", 4},
         [ARG_3] = {"utime", 8},
         [ARG_4] = {"uaddr2", 8},
         [ARG_5] = {"val3", 4},
     }},
    {"getcpu",
     168,

     {
         [ARG_0] = {"cpup", 8},
         [ARG_1] = {"nodep", 8},
         [ARG_2] = {"unused", 8},
     }},
    {"getcwd",
     17,

     {
         [ARG_0] = {"buf", 8},
         [ARG_1] = {"size", 8},
     }},
    {"getdents64",
     61,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"dirent", 8},
         [ARG_2] = {"count", 4},
     }},
    {"getegid", 177, {}},
    {"geteuid", 175, {}},
    {"getgid", 176, {}},
    {"getgroups",
     158,

     {
         [ARG_0] = {"gidsetsize", 4},
         [ARG_1] = {"grouplist", 8},
     }},
    {"getitimer",
     102,

     {
         [ARG_0] = {"which", 4},
         [ARG_1] = {"value", 8},
     }},
    {"get_mempolicy",
     236,

     {
         [ARG_0] = {"policy", 8},
         [ARG_1] = {"nmask", 8},
         [ARG_2] = {"maxnode", 8},
         [ARG_3] = {"addr", 8},
         [ARG_4] = {"flags", 8},
     }},
    {"getpeername",
     205,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"usockaddr", 8},
         [ARG_2] = {"usockaddr_len", 8},
     }},
    {"getpgid",
     155,

     {
         [ARG_0] = {"pid", 4},
     }},
    {"getpid", 172, {}},
    {"getppid", 173, {}},
    {"getpriority",
     141,

     {
         [ARG_0] = {"which", 4},
         [ARG_1] = {"who", 4},
     }},
    {"getrandom",
     278,

     {
         [ARG_0] = {"buf", 8},
         [ARG_1] = {"count", 8},
         [ARG_2] = {"flags", 4},
     }},
    {"getresgid",
     150,

     {
         [ARG_0] = {"rgidp", 8},
         [ARG_1] = {"egidp", 8},
         [ARG_2] = {"sgidp", 8},
     }},
    {"getresuid",
     148,

     {
         [ARG_0] = {"ruidp", 8},
         [ARG_1] = {"euidp", 8},
         [ARG_2] = {"suidp", 8},
     }},
    {"getrlimit",
     163,

     {
         [ARG_0] = {"resource", 4},
         [ARG_1] = {"rlim", 8},
     }},
    {"get_robust_list",
     100,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"head_ptr", 8},
         [ARG_2] = {"len_ptr", 8},
     }},
    {"getrusage",
     165,

     {
         [ARG_0] = {"who", 4},
         [ARG_1] = {"ru", 8},
     }},
    {"getsid",
     156,

     {
         [ARG_0] = {"pid", 4},
     }},
    {"getsockname",
     204,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"usockaddr", 8},
         [ARG_2] = {"usockaddr_len", 8},
     }},
    {"getsockopt",
     209,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"level", 4},
         [ARG_2] = {"optname", 4},
         [ARG_3] = {"optval", 8},
         [ARG_4] = {"optlen", 8},
     }},
    {"gettid", 178, {}},
    {"gettimeofday",
     169,

     {
         [ARG_0] = {"tv", 8},
         [ARG_1] = {"tz", 8},
     }},
    {"getuid", 174, {}},
    {"getxattr",
     8,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"name", 8},
         [ARG_2] = {"value", 8},
         [ARG_3] = {"size", 8},
     }},
    {"init_module",
     105,

     {
         [ARG_0] = {"umod", 8},
         [ARG_1] = {"len", 8},
         [ARG_2] = {"uargs", 8},
     }},
    {"inotify_add_watch",
     27,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"pathname", 8},
         [ARG_2] = {"mask", 4},
     }},
    {"inotify_init1",
     26,

     {
         [ARG_0] = {"flags", 4},
     }},
    {"inotify_rm_watch",
     28,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"wd", 4},
     }},
    {"io_cancel",
     3,

     {
         [ARG_0] = {"ctx_id", 8},
         [ARG_1] = {"iocb", 8},
         [ARG_2] = {"result", 8},
     }},
    {"ioctl",
     29,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"cmd", 4},
         [ARG_2] = {"arg", 8},
     }},
    {"io_destroy",
     1,

     {
         [ARG_0] = {"ctx", 8},
     }},
    {"io_getevents",
     4,

     {
         [ARG_0] = {"ctx_id", 8},
         [ARG_1] = {"min_nr", 8},
         [ARG_2] = {"nr", 8},
         [ARG_3] = {"events", 8},
         [ARG_4] = {"timeout", 8},
     }},
    {"ioprio_get",
     31,

     {
         [ARG_0] = {"which", 4},
         [ARG_1] = {"who", 4},
     }},
    {"ioprio_set",
     30,

     {
         [ARG_0] = {"which", 4},
         [ARG_1] = {"who", 4},
         [ARG_2] = {"ioprio", 4},
     }},
    {"io_setup",
     0,

     {
         [ARG_0] = {"nr_events", 4},
         [ARG_1] = {"ctxp", 8},
     }},
    {"io_submit",
     2,

     {
         [ARG_0] = {"ctx_id", 8},
         [ARG_1] = {"nr", 8},
         [ARG_2] = {"iocbpp", 8},
     }},
    {"kcmp",
     272,

     {
         [ARG_0] = {"pid1", 4},
         [ARG_1] = {"pid2", 4},
         [ARG_2] = {"type", 4},
         [ARG_3] = {"idx1", 8},
         [ARG_4] = {"idx2", 8},
     }},
    {"kexec_load",
     104,

     {
         [ARG_0] = {"entry", 8},
         [ARG_1] = {"nr_segments", 8},
         [ARG_2] = {"segments", 8},
         [ARG_3] = {"flags", 8},
     }},
    {"keyctl",
     219,

     {
         [ARG_0] = {"option", 4},
         [ARG_1] = {"arg2", 8},
         [ARG_2] = {"arg3", 8},
         [ARG_3] = {"arg4", 8},
         [ARG_4] = {"arg5", 8},
     }},
    {"kill",
     129,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"sig", 4},
     }},
    {"lgetxattr",
     9,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"name", 8},
         [ARG_2] = {"value", 8},
         [ARG_3] = {"size", 8},
     }},
    {"linkat",
     37,

     {
         [ARG_0] = {"olddfd", 4},
         [ARG_1] = {"oldname", 8},
         [ARG_2] = {"newdfd", 4},
         [ARG_3] = {"newname", 8},
         [ARG_4] = {"flags", 4},
     }},
    {"listen",
     201,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"backlog", 4},
     }},
    {"listxattr",
     11,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"list", 8},
         [ARG_2] = {"size", 8},
     }},
    {"llistxattr",
     12,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"list", 8},
         [ARG_2] = {"size", 8},
     }},
    {"lookup_dcookie",
     18,

     {
         [ARG_0] = {"cookie64", 8},
         [ARG_1] = {"buf", 8},
         [ARG_2] = {"len", 8},
     }},
    {"lremovexattr",
     15,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"name", 8},
     }},
    {"lseek",
     62,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"offset", 8},
         [ARG_2] = {"whence", 4},
     }},
    {"lsetxattr",
     6,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"name", 8},
         [ARG_2] = {"value", 8},
         [ARG_3] = {"size", 8},
         [ARG_4] = {"flags", 4},
     }},
    {"madvise",
     233,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"len_in", 8},
         [ARG_2] = {"behavior", 4},
     }},
    {"mbind",
     235,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"len", 8},
         [ARG_2] = {"mode", 8},
         [ARG_3] = {"nmask", 8},
         [ARG_4] = {"maxnode", 8},
         [ARG_5] = {"flags", 4},
     }},
    {"membarrier",
     283,

     {
         [ARG_0] = {"cmd", 4},
         [ARG_1] = {"flags", 4},
     }},
    {"memfd_create",
     279,

     {
         [ARG_0] = {"uname", 8},
         [ARG_1] = {"flags", 4},
     }},
    {"migrate_pages",
     238,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"maxnode", 8},
         [ARG_2] = {"old_nodes", 8},
         [ARG_3] = {"new_nodes", 8},
     }},
    {"mincore",
     232,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"len", 8},
         [ARG_2] = {"vec", 8},
     }},
    {"mkdirat",
     34,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"pathname", 8},
         [ARG_2] = {"mode", 2},
     }},
    {"mknodat",
     33,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"filename", 8},
         [ARG_2] = {"mode", 2},
         [ARG_3] = {"dev", 4},
     }},
    {"mlock",
     228,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"len", 8},
     }},
    {"mlock2",
     284,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"len", 8},
         [ARG_2] = {"flags", 4},
     }},
    {"mlockall",
     230,

     {
         [ARG_0] = {"flags", 4},
     }},
    {"mmap",
     222,

     {
         [ARG_0] = {"addr", 8},
         [ARG_1] = {"len", 8},
         [ARG_2] = {"prot", 8},
         [ARG_3] = {"flags", 8},
         [ARG_4] = {"fd", 8},
         [ARG_5] = {"off", 8},
     }},
    {"mount",
     40,

     {
         [ARG_0] = {"dev_name", 8},
         [ARG_1] = {"dir_name", 8},
         [ARG_2] = {"type", 8},
         [ARG_3] = {"flags", 8},
         [ARG_4] = {"data", 8},
     }},
    {"move_pages",
     239,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"nr_pages", 8},
         [ARG_2] = {"pages", 8},
         [ARG_3] = {"nodes", 8},
         [ARG_4] = {"status", 8},
         [ARG_5] = {"flags", 4},
     }},
    {"mprotect",
     226,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"len", 8},
         [ARG_2] = {"prot", 8},
     }},
    {"mq_getsetattr",
     185,

     {
         [ARG_0] = {"mqdes", 4},
         [ARG_1] = {"u_mqstat", 8},
         [ARG_2] = {"u_omqstat", 8},
     }},
    {"mq_notify",
     184,

     {
         [ARG_0] = {"mqdes", 4},
         [ARG_1] = {"u_notification", 8},
     }},
    {"mq_open",
     180,

     {
         [ARG_0] = {"u_name", 8},
         [ARG_1] = {"oflag", 4},
         [ARG_2] = {"mode", 2},
         [ARG_3] = {"u_attr", 8},
     }},
    {"mq_timedreceive",
     183,

     {
         [ARG_0] = {"mqdes", 4},
         [ARG_1] = {"u_msg_ptr", 8},
         [ARG_2] = {"msg_len", 8},
         [ARG_3] = {"u_msg_prio", 8},
         [ARG_4] = {"u_abs_timeout", 8},
     }},
    {"mq_timedsend",
     182,

     {
         [ARG_0] = {"mqdes", 4},
         [ARG_1] = {"u_msg_ptr", 8},
         [ARG_2] = {"msg_len", 8},
         [ARG_3] = {"msg_prio", 4},
         [ARG_4] = {"u_abs_timeout", 8},
     }},
    {"mq_unlink",
     181,

     {
         [ARG_0] = {"u_name", 8},
     }},
    {"mremap",
     216,

     {
         [ARG_0] = {"addr", 8},
         [ARG_1] = {"old_len", 8},
         [ARG_2] = {"new_len", 8},
         [ARG_3] = {"flags", 8},
         [ARG_4] = {"new_addr", 8},
     }},
    {"msgctl",
     187,

     {
         [ARG_0] = {"msqid", 4},
         [ARG_1] = {"cmd", 4},
         [ARG_2] = {"buf", 8},
     }},
    {"msgget",
     186,

     {
         [ARG_0] = {"key", 4},
         [ARG_1] = {"msgflg", 4},
     }},
    {"msgrcv",
     188,

     {
         [ARG_0] = {"msqid", 4},
         [ARG_1] = {"msgp", 8},
         [ARG_2] = {"msgsz", 8},
         [ARG_3] = {"msgtyp", 8},
         [ARG_4] = {"msgflg", 4},
     }},
    {"msgsnd",
     189,

     {
         [ARG_0] = {"msqid", 4},
         [ARG_1] = {"msgp", 8},
         [ARG_2] = {"msgsz", 8},
         [ARG_3] = {"msgflg", 4},
     }},
    {"msync",
     227,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"len", 8},
         [ARG_2] = {"flags", 4},
     }},
    {"munlock",
     229,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"len", 8},
     }},
    {"munlockall", 231, {}},
    {"munmap",
     215,

     {
         [ARG_0] = {"addr", 8},
         [ARG_1] = {"len", 8},
     }},
    {"name_to_handle_at",
     264,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"name", 8},
         [ARG_2] = {"handle", 8},
         [ARG_3] = {"mnt_id", 8},
         [ARG_4] = {"flag", 4},
     }},
    {"nanosleep",
     101,

     {
         [ARG_0] = {"rqtp", 8},
         [ARG_1] = {"rmtp", 8},
     }},
    {"newfstat",
     80,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"statbuf", 8},
     }},
    {"newfstatat",
     79,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"filename", 8},
         [ARG_2] = {"statbuf", 8},
         [ARG_3] = {"flag", 4},
     }},
    {"newuname",
     160,

     {
         [ARG_0] = {"name", 8},
     }},
    {"nfsservctl",
     42,

     {
         [ARG_0] = {"cmd", 4},
         [ARG_1] = {"argp", 8},
         [ARG_2] = {"resp", 8},
     }},
    {"openat",
     56,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"filename", 8},
         [ARG_2] = {"flags", 4},
         [ARG_3] = {"mode", 2},
     }},
    {"open_by_handle_at",
     265,

     {
         [ARG_0] = {"mountdirfd", 4},
         [ARG_1] = {"handle", 8},
         [ARG_2] = {"flags", 4},
     }},
    {"perf_event_open",
     241,

     {
         [ARG_0] = {"attr_uptr", 8},
         [ARG_1] = {"pid", 4},
         [ARG_2] = {"cpu", 4},
         [ARG_3] = {"group_fd", 4},
         [ARG_4] = {"flags", 8},
     }},
    {"personality",
     92,

     {
         [ARG_0] = {"personality", 4},
     }},
    {"pipe2",
     59,

     {
         [ARG_0] = {"fildes", 8},
         [ARG_1] = {"flags", 4},
     }},
    {"pivot_root",
     41,

     {
         [ARG_0] = {"new_root", 8},
         [ARG_1] = {"put_old", 8},
     }},
    {"ppoll",
     73,

     {
         [ARG_0] = {"ufds", 8},
         [ARG_1] = {"nfds", 4},
         [ARG_2] = {"tsp", 8},
         [ARG_3] = {"sigmask", 8},
         [ARG_4] = {"sigsetsize", 8},
     }},
    {"prctl",
     167,

     {
         [ARG_0] = {"option", 4},
         [ARG_1] = {"arg2", 8},
         [ARG_2] = {"arg3", 8},
         [ARG_3] = {"arg4", 8},
         [ARG_4] = {"arg5", 8},
     }},
    {"pread64",
     67,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"buf", 8},
         [ARG_2] = {"count", 8},
         [ARG_3] = {"pos", 8},
     }},
    {"preadv",
     69,

     {
         [ARG_0] = {"fd", 8},
         [ARG_1] = {"vec", 8},
         [ARG_2] = {"vlen", 8},
         [ARG_3] = {"pos_l", 8},
         [ARG_4] = {"pos_h", 8},
     }},
    {"preadv2",
     286,

     {
         [ARG_0] = {"fd", 8},
         [ARG_1] = {"vec", 8},
         [ARG_2] = {"vlen", 8},
         [ARG_3] = {"pos_l", 8},
         [ARG_4] = {"pos_h", 8},
         [ARG_5] = {"flags", 4},
     }},
    {"prlimit64",
     261,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"resource", 4},
         [ARG_2] = {"new_rlim", 8},
         [ARG_3] = {"old_rlim", 8},
     }},
    {"process_vm_readv",
     270,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"lvec", 8},
         [ARG_2] = {"liovcnt", 8},
         [ARG_3] = {"rvec", 8},
         [ARG_4] = {"riovcnt", 8},
         [ARG_5] = {"flags", 8},
     }},
    {"process_vm_writev",
     271,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"lvec", 8},
         [ARG_2] = {"liovcnt", 8},
         [ARG_3] = {"rvec", 8},
         [ARG_4] = {"riovcnt", 8},
         [ARG_5] = {"flags", 8},
     }},
    {"pselect6",
     72,

     {
         [ARG_0] = {"n", 4},
         [ARG_1] = {"inp", 8},
         [ARG_2] = {"outp", 8},
         [ARG_3] = {"exp", 8},
         [ARG_4] = {"tsp", 8},
         [ARG_5] = {"sig", 8},
     }},
    {"ptrace",
     117,

     {
         [ARG_0] = {"request", 8},
         [ARG_1] = {"pid", 8},
         [ARG_2] = {"addr", 8},
         [ARG_3] = {"data", 8},
     }},
    {"pwrite64",
     68,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"buf", 8},
         [ARG_2] = {"count", 8},
         [ARG_3] = {"pos", 8},
     }},
    {"pwritev",
     70,

     {
         [ARG_0] = {"fd", 8},
         [ARG_1] = {"vec", 8},
         [ARG_2] = {"vlen", 8},
         [ARG_3] = {"pos_l", 8},
         [ARG_4] = {"pos_h", 8},
     }},
    {"pwritev2",
     287,

     {
         [ARG_0] = {"fd", 8},
         [ARG_1] = {"vec", 8},
         [ARG_2] = {"vlen", 8},
         [ARG_3] = {"pos_l", 8},
         [ARG_4] = {"pos_h", 8},
         [ARG_5] = {"flags", 4},
     }},
    {"quotactl",
     60,

     {
         [ARG_0] = {"cmd", 4},
         [ARG_1] = {"special", 8},
         [ARG_2] = {"id", 4},
         [ARG_3] = {"addr", 8},
     }},
    {"read",
     63,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"buf", 8},
         [ARG_2] = {"count", 8},
     }},
    {"readahead",
     213,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"offset", 8},
         [ARG_2] = {"count", 8},
     }},
    {"readlinkat",
     78,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"pathname", 8},
         [ARG_2] = {"buf", 8},
         [ARG_3] = {"bufsiz", 4},
     }},
    {"readv",
     65,

     {
         [ARG_0] = {"fd", 8},
         [ARG_1] = {"vec", 8},
         [ARG_2] = {"vlen", 8},
     }},
    {"reboot",
     142,

     {
         [ARG_0] = {"magic1", 4},
         [ARG_1] = {"magic2", 4},
         [ARG_2] = {"cmd", 4},
         [ARG_3] = {"arg", 8},
     }},
    {"recvfrom",
     207,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"ubuf", 8},
         [ARG_2] = {"size", 8},
         [ARG_3] = {"flags", 4},
         [ARG_4] = {"addr", 8},
         [ARG_5] = {"addr_len", 8},
     }},
    {"recvmmsg",
     243,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"mmsg", 8},
         [ARG_2] = {"vlen", 4},
         [ARG_3] = {"flags", 4},
         [ARG_4] = {"timeout", 8},
     }},
    {"recvmsg",
     212,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"msg", 8},
         [ARG_2] = {"flags", 4},
     }},
    {"remap_file_pages",
     234,

     {
         [ARG_0] = {"start", 8},
         [ARG_1] = {"size", 8},
         [ARG_2] = {"prot", 8},
         [ARG_3] = {"pgoff", 8},
         [ARG_4] = {"flags", 8},
     }},
    {"removexattr",
     14,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"name", 8},
     }},
    {"renameat2",
     276,

     {
         [ARG_0] = {"olddfd", 4},
         [ARG_1] = {"oldname", 8},
         [ARG_2] = {"newdfd", 4},
         [ARG_3] = {"newname", 8},
         [ARG_4] = {"flags", 4},
     }},
    {"request_key",
     218,

     {
         [ARG_0] = {"_type", 8},
         [ARG_1] = {"_description", 8},
         [ARG_2] = {"_callout_info", 8},
         [ARG_3] = {"destringid", 4},
     }},
    {"restart_syscall", 128, {}},
    {"rt_sigaction",
     134,

     {
         [ARG_0] = {"sig", 4},
         [ARG_1] = {"act", 8},
         [ARG_2] = {"oact", 8},
         [ARG_3] = {"sigsetsize", 8},
     }},
    {"rt_sigpending",
     136,

     {
         [ARG_0] = {"uset", 8},
         [ARG_1] = {"sigsetsize", 8},
     }},
    {"rt_sigprocmask",
     135,

     {
         [ARG_0] = {"how", 4},
         [ARG_1] = {"nset", 8},
         [ARG_2] = {"oset", 8},
         [ARG_3] = {"sigsetsize", 8},
     }},
    {"rt_sigqueueinfo",
     138,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"sig", 4},
         [ARG_2] = {"uinfo", 8},
     }},
    {"rt_sigreturn", 139, {}},
    {"rt_sigsuspend",
     133,

     {
         [ARG_0] = {"unewset", 8},
         [ARG_1] = {"sigsetsize", 8},
     }},
    {"rt_sigtimedwait",
     137,

     {
         [ARG_0] = {"uthese", 8},
         [ARG_1] = {"uinfo", 8},
         [ARG_2] = {"uts", 8},
         [ARG_3] = {"sigsetsize", 8},
     }},
    {"rt_tgsigqueueinfo",
     240,

     {
         [ARG_0] = {"tgid", 4},
         [ARG_1] = {"pid", 4},
         [ARG_2] = {"sig", 4},
         [ARG_3] = {"uinfo", 8},
     }},
    {"sched_getaffinity",
     123,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"len", 4},
         [ARG_2] = {"user_mask_ptr", 8},
     }},
    {"sched_getattr",
     275,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"uattr", 8},
         [ARG_2] = {"size", 4},
         [ARG_3] = {"flags", 4},
     }},
    {"sched_getparam",
     121,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"param", 8},
     }},
    {"sched_get_priority_max",
     125,

     {
         [ARG_0] = {"policy", 4},
     }},
    {"sched_get_priority_min",
     126,

     {
         [ARG_0] = {"policy", 4},
     }},
    {"sched_getscheduler",
     120,

     {
         [ARG_0] = {"pid", 4},
     }},
    {"sched_rr_get_interval",
     127,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"interval", 8},
     }},
    {"sched_setaffinity",
     122,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"len", 4},
         [ARG_2] = {"user_mask_ptr", 8},
     }},
    {"sched_setattr",
     274,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"uattr", 8},
         [ARG_2] = {"flags", 4},
     }},
    {"sched_setparam",
     118,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"param", 8},
     }},
    {"sched_setscheduler",
     119,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"policy", 4},
         [ARG_2] = {"param", 8},
     }},
    {"sched_yield", 124, {}},
    {"seccomp",
     277,

     {
         [ARG_0] = {"op", 4},
         [ARG_1] = {"flags", 4},
         [ARG_2] = {"uargs", 8},
     }},
    {"semctl",
     191,

     {
         [ARG_0] = {"semid", 4},
         [ARG_1] = {"semnum", 4},
         [ARG_2] = {"cmd", 4},
         [ARG_3] = {"arg", 8},
     }},
    {"semget",
     190,

     {
         [ARG_0] = {"key", 4},
         [ARG_1] = {"nsems", 4},
         [ARG_2] = {"semflg", 4},
     }},
    {"semop",
     193,

     {
         [ARG_0] = {"semid", 4},
         [ARG_1] = {"tsops", 8},
         [ARG_2] = {"nsops", 4},
     }},
    {"semtimedop",
     192,

     {
         [ARG_0] = {"semid", 4},
         [ARG_1] = {"tsops", 8},
         [ARG_2] = {"nsops", 4},
         [ARG_3] = {"timeout", 8},
     }},
    {"sendfile",
     71,

     {
         [ARG_0] = {"out_fd", 4},
         [ARG_1] = {"in_fd", 4},
         [ARG_2] = {"offset", 8},
         [ARG_3] = {"count", 8},
     }},
    {"sendmmsg",
     269,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"mmsg", 8},
         [ARG_2] = {"vlen", 4},
         [ARG_3] = {"flags", 4},
     }},
    {"sendmsg",
     211,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"msg", 8},
         [ARG_2] = {"flags", 4},
     }},
    {"sendto",
     206,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"buff", 8},
         [ARG_2] = {"len", 8},
         [ARG_3] = {"flags", 4},
         [ARG_4] = {"addr", 8},
         [ARG_5] = {"addr_len", 4},
     }},
    {"setdomainname",
     162,

     {
         [ARG_0] = {"name", 8},
         [ARG_1] = {"len", 4},
     }},
    {"setfsgid",
     152,

     {
         [ARG_0] = {"gid", 4},
     }},
    {"setfsuid",
     151,

     {
         [ARG_0] = {"uid", 4},
     }},
    {"setgid",
     144,

     {
         [ARG_0] = {"gid", 4},
     }},
    {"setgroups",
     159,

     {
         [ARG_0] = {"gidsetsize", 4},
         [ARG_1] = {"grouplist", 8},
     }},
    {"sethostname",
     161,

     {
         [ARG_0] = {"name", 8},
         [ARG_1] = {"len", 4},
     }},
    {"setitimer",
     103,

     {
         [ARG_0] = {"which", 4},
         [ARG_1] = {"value", 8},
         [ARG_2] = {"ovalue", 8},
     }},
    {"set_mempolicy",
     237,

     {
         [ARG_0] = {"mode", 4},
         [ARG_1] = {"nmask", 8},
         [ARG_2] = {"maxnode", 8},
     }},
    {"setns",
     268,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"nstype", 4},
     }},
    {"setpgid",
     154,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"pgid", 4},
     }},
    {"setpriority",
     140,

     {
         [ARG_0] = {"which", 4},
         [ARG_1] = {"who", 4},
         [ARG_2] = {"niceval", 4},
     }},
    {"setregid",
     143,

     {
         [ARG_0] = {"rgid", 4},
         [ARG_1] = {"egid", 4},
     }},
    {"setresgid",
     149,

     {
         [ARG_0] = {"rgid", 4},
         [ARG_1] = {"egid", 4},
         [ARG_2] = {"sgid", 4},
     }},
    {"setresuid",
     147,

     {
         [ARG_0] = {"ruid", 4},
         [ARG_1] = {"euid", 4},
         [ARG_2] = {"suid", 4},
     }},
    {"setreuid",
     145,

     {
         [ARG_0] = {"ruid", 4},
         [ARG_1] = {"euid", 4},
     }},
    {"setrlimit",
     164,

     {
         [ARG_0] = {"resource", 4},
         [ARG_1] = {"rlim", 8},
     }},
    {"set_robust_list",
     99,

     {
         [ARG_0] = {"head", 8},
         [ARG_1] = {"len", 8},
     }},
    {"setsid", 157, {}},
    {"setsockopt",
     208,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"level", 4},
         [ARG_2] = {"optname", 4},
         [ARG_3] = {"optval", 8},
         [ARG_4] = {"optlen", 4},
     }},
    {"set_tid_address",
     96,

     {
         [ARG_0] = {"tidptr", 8},
     }},
    {"settimeofday",
     170,

     {
         [ARG_0] = {"tv", 8},
         [ARG_1] = {"tz", 8},
     }},
    {"setuid",
     146,

     {
         [ARG_0] = {"uid", 4},
     }},
    {"setxattr",
     5,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"name", 8},
         [ARG_2] = {"value", 8},
         [ARG_3] = {"size", 8},
         [ARG_4] = {"flags", 4},
     }},
    {"shmat",
     196,

     {
         [ARG_0] = {"shmid", 4},
         [ARG_1] = {"shmaddr", 8},
         [ARG_2] = {"shmflg", 4},
     }},
    {"shmctl",
     195,

     {
         [ARG_0] = {"shmid", 4},
         [ARG_1] = {"cmd", 4},
         [ARG_2] = {"buf", 8},
     }},
    {"shmdt",
     197,

     {
         [ARG_0] = {"shmaddr", 8},
     }},
    {"shmget",
     194,

     {
         [ARG_0] = {"key", 4},
         [ARG_1] = {"size", 8},
         [ARG_2] = {"shmflg", 4},
     }},
    {"shutdown",
     210,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"how", 4},
     }},
    {"sigaltstack",
     132,

     {
         [ARG_0] = {"uss", 8},
         [ARG_1] = {"uoss", 8},
     }},
    {"signalfd4",
     74,

     {
         [ARG_0] = {"ufd", 4},
         [ARG_1] = {"user_mask", 8},
         [ARG_2] = {"sizemask", 8},
         [ARG_3] = {"flags", 4},
     }},
    {"socket",
     198,

     {
         [ARG_0] = {"family", 4},
         [ARG_1] = {"type", 4},
         [ARG_2] = {"protocol", 4},
     }},
    {"socketpair",
     199,

     {
         [ARG_0] = {"family", 4},
         [ARG_1] = {"type", 4},
         [ARG_2] = {"protocol", 4},
         [ARG_3] = {"usockvec", 8},
     }},
    {"splice",
     76,

     {
         [ARG_0] = {"fd_in", 4},
         [ARG_1] = {"off_in", 8},
         [ARG_2] = {"fd_out", 4},
         [ARG_3] = {"off_out", 8},
         [ARG_4] = {"len", 8},
         [ARG_5] = {"flags", 4},
     }},
    {"statfs",
     43,

     {
         [ARG_0] = {"pathname", 8},
         [ARG_1] = {"buf", 8},
     }},
    {"swapoff",
     225,

     {
         [ARG_0] = {"specialfile", 8},
     }},
    {"swapon",
     224,

     {
         [ARG_0] = {"specialfile", 8},
         [ARG_1] = {"swap_flags", 4},
     }},
    {"symlinkat",
     36,

     {
         [ARG_0] = {"oldname", 8},
         [ARG_1] = {"newdfd", 4},
         [ARG_2] = {"newname", 8},
     }},
    {"sync", 81, {}},
    {"sync_file_range2",
     84,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"offset", 8},
         [ARG_2] = {"nbytes", 8},
         [ARG_3] = {"flags", 4},
     }},
    {"syncfs",
     267,

     {
         [ARG_0] = {"fd", 4},
     }},
    {"sysinfo",
     179,

     {
         [ARG_0] = {"info", 8},
     }},
    {"syslog",
     116,

     {
         [ARG_0] = {"type", 4},
         [ARG_1] = {"buf", 8},
         [ARG_2] = {"len", 4},
     }},
    {"tee",
     77,

     {
         [ARG_0] = {"fdin", 4},
         [ARG_1] = {"fdout", 4},
         [ARG_2] = {"len", 8},
         [ARG_3] = {"flags", 4},
     }},
    {"tgkill",
     131,

     {
         [ARG_0] = {"tgid", 4},
         [ARG_1] = {"pid", 4},
         [ARG_2] = {"sig", 4},
     }},
    {"timer_create",
     107,

     {
         [ARG_0] = {"which_clock", 4},
         [ARG_1] = {"timer_event_spec", 8},
         [ARG_2] = {"created_timer_id", 8},
     }},
    {"timer_delete",
     111,

     {
         [ARG_0] = {"timer_id", 4},
     }},
    {"timerfd_create",
     85,

     {
         [ARG_0] = {"clockid", 4},
         [ARG_1] = {"flags", 4},
     }},
    {"timerfd_gettime",
     87,

     {
         [ARG_0] = {"ufd", 4},
         [ARG_1] = {"otmr", 8},
     }},
    {"timerfd_settime",
     86,

     {
         [ARG_0] = {"ufd", 4},
         [ARG_1] = {"flags", 4},
         [ARG_2] = {"utmr", 8},
         [ARG_3] = {"otmr", 8},
     }},
    {"timer_getoverrun",
     109,

     {
         [ARG_0] = {"timer_id", 4},
     }},
    {"timer_gettime",
     108,

     {
         [ARG_0] = {"timer_id", 4},
         [ARG_1] = {"setting", 8},
     }},
    {"timer_settime",
     110,

     {
         [ARG_0] = {"timer_id", 4},
         [ARG_1] = {"flags", 4},
         [ARG_2] = {"new_setting", 8},
         [ARG_3] = {"old_setting", 8},
     }},
    {"times",
     153,

     {
         [ARG_0] = {"tbuf", 8},
     }},
    {"tkill",
     130,

     {
         [ARG_0] = {"pid", 4},
         [ARG_1] = {"sig", 4},
     }},
    {"truncate",
     45,

     {
         [ARG_0] = {"path", 8},
         [ARG_1] = {"length", 8},
     }},
    {"umask",
     166,

     {
         [ARG_0] = {"mask", 4},
     }},
    {"unlinkat",
     35,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"pathname", 8},
         [ARG_2] = {"flag", 4},
     }},
    {"unshare",
     97,

     {
         [ARG_0] = {"unshare_flags", 8},
     }},
    {"userfaultfd",
     282,

     {
         [ARG_0] = {"flags", 4},
     }},
    {"utimensat",
     88,

     {
         [ARG_0] = {"dfd", 4},
         [ARG_1] = {"filename", 8},
         [ARG_2] = {"utimes", 8},
         [ARG_3] = {"flags", 4},
     }},
    {"vhangup", 58, {}},
    {"vmsplice",
     75,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"iov", 8},
         [ARG_2] = {"nr_segs", 8},
         [ARG_3] = {"flags", 4},
     }},
    {"wait4",
     260,

     {
         [ARG_0] = {"upid", 4},
         [ARG_1] = {"stat_addr", 8},
         [ARG_2] = {"options", 4},
         [ARG_3] = {"ru", 8},
     }},
    {"waitid",
     95,

     {
         [ARG_0] = {"which", 4},
         [ARG_1] = {"upid", 4},
         [ARG_2] = {"infop", 8},
         [ARG_3] = {"options", 4},
         [ARG_4] = {"ru", 8},
     }},
    {"write",
     64,

     {
         [ARG_0] = {"fd", 4},
         [ARG_1] = {"buf", 8},
         [ARG_2] = {"count", 8},
     }},
    {"writev",
     66,

     {
         [ARG_0] = {"fd", 8},
         [ARG_1] = {"vec", 8},
         [ARG_2] = {"vlen", 8},
     }},
};

const size_t riscv64_syscall_list_size =
    sizeof(riscv64_syscall_list) / sizeof(riscv64_syscall_list[0]);
