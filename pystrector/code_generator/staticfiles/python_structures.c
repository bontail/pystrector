# 0 "./cpython/Include/Python.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "./cpython/Include/Python.h"
# 15 "./cpython/Include/Python.h"
# 1 "./cpython/Include/patchlevel.h" 1
# 16 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pyconfig.h" 1
# 17 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pymacconfig.h" 1
# 18 "./cpython/Include/Python.h" 2
# 27 "./cpython/Include/Python.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 1 3 4
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/Availability.h" 1 3 4
# 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/Availability.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/AvailabilityVersions.h" 1 3 4
# 177 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/Availability.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/AvailabilityInternal.h" 1 3 4
# 176 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/AvailabilityInternal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/AvailabilityInternalLegacy.h" 1 3 4
# 177 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/AvailabilityInternal.h" 2 3 4
# 178 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/Availability.h" 2 3 4
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/cdefs.h" 1 3 4
# 769 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 770 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/cdefs.h" 2 3 4
# 835 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/cdefs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_posix_availability.h" 1 3 4
# 836 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/cdefs.h" 2 3 4
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/_types.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/_types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_types.h" 1 3 4
# 15 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_types.h" 3 4

# 15 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 48 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/_types.h" 2 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types.h" 2 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types.h" 2 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types.h" 2 3 4
# 40 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 2 3 4
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 1 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/signal.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/signal.h" 1 3 4
# 17 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/signal.h" 3 4
typedef int sig_atomic_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/signal.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4
# 146 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/_mcontext.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_mcontext.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_mcontext.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/machine/_structs.h" 1 3 4
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/machine/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/types.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 1 3 4
# 55 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 58 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_u_int8_t.h" 3 4
typedef unsigned char u_int8_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_u_int16_t.h" 3 4
typedef unsigned short u_int16_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_u_int32_t.h" 3 4
typedef unsigned int u_int32_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_u_int64_t.h" 3 4
typedef unsigned long long u_int64_t;
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4


typedef int64_t register_t;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/types.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_intptr_t.h" 2 3 4

typedef __darwin_intptr_t intptr_t;
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 2 3 4




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/types.h" 3 4
typedef u_int64_t syscall_arg_t;
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/types.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 2 3 4



struct __darwin_arm_exception_state
{
 __uint32_t __exception;
 __uint32_t __fsr;
 __uint32_t __far;
};
# 59 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_exception_state64
{
 __uint64_t __far;
 __uint32_t __esr;
 __uint32_t __exception;
};
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_thread_state
{
 __uint32_t __r[13];
 __uint32_t __sp;
 __uint32_t __lr;
 __uint32_t __pc;
 __uint32_t __cpsr;
};
# 136 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_thread_state64
{
 __uint64_t __x[29];
 __uint64_t __fp;
 __uint64_t __lr;
 __uint64_t __sp;
 __uint64_t __pc;
 __uint32_t __cpsr;
 __uint32_t __pad;
};
# 477 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_vfp_state
{
 __uint32_t __r[64];
 __uint32_t __fpscr;
};
# 496 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_neon_state64
{
 __uint128_t __v[32];
 __uint32_t __fpsr;
 __uint32_t __fpcr;
};

struct __darwin_arm_neon_state
{
 __uint128_t __v[16];
 __uint32_t __fpsr;
 __uint32_t __fpcr;
};
# 567 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __arm_pagein_state
{
 int __pagein_error;
};
# 604 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __arm_legacy_debug_state
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
};
# 627 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_debug_state32
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
 __uint64_t __mdscr_el1;
};


struct __darwin_arm_debug_state64
{
 __uint64_t __bvr[16];
 __uint64_t __bcr[16];
 __uint64_t __wvr[16];
 __uint64_t __wcr[16];
 __uint64_t __mdscr_el1;
};
# 669 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/arm/_structs.h" 3 4
struct __darwin_arm_cpmu_state64
{
 __uint64_t __ctrs[16];
};
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/mach/machine/_structs.h" 2 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_arm_exception_state __es;
 struct __darwin_arm_thread_state __ss;
 struct __darwin_arm_vfp_state __fs;
};
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_arm_exception_state64 __es;
 struct __darwin_arm_thread_state64 __ss;
 struct __darwin_arm_neon_state64 __ns;
};
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ucontext.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
     void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 389 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/signal.h" 3 4

void(*signal(int, void (*)(int)))(int);

# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 3 4
# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/stdint.h" 1 3 4
# 9 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/stdint.h" 3 4
# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 1 3 4
# 32 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 33 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 34 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 35 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 36 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;
# 67 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdint.h" 2 3 4
# 10 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/stdint.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 2 3 4
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 152 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 200 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

struct rusage_info_v4 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
};

struct rusage_info_v5 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
};

struct rusage_info_v6 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
 uint64_t ri_logical_writes;
 uint64_t ri_lifetime_max_phys_footprint;
 uint64_t ri_instructions;
 uint64_t ri_cycles;
 uint64_t ri_billed_energy;
 uint64_t ri_serviced_energy;
 uint64_t ri_interval_max_phys_footprint;
 uint64_t ri_runnable_time;
 uint64_t ri_flags;
 uint64_t ri_user_ptime;
 uint64_t ri_system_ptime;
 uint64_t ri_pinstructions;
 uint64_t ri_pcycles;
 uint64_t ri_energy_nj;
 uint64_t ri_penergy_nj;
 uint64_t ri_secure_time_in_system;
 uint64_t ri_secure_ptime_in_system;
 uint64_t ri_reserved[12];
};

typedef struct rusage_info_v6 rusage_info_current;
# 461 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 496 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 567 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/resource.h" 3 4

int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );

# 111 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 2 3 4
# 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/endian.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/endian.h" 1 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_endian.h" 1 3 4
# 94 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/endian.h" 1 3 4
# 95 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_endian.h" 2 3 4
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_endian.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 1 3 4
# 9 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/arch.h" 1 3 4
# 10 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 2 3 4



static inline
uint16_t
_OSSwapInt16(
 uint16_t _data
 )
{

 return (uint16_t)(_data << 8 | _data >> 8);
}

static inline
uint32_t
_OSSwapInt32(
 uint32_t _data
 )
{




 _data = (((_data ^ (_data >> 16 | (_data << 16))) & 0xFF00FFFF) >> 8) ^ (_data >> 8 | _data << 24);


 return _data;
}

static inline
uint64_t
_OSSwapInt64(
 uint64_t _data
 )
{



 union {
  uint64_t _ull;
  uint32_t _ul[2];
 } _u;


 _u._ul[0] = (uint32_t)(_data >> 32);
 _u._ul[1] = (uint32_t)(_data & 0xffffffff);
 _u._ul[0] = _OSSwapInt32(_u._ul[0]);
 _u._ul[1] = _OSSwapInt32(_u._ul[1]);
 return _u._ull;

}



struct _OSUnalignedU16 {
 volatile uint16_t __val;
} __attribute__((__packed__));

struct _OSUnalignedU32 {
 volatile uint32_t __val;
} __attribute__((__packed__));

struct _OSUnalignedU64 {
 volatile uint64_t __val;
} __attribute__((__packed__));
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
uint16_t
OSReadSwapInt16(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt16(((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val);
}
# 109 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
uint32_t
OSReadSwapInt32(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt32(((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val);
}
# 131 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
uint64_t
OSReadSwapInt64(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt64(((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val);
}
# 156 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
void
OSWriteSwapInt16(
 volatile void * _base,
 uintptr_t _offset,
 uint16_t _data
 )
{
 ((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt16(_data);
}
# 180 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
void
OSWriteSwapInt32(
 volatile void * _base,
 uintptr_t _offset,
 uint32_t _data
 )
{
 ((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt32(_data);
}
# 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/arm/OSByteOrder.h" 3 4
static inline
void
OSWriteSwapInt64(
 volatile void * _base,
 uintptr_t _offset,
 uint64_t _data
 )
{
 ((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val = _OSSwapInt64(_data);
}
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_endian.h" 2 3 4
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/endian.h" 2 3 4
# 38 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/endian.h" 2 3 4
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
      w_Coredump:1,
      w_Retcode:8,
      w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
      w_Stopsig:8,
      w_Filler:16;






 } w_S;
};
# 247 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/wait.h" 3 4

pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);


# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/alloca.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/alloca.h" 3 4

void *alloca(size_t);

# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 78 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_null.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4
# 118 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/malloc/_malloc.h" 1 3 4
# 44 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/malloc/_malloc.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/malloc/_malloc_type.h" 1 3 4
# 27 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/malloc/_malloc_type.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/malloc/_ptrcheck.h" 1 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/malloc/_malloc_type.h" 2 3 4








typedef unsigned long long malloc_type_id_t;
# 53 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/malloc/_malloc_type.h" 3 4




__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_malloc(size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_calloc(size_t count, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2)));
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void malloc_type_free(void * ptr, malloc_type_id_t type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_realloc(void * ptr, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_valloc(size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1)));
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_aligned_alloc(size_t alignment, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) int malloc_type_posix_memalign(void * *memptr, size_t alignment, size_t size, malloc_type_id_t type_id) ;




typedef struct _malloc_zone_t malloc_zone_t;

__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_zone_malloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_zone_calloc(malloc_zone_t *zone, size_t count, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2,3)));
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void malloc_type_zone_free(malloc_zone_t *zone, void * ptr, malloc_type_id_t type_id);
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_zone_realloc(malloc_zone_t *zone, void * ptr, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_zone_valloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));
__attribute__((availability(macos,unavailable))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(visionos,unavailable))) void *malloc_type_zone_memalign(malloc_zone_t *zone, size_t alignment, size_t size, malloc_type_id_t type_id) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(3)));


# 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/malloc/_malloc.h" 2 3 4









void *malloc(size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1))) ;
void *calloc(size_t __count, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(1,2))) ;
void free(void * );
void *realloc(void * __ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2))) ;
void *reallocf(void * __ptr, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_size(2)));

void *valloc(size_t) __attribute__((alloc_size(1))) ;




void *aligned_alloc(size_t __alignment, size_t __size) __attribute__((__warn_unused_result__)) __attribute__((alloc_align(1))) __attribute__((alloc_size(2))) __attribute__((availability(macosx,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) ;


int posix_memalign(void * *__memptr, size_t __alignment, size_t __size) __attribute__((availability(macosx,introduced=10.6)));


# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4


void abort(void) __attribute__((__cold__)) __attribute__((__noreturn__));
int abs(int) __attribute__((__const__));
int atexit(void (* )(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (* __compar)(const void *, const void *));

div_t div(int, int) __attribute__((__const__));
void exit(int) __attribute__((__noreturn__));

char *getenv(const char *);
long labs(long) __attribute__((__const__));
ldiv_t ldiv(long, long) __attribute__((__const__));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);


int mblen(const char *__s, size_t __n);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);

void qsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));
int rand(void) ;

void srand(unsigned) ;
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *__str, char **__endptr, int __base);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *__str, char **__endptr, int __base);

unsigned long
  strtoul(const char *__str, char **__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char **__endptr, int __base);



__attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,unavailable)))

int system(const char *) __asm("_" "system" );


size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((__noreturn__));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]) ;
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void) ;

__attribute__((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of mktemp(3), it is highly recommended that you use mkstemp(3) instead.")))

char *mktemp(char *);
int mkstemp(char *);
long mrand48(void) ;
long nrand48(unsigned short[3]) ;
int posix_openpt(int);
char *ptsname(int);


int ptsname_r(int fildes, char *buffer, size_t buflen) __attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(tvos,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3)));


int putenv(char *) __asm("_" "putenv" );
long random(void) ;
int rand_r(unsigned *) ;

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 258 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 259 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 2 3 4



uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int )
    __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(macosx,deprecated=10.12,message="use arc4random_stir")))
    __attribute__((availability(ios,introduced=2.0))) __attribute__((availability(ios,deprecated=10.0,message="use arc4random_stir")))
   
    ;
void arc4random_buf(void * __buf, size_t __nbytes) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) __attribute__((availability(macosx,introduced=10.7)));
# 288 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 3 4
char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" ) __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) ;
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);
void setprogname(const char *);
# 316 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/stdlib.h" 3 4
int heapsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





int mergesort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





void psort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *))
     __attribute__((availability(macosx,introduced=10.6)));





void psort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *))
     __attribute__((availability(macosx,introduced=10.6)));





void qsort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *));
int radixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
int rpmatch(const char *)
 __attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)));
int sradixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);

long long
 strtonum(const char *__numstr, long long __minval, long long __maxval, const char **__errstrp)
 __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));

long long
  strtoq(const char *__str, char **__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char **__endptr, int __base);

extern char *suboptarg;










# 28 "./cpython/Include/Python.h" 2
# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 1 3 4
# 14 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4
# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/stdarg.h" 1 3 4
# 40 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 15 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 2 3 4
# 78 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_stdio.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_va_list.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_stdio.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stdio.h" 1 3 4
# 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stdio.h" 3 4


int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));



int renamex_np(const char *, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) ;
int renameatx_np(int, const char *, int, const char *, unsigned int) __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) ;




# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 126 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (* _close)(void *);
 int (* _read) (void *, char *, int);
 fpos_t (* _seek) (void *, fpos_t, int);
 int (* _write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;
# 79 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_seek_set.h" 1 3 4
# 81 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 2 3 4


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;

# 147 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4

void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);

FILE *fopen(const char * restrict __filename, const char * restrict __mode) __asm("_" "fopen" "$DARWIN_EXTSN");



int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);






char *gets(char *);

void perror(const char *) __attribute__((__cold__));
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);







int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));

int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);







char *tmpnam(char *);

int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 1, 0)));







int vsprintf(char * restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0)));

# 235 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_ctermid.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_ctermid.h" 3 4


char *ctermid(char *);


# 236 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 2 3 4




FILE *fdopen(int, const char *) __asm("_" "fdopen" "$DARWIN_EXTSN");



int fileno(FILE *);

# 254 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4

int pclose(FILE *) ;

FILE *popen(const char *, const char *) __asm("_" "popen" "$DARWIN_EXTSN") ;




# 273 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4

int __srget(FILE *);
int __svfscanf(FILE *, const char *, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);








extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 310 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4

void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);








char *tempnam(const char *__dir, const char *__prefix) __asm("_" "tempnam" );

# 351 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 352 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 2 3 4


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict __stream, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict __str, const char * restrict __format, __gnuc_va_list) __attribute__((__format__ (__scanf__, 2, 0)));

# 376 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 377 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) __attribute__((availability(macosx,introduced=10.7)));
FILE *fmemopen(void * restrict __buf, size_t __size, const char * restrict __mode) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
FILE *open_memstream(char **__bufp, size_t *__sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));









extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *) __attribute__((format_arg(2)));
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, __gnuc_va_list) __attribute__((__format__ (__printf__, 2, 0)));





FILE *funopen(const void *,
                 int (* )(void *, char *, int),
                 int (* )(void *, const char *, int),
                 fpos_t (* )(void *, fpos_t, int),
                 int (* )(void *));

# 433 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/secure/_stdio.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/secure/_stdio.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/secure/_common.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/secure/_stdio.h" 2 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 434 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/stdio.h" 2 3 4
# 29 "./cpython/Include/Python.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/errno.h" 1 3 4
# 23 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/errno.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/errno.h" 1 3 4
# 79 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/errno.h" 3 4

extern int * __error(void);


# 24 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/errno.h" 2 3 4
# 30 "./cpython/Include/Python.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 3 4

void *memchr(const void *__s, int __c, size_t __n);
int memcmp(const void *__s1, const void *__s2, size_t __n);
void *memcpy(void *__dst, const void *__src, size_t __n);
void *memmove(void *__dst, const void *__src, size_t __len);
void *memset(void *__b, int __c, size_t __len);
char *strcat(char *__s1, const char *__s2);
char *strchr(const char *__s, int __c);
int strcmp(const char *__s1, const char *__s2);
int strcoll(const char *__s1, const char *__s2);
char *strcpy(char *__dst, const char *__src);
size_t strcspn(const char *__s, const char *__charset);
char *strerror(int __errnum) __asm("_" "strerror" );
size_t strlen(const char *__s);
char *strncat(char *__s1, const char *__s2, size_t __n);
int strncmp(const char *__s1, const char *__s2, size_t __n);
char *strncpy(char *__dst, const char *__src, size_t __n);
char *strpbrk(const char *__s, const char *__charset);
char *strrchr(const char *__s, int __c);
size_t strspn(const char *__s, const char *__charset);
char *strstr(const char *__big, const char *__little);
char *strtok(char *__str, const char *__sep);
size_t strxfrm(char *__s1, const char *__s2, size_t __n);

# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 3 4

char *strtok_r(char *__str, const char *__sep, char **__lasts);

# 115 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 3 4

int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);

# 129 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 3 4

char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *__s1, size_t __n) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int __sig);

# 154 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 3 4

void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);

__attribute__((availability(macosx,introduced=10.12.1))) __attribute__((availability(ios,introduced=10.1)))

int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);

__attribute__((availability(macosx,introduced=11.0))) __attribute__((availability(ios,introduced=14.0)))

int strsignal_r(int __sig, char *__strsignalbuf, size_t __buflen);







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/strings.h" 1 3 4
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/strings.h" 3 4



int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 1 3 4
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/strings.h" 2 3 4




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/secure/_strings.h" 1 3 4
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/strings.h" 2 3 4
# 185 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 2 3 4
# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/secure/_string.h" 1 3 4
# 195 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/string.h" 2 3 4
# 31 "./cpython/Include/Python.h" 2


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 1 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/unistd.h" 1 3 4
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/unistd.h" 2 3 4
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 186 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/unistd.h" 3 4


int getattrlistbulk(int, void *, void *, size_t, uint64_t) __attribute__((availability(macosx,introduced=10.10)));
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) __attribute__((availability(macosx,introduced=10.10)));
int setattrlistat(int, const char *, void *, void *, size_t, uint32_t) __attribute__((availability(macosx,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) ;
ssize_t freadlink(int, char * restrict, size_t) __attribute__((availability(macos,introduced=13.0))) __attribute__((availability(ios,introduced=16.0))) __attribute__((availability(tvos,introduced=16.0))) __attribute__((availability(watchos,introduced=9.0)));


# 204 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_gid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 205 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/unistd.h" 2 3 4




int faccessat(int, const char *, int, int) __attribute__((availability(macosx,introduced=10.10)));
int fchownat(int, const char *, uid_t, gid_t, int) __attribute__((availability(macosx,introduced=10.10)));
int linkat(int, const char *, int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
ssize_t readlinkat(int, const char *, char *, size_t) __attribute__((availability(macosx,introduced=10.10)));
int symlinkat(const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
int unlinkat(int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));


# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 2 3 4
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 2 3 4
# 429 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 3 4

void _exit(int) __attribute__((__noreturn__));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char * __path, const char * __arg0, ...) ;
int execle(const char * __path, const char * __arg0, ...) ;
int execlp(const char * __file, const char * __arg0, ...) ;
int execv(const char * __path, char * const * __argv) ;
int execve(const char * __file, char * const * __argv, char * const * __envp) ;
int execvp(const char * __file, char * const * __argv) ;
pid_t fork(void) ;
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);

int getgroups(int, gid_t []) __asm("_" "getgroups" "$DARWIN_EXTSN");



char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int __fd, const void * __buf, size_t __nbyte) __asm("_" "write" );

# 506 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 3 4

size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;

# 532 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 3 4






__attribute__((__deprecated__))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);

void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((__const__)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pread" );

ssize_t pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) __asm("_" "pwrite" );






__attribute__((__deprecated__))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );


__attribute__((__deprecated__("Use posix_spawn or fork")))

pid_t vfork(void) ;


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);

# 624 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 3 4

int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);








# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 1 3 4
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4

typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                         4 
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                         * 8))) == 0) ? ((1024) / ((
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                         4 
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                         * 8))) : (((1024) / ((
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                         4 
# 51 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                         * 8))) + 1))];
} fd_set;

int __darwin_check_fd_set_overflow(int, const void *, int) __attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.0))) __attribute__((availability(tvos,introduced=14.0))) __attribute__((availability(watchos,introduced=7.0)));


extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__darwin_check_fd_set(int _a, const void *_b)
{




 if ((uintptr_t)&__darwin_check_fd_set_overflow != (uintptr_t) 0) {

  return __darwin_check_fd_set_overflow(_a, _b, 1);



 } else {
  return 1;
 }



}


extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int
__darwin_fd_isset(int _fd, const struct fd_set *_p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  return _p->fds_bits[(unsigned long)_fd / (
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                                          4 
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                                          * 8)] & ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                                                                                                                       4 
# 83 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                                                                                                                       * 8))));
 }

 return 0;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void
__darwin_fd_set(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                                    4 
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                                    * 8)] |= ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                                                                                                                  4 
# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                                                                                                                  * 8)))));
 }
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void
__darwin_fd_clr(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                                    4 
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                                    * 8)] &= ~((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h"
                                                                                                                   4 
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_def.h" 3 4
                                                                                                                   * 8)))));
 }
}
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4







# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4
# 100 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4






int pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)

__asm("_" "pselect" "$DARWIN_EXTSN" )







;




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_select.h" 1 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)


__asm("_" "select" "$DARWIN_EXTSN" )







;
# 132 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/select.h" 2 3 4
# 640 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 644 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((__noreturn__));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) ;
void endusershell(void);
int execvP(const char * __file, const char * __searchpath, char * const * __argv) ;
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/gethostuuid.h" 1 3 4
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/gethostuuid.h" 3 4




int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macos,introduced=10.5))) __attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable)));


# 661 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 2 3 4





mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkpathat_np(int dfd, const char *path, mode_t omode)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  ;
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int mkostemp(char *path, int oflags)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  ;
int mkostemps(char *path, int slen, int oflags)
  __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
  ;

int mkstemp_dprotected_np(char *path, int dpclass, int dpflags)
  __attribute__((availability(macosx,unavailable))) __attribute__((availability(ios,introduced=10.0)))
  ;
char *mkdtempat_np(int dfd, char *path)
  __attribute__((availability(macosx,introduced=10.13))) __attribute__((availability(ios,introduced=11.0)))
  ;
int mkstempsat_np(int dfd, char *path, int slen)
  __attribute__((availability(macosx,introduced=10.13))) __attribute__((availability(ios,introduced=11.0)))
  ;
int mkostempsat_np(int dfd, char *path, int slen, int oflags)
  __attribute__((availability(macosx,introduced=10.13))) __attribute__((availability(ios,introduced=11.0)))
  ;
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);

__attribute__((__deprecated__("Use of per-thread security contexts is error-prone and discouraged.")))
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);

int reboot(int);
int revoke(const char *);

__attribute__((__deprecated__)) int rcmd(char **, int, const char *, const char *, const char *, int *);
__attribute__((__deprecated__)) int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
__attribute__((__deprecated__)) int rresvport(int *);
__attribute__((__deprecated__)) int rresvport_af(int *, int);
__attribute__((__deprecated__)) int iruserok(unsigned long, int, const char *, const char *);
__attribute__((__deprecated__)) int iruserok_sa(const void *, int, int, const char *, const char *);
__attribute__((__deprecated__)) int ruserok(const char *, int, const char *, const char *);

int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);


__attribute__((availability(ios,deprecated=10.0,message="syscall(2) is unsupported; " "please switch to a supported interface. For SYS_kdebug_trace use kdebug_signpost().")))

__attribute__((availability(macosx,deprecated=10.12,message="syscall(2) is unsupported; " "please switch to a supported interface. For SYS_kdebug_trace use kdebug_signpost().")))

int syscall(int, ...);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int) ;
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) ;
# 775 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) ;
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;


# 34 "./cpython/Include/Python.h" 2





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/assert.h" 1 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/assert.h" 3 4

void __assert_rtn(const char *, const char *, int, const char *) __attribute__((__noreturn__)) __attribute__((__cold__)) ;




# 40 "./cpython/Include/Python.h" 2
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 1 3 4
# 76 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_mbstate_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_mbstate_t.h" 3 4
typedef __darwin_mbstate_t mbstate_t;
# 77 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 80 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 2 3 4
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 3 4
# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/stdarg.h" 1 3 4
# 103 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 90 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/time.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/time.h" 2 3 4





struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 98 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) __asm("_" "nanosleep" );
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/time.h" 3 4
typedef enum {
_CLOCK_REALTIME __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) = 0,

_CLOCK_MONOTONIC __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) = 6,


_CLOCK_MONOTONIC_RAW __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) = 4,

_CLOCK_MONOTONIC_RAW_APPROX __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) = 5,

_CLOCK_UPTIME_RAW __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) = 8,

_CLOCK_UPTIME_RAW_APPROX __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) = 9,


_CLOCK_PROCESS_CPUTIME_ID __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) = 12,

_CLOCK_THREAD_CPUTIME_ID __attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0))) = 16

} clockid_t;

__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
int clock_getres(clockid_t __clock_id, struct timespec *__res);

__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
int clock_gettime(clockid_t __clock_id, struct timespec *__tp);


__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,introduced=10.0)))
__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);


__attribute__((availability(macosx,introduced=10.12))) __attribute__((availability(ios,unavailable)))

int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
# 198 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/time.h" 3 4
__attribute__((availability(macos,introduced=10.15))) __attribute__((availability(ios,introduced=13.0))) __attribute__((availability(tvos,introduced=13.0))) __attribute__((availability(watchos,introduced=6.0)))
int timespec_get(struct timespec *ts, int base);



# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_wctype.h" 1 3 4
# 42 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/__wctype.h" 1 3 4
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/__wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_wint_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_wint_t.h" 3 4
typedef __darwin_wint_t wint_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/__wctype.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_wctype_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_wctype_t.h" 3 4
typedef __darwin_wctype_t wctype_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/__wctype.h" 2 3 4
# 72 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/__wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/ctype.h" 1 3 4
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_ctype.h" 1 3 4
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_ctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/runetype.h" 1 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/runetype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/runetype.h" 2 3 4
# 60 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/runetype.h" 3 4
typedef struct {
 __darwin_rune_t __min;
 __darwin_rune_t __max;
 __darwin_rune_t __map;
 __uint32_t *__types;
} _RuneEntry;

typedef struct {
 int __nranges;
 _RuneEntry *__ranges;
} _RuneRange;

typedef struct {
 char __name[14];
 __uint32_t __mask;
} _RuneCharClass;

typedef struct {
 char __magic[8];
 char __encoding[32];

 __darwin_rune_t (*__sgetrune)(const char *, __darwin_size_t, char const **);
 int (*__sputrune)(__darwin_rune_t, char *, __darwin_size_t, char **);
 __darwin_rune_t __invalid_rune;

 __uint32_t __runetype[(1 <<8 )];
 __darwin_rune_t __maplower[(1 <<8 )];
 __darwin_rune_t __mapupper[(1 <<8 )];






 _RuneRange __runetype_ext;
 _RuneRange __maplower_ext;
 _RuneRange __mapupper_ext;

 void *__variable;
 int __variable_len;




 int __ncharclasses;
 _RuneCharClass *__charclasses;
} _RuneLocale;




extern _RuneLocale _DefaultRuneLocale;
extern _RuneLocale *_CurrentRuneLocale;

# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_ctype.h" 2 3 4
# 128 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_ctype.h" 3 4

unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);


extern __inline __attribute__((__gnu_inline__)) int
isascii(int _c)
{
 return ((_c & ~0x7F) == 0);
}
# 147 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_ctype.h" 3 4

int __maskrune(__darwin_ct_rune_t, unsigned long);



extern __inline __attribute__((__gnu_inline__)) int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

extern __inline __attribute__((__gnu_inline__)) __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 )) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}
# 187 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_ctype.h" 3 4

__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);



extern __inline __attribute__((__gnu_inline__)) int
__wcwidth(__darwin_ct_rune_t _c)
{
 unsigned int _x;

 if (_c == 0)
  return (0);
 _x = (unsigned int)__maskrune(_c, 0xe0000000L|0x00040000L);
 if ((_x & 0xe0000000L) != 0)
  return ((_x & 0xe0000000L) >> 30);
 return ((_x & 0x00040000L) != 0 ? 1 : -1);
}






extern __inline __attribute__((__gnu_inline__)) int
isalnum(int _c)
{
 return (__istype(_c, 0x00000100L|0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isalpha(int _c)
{
 return (__istype(_c, 0x00000100L));
}

extern __inline __attribute__((__gnu_inline__)) int
isblank(int _c)
{
 return (__istype(_c, 0x00020000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iscntrl(int _c)
{
 return (__istype(_c, 0x00000200L));
}


extern __inline __attribute__((__gnu_inline__)) int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800L));
}

extern __inline __attribute__((__gnu_inline__)) int
islower(int _c)
{
 return (__istype(_c, 0x00001000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isprint(int _c)
{
 return (__istype(_c, 0x00040000L));
}

extern __inline __attribute__((__gnu_inline__)) int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isspace(int _c)
{
 return (__istype(_c, 0x00004000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isupper(int _c)
{
 return (__istype(_c, 0x00008000L));
}


extern __inline __attribute__((__gnu_inline__)) int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) int
toascii(int _c)
{
 return (_c & 0x7F);
}

extern __inline __attribute__((__gnu_inline__)) int
tolower(int _c)
{
        return (__tolower(_c));
}

extern __inline __attribute__((__gnu_inline__)) int
toupper(int _c)
{
        return (__toupper(_c));
}


extern __inline __attribute__((__gnu_inline__)) int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

extern __inline __attribute__((__gnu_inline__)) int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000L));
}

extern __inline __attribute__((__gnu_inline__)) int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0L));
}

extern __inline __attribute__((__gnu_inline__)) int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000L));
}
# 70 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/ctype.h" 2 3 4
# 73 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/__wctype.h" 2 3 4
# 43 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_wctype.h" 2 3 4







extern __inline __attribute__((__gnu_inline__)) int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L|0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

extern __inline __attribute__((__gnu_inline__)) int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

extern __inline __attribute__((__gnu_inline__)) wint_t
towupper(wint_t _wc)
{
        return (__toupper(_wc));
}
# 155 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_wctype.h" 3 4

wctype_t
 wctype(const char *);

# 93 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 2 3 4




wint_t btowc(int);
wint_t fgetwc(FILE *);
wchar_t *fgetws(wchar_t * restrict, int, FILE * restrict);
wint_t fputwc(wchar_t, FILE *);
int fputws(const wchar_t * restrict, FILE * restrict);
int fwide(FILE *, int);
int fwprintf(FILE * restrict, const wchar_t * restrict, ...);
int fwscanf(FILE * restrict, const wchar_t * restrict, ...);
wint_t getwc(FILE *);
wint_t getwchar(void);
size_t mbrlen(const char * restrict, size_t, mbstate_t * restrict);
size_t mbrtowc(wchar_t * restrict, const char * restrict, size_t,
     mbstate_t * restrict);
int mbsinit(const mbstate_t *);
size_t mbsrtowcs(wchar_t * restrict, const char ** restrict, size_t,
     mbstate_t * restrict);
wint_t putwc(wchar_t, FILE *);
wint_t putwchar(wchar_t);
int swprintf(wchar_t * restrict, size_t, const wchar_t * restrict, ...);
int swscanf(const wchar_t * restrict, const wchar_t * restrict, ...);
wint_t ungetwc(wint_t, FILE *);
int vfwprintf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswprintf(wchar_t * restrict, size_t, const wchar_t * restrict,
     __darwin_va_list);
int vwprintf(const wchar_t * restrict, __darwin_va_list);
size_t wcrtomb(char * restrict, wchar_t, mbstate_t * restrict);
wchar_t *wcscat(wchar_t * restrict, const wchar_t * restrict);
wchar_t *wcschr(const wchar_t *, wchar_t);
int wcscmp(const wchar_t *, const wchar_t *);
int wcscoll(const wchar_t *, const wchar_t *);
wchar_t *wcscpy(wchar_t * restrict, const wchar_t * restrict);
size_t wcscspn(const wchar_t *, const wchar_t *);
size_t wcsftime(wchar_t * restrict, size_t, const wchar_t * restrict,
     const struct tm * restrict) __asm("_" "wcsftime" );
size_t wcslen(const wchar_t *);
wchar_t *wcsncat(wchar_t * restrict, const wchar_t * restrict, size_t);
int wcsncmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wcsncpy(wchar_t * restrict , const wchar_t * restrict, size_t);
wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t *wcsrchr(const wchar_t *, wchar_t);
size_t wcsrtombs(char * restrict, const wchar_t ** restrict, size_t,
     mbstate_t * restrict);
size_t wcsspn(const wchar_t *, const wchar_t *);
wchar_t *wcsstr(const wchar_t * restrict, const wchar_t * restrict);
size_t wcsxfrm(wchar_t * restrict, const wchar_t * restrict, size_t);
int wctob(wint_t);
double wcstod(const wchar_t * restrict, wchar_t ** restrict);
wchar_t *wcstok(wchar_t * restrict, const wchar_t * restrict,
     wchar_t ** restrict);
long wcstol(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long
  wcstoul(const wchar_t * restrict, wchar_t ** restrict, int);
wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
int wmemcmp(const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy(wchar_t * restrict, const wchar_t * restrict, size_t);
wchar_t *wmemmove(wchar_t *, const wchar_t *, size_t);
wchar_t *wmemset(wchar_t *, wchar_t, size_t);
int wprintf(const wchar_t * restrict, ...);
int wscanf(const wchar_t * restrict, ...);
int wcswidth(const wchar_t *, size_t);
int wcwidth(wchar_t);

# 169 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 3 4

int vfwscanf(FILE * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vswscanf(const wchar_t * restrict, const wchar_t * restrict,
     __darwin_va_list);
int vwscanf(const wchar_t * restrict, __darwin_va_list);
float wcstof(const wchar_t * restrict, wchar_t ** restrict);
long double
 wcstold(const wchar_t * restrict, wchar_t ** restrict);

long long
 wcstoll(const wchar_t * restrict, wchar_t ** restrict, int);
unsigned long long
 wcstoull(const wchar_t * restrict, wchar_t ** restrict, int);


# 194 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wchar.h" 3 4

size_t mbsnrtowcs(wchar_t * restrict, const char ** restrict, size_t,
            size_t, mbstate_t * restrict);
wchar_t *wcpcpy(wchar_t * restrict, const wchar_t * restrict) __attribute__((availability(macosx,introduced=10.7)));
wchar_t *wcpncpy(wchar_t * restrict, const wchar_t * restrict, size_t) __attribute__((availability(macosx,introduced=10.7)));
wchar_t *wcsdup(const wchar_t *) __attribute__((availability(macosx,introduced=10.7)));
int wcscasecmp(const wchar_t *, const wchar_t *) __attribute__((availability(macosx,introduced=10.7)));
int wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) __attribute__((availability(macosx,introduced=10.7)));
size_t wcsnlen(const wchar_t *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t wcsnrtombs(char * restrict, const wchar_t ** restrict, size_t,
            size_t, mbstate_t * restrict);
FILE *open_wmemstream(wchar_t ** __bufp, size_t * __sizep) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));









wchar_t *fgetwln(FILE * restrict, size_t *) __attribute__((availability(macosx,introduced=10.7)));
size_t wcslcat(wchar_t *, const wchar_t *, size_t);
size_t wcslcpy(wchar_t *, const wchar_t *, size_t);

# 41 "./cpython/Include/Python.h" 2

# 1 "./cpython/Include/pyport.h" 1





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/inttypes.h" 1 3 4
# 227 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/inttypes.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/inttypes.h" 2 3 4






__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;

__attribute__((availability(macosx,introduced=10.4)))
extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);


__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
strtoimax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);

__attribute__((availability(macosx,introduced=10.4)))
extern uintmax_t
strtoumax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);


__attribute__((availability(macosx,introduced=10.4)))
extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);

__attribute__((availability(macosx,introduced=10.4)))
extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);







# 7 "./cpython/Include/pyport.h" 2

# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/limits.h" 1 3 4
# 34 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/limits.h" 3 4
# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/syslimits.h" 1 3 4






# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/limits.h" 1 3 4
# 210 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/limits.h" 1 3 4
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/limits.h" 1 3 4
# 11 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/limits.h" 1 3 4
# 45 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/limits.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/_limits.h" 1 3 4
# 46 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/arm/limits.h" 2 3 4
# 12 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/machine/limits.h" 2 3 4
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/limits.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/syslimits.h" 1 3 4
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/limits.h" 2 3 4
# 211 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/limits.h" 2 3 4
# 8 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/syslimits.h" 2 3 4
# 35 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include/limits.h" 2 3 4
# 9 "./cpython/Include/pyport.h" 2
# 120 "./cpython/Include/pyport.h"

# 120 "./cpython/Include/pyport.h"
typedef uintptr_t Py_uintptr_t;
typedef intptr_t Py_intptr_t;
# 131 "./cpython/Include/pyport.h"
typedef ssize_t Py_ssize_t;
# 145 "./cpython/Include/pyport.h"
typedef Py_ssize_t Py_hash_t;


typedef size_t Py_uhash_t;


typedef Py_ssize_t Py_ssize_clean_t;
# 195 "./cpython/Include/pyport.h"
# 1 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 1 3 4
# 49 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4

# 60 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
    
# 60 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
   typedef float float_t;
    typedef double double_t;
# 127 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern int __math_errhandling(void);
# 147 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 190 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinited(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinff(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfd(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnand(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormald(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitf(float);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitd(double);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}
# 253 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union { long double __f; unsigned long long __u;} __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435082228750796873653722224568e-38F;
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= ((double)2.22507385850720138309023271733240406e-308L);
}
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 2.22507385850720138309023271733240406e-308L;
}
# 324 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 584 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern float lgammaf_r(float, int *) __attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.1)));
extern double lgamma_r(double, int *) __attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.1)));
extern long double lgammal_r(long double, int *) __attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.1)));
# 604 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern float __exp10f(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __exp10(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));





extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp);
# 621 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern float __cospif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __cospi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __sinpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __sinpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern float __tanpif(float) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
extern double __tanpi(double) __attribute__((availability(macos,introduced=10.9))) __attribute__((availability(ios,introduced=7.0)));
# 652 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp);
extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern __inline __attribute__((__gnu_inline__)) __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double j1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double jn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y0(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double y1(double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double yn(int, double) __attribute__((availability(macos,introduced=10.0))) __attribute__((availability(ios,introduced=3.2)));
extern double scalb(double, double);
extern int signgam;
# 779 "/opt/homebrew/Cellar/gcc/14.2.0_1/lib/gcc/current/gcc/aarch64-apple-darwin23/14/include-fixed/math.h" 3 4
struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};





# 196 "./cpython/Include/pyport.h" 2






# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/time.h" 1 3 4
# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/time.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_timeval64.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_timeval64.h" 3 4
struct timeval64 {
 __int64_t tv_sec;
 __int64_t tv_usec;
};
# 82 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/time.h" 2 3 4
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/time.h" 3 4
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 173 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};
# 188 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/time.h" 3 4



int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) __attribute__((availability(macosx,introduced=10.5)));
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * restrict, void * restrict);







int setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int utimes(const char *, const struct timeval *);


# 203 "./cpython/Include/pyport.h" 2
# 221 "./cpython/Include/pyport.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 1 3 4
# 85 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 86 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 87 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ino_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 89 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 2 3 4


# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 92 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 96 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 2 3 4
# 110 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 3 4
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
# 182 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 241 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 242 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 2 3 4
# 379 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 3 4


int chmod(const char *, mode_t) __asm("_" "chmod" );
int fchmod(int, mode_t) __asm("_" "fchmod" );
int fstat(int, struct stat *) __asm("_" "fstat" );
int lstat(const char *, struct stat *) __asm("_" "lstat" );
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) __asm("_" "stat" );
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);


int fchmodat(int, const char *, mode_t, int) __attribute__((availability(macosx,introduced=10.10)));
int fstatat(int, const char *, struct stat *, int) __asm("_" "fstatat" ) __attribute__((availability(macosx,introduced=10.10)));
int mkdirat(int, const char *, mode_t) __attribute__((availability(macosx,introduced=10.10)));
int mkfifoat(int, const char *, mode_t) __attribute__((availability(macos,introduced=13.0))) __attribute__((availability(ios,introduced=16.0))) __attribute__((availability(tvos,introduced=16.0))) __attribute__((availability(watchos,introduced=9.0)));
int mknodat(int, const char *, mode_t, dev_t) __attribute__((availability(macos,introduced=13.0))) __attribute__((availability(ios,introduced=16.0))) __attribute__((availability(tvos,introduced=16.0))) __attribute__((availability(watchos,introduced=9.0)));




int futimens(int __fd, const struct timespec __times[2]) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));
int utimensat(int __fd, const char *__path, const struct timespec __times[2],
    int __flag) __attribute__((availability(macos,introduced=10.13))) __attribute__((availability(ios,introduced=11.0))) __attribute__((availability(tvos,introduced=11.0))) __attribute__((availability(watchos,introduced=4.0)));





# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 410 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 2 3 4


int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" );
int lchflags(const char *, __uint32_t) __attribute__((availability(macosx,introduced=10.5)));
int lchmod(const char *, mode_t) __attribute__((availability(macosx,introduced=10.5)));
int lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" );
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" );
int umaskx_np(filesec_t) __attribute__((availability(macosx,introduced=10.4,deprecated=10.6)));
# 434 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/stat.h" 3 4

# 222 "./cpython/Include/pyport.h" 2
# 464 "./cpython/Include/pyport.h"
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wctype.h" 1 3 4
# 36 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wctype.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_wctrans_t.h" 1 3 4
# 32 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/_types/_wctrans_t.h" 3 4
typedef __darwin_wctrans_t wctrans_t;
# 37 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wctype.h" 2 3 4
# 49 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wctype.h" 3 4
extern __inline __attribute__((__gnu_inline__)) int
iswblank(wint_t _wc)
{
 return (__istype(_wc, 0x00020000L));
}


extern __inline __attribute__((__gnu_inline__)) int
iswascii(wint_t _wc)
{
 return ((_wc & ~0x7F) == 0);
}

extern __inline __attribute__((__gnu_inline__)) int
iswhexnumber(wint_t _wc)
{
 return (__istype(_wc, 0x00010000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswideogram(wint_t _wc)
{
 return (__istype(_wc, 0x00080000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswnumber(wint_t _wc)
{
 return (__istype(_wc, 0x00000400L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswphonogram(wint_t _wc)
{
 return (__istype(_wc, 0x00200000L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswrune(wint_t _wc)
{
 return (__istype(_wc, 0xFFFFFFF0L));
}

extern __inline __attribute__((__gnu_inline__)) int
iswspecial(wint_t _wc)
{
 return (__istype(_wc, 0x00100000L));
}
# 117 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/wctype.h" 3 4


wint_t nextwctype(wint_t, wctype_t);

wint_t towctrans(wint_t, wctrans_t);
wctrans_t
 wctrans(const char *);

# 465 "./cpython/Include/pyport.h" 2
# 506 "./cpython/Include/pyport.h"
# 1 "./cpython/Include/exports.h" 1
# 507 "./cpython/Include/pyport.h" 2
# 43 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pymacro.h" 1
# 44 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pymath.h" 1
# 45 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pymem.h" 1
# 52 "./cpython/Include/pymem.h"

# 52 "./cpython/Include/pymem.h"
__attribute__ ((visibility ("default"))) void * PyMem_Malloc(size_t size);
__attribute__ ((visibility ("default"))) void * PyMem_Calloc(size_t nelem, size_t elsize);
__attribute__ ((visibility ("default"))) void * PyMem_Realloc(void *ptr, size_t new_size);
__attribute__ ((visibility ("default"))) void PyMem_Free(void *ptr);
# 96 "./cpython/Include/pymem.h"
# 1 "./cpython/Include/cpython/pymem.h" 1




__attribute__ ((visibility ("default"))) void * PyMem_RawMalloc(size_t size);
__attribute__ ((visibility ("default"))) void * PyMem_RawCalloc(size_t nelem, size_t elsize);
__attribute__ ((visibility ("default"))) void * PyMem_RawRealloc(void *ptr, size_t new_size);
__attribute__ ((visibility ("default"))) void PyMem_RawFree(void *ptr);


__attribute__ ((visibility ("default"))) const char* _PyMem_GetCurrentAllocatorName(void);


__attribute__ ((visibility ("default"))) char * _PyMem_RawStrdup(const char *str);


__attribute__ ((visibility ("default"))) char * _PyMem_Strdup(const char *str);


__attribute__ ((visibility ("default"))) wchar_t* _PyMem_RawWcsdup(const wchar_t *str);


typedef enum {

    PYMEM_DOMAIN_RAW,


    PYMEM_DOMAIN_MEM,


    PYMEM_DOMAIN_OBJ
} PyMemAllocatorDomain;

typedef enum {
    PYMEM_ALLOCATOR_NOT_SET = 0,
    PYMEM_ALLOCATOR_DEFAULT = 1,
    PYMEM_ALLOCATOR_DEBUG = 2,
    PYMEM_ALLOCATOR_MALLOC = 3,
    PYMEM_ALLOCATOR_MALLOC_DEBUG = 4,

    PYMEM_ALLOCATOR_PYMALLOC = 5,
    PYMEM_ALLOCATOR_PYMALLOC_DEBUG = 6,

} PyMemAllocatorName;


typedef struct {

    void *ctx;


    void* (*malloc) (void *ctx, size_t size);


    void* (*calloc) (void *ctx, size_t nelem, size_t elsize);


    void* (*realloc) (void *ctx, void *ptr, size_t new_size);


    void (*free) (void *ctx, void *ptr);
} PyMemAllocatorEx;


__attribute__ ((visibility ("default"))) void PyMem_GetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocatorEx *allocator);
# 79 "./cpython/Include/cpython/pymem.h"
__attribute__ ((visibility ("default"))) void PyMem_SetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocatorEx *allocator);
# 98 "./cpython/Include/cpython/pymem.h"
__attribute__ ((visibility ("default"))) void PyMem_SetupDebugHooks(void);
# 97 "./cpython/Include/pymem.h" 2
# 46 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pytypedefs.h" 1
# 12 "./cpython/Include/pytypedefs.h"
typedef struct PyModuleDef PyModuleDef;
typedef struct PyModuleDef_Slot PyModuleDef_Slot;
typedef struct PyMethodDef PyMethodDef;
typedef struct PyGetSetDef PyGetSetDef;
typedef struct PyMemberDef PyMemberDef;

typedef struct _object PyObject;
typedef struct _longobject PyLongObject;
typedef struct _typeobject PyTypeObject;
typedef struct PyCodeObject PyCodeObject;
typedef struct _frame PyFrameObject;

typedef struct _ts PyThreadState;
typedef struct _is PyInterpreterState;
# 47 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pybuffer.h" 1
# 20 "./cpython/Include/pybuffer.h"
typedef struct {
    void *buf;
    PyObject *obj;
    Py_ssize_t len;
    Py_ssize_t itemsize;

    int readonly;
    int ndim;
    char *format;
    Py_ssize_t *shape;
    Py_ssize_t *strides;
    Py_ssize_t *suboffsets;
    void *internal;
} Py_buffer;

typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);
typedef void (*releasebufferproc)(PyObject *, Py_buffer *);


__attribute__ ((visibility ("default"))) int PyObject_CheckBuffer(PyObject *obj);






__attribute__ ((visibility ("default"))) int PyObject_GetBuffer(PyObject *obj, Py_buffer *view,
                                   int flags);



__attribute__ ((visibility ("default"))) void * PyBuffer_GetPointer(const Py_buffer *view, const Py_ssize_t *indices);



__attribute__ ((visibility ("default"))) Py_ssize_t PyBuffer_SizeFromFormat(const char *format);


__attribute__ ((visibility ("default"))) int PyBuffer_ToContiguous(void *buf, const Py_buffer *view,
                                      Py_ssize_t len, char order);

__attribute__ ((visibility ("default"))) int PyBuffer_FromContiguous(const Py_buffer *view, const void *buf,
                                        Py_ssize_t len, char order);
# 77 "./cpython/Include/pybuffer.h"
__attribute__ ((visibility ("default"))) int PyObject_CopyData(PyObject *dest, PyObject *src);


__attribute__ ((visibility ("default"))) int PyBuffer_IsContiguous(const Py_buffer *view, char fort);





__attribute__ ((visibility ("default"))) void PyBuffer_FillContiguousStrides(int ndims,
                                               Py_ssize_t *shape,
                                               Py_ssize_t *strides,
                                               int itemsize,
                                               char fort);






__attribute__ ((visibility ("default"))) int PyBuffer_FillInfo(Py_buffer *view, PyObject *o, void *buf,
                                  Py_ssize_t len, int readonly,
                                  int flags);


__attribute__ ((visibility ("default"))) void PyBuffer_Release(Py_buffer *view);
# 48 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/object.h" 1
# 54 "./cpython/Include/object.h"
# 1 "./cpython/Include/pystats.h" 1
# 55 "./cpython/Include/object.h" 2
# 166 "./cpython/Include/object.h"
struct _object {
   




    __extension__







    union {
       Py_ssize_t ob_refcnt;

       uint32_t ob_refcnt_split[2];

    };




    PyTypeObject *ob_type;
};




typedef struct {
    PyObject ob_base;
    Py_ssize_t ob_size;
} PyVarObject;






__attribute__ ((visibility ("default"))) int Py_Is(PyObject *x, PyObject *y);



static inline Py_ssize_t Py_REFCNT(PyObject *ob) {
    return ob->ob_refcnt;
}






static inline PyTypeObject* Py_TYPE(PyObject *ob) {
    return ob->ob_type;
}




extern __attribute__ ((visibility ("default"))) PyTypeObject PyLong_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyBool_Type;


static inline Py_ssize_t Py_SIZE(PyObject *ob) {
    
# 231 "./cpython/Include/object.h" 3 4
   (__builtin_expect(!(
# 231 "./cpython/Include/object.h"
   ob->ob_type != &PyLong_Type
# 231 "./cpython/Include/object.h" 3 4
   ), 0) ? __assert_rtn(__func__, "object.h", 231, 
# 231 "./cpython/Include/object.h"
   "ob->ob_type != &PyLong_Type"
# 231 "./cpython/Include/object.h" 3 4
   ) : (void)0)
# 231 "./cpython/Include/object.h"
                                      ;
    
# 232 "./cpython/Include/object.h" 3 4
   (__builtin_expect(!(
# 232 "./cpython/Include/object.h"
   ob->ob_type != &PyBool_Type
# 232 "./cpython/Include/object.h" 3 4
   ), 0) ? __assert_rtn(__func__, "object.h", 232, 
# 232 "./cpython/Include/object.h"
   "ob->ob_type != &PyBool_Type"
# 232 "./cpython/Include/object.h" 3 4
   ) : (void)0)
# 232 "./cpython/Include/object.h"
                                      ;
    return ((PyVarObject*)((ob)))->ob_size;
}




static inline __attribute__((always_inline)) int _Py_IsImmortal(PyObject *op)
{

    return ((int32_t)(op->ob_refcnt)) < 0;



}


static inline int Py_IS_TYPE(PyObject *ob, PyTypeObject *type) {
    return Py_TYPE(((PyObject*)((ob)))) == type;
}





static inline void Py_SET_REFCNT(PyObject *ob, Py_ssize_t refcnt) {




    if (_Py_IsImmortal(((PyObject*)((ob))))) {
        return;
    }
    ob->ob_refcnt = refcnt;
}





static inline void Py_SET_TYPE(PyObject *ob, PyTypeObject *type) {
    ob->ob_type = type;
}




static inline void Py_SET_SIZE(PyVarObject *ob, Py_ssize_t size) {
    
# 280 "./cpython/Include/object.h" 3 4
   (__builtin_expect(!(
# 280 "./cpython/Include/object.h"
   ob->ob_base.ob_type != &PyLong_Type
# 280 "./cpython/Include/object.h" 3 4
   ), 0) ? __assert_rtn(__func__, "object.h", 280, 
# 280 "./cpython/Include/object.h"
   "ob->ob_base.ob_type != &PyLong_Type"
# 280 "./cpython/Include/object.h" 3 4
   ) : (void)0)
# 280 "./cpython/Include/object.h"
                                              ;
    
# 281 "./cpython/Include/object.h" 3 4
   (__builtin_expect(!(
# 281 "./cpython/Include/object.h"
   ob->ob_base.ob_type != &PyBool_Type
# 281 "./cpython/Include/object.h" 3 4
   ), 0) ? __assert_rtn(__func__, "object.h", 281, 
# 281 "./cpython/Include/object.h"
   "ob->ob_base.ob_type != &PyBool_Type"
# 281 "./cpython/Include/object.h" 3 4
   ) : (void)0)
# 281 "./cpython/Include/object.h"
                                              ;
    ob->ob_size = size;
}
# 304 "./cpython/Include/object.h"
typedef PyObject * (*unaryfunc)(PyObject *);
typedef PyObject * (*binaryfunc)(PyObject *, PyObject *);
typedef PyObject * (*ternaryfunc)(PyObject *, PyObject *, PyObject *);
typedef int (*inquiry)(PyObject *);
typedef Py_ssize_t (*lenfunc)(PyObject *);
typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);
typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);
typedef int(*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);
typedef int(*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
typedef int(*objobjargproc)(PyObject *, PyObject *, PyObject *);

typedef int (*objobjproc)(PyObject *, PyObject *);
typedef int (*visitproc)(PyObject *, void *);
typedef int (*traverseproc)(PyObject *, visitproc, void *);


typedef void (*freefunc)(void *);
typedef void (*destructor)(PyObject *);
typedef PyObject *(*getattrfunc)(PyObject *, char *);
typedef PyObject *(*getattrofunc)(PyObject *, PyObject *);
typedef int (*setattrfunc)(PyObject *, char *, PyObject *);
typedef int (*setattrofunc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*reprfunc)(PyObject *);
typedef Py_hash_t (*hashfunc)(PyObject *);
typedef PyObject *(*richcmpfunc) (PyObject *, PyObject *, int);
typedef PyObject *(*getiterfunc) (PyObject *);
typedef PyObject *(*iternextfunc) (PyObject *);
typedef PyObject *(*descrgetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*descrsetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*initproc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*newfunc)(PyTypeObject *, PyObject *, PyObject *);
typedef PyObject *(*allocfunc)(PyTypeObject *, Py_ssize_t);


typedef PyObject *(*vectorcallfunc)(PyObject *callable, PyObject *const *args,
                                    size_t nargsf, PyObject *kwnames);


typedef struct{
    int slot;
    void *pfunc;
} PyType_Slot;

typedef struct{
    const char* name;
    int basicsize;
    int itemsize;
    unsigned int flags;
    PyType_Slot *slots;
} PyType_Spec;

__attribute__ ((visibility ("default"))) PyObject* PyType_FromSpec(PyType_Spec*);

__attribute__ ((visibility ("default"))) PyObject* PyType_FromSpecWithBases(PyType_Spec*, PyObject*);


__attribute__ ((visibility ("default"))) void* PyType_GetSlot(PyTypeObject*, int);


__attribute__ ((visibility ("default"))) PyObject* PyType_FromModuleAndSpec(PyObject *, PyType_Spec *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GetModule(PyTypeObject *);
__attribute__ ((visibility ("default"))) void * PyType_GetModuleState(PyTypeObject *);


__attribute__ ((visibility ("default"))) PyObject * PyType_GetName(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GetQualName(PyTypeObject *);


__attribute__ ((visibility ("default"))) PyObject * PyType_FromMetaclass(PyTypeObject*, PyObject*, PyType_Spec*, PyObject*);
__attribute__ ((visibility ("default"))) void * PyObject_GetTypeData(PyObject *obj, PyTypeObject *cls);
__attribute__ ((visibility ("default"))) Py_ssize_t PyType_GetTypeDataSize(PyTypeObject *cls);



__attribute__ ((visibility ("default"))) int PyType_IsSubtype(PyTypeObject *, PyTypeObject *);

static inline int PyObject_TypeCheck(PyObject *ob, PyTypeObject *type) {
    return Py_IS_TYPE(((PyObject*)((ob))), (type)) || PyType_IsSubtype(Py_TYPE(((PyObject*)((ob)))), type);
}




extern __attribute__ ((visibility ("default"))) PyTypeObject PyType_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyBaseObject_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PySuper_Type;

__attribute__ ((visibility ("default"))) unsigned long PyType_GetFlags(PyTypeObject*);

__attribute__ ((visibility ("default"))) int PyType_Ready(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GenericAlloc(PyTypeObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject * PyType_GenericNew(PyTypeObject *,
                                               PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) unsigned int PyType_ClearCache(void);
__attribute__ ((visibility ("default"))) void PyType_Modified(PyTypeObject *);


__attribute__ ((visibility ("default"))) PyObject * PyObject_Repr(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_Str(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_ASCII(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_Bytes(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_RichCompare(PyObject *, PyObject *, int);
__attribute__ ((visibility ("default"))) int PyObject_RichCompareBool(PyObject *, PyObject *, int);
__attribute__ ((visibility ("default"))) PyObject * PyObject_GetAttrString(PyObject *, const char *);
__attribute__ ((visibility ("default"))) int PyObject_SetAttrString(PyObject *, const char *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_HasAttrString(PyObject *, const char *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_GetAttr(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_SetAttr(PyObject *, PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_HasAttr(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_SelfIter(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyObject_GenericGetAttr(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_GenericSetAttr(PyObject *, PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) int PyObject_GenericSetDict(PyObject *, PyObject *, void *);

__attribute__ ((visibility ("default"))) Py_hash_t PyObject_Hash(PyObject *);
__attribute__ ((visibility ("default"))) Py_hash_t PyObject_HashNotImplemented(PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_IsTrue(PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_Not(PyObject *);
__attribute__ ((visibility ("default"))) int PyCallable_Check(PyObject *);
__attribute__ ((visibility ("default"))) void PyObject_ClearWeakRefs(PyObject *);






__attribute__ ((visibility ("default"))) PyObject * PyObject_Dir(PyObject *);



__attribute__ ((visibility ("default"))) PyObject * _PyObject_GetState(PyObject *);




__attribute__ ((visibility ("default"))) int Py_ReprEnter(PyObject *);
__attribute__ ((visibility ("default"))) void Py_ReprLeave(PyObject *);
# 610 "./cpython/Include/object.h"
__attribute__ ((visibility ("default"))) void _Py_Dealloc(PyObject *);





__attribute__ ((visibility ("default"))) void Py_IncRef(PyObject *);
__attribute__ ((visibility ("default"))) void Py_DecRef(PyObject *);



__attribute__ ((visibility ("default"))) void _Py_IncRef(PyObject *);
__attribute__ ((visibility ("default"))) void _Py_DecRef(PyObject *);

static inline __attribute__((always_inline)) void Py_INCREF(PyObject *op)
{
# 641 "./cpython/Include/object.h"
    uint32_t cur_refcnt = op->ob_refcnt_split[0];
    uint32_t new_refcnt = cur_refcnt + 1;
    if (new_refcnt == 0) {
        return;
    }
    op->ob_refcnt_split[0] = new_refcnt;







    ((void)0);




}
# 696 "./cpython/Include/object.h"
static inline __attribute__((always_inline)) void Py_DECREF(PyObject *op)
{


    if (_Py_IsImmortal(((PyObject*)((op))))) {
        return;
    }
    ((void)0);
    if (--op->ob_refcnt == 0) {
        _Py_Dealloc(op);
    }
}
# 785 "./cpython/Include/object.h"
static inline void Py_XINCREF(PyObject *op)
{
    if (op != 
# 787 "./cpython/Include/object.h" 3 4
             ((void *)0)
# 787 "./cpython/Include/object.h"
                     ) {
        Py_INCREF(((PyObject*)((op))));
    }
}




static inline void Py_XDECREF(PyObject *op)
{
    if (op != 
# 797 "./cpython/Include/object.h" 3 4
             ((void *)0)
# 797 "./cpython/Include/object.h"
                     ) {
        Py_DECREF(((PyObject*)((op))));
    }
}






__attribute__ ((visibility ("default"))) PyObject* Py_NewRef(PyObject *obj);


__attribute__ ((visibility ("default"))) PyObject* Py_XNewRef(PyObject *obj);

static inline PyObject* _Py_NewRef(PyObject *obj)
{
    Py_INCREF(((PyObject*)((obj))));
    return obj;
}

static inline PyObject* _Py_XNewRef(PyObject *obj)
{
    Py_XINCREF(((PyObject*)((obj))));
    return obj;
}
# 842 "./cpython/Include/object.h"
extern __attribute__ ((visibility ("default"))) PyObject _Py_NoneStruct;



__attribute__ ((visibility ("default"))) int Py_IsNone(PyObject *x);
# 856 "./cpython/Include/object.h"
extern __attribute__ ((visibility ("default"))) PyObject _Py_NotImplementedStruct;
# 872 "./cpython/Include/object.h"
typedef enum {
    PYGEN_RETURN = 0,
    PYGEN_ERROR = -1,
    PYGEN_NEXT = 1,
} PySendResult;
# 953 "./cpython/Include/object.h"
# 1 "./cpython/Include/cpython/object.h" 1




__attribute__ ((visibility ("default"))) void _Py_NewReference(PyObject *op);
__attribute__ ((visibility ("default"))) void _Py_NewReferenceNoTotal(PyObject *op);
# 42 "./cpython/Include/cpython/object.h"
typedef struct _Py_Identifier {
    const char* string;


    Py_ssize_t index;
} _Py_Identifier;
# 59 "./cpython/Include/cpython/object.h"
typedef struct {




    binaryfunc nb_add;
    binaryfunc nb_subtract;
    binaryfunc nb_multiply;
    binaryfunc nb_remainder;
    binaryfunc nb_divmod;
    ternaryfunc nb_power;
    unaryfunc nb_negative;
    unaryfunc nb_positive;
    unaryfunc nb_absolute;
    inquiry nb_bool;
    unaryfunc nb_invert;
    binaryfunc nb_lshift;
    binaryfunc nb_rshift;
    binaryfunc nb_and;
    binaryfunc nb_xor;
    binaryfunc nb_or;
    unaryfunc nb_int;
    void *nb_reserved;
    unaryfunc nb_float;

    binaryfunc nb_inplace_add;
    binaryfunc nb_inplace_subtract;
    binaryfunc nb_inplace_multiply;
    binaryfunc nb_inplace_remainder;
    ternaryfunc nb_inplace_power;
    binaryfunc nb_inplace_lshift;
    binaryfunc nb_inplace_rshift;
    binaryfunc nb_inplace_and;
    binaryfunc nb_inplace_xor;
    binaryfunc nb_inplace_or;

    binaryfunc nb_floor_divide;
    binaryfunc nb_true_divide;
    binaryfunc nb_inplace_floor_divide;
    binaryfunc nb_inplace_true_divide;

    unaryfunc nb_index;

    binaryfunc nb_matrix_multiply;
    binaryfunc nb_inplace_matrix_multiply;
} PyNumberMethods;

typedef struct {
    lenfunc sq_length;
    binaryfunc sq_concat;
    ssizeargfunc sq_repeat;
    ssizeargfunc sq_item;
    void *was_sq_slice;
    ssizeobjargproc sq_ass_item;
    void *was_sq_ass_slice;
    objobjproc sq_contains;

    binaryfunc sq_inplace_concat;
    ssizeargfunc sq_inplace_repeat;
} PySequenceMethods;

typedef struct {
    lenfunc mp_length;
    binaryfunc mp_subscript;
    objobjargproc mp_ass_subscript;
} PyMappingMethods;

typedef PySendResult (*sendfunc)(PyObject *iter, PyObject *value, PyObject **result);

typedef struct {
    unaryfunc am_await;
    unaryfunc am_aiter;
    unaryfunc am_anext;
    sendfunc am_send;
} PyAsyncMethods;

typedef struct {
     getbufferproc bf_getbuffer;
     releasebufferproc bf_releasebuffer;
} PyBufferProcs;



typedef Py_ssize_t printfunc;



struct _typeobject {
    PyVarObject ob_base;
    const char *tp_name;
    Py_ssize_t tp_basicsize, tp_itemsize;



    destructor tp_dealloc;
    Py_ssize_t tp_vectorcall_offset;
    getattrfunc tp_getattr;
    setattrfunc tp_setattr;
    PyAsyncMethods *tp_as_async;

    reprfunc tp_repr;



    PyNumberMethods *tp_as_number;
    PySequenceMethods *tp_as_sequence;
    PyMappingMethods *tp_as_mapping;



    hashfunc tp_hash;
    ternaryfunc tp_call;
    reprfunc tp_str;
    getattrofunc tp_getattro;
    setattrofunc tp_setattro;


    PyBufferProcs *tp_as_buffer;


    unsigned long tp_flags;

    const char *tp_doc;



    traverseproc tp_traverse;


    inquiry tp_clear;



    richcmpfunc tp_richcompare;


    Py_ssize_t tp_weaklistoffset;


    getiterfunc tp_iter;
    iternextfunc tp_iternext;


    PyMethodDef *tp_methods;
    PyMemberDef *tp_members;
    PyGetSetDef *tp_getset;

    PyTypeObject *tp_base;
    PyObject *tp_dict;
    descrgetfunc tp_descr_get;
    descrsetfunc tp_descr_set;
    Py_ssize_t tp_dictoffset;
    initproc tp_init;
    allocfunc tp_alloc;
    newfunc tp_new;
    freefunc tp_free;
    inquiry tp_is_gc;
    PyObject *tp_bases;
    PyObject *tp_mro;
    PyObject *tp_cache;
    void *tp_subclasses;
    PyObject *tp_weaklist;
    destructor tp_del;


    unsigned int tp_version_tag;

    destructor tp_finalize;
    vectorcallfunc tp_vectorcall;


    unsigned char tp_watched;
};




struct _specialization_cache {
# 247 "./cpython/Include/cpython/object.h"
    PyObject *getitem;
    uint32_t getitem_version;
};


typedef struct _heaptypeobject {


    PyTypeObject ht_type;
    PyAsyncMethods as_async;
    PyNumberMethods as_number;
    PyMappingMethods as_mapping;
    PySequenceMethods as_sequence;




    PyBufferProcs as_buffer;
    PyObject *ht_name, *ht_slots, *ht_qualname;
    struct _dictkeysobject *ht_cached_keys;
    PyObject *ht_module;
    char *_ht_tpname;
    struct _specialization_cache _spec_cache;

} PyHeapTypeObject;

__attribute__ ((visibility ("default"))) const char * _PyType_Name(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyType_Lookup(PyTypeObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyType_LookupId(PyTypeObject *, _Py_Identifier *);
__attribute__ ((visibility ("default"))) PyObject * _PyObject_LookupSpecialId(PyObject *, _Py_Identifier *);





__attribute__ ((visibility ("default"))) PyTypeObject * _PyType_CalculateMetaclass(PyTypeObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyType_GetDocFromInternalDoc(const char *, const char *);
__attribute__ ((visibility ("default"))) PyObject * _PyType_GetTextSignatureFromInternalDoc(const char *, const char *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GetModuleByDef(PyTypeObject *, PyModuleDef *);
__attribute__ ((visibility ("default"))) PyObject * PyType_GetDict(PyTypeObject *);

__attribute__ ((visibility ("default"))) int PyObject_Print(PyObject *, FILE *, int);
__attribute__ ((visibility ("default"))) void _Py_BreakPoint(void);
__attribute__ ((visibility ("default"))) void _PyObject_Dump(PyObject *);
__attribute__ ((visibility ("default"))) int _PyObject_IsFreed(PyObject *);

__attribute__ ((visibility ("default"))) int _PyObject_IsAbstract(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyObject_GetAttrId(PyObject *, _Py_Identifier *);
__attribute__ ((visibility ("default"))) int _PyObject_SetAttrId(PyObject *, _Py_Identifier *, PyObject *);
# 305 "./cpython/Include/cpython/object.h"
__attribute__ ((visibility ("default"))) int _PyObject_LookupAttr(PyObject *, PyObject *, PyObject **);
__attribute__ ((visibility ("default"))) int _PyObject_LookupAttrId(PyObject *, _Py_Identifier *, PyObject **);

__attribute__ ((visibility ("default"))) int _PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);

__attribute__ ((visibility ("default"))) PyObject ** _PyObject_GetDictPtr(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyObject_NextNotImplemented(PyObject *);
__attribute__ ((visibility ("default"))) void PyObject_CallFinalizer(PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_CallFinalizerFromDealloc(PyObject *);



__attribute__ ((visibility ("default"))) PyObject *
_PyObject_GenericGetAttrWithDict(PyObject *, PyObject *, PyObject *, int);
__attribute__ ((visibility ("default"))) int
_PyObject_GenericSetAttrWithDict(PyObject *, PyObject *,
                                 PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_FunctionStr(PyObject *);
# 390 "./cpython/Include/cpython/object.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyNone_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyNotImplemented_Type;




extern __attribute__ ((visibility ("default"))) int _Py_SwappedOp[];

__attribute__ ((visibility ("default"))) void
_PyDebugAllocatorStats(FILE *out, const char *block_name, int num_blocks,
                       size_t sizeof_block);
__attribute__ ((visibility ("default"))) void
_PyObject_DebugTypeStats(FILE *out);
# 444 "./cpython/Include/cpython/object.h"
__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) _PyObject_AssertFailed(
    PyObject *obj,
    const char *expr,
    const char *msg,
    const char *file,
    int line,
    const char *function);
# 463 "./cpython/Include/cpython/object.h"
__attribute__ ((visibility ("default"))) int _PyObject_CheckConsistency(
    PyObject *op,
    int check_content);
# 516 "./cpython/Include/cpython/object.h"
__attribute__ ((visibility ("default"))) int _PyTrash_begin(PyThreadState *tstate, PyObject *op);
__attribute__ ((visibility ("default"))) void _PyTrash_end(PyThreadState *tstate);

__attribute__ ((visibility ("default"))) int _PyTrash_cond(PyObject *op, destructor dealloc);
# 548 "./cpython/Include/cpython/object.h"
__attribute__((__deprecated__)) typedef int UsingDeprecatedTrashcanMacro;
# 557 "./cpython/Include/cpython/object.h"
__attribute__ ((visibility ("default"))) void * PyObject_GetItemData(PyObject *obj);

__attribute__ ((visibility ("default"))) int _PyObject_VisitManagedDict(PyObject *obj, visitproc visit, void *arg);
__attribute__ ((visibility ("default"))) void _PyObject_ClearManagedDict(PyObject *obj);



typedef int(*PyType_WatchCallback)(PyTypeObject *);
__attribute__ ((visibility ("default"))) int PyType_AddWatcher(PyType_WatchCallback callback);
__attribute__ ((visibility ("default"))) int PyType_ClearWatcher(int watcher_id);
__attribute__ ((visibility ("default"))) int PyType_Watch(int watcher_id, PyObject *type);
__attribute__ ((visibility ("default"))) int PyType_Unwatch(int watcher_id, PyObject *type);






__attribute__ ((visibility ("default"))) int PyUnstable_Type_AssignVersionTag(PyTypeObject *type);
# 954 "./cpython/Include/object.h" 2




static inline int
PyType_HasFeature(PyTypeObject *type, unsigned long feature)
{
    unsigned long flags;




    flags = type->tp_flags;

    return ((flags & feature) != 0);
}



static inline int PyType_Check(PyObject *op) {
    return PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 31)));
}







static inline int PyType_CheckExact(PyObject *op) {
    return Py_IS_TYPE(((PyObject*)((op))), (&PyType_Type));
}
# 49 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/objimpl.h" 1
# 97 "./cpython/Include/objimpl.h"
__attribute__ ((visibility ("default"))) void * PyObject_Malloc(size_t size);

__attribute__ ((visibility ("default"))) void * PyObject_Calloc(size_t nelem, size_t elsize);

__attribute__ ((visibility ("default"))) void * PyObject_Realloc(void *ptr, size_t new_size);
__attribute__ ((visibility ("default"))) void PyObject_Free(void *ptr);
# 121 "./cpython/Include/objimpl.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_Init(PyObject *, PyTypeObject *);
__attribute__ ((visibility ("default"))) PyVarObject * PyObject_InitVar(PyVarObject *,
                                           PyTypeObject *, Py_ssize_t);







__attribute__ ((visibility ("default"))) PyObject * _PyObject_New(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyVarObject * _PyObject_NewVar(PyTypeObject *, Py_ssize_t);
# 154 "./cpython/Include/objimpl.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyGC_Collect(void);

__attribute__ ((visibility ("default"))) int PyGC_Enable(void);
__attribute__ ((visibility ("default"))) int PyGC_Disable(void);
__attribute__ ((visibility ("default"))) int PyGC_IsEnabled(void);
# 175 "./cpython/Include/objimpl.h"
typedef int (*gcvisitobjects_t)(PyObject*, void*);
__attribute__ ((visibility ("default"))) void PyUnstable_GC_VisitObjects(gcvisitobjects_t callback, void* arg);





__attribute__ ((visibility ("default"))) PyVarObject * _PyObject_GC_Resize(PyVarObject *, Py_ssize_t);





__attribute__ ((visibility ("default"))) PyObject * _PyObject_GC_New(PyTypeObject *);
__attribute__ ((visibility ("default"))) PyVarObject * _PyObject_GC_NewVar(PyTypeObject *, Py_ssize_t);




__attribute__ ((visibility ("default"))) void PyObject_GC_Track(void *);




__attribute__ ((visibility ("default"))) void PyObject_GC_UnTrack(void *);

__attribute__ ((visibility ("default"))) void PyObject_GC_Del(void *);






__attribute__ ((visibility ("default"))) int PyObject_GC_IsTracked(PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_GC_IsFinalized(PyObject *);
# 227 "./cpython/Include/objimpl.h"
# 1 "./cpython/Include/cpython/objimpl.h" 1




static inline size_t _PyObject_SIZE(PyTypeObject *type) {
    return ((size_t)(type->tp_basicsize));
}
# 23 "./cpython/Include/cpython/objimpl.h"
static inline size_t _PyObject_VAR_SIZE(PyTypeObject *type, Py_ssize_t nitems) {
    size_t size = ((size_t)(type->tp_basicsize));
    size += ((size_t)(nitems)) * ((size_t)(type->tp_itemsize));
    return (((size_t)(size) + (size_t)((8) - 1)) & ~(size_t)((8) - 1));
}
# 59 "./cpython/Include/cpython/objimpl.h"
typedef struct {

    void *ctx;


    void* (*alloc) (void *ctx, size_t size);


    void (*free) (void *ctx, void *ptr, size_t size);
} PyObjectArenaAllocator;


__attribute__ ((visibility ("default"))) void PyObject_GetArenaAllocator(PyObjectArenaAllocator *allocator);


__attribute__ ((visibility ("default"))) void PyObject_SetArenaAllocator(PyObjectArenaAllocator *allocator);



__attribute__ ((visibility ("default"))) int PyObject_IS_GC(PyObject *obj);
# 90 "./cpython/Include/cpython/objimpl.h"
__attribute__ ((visibility ("default"))) int PyType_SUPPORTS_WEAKREFS(PyTypeObject *type);

__attribute__ ((visibility ("default"))) PyObject ** PyObject_GET_WEAKREFS_LISTPTR(PyObject *op);

__attribute__ ((visibility ("default"))) PyObject * PyUnstable_Object_GC_NewWithExtraData(PyTypeObject *,
                                                             size_t);
# 228 "./cpython/Include/objimpl.h" 2
# 50 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/typeslots.h" 1
# 51 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pyhash.h" 1
# 10 "./cpython/Include/pyhash.h"
__attribute__ ((visibility ("default"))) Py_hash_t _Py_HashDouble(PyObject *, double);
__attribute__ ((visibility ("default"))) Py_hash_t _Py_HashPointer(const void*);

__attribute__ ((visibility ("default"))) Py_hash_t _Py_HashPointerRaw(const void*);
__attribute__ ((visibility ("default"))) Py_hash_t _Py_HashBytes(const void*, Py_ssize_t);
# 55 "./cpython/Include/pyhash.h"
typedef union {

    unsigned char uc[24];

    struct {
        Py_hash_t prefix;
        Py_hash_t suffix;
    } fnv;

    struct {
        uint64_t k0;
        uint64_t k1;
    } siphash;

    struct {
        unsigned char padding[16];
        Py_hash_t suffix;
    } djbx33a;
    struct {
        unsigned char padding[16];
        Py_hash_t hashsalt;
    } expat;
} _Py_HashSecret_t;
extern __attribute__ ((visibility ("default"))) _Py_HashSecret_t _Py_HashSecret;







typedef struct {
    Py_hash_t (*const hash)(const void *, Py_ssize_t);
    const char *name;
    const int hash_bits;
    const int seed_bits;
} PyHash_FuncDef;

__attribute__ ((visibility ("default"))) PyHash_FuncDef* PyHash_GetFuncDef(void);
# 52 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/pydebug.h" 1







__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_DebugFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_VerboseFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_QuietFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_InteractiveFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_InspectFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_OptimizeFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_NoSiteFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_BytesWarningFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_FrozenFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_IgnoreEnvironmentFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_DontWriteBytecodeFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_NoUserSiteDirectory;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_UnbufferedStdioFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_HashRandomizationFlag;
__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_IsolatedFlag;
# 32 "./cpython/Include/cpython/pydebug.h"
__attribute__ ((visibility ("default"))) char* Py_GETENV(const char *name);
# 53 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/bytearrayobject.h" 1
# 20 "./cpython/Include/bytearrayobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyByteArray_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyByteArrayIter_Type;






__attribute__ ((visibility ("default"))) PyObject * PyByteArray_FromObject(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyByteArray_Concat(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyByteArray_FromStringAndSize(const char *, Py_ssize_t);
__attribute__ ((visibility ("default"))) Py_ssize_t PyByteArray_Size(PyObject *);
__attribute__ ((visibility ("default"))) char * PyByteArray_AsString(PyObject *);
__attribute__ ((visibility ("default"))) int PyByteArray_Resize(PyObject *, Py_ssize_t);



# 1 "./cpython/Include/cpython/bytearrayobject.h" 1





typedef struct {
    PyVarObject ob_base;
    Py_ssize_t ob_alloc;
    char *ob_bytes;
    char *ob_start;
    Py_ssize_t ob_exports;
} PyByteArrayObject;

extern __attribute__ ((visibility ("default"))) char _PyByteArray_empty_string[];





static inline char* PyByteArray_AS_STRING(PyObject *op)
{
    PyByteArrayObject *self = (
# 22 "./cpython/Include/cpython/bytearrayobject.h" 3 4
                             (__builtin_expect(!(
# 22 "./cpython/Include/cpython/bytearrayobject.h"
                             PyObject_TypeCheck(((PyObject*)(((op)))), (&PyByteArray_Type))
# 22 "./cpython/Include/cpython/bytearrayobject.h" 3 4
                             ), 0) ? __assert_rtn(__func__, "bytearrayobject.h", 22, 
# 22 "./cpython/Include/cpython/bytearrayobject.h"
                             "PyByteArray_Check(op)"
# 22 "./cpython/Include/cpython/bytearrayobject.h" 3 4
                             ) : (void)0)
# 22 "./cpython/Include/cpython/bytearrayobject.h"
                             , ((PyByteArrayObject*)(op)));
    if (Py_SIZE(((PyObject*)((self))))) {
        return self->ob_start;
    }
    return _PyByteArray_empty_string;
}


static inline Py_ssize_t PyByteArray_GET_SIZE(PyObject *op) {
    PyByteArrayObject *self = (
# 31 "./cpython/Include/cpython/bytearrayobject.h" 3 4
                             (__builtin_expect(!(
# 31 "./cpython/Include/cpython/bytearrayobject.h"
                             PyObject_TypeCheck(((PyObject*)(((op)))), (&PyByteArray_Type))
# 31 "./cpython/Include/cpython/bytearrayobject.h" 3 4
                             ), 0) ? __assert_rtn(__func__, "bytearrayobject.h", 31, 
# 31 "./cpython/Include/cpython/bytearrayobject.h"
                             "PyByteArray_Check(op)"
# 31 "./cpython/Include/cpython/bytearrayobject.h" 3 4
                             ) : (void)0)
# 31 "./cpython/Include/cpython/bytearrayobject.h"
                             , ((PyByteArrayObject*)(op)));
    return Py_SIZE(((PyObject*)((self))));
}
# 38 "./cpython/Include/bytearrayobject.h" 2
# 54 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/bytesobject.h" 1
# 27 "./cpython/Include/bytesobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyBytes_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyBytesIter_Type;





__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromStringAndSize(const char *, Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromString(const char *);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromObject(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromFormatV(const char*, va_list)
                                __attribute__((format(printf, 1, 0)));
__attribute__ ((visibility ("default"))) PyObject * PyBytes_FromFormat(const char*, ...)
                                __attribute__((format(printf, 1, 2)));
__attribute__ ((visibility ("default"))) Py_ssize_t PyBytes_Size(PyObject *);
__attribute__ ((visibility ("default"))) char * PyBytes_AsString(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_Repr(PyObject *, int);
__attribute__ ((visibility ("default"))) void PyBytes_Concat(PyObject **, PyObject *);
__attribute__ ((visibility ("default"))) void PyBytes_ConcatAndDel(PyObject **, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyBytes_DecodeEscape(const char *, Py_ssize_t,
                                            const char *, Py_ssize_t,
                                            const char *);





__attribute__ ((visibility ("default"))) int PyBytes_AsStringAndSize(
    PyObject *obj,
    char **s,
    Py_ssize_t *len
    );



# 1 "./cpython/Include/cpython/bytesobject.h" 1




typedef struct {
    PyVarObject ob_base;
    __attribute__((__deprecated__)) Py_hash_t ob_shash;
    char ob_sval[1];






} PyBytesObject;

__attribute__ ((visibility ("default"))) int _PyBytes_Resize(PyObject **, Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject* _PyBytes_FormatEx(
    const char *format,
    Py_ssize_t format_len,
    PyObject *args,
    int use_bytearray);
__attribute__ ((visibility ("default"))) PyObject* _PyBytes_FromHex(
    PyObject *string,
    int use_bytearray);


__attribute__ ((visibility ("default"))) PyObject * _PyBytes_DecodeEscape(const char *, Py_ssize_t,
                                             const char *, const char **);





static inline char* PyBytes_AS_STRING(PyObject *op)
{
    return (
# 37 "./cpython/Include/cpython/bytesobject.h" 3 4
          (__builtin_expect(!(
# 37 "./cpython/Include/cpython/bytesobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 27)))
# 37 "./cpython/Include/cpython/bytesobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "bytesobject.h", 37, 
# 37 "./cpython/Include/cpython/bytesobject.h"
          "PyBytes_Check(op)"
# 37 "./cpython/Include/cpython/bytesobject.h" 3 4
          ) : (void)0)
# 37 "./cpython/Include/cpython/bytesobject.h"
          , ((PyBytesObject*)(op)))->ob_sval;
}


static inline Py_ssize_t PyBytes_GET_SIZE(PyObject *op) {
    PyBytesObject *self = (
# 42 "./cpython/Include/cpython/bytesobject.h" 3 4
                         (__builtin_expect(!(
# 42 "./cpython/Include/cpython/bytesobject.h"
                         PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 27)))
# 42 "./cpython/Include/cpython/bytesobject.h" 3 4
                         ), 0) ? __assert_rtn(__func__, "bytesobject.h", 42, 
# 42 "./cpython/Include/cpython/bytesobject.h"
                         "PyBytes_Check(op)"
# 42 "./cpython/Include/cpython/bytesobject.h" 3 4
                         ) : (void)0)
# 42 "./cpython/Include/cpython/bytesobject.h"
                         , ((PyBytesObject*)(op)));
    return Py_SIZE(((PyObject*)((self))));
}




__attribute__ ((visibility ("default"))) PyObject * _PyBytes_Join(PyObject *sep, PyObject *x);





typedef struct {

    PyObject *buffer;


    Py_ssize_t allocated;



    Py_ssize_t min_size;


    int use_bytearray;



    int overallocate;


    int use_small_buffer;
    char small_buffer[512];
} _PyBytesWriter;





__attribute__ ((visibility ("default"))) void _PyBytesWriter_Init(_PyBytesWriter *writer);




__attribute__ ((visibility ("default"))) PyObject * _PyBytesWriter_Finish(_PyBytesWriter *writer,
    void *str);


__attribute__ ((visibility ("default"))) void _PyBytesWriter_Dealloc(_PyBytesWriter *writer);




__attribute__ ((visibility ("default"))) void* _PyBytesWriter_Alloc(_PyBytesWriter *writer,
    Py_ssize_t size);







__attribute__ ((visibility ("default"))) void* _PyBytesWriter_Prepare(_PyBytesWriter *writer,
    void *str,
    Py_ssize_t size);
# 120 "./cpython/Include/cpython/bytesobject.h"
__attribute__ ((visibility ("default"))) void* _PyBytesWriter_Resize(_PyBytesWriter *writer,
    void *str,
    Py_ssize_t size);



__attribute__ ((visibility ("default"))) void* _PyBytesWriter_WriteBytes(_PyBytesWriter *writer,
    void *str,
    const void *bytes,
    Py_ssize_t size);
# 63 "./cpython/Include/bytesobject.h" 2
# 55 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/unicodeobject.h" 1
# 102 "./cpython/Include/unicodeobject.h"
typedef uint32_t Py_UCS4;
typedef uint16_t Py_UCS2;
typedef uint8_t Py_UCS1;






extern __attribute__ ((visibility ("default"))) PyTypeObject PyUnicode_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyUnicodeIter_Type;
# 130 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromStringAndSize(
    const char *u,
    Py_ssize_t size
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromString(
    const char *u
    );


__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Substring(
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end);
# 154 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) Py_UCS4* PyUnicode_AsUCS4(
    PyObject *unicode,
    Py_UCS4* buffer,
    Py_ssize_t buflen,
    int copy_null);




__attribute__ ((visibility ("default"))) Py_UCS4* PyUnicode_AsUCS4Copy(PyObject *unicode);





__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_GetLength(
    PyObject *unicode
);





__attribute__ ((visibility ("default"))) Py_UCS4 PyUnicode_ReadChar(
    PyObject *unicode,
    Py_ssize_t index
    );






__attribute__ ((visibility ("default"))) int PyUnicode_WriteChar(
    PyObject *unicode,
    Py_ssize_t index,
    Py_UCS4 character
    );
# 208 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) int PyUnicode_Resize(
    PyObject **unicode,
    Py_ssize_t length
    );
# 226 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromEncodedObject(
    PyObject *obj,
    const char *encoding,
    const char *errors
    );
# 241 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromObject(
    PyObject *obj
    );

__attribute__ ((visibility ("default"))) PyObject * PyUnicode_FromFormatV(
    const char *format,
    va_list vargs
    );
__attribute__ ((visibility ("default"))) PyObject * PyUnicode_FromFormat(
    const char *format,
    ...
    );

__attribute__ ((visibility ("default"))) void PyUnicode_InternInPlace(PyObject **);
__attribute__ ((visibility ("default"))) PyObject * PyUnicode_InternFromString(
    const char *u
    );
# 268 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromWideChar(
    const wchar_t *w,
    Py_ssize_t size
    );
# 285 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_AsWideChar(
    PyObject *unicode,
    wchar_t *w,
    Py_ssize_t size
    );
# 299 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) wchar_t* PyUnicode_AsWideCharString(
    PyObject *unicode,
    Py_ssize_t *size
    );
# 315 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromOrdinal(int ordinal);
# 338 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) const char* PyUnicode_GetDefaultEncoding(void);






__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Decode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );
# 359 "./cpython/Include/unicodeobject.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsDecodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
# 372 "./cpython/Include/unicodeobject.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsDecodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
# 386 "./cpython/Include/unicodeobject.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsEncodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsEncodedString(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
# 408 "./cpython/Include/unicodeobject.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsEncodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_BuildEncodingMap(
    PyObject* string
   );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF7(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF7Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF8(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF8Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsUTF8String(
    PyObject *unicode
    );
# 466 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) const char * PyUnicode_AsUTF8AndSize(
    PyObject *unicode,
    Py_ssize_t *size);
# 496 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF32(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF32Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsUTF32String(
    PyObject *unicode
    );
# 563 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF16(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUTF16Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsUTF16String(
    PyObject *unicode
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsUnicodeEscapeString(
    PyObject *unicode
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeRawUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsRawUnicodeEscapeString(
    PyObject *unicode
    );





__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeLatin1(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsLatin1String(
    PyObject *unicode
    );







__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeASCII(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsASCIIString(
    PyObject *unicode
    );
# 660 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeCharmap(
    const char *string,
    Py_ssize_t length,
    PyObject *mapping,
    const char *errors
    );

__attribute__ ((visibility ("default"))) PyObject* PyUnicode_AsCharmapString(
    PyObject *unicode,
    PyObject *mapping
    );
# 723 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeLocaleAndSize(
    const char *str,
    Py_ssize_t len,
    const char *errors);




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeLocale(
    const char *str,
    const char *errors);






__attribute__ ((visibility ("default"))) PyObject* PyUnicode_EncodeLocale(
    PyObject *unicode,
    const char *errors
    );







__attribute__ ((visibility ("default"))) int PyUnicode_FSConverter(PyObject*, void*);




__attribute__ ((visibility ("default"))) int PyUnicode_FSDecoder(PyObject*, void*);





__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeFSDefault(
    const char *s
    );


__attribute__ ((visibility ("default"))) PyObject* PyUnicode_DecodeFSDefaultAndSize(
    const char *s,
    Py_ssize_t size
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_EncodeFSDefault(
    PyObject *unicode
    );
# 786 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Concat(
    PyObject *left,
    PyObject *right
    );




__attribute__ ((visibility ("default"))) void PyUnicode_Append(
    PyObject **pleft,
    PyObject *right
    );




__attribute__ ((visibility ("default"))) void PyUnicode_AppendAndDel(
    PyObject **pleft,
    PyObject *right
    );
# 818 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Split(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );






__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Splitlines(
    PyObject *s,
    int keepends
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Partition(
    PyObject *s,
    PyObject *sep
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_RPartition(
    PyObject *s,
    PyObject *sep
    );
# 862 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_RSplit(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );
# 880 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyUnicode_Translate(
    PyObject *str,
    PyObject *table,
    const char *errors
    );




__attribute__ ((visibility ("default"))) PyObject* PyUnicode_Join(
    PyObject *separator,
    PyObject *seq
    );




__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_Tailmatch(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );





__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_Find(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );



__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_FindChar(
    PyObject *str,
    Py_UCS4 ch,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );




__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_Count(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end
    );




__attribute__ ((visibility ("default"))) PyObject * PyUnicode_Replace(
    PyObject *str,
    PyObject *substr,
    PyObject *replstr,
    Py_ssize_t maxcount

    );





__attribute__ ((visibility ("default"))) int PyUnicode_Compare(
    PyObject *left,
    PyObject *right
    );







__attribute__ ((visibility ("default"))) int PyUnicode_CompareWithASCIIString(
    PyObject *left,
    const char *right
    );
# 980 "./cpython/Include/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyUnicode_RichCompare(
    PyObject *left,
    PyObject *right,
    int op
    );




__attribute__ ((visibility ("default"))) PyObject * PyUnicode_Format(
    PyObject *format,
    PyObject *args
    );







__attribute__ ((visibility ("default"))) int PyUnicode_Contains(
    PyObject *container,
    PyObject *element
    );



__attribute__ ((visibility ("default"))) int PyUnicode_IsIdentifier(PyObject *s);





# 1 "./cpython/Include/cpython/unicodeobject.h" 1
# 10 "./cpython/Include/cpython/unicodeobject.h"
                         typedef wchar_t Py_UNICODE;




static inline int Py_UNICODE_IS_SURROGATE(Py_UCS4 ch) {
    return (0xD800 <= ch && ch <= 0xDFFF);
}
static inline int Py_UNICODE_IS_HIGH_SURROGATE(Py_UCS4 ch) {
    return (0xD800 <= ch && ch <= 0xDBFF);
}
static inline int Py_UNICODE_IS_LOW_SURROGATE(Py_UCS4 ch) {
    return (0xDC00 <= ch && ch <= 0xDFFF);
}


static inline Py_UCS4 Py_UNICODE_JOIN_SURROGATES(Py_UCS4 high, Py_UCS4 low) {
    
# 27 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 27 "./cpython/Include/cpython/unicodeobject.h"
   Py_UNICODE_IS_HIGH_SURROGATE(high)
# 27 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 27, 
# 27 "./cpython/Include/cpython/unicodeobject.h"
   "Py_UNICODE_IS_HIGH_SURROGATE(high)"
# 27 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 27 "./cpython/Include/cpython/unicodeobject.h"
                                             ;
    
# 28 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 28 "./cpython/Include/cpython/unicodeobject.h"
   Py_UNICODE_IS_LOW_SURROGATE(low)
# 28 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 28, 
# 28 "./cpython/Include/cpython/unicodeobject.h"
   "Py_UNICODE_IS_LOW_SURROGATE(low)"
# 28 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 28 "./cpython/Include/cpython/unicodeobject.h"
                                           ;
    return 0x10000 + (((high & 0x03FF) << 10) | (low & 0x03FF));
}



static inline Py_UCS4 Py_UNICODE_HIGH_SURROGATE(Py_UCS4 ch) {
    
# 35 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 35 "./cpython/Include/cpython/unicodeobject.h"
   0x10000 <= ch && ch <= 0x10ffff
# 35 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 35, 
# 35 "./cpython/Include/cpython/unicodeobject.h"
   "0x10000 <= ch && ch <= 0x10ffff"
# 35 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 35 "./cpython/Include/cpython/unicodeobject.h"
                                          ;
    return (0xD800 - (0x10000 >> 10) + (ch >> 10));
}



static inline Py_UCS4 Py_UNICODE_LOW_SURROGATE(Py_UCS4 ch) {
    
# 42 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 42 "./cpython/Include/cpython/unicodeobject.h"
   0x10000 <= ch && ch <= 0x10ffff
# 42 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 42, 
# 42 "./cpython/Include/cpython/unicodeobject.h"
   "0x10000 <= ch && ch <= 0x10ffff"
# 42 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 42 "./cpython/Include/cpython/unicodeobject.h"
                                          ;
    return (0xDC00 + (ch & 0x3FF));
}







typedef struct {
# 97 "./cpython/Include/cpython/unicodeobject.h"
    PyObject ob_base;
    Py_ssize_t length;
    Py_hash_t hash;
    struct {
# 110 "./cpython/Include/cpython/unicodeobject.h"
        unsigned int interned:2;
# 133 "./cpython/Include/cpython/unicodeobject.h"
        unsigned int kind:3;




        unsigned int compact:1;



        unsigned int ascii:1;

        unsigned int statically_allocated:1;


        unsigned int :24;
    } state;
} PyASCIIObject;




typedef struct {
    PyASCIIObject _base;
    Py_ssize_t utf8_length;

    char *utf8;
} PyCompactUnicodeObject;


typedef struct {
    PyCompactUnicodeObject _base;
    union {
        void *any;
        Py_UCS1 *latin1;
        Py_UCS2 *ucs2;
        Py_UCS4 *ucs4;
    } data;
} PyUnicodeObject;

__attribute__ ((visibility ("default"))) int _PyUnicode_CheckConsistency(
    PyObject *op,
    int check_content);
# 199 "./cpython/Include/cpython/unicodeobject.h"
static inline unsigned int PyUnicode_CHECK_INTERNED(PyObject *op) {
    return (
# 200 "./cpython/Include/cpython/unicodeobject.h" 3 4
          (__builtin_expect(!(
# 200 "./cpython/Include/cpython/unicodeobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 200 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 200, 
# 200 "./cpython/Include/cpython/unicodeobject.h"
          "PyUnicode_Check(op)"
# 200 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ) : (void)0)
# 200 "./cpython/Include/cpython/unicodeobject.h"
          , ((PyASCIIObject*)((op))))->state.interned;
}



static inline unsigned int PyUnicode_IS_READY(PyObject* _unused_op __attribute__((unused))) {
    return 1;
}





static inline unsigned int PyUnicode_IS_ASCII(PyObject *op) {
    return (
# 214 "./cpython/Include/cpython/unicodeobject.h" 3 4
          (__builtin_expect(!(
# 214 "./cpython/Include/cpython/unicodeobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 214 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 214, 
# 214 "./cpython/Include/cpython/unicodeobject.h"
          "PyUnicode_Check(op)"
# 214 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ) : (void)0)
# 214 "./cpython/Include/cpython/unicodeobject.h"
          , ((PyASCIIObject*)((op))))->state.ascii;
}




static inline unsigned int PyUnicode_IS_COMPACT(PyObject *op) {
    return (
# 221 "./cpython/Include/cpython/unicodeobject.h" 3 4
          (__builtin_expect(!(
# 221 "./cpython/Include/cpython/unicodeobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 221 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 221, 
# 221 "./cpython/Include/cpython/unicodeobject.h"
          "PyUnicode_Check(op)"
# 221 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ) : (void)0)
# 221 "./cpython/Include/cpython/unicodeobject.h"
          , ((PyASCIIObject*)((op))))->state.compact;
}




static inline int PyUnicode_IS_COMPACT_ASCII(PyObject *op) {
    return ((
# 228 "./cpython/Include/cpython/unicodeobject.h" 3 4
           (__builtin_expect(!(
# 228 "./cpython/Include/cpython/unicodeobject.h"
           PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 228 "./cpython/Include/cpython/unicodeobject.h" 3 4
           ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 228, 
# 228 "./cpython/Include/cpython/unicodeobject.h"
           "PyUnicode_Check(op)"
# 228 "./cpython/Include/cpython/unicodeobject.h" 3 4
           ) : (void)0)
# 228 "./cpython/Include/cpython/unicodeobject.h"
           , ((PyASCIIObject*)((op))))->state.ascii && PyUnicode_IS_COMPACT(((PyObject*)((op)))));
}


enum PyUnicode_Kind {

    PyUnicode_1BYTE_KIND = 1,
    PyUnicode_2BYTE_KIND = 2,
    PyUnicode_4BYTE_KIND = 4
};
# 248 "./cpython/Include/cpython/unicodeobject.h"
static inline void* _PyUnicode_COMPACT_DATA(PyObject *op) {
    if (PyUnicode_IS_ASCII(((PyObject*)((op))))) {
        return ((void*)(((
# 250 "./cpython/Include/cpython/unicodeobject.h" 3 4
              (__builtin_expect(!(
# 250 "./cpython/Include/cpython/unicodeobject.h"
              PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 250 "./cpython/Include/cpython/unicodeobject.h" 3 4
              ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 250, 
# 250 "./cpython/Include/cpython/unicodeobject.h"
              "PyUnicode_Check(op)"
# 250 "./cpython/Include/cpython/unicodeobject.h" 3 4
              ) : (void)0)
# 250 "./cpython/Include/cpython/unicodeobject.h"
              , ((PyASCIIObject*)((op)))) + 1)));
    }
    return ((void*)(((
# 252 "./cpython/Include/cpython/unicodeobject.h" 3 4
          (__builtin_expect(!(
# 252 "./cpython/Include/cpython/unicodeobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 252 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 252, 
# 252 "./cpython/Include/cpython/unicodeobject.h"
          "PyUnicode_Check(op)"
# 252 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ) : (void)0)
# 252 "./cpython/Include/cpython/unicodeobject.h"
          , ((PyCompactUnicodeObject*)((op)))) + 1)));
}

static inline void* _PyUnicode_NONCOMPACT_DATA(PyObject *op) {
    void *data;
    
# 257 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 257 "./cpython/Include/cpython/unicodeobject.h"
   !PyUnicode_IS_COMPACT(((PyObject*)((op))))
# 257 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 257, 
# 257 "./cpython/Include/cpython/unicodeobject.h"
   "!PyUnicode_IS_COMPACT(op)"
# 257 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 257 "./cpython/Include/cpython/unicodeobject.h"
                                    ;
    data = (
# 258 "./cpython/Include/cpython/unicodeobject.h" 3 4
          (__builtin_expect(!(
# 258 "./cpython/Include/cpython/unicodeobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 258 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 258, 
# 258 "./cpython/Include/cpython/unicodeobject.h"
          "PyUnicode_Check(op)"
# 258 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ) : (void)0)
# 258 "./cpython/Include/cpython/unicodeobject.h"
          , ((PyUnicodeObject*)((op))))->data.any;
    
# 259 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 259 "./cpython/Include/cpython/unicodeobject.h"
   data != 
# 259 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ((void *)0)), 0) ? __assert_rtn(__func__, "unicodeobject.h", 259, 
# 259 "./cpython/Include/cpython/unicodeobject.h"
   "data != NULL"
# 259 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 259 "./cpython/Include/cpython/unicodeobject.h"
                       ;
    return data;
}

static inline void* PyUnicode_DATA(PyObject *op) {
    if (PyUnicode_IS_COMPACT(((PyObject*)((op))))) {
        return _PyUnicode_COMPACT_DATA(op);
    }
    return _PyUnicode_NONCOMPACT_DATA(op);
}
# 281 "./cpython/Include/cpython/unicodeobject.h"
static inline Py_ssize_t PyUnicode_GET_LENGTH(PyObject *op) {
    return (
# 282 "./cpython/Include/cpython/unicodeobject.h" 3 4
          (__builtin_expect(!(
# 282 "./cpython/Include/cpython/unicodeobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 282 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 282, 
# 282 "./cpython/Include/cpython/unicodeobject.h"
          "PyUnicode_Check(op)"
# 282 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ) : (void)0)
# 282 "./cpython/Include/cpython/unicodeobject.h"
          , ((PyASCIIObject*)((op))))->length;
}







static inline void PyUnicode_WRITE(int kind, void *data,
                                   Py_ssize_t index, Py_UCS4 value)
{
    
# 294 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 294 "./cpython/Include/cpython/unicodeobject.h"
   index >= 0
# 294 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 294, 
# 294 "./cpython/Include/cpython/unicodeobject.h"
   "index >= 0"
# 294 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 294 "./cpython/Include/cpython/unicodeobject.h"
                     ;
    if (kind == PyUnicode_1BYTE_KIND) {
        
# 296 "./cpython/Include/cpython/unicodeobject.h" 3 4
       (__builtin_expect(!(
# 296 "./cpython/Include/cpython/unicodeobject.h"
       value <= 0xffU
# 296 "./cpython/Include/cpython/unicodeobject.h" 3 4
       ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 296, 
# 296 "./cpython/Include/cpython/unicodeobject.h"
       "value <= 0xffU"
# 296 "./cpython/Include/cpython/unicodeobject.h" 3 4
       ) : (void)0)
# 296 "./cpython/Include/cpython/unicodeobject.h"
                             ;
        ((Py_UCS1*)(data))[index] = ((Py_UCS1)(value));
    }
    else if (kind == PyUnicode_2BYTE_KIND) {
        
# 300 "./cpython/Include/cpython/unicodeobject.h" 3 4
       (__builtin_expect(!(
# 300 "./cpython/Include/cpython/unicodeobject.h"
       value <= 0xffffU
# 300 "./cpython/Include/cpython/unicodeobject.h" 3 4
       ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 300, 
# 300 "./cpython/Include/cpython/unicodeobject.h"
       "value <= 0xffffU"
# 300 "./cpython/Include/cpython/unicodeobject.h" 3 4
       ) : (void)0)
# 300 "./cpython/Include/cpython/unicodeobject.h"
                               ;
        ((Py_UCS2*)(data))[index] = ((Py_UCS2)(value));
    }
    else {
        
# 304 "./cpython/Include/cpython/unicodeobject.h" 3 4
       (__builtin_expect(!(
# 304 "./cpython/Include/cpython/unicodeobject.h"
       kind == PyUnicode_4BYTE_KIND
# 304 "./cpython/Include/cpython/unicodeobject.h" 3 4
       ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 304, 
# 304 "./cpython/Include/cpython/unicodeobject.h"
       "kind == PyUnicode_4BYTE_KIND"
# 304 "./cpython/Include/cpython/unicodeobject.h" 3 4
       ) : (void)0)
# 304 "./cpython/Include/cpython/unicodeobject.h"
                                           ;
        
# 305 "./cpython/Include/cpython/unicodeobject.h" 3 4
       (__builtin_expect(!(
# 305 "./cpython/Include/cpython/unicodeobject.h"
       value <= 0x10ffffU
# 305 "./cpython/Include/cpython/unicodeobject.h" 3 4
       ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 305, 
# 305 "./cpython/Include/cpython/unicodeobject.h"
       "value <= 0x10ffffU"
# 305 "./cpython/Include/cpython/unicodeobject.h" 3 4
       ) : (void)0)
# 305 "./cpython/Include/cpython/unicodeobject.h"
                                 ;
        ((Py_UCS4*)(data))[index] = value;
    }
}






static inline Py_UCS4 PyUnicode_READ(int kind,
                                     const void *data, Py_ssize_t index)
{
    
# 318 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 318 "./cpython/Include/cpython/unicodeobject.h"
   index >= 0
# 318 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 318, 
# 318 "./cpython/Include/cpython/unicodeobject.h"
   "index >= 0"
# 318 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 318 "./cpython/Include/cpython/unicodeobject.h"
                     ;
    if (kind == PyUnicode_1BYTE_KIND) {
        return ((const Py_UCS1*)(data))[index];
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return ((const Py_UCS2*)(data))[index];
    }
    
# 325 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 325 "./cpython/Include/cpython/unicodeobject.h"
   kind == PyUnicode_4BYTE_KIND
# 325 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 325, 
# 325 "./cpython/Include/cpython/unicodeobject.h"
   "kind == PyUnicode_4BYTE_KIND"
# 325 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 325 "./cpython/Include/cpython/unicodeobject.h"
                                       ;
    return ((const Py_UCS4*)(data))[index];
}
# 337 "./cpython/Include/cpython/unicodeobject.h"
static inline Py_UCS4 PyUnicode_READ_CHAR(PyObject *unicode, Py_ssize_t index)
{
    int kind;

    
# 341 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 341 "./cpython/Include/cpython/unicodeobject.h"
   index >= 0
# 341 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 341, 
# 341 "./cpython/Include/cpython/unicodeobject.h"
   "index >= 0"
# 341 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 341 "./cpython/Include/cpython/unicodeobject.h"
                     ;

    
# 343 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 343 "./cpython/Include/cpython/unicodeobject.h"
   index <= PyUnicode_GET_LENGTH(((PyObject*)((unicode))))
# 343 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 343, 
# 343 "./cpython/Include/cpython/unicodeobject.h"
   "index <= PyUnicode_GET_LENGTH(unicode)"
# 343 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 343 "./cpython/Include/cpython/unicodeobject.h"
                                                 ;

    kind = ((void)0, ((
# 345 "./cpython/Include/cpython/unicodeobject.h" 3 4
          (__builtin_expect(!(
# 345 "./cpython/Include/cpython/unicodeobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((unicode))))), ((1UL << 28)))
# 345 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 345, 
# 345 "./cpython/Include/cpython/unicodeobject.h"
          "PyUnicode_Check(unicode)"
# 345 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ) : (void)0)
# 345 "./cpython/Include/cpython/unicodeobject.h"
          , ((PyASCIIObject*)((unicode))))->state.kind));
    if (kind == PyUnicode_1BYTE_KIND) {
        return ((Py_UCS1*)(PyUnicode_DATA(((PyObject*)((unicode))))))[index];
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return ((Py_UCS2*)(PyUnicode_DATA(((PyObject*)((unicode))))))[index];
    }
    
# 352 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 352 "./cpython/Include/cpython/unicodeobject.h"
   kind == PyUnicode_4BYTE_KIND
# 352 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 352, 
# 352 "./cpython/Include/cpython/unicodeobject.h"
   "kind == PyUnicode_4BYTE_KIND"
# 352 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 352 "./cpython/Include/cpython/unicodeobject.h"
                                       ;
    return ((Py_UCS4*)(PyUnicode_DATA(((PyObject*)((unicode))))))[index];
}






static inline Py_UCS4 PyUnicode_MAX_CHAR_VALUE(PyObject *op)
{
    int kind;

    if (PyUnicode_IS_ASCII(((PyObject*)((op))))) {
        return 0x7fU;
    }

    kind = ((void)0, ((
# 369 "./cpython/Include/cpython/unicodeobject.h" 3 4
          (__builtin_expect(!(
# 369 "./cpython/Include/cpython/unicodeobject.h"
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
# 369 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 369, 
# 369 "./cpython/Include/cpython/unicodeobject.h"
          "PyUnicode_Check(op)"
# 369 "./cpython/Include/cpython/unicodeobject.h" 3 4
          ) : (void)0)
# 369 "./cpython/Include/cpython/unicodeobject.h"
          , ((PyASCIIObject*)((op))))->state.kind));
    if (kind == PyUnicode_1BYTE_KIND) {
       return 0xffU;
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return 0xffffU;
    }
    
# 376 "./cpython/Include/cpython/unicodeobject.h" 3 4
   (__builtin_expect(!(
# 376 "./cpython/Include/cpython/unicodeobject.h"
   kind == PyUnicode_4BYTE_KIND
# 376 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 376, 
# 376 "./cpython/Include/cpython/unicodeobject.h"
   "kind == PyUnicode_4BYTE_KIND"
# 376 "./cpython/Include/cpython/unicodeobject.h" 3 4
   ) : (void)0)
# 376 "./cpython/Include/cpython/unicodeobject.h"
                                       ;
    return 0x10ffffU;
}
# 389 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* PyUnicode_New(
    Py_ssize_t size,
    Py_UCS4 maxchar
    );


static inline int PyUnicode_READY(PyObject* _unused_op __attribute__((unused)))
{
    return 0;
}



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_Copy(
    PyObject *unicode
    );
# 424 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_CopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );




__attribute__ ((visibility ("default"))) void _PyUnicode_FastCopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );
# 451 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyUnicode_Fill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );



__attribute__ ((visibility ("default"))) void _PyUnicode_FastFill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );



__attribute__ ((visibility ("default"))) PyObject* PyUnicode_FromKindAndData(
    int kind,
    const void *buffer,
    Py_ssize_t size);



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_FromASCII(
    const char *buffer,
    Py_ssize_t size);



__attribute__ ((visibility ("default"))) Py_UCS4 _PyUnicode_FindMaxChar (
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t end);



typedef struct {
    PyObject *buffer;
    void *data;
    int kind;
    Py_UCS4 maxchar;
    Py_ssize_t size;
    Py_ssize_t pos;


    Py_ssize_t min_length;


    Py_UCS4 min_char;


    unsigned char overallocate;



    unsigned char readonly;
} _PyUnicodeWriter ;






__attribute__ ((visibility ("default"))) void
_PyUnicodeWriter_Init(_PyUnicodeWriter *writer);
# 533 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_PrepareInternal(_PyUnicodeWriter *writer,
                                 Py_ssize_t length, Py_UCS4 maxchar);
# 549 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_PrepareKindInternal(_PyUnicodeWriter *writer,
                                     int kind);



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteChar(_PyUnicodeWriter *writer,
    Py_UCS4 ch
    );



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteStr(_PyUnicodeWriter *writer,
    PyObject *str
    );



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteSubstring(_PyUnicodeWriter *writer,
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end
    );



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteASCIIString(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );



__attribute__ ((visibility ("default"))) int
_PyUnicodeWriter_WriteLatin1String(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );




__attribute__ ((visibility ("default"))) PyObject *
_PyUnicodeWriter_Finish(_PyUnicodeWriter *writer);


__attribute__ ((visibility ("default"))) void
_PyUnicodeWriter_Dealloc(_PyUnicodeWriter *writer);




__attribute__ ((visibility ("default"))) int _PyUnicode_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
# 627 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) const char * PyUnicode_AsUTF8(PyObject *unicode);





__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_EncodeUTF7(
    PyObject *unicode,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_AsUTF8String(
    PyObject *unicode,
    const char *errors);



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_EncodeUTF32(
    PyObject *object,
    const char *errors,
    int byteorder
    );
# 670 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_EncodeUTF16(
    PyObject* unicode,
    const char *errors,
    int byteorder
    );




__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_DecodeUnicodeEscapeStateful(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed
);


__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_DecodeUnicodeEscapeInternal(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed,
        const char **first_invalid_escape


);




__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_DecodeRawUnicodeEscapeStateful(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed
);



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_AsLatin1String(
    PyObject* unicode,
    const char* errors);



__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_AsASCIIString(
    PyObject* unicode,
    const char* errors);
# 731 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_EncodeCharmap(
    PyObject *unicode,
    PyObject *mapping,
    const char *errors
    );
# 746 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_TransformDecimalAndSpaceToASCII(
    PyObject *unicode
    );



__attribute__ ((visibility ("default"))) PyObject * _PyUnicode_JoinArray(
    PyObject *separator,
    PyObject *const *items,
    Py_ssize_t seqlen
    );




__attribute__ ((visibility ("default"))) int _PyUnicode_EqualToASCIIId(
    PyObject *left,
    _Py_Identifier *right
    );




__attribute__ ((visibility ("default"))) int _PyUnicode_EqualToASCIIString(
    PyObject *left,
    const char *right
    );


__attribute__ ((visibility ("default"))) PyObject * _PyUnicode_XStrip(
    PyObject *self,
    int striptype,
    PyObject *sepobj
    );




__attribute__ ((visibility ("default"))) Py_ssize_t _PyUnicode_InsertThousandsGrouping(
    _PyUnicodeWriter *writer,
    Py_ssize_t n_buffer,
    PyObject *digits,
    Py_ssize_t d_pos,
    Py_ssize_t n_digits,
    Py_ssize_t min_width,
    const char *grouping,
    PyObject *thousands_sep,
    Py_UCS4 *maxchar);
# 804 "./cpython/Include/cpython/unicodeobject.h"
__attribute__ ((visibility ("default"))) int _PyUnicode_IsLowercase(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsUppercase(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsTitlecase(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsXidStart(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsXidContinue(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsWhitespace(
    const Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsLinebreak(
    const Py_UCS4 ch
    );

                         __attribute__ ((visibility ("default"))) Py_UCS4 _PyUnicode_ToLowercase(
    Py_UCS4 ch
    );

                         __attribute__ ((visibility ("default"))) Py_UCS4 _PyUnicode_ToUppercase(
    Py_UCS4 ch
    );

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) Py_UCS4 _PyUnicode_ToTitlecase(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToLowerFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToTitleFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToUpperFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToFoldedFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsCaseIgnorable(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsCased(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToDecimalDigit(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_ToDigit(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) double _PyUnicode_ToNumeric(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsDecimalDigit(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsDigit(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsNumeric(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsPrintable(
    Py_UCS4 ch
    );

__attribute__ ((visibility ("default"))) int _PyUnicode_IsAlpha(
    Py_UCS4 ch
    );


extern __attribute__ ((visibility ("default"))) const unsigned char _Py_ascii_whitespace[];





static inline int Py_UNICODE_ISSPACE(Py_UCS4 ch) {
    if (ch < 128) {
        return _Py_ascii_whitespace[ch];
    }
    return _PyUnicode_IsWhitespace(ch);
}
# 938 "./cpython/Include/cpython/unicodeobject.h"
static inline int Py_UNICODE_ISALNUM(Py_UCS4 ch) {
   return (_PyUnicode_IsAlpha(ch)
           || _PyUnicode_IsDecimalDigit(ch)
           || _PyUnicode_IsDigit(ch)
           || _PyUnicode_IsNumeric(ch));
}




__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_FormatLong(PyObject *, int, int, int);


__attribute__ ((visibility ("default"))) PyObject* _PyUnicode_FromId(_Py_Identifier*);



__attribute__ ((visibility ("default"))) int _PyUnicode_EQ(PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) int _PyUnicode_Equal(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) int _PyUnicode_WideCharString_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyUnicode_WideCharString_Opt_Converter(PyObject *, void *);

__attribute__ ((visibility ("default"))) Py_ssize_t _PyUnicode_ScanIdentifier(PyObject *);
# 1014 "./cpython/Include/unicodeobject.h" 2
# 56 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/initconfig.h" 1
# 10 "./cpython/Include/cpython/initconfig.h"
typedef struct {
    enum {
        _PyStatus_TYPE_OK=0,
        _PyStatus_TYPE_ERROR=1,
        _PyStatus_TYPE_EXIT=2
    } _type;
    const char *func;
    const char *err_msg;
    int exitcode;
} PyStatus;

__attribute__ ((visibility ("default"))) PyStatus PyStatus_Ok(void);
__attribute__ ((visibility ("default"))) PyStatus PyStatus_Error(const char *err_msg);
__attribute__ ((visibility ("default"))) PyStatus PyStatus_NoMemory(void);
__attribute__ ((visibility ("default"))) PyStatus PyStatus_Exit(int exitcode);
__attribute__ ((visibility ("default"))) int PyStatus_IsError(PyStatus err);
__attribute__ ((visibility ("default"))) int PyStatus_IsExit(PyStatus err);
__attribute__ ((visibility ("default"))) int PyStatus_Exception(PyStatus err);
__attribute__ ((visibility ("default"))) PyObject * _PyErr_SetFromPyStatus(PyStatus status);



typedef struct {


    Py_ssize_t length;
    wchar_t **items;
} PyWideStringList;

__attribute__ ((visibility ("default"))) PyStatus PyWideStringList_Append(PyWideStringList *list,
    const wchar_t *item);
__attribute__ ((visibility ("default"))) PyStatus PyWideStringList_Insert(PyWideStringList *list,
    Py_ssize_t index,
    const wchar_t *item);




typedef struct PyPreConfig {
    int _config_init;



    int parse_argv;






    int isolated;




    int use_environment;



    int configure_locale;
# 82 "./cpython/Include/cpython/initconfig.h"
    int coerce_c_locale;







    int coerce_c_locale_warn;
# 115 "./cpython/Include/cpython/initconfig.h"
    int utf8_mode;





    int dev_mode;



    int allocator;
} PyPreConfig;

__attribute__ ((visibility ("default"))) void PyPreConfig_InitPythonConfig(PyPreConfig *config);
__attribute__ ((visibility ("default"))) void PyPreConfig_InitIsolatedConfig(PyPreConfig *config);





typedef struct PyConfig {
    int _config_init;

    int isolated;
    int use_environment;
    int dev_mode;
    int install_signal_handlers;
    int use_hash_seed;
    unsigned long hash_seed;
    int faulthandler;
    int tracemalloc;
    int perf_profiling;
    int import_time;
    int code_debug_ranges;
    int show_ref_count;
    int dump_refs;
    wchar_t *dump_refs_file;
    int malloc_stats;
    wchar_t *filesystem_encoding;
    wchar_t *filesystem_errors;
    wchar_t *pycache_prefix;
    int parse_argv;
    PyWideStringList orig_argv;
    PyWideStringList argv;
    PyWideStringList xoptions;
    PyWideStringList warnoptions;
    int site_import;
    int bytes_warning;
    int warn_default_encoding;
    int inspect;
    int interactive;
    int optimization_level;
    int parser_debug;
    int write_bytecode;
    int verbose;
    int quiet;
    int user_site_directory;
    int configure_c_stdio;
    int buffered_stdio;
    wchar_t *stdio_encoding;
    wchar_t *stdio_errors;



    wchar_t *check_hash_pycs_mode;
    int use_frozen_modules;
    int safe_path;
    int int_max_str_digits;


    int pathconfig_warnings;
    wchar_t *program_name;
    wchar_t *pythonpath_env;
    wchar_t *home;
    wchar_t *platlibdir;


    int module_search_paths_set;
    PyWideStringList module_search_paths;
    wchar_t *stdlib_dir;
    wchar_t *executable;
    wchar_t *base_executable;
    wchar_t *prefix;
    wchar_t *base_prefix;
    wchar_t *exec_prefix;
    wchar_t *base_exec_prefix;


    int skip_source_first_line;
    wchar_t *run_command;
    wchar_t *run_module;
    wchar_t *run_filename;





    int _install_importlib;


    int _init_main;


    int _is_python_build;
} PyConfig;

__attribute__ ((visibility ("default"))) void PyConfig_InitPythonConfig(PyConfig *config);
__attribute__ ((visibility ("default"))) void PyConfig_InitIsolatedConfig(PyConfig *config);
__attribute__ ((visibility ("default"))) void PyConfig_Clear(PyConfig *);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetString(
    PyConfig *config,
    wchar_t **config_str,
    const wchar_t *str);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetBytesString(
    PyConfig *config,
    wchar_t **config_str,
    const char *str);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_Read(PyConfig *config);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetBytesArgv(
    PyConfig *config,
    Py_ssize_t argc,
    char * const *argv);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetArgv(PyConfig *config,
    Py_ssize_t argc,
    wchar_t * const *argv);
__attribute__ ((visibility ("default"))) PyStatus PyConfig_SetWideStringList(PyConfig *config,
    PyWideStringList *list,
    Py_ssize_t length, wchar_t **items);







__attribute__ ((visibility ("default"))) void Py_GetArgcArgv(int *argc, wchar_t ***argv);
# 57 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pystate.h" 1
# 14 "./cpython/Include/pystate.h"
__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_New(void);
__attribute__ ((visibility ("default"))) void PyInterpreterState_Clear(PyInterpreterState *);
__attribute__ ((visibility ("default"))) void PyInterpreterState_Delete(PyInterpreterState *);
# 26 "./cpython/Include/pystate.h"
__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_Get(void);




__attribute__ ((visibility ("default"))) PyObject * PyInterpreterState_GetDict(PyInterpreterState *);




__attribute__ ((visibility ("default"))) int64_t PyInterpreterState_GetID(PyInterpreterState *);






__attribute__ ((visibility ("default"))) int PyState_AddModule(PyObject*, PyModuleDef*);
__attribute__ ((visibility ("default"))) int PyState_RemoveModule(PyModuleDef*);

__attribute__ ((visibility ("default"))) PyObject* PyState_FindModule(PyModuleDef*);

__attribute__ ((visibility ("default"))) PyThreadState * PyThreadState_New(PyInterpreterState *);
__attribute__ ((visibility ("default"))) void PyThreadState_Clear(PyThreadState *);
__attribute__ ((visibility ("default"))) void PyThreadState_Delete(PyThreadState *);
# 60 "./cpython/Include/pystate.h"
__attribute__ ((visibility ("default"))) PyThreadState * PyThreadState_Get(void);




__attribute__ ((visibility ("default"))) PyThreadState * PyThreadState_Swap(PyThreadState *);
__attribute__ ((visibility ("default"))) PyObject * PyThreadState_GetDict(void);
__attribute__ ((visibility ("default"))) int PyThreadState_SetAsyncExc(unsigned long, PyObject *);



__attribute__ ((visibility ("default"))) PyInterpreterState* PyThreadState_GetInterpreter(PyThreadState *tstate);
__attribute__ ((visibility ("default"))) PyFrameObject* PyThreadState_GetFrame(PyThreadState *tstate);
__attribute__ ((visibility ("default"))) uint64_t PyThreadState_GetID(PyThreadState *tstate);


typedef
    enum {PyGILState_LOCKED, PyGILState_UNLOCKED}
        PyGILState_STATE;
# 102 "./cpython/Include/pystate.h"
__attribute__ ((visibility ("default"))) PyGILState_STATE PyGILState_Ensure(void);
# 112 "./cpython/Include/pystate.h"
__attribute__ ((visibility ("default"))) void PyGILState_Release(PyGILState_STATE);







__attribute__ ((visibility ("default"))) PyThreadState * PyGILState_GetThisThreadState(void);




# 1 "./cpython/Include/cpython/pystate.h" 1
# 34 "./cpython/Include/cpython/pystate.h"
__attribute__ ((visibility ("default"))) int _PyInterpreterState_HasFeature(PyInterpreterState *interp,
                                               unsigned long feature);




__attribute__ ((visibility ("default"))) int _PyInterpreterState_RequiresIDRef(PyInterpreterState *);
__attribute__ ((visibility ("default"))) void _PyInterpreterState_RequireIDRef(PyInterpreterState *, int);

__attribute__ ((visibility ("default"))) PyObject * _PyInterpreterState_GetMainModule(PyInterpreterState *);





typedef int (*Py_tracefunc)(PyObject *, PyFrameObject *, int, PyObject *);
# 67 "./cpython/Include/cpython/pystate.h"
typedef struct _PyCFrame {
# 79 "./cpython/Include/cpython/pystate.h"
    struct _PyInterpreterFrame *current_frame;
    struct _PyCFrame *previous;
} _PyCFrame;

typedef struct _err_stackitem {
# 97 "./cpython/Include/cpython/pystate.h"
    PyObject *exc_value;

    struct _err_stackitem *previous_item;

} _PyErr_StackItem;

typedef struct _stack_chunk {
    struct _stack_chunk *previous;
    size_t size;
    size_t top;
    PyObject * data[1];
} _PyStackChunk;

struct _py_trashcan {
    int delete_nesting;
    PyObject *delete_later;
};

struct _ts {


    PyThreadState *prev;
    PyThreadState *next;
    PyInterpreterState *interp;

    struct {




        unsigned int initialized:1;


        unsigned int bound:1;

        unsigned int unbound:1;

        unsigned int bound_gilstate:1;

        unsigned int active:1;


        unsigned int finalizing:1;
        unsigned int cleared:1;
        unsigned int finalized:1;


        unsigned int :24;
    } _status;

    int py_recursion_remaining;
    int py_recursion_limit;

    int c_recursion_remaining;
    int recursion_headroom;




    int tracing;
    int what_event;



    _PyCFrame *cframe;

    Py_tracefunc c_profilefunc;
    Py_tracefunc c_tracefunc;
    PyObject *c_profileobj;
    PyObject *c_traceobj;


    PyObject *current_exception;




    _PyErr_StackItem *exc_info;

    PyObject *dict;

    int gilstate_counter;

    PyObject *async_exc;
    unsigned long thread_id;





    unsigned long native_thread_id;

    struct _py_trashcan trash;
# 214 "./cpython/Include/cpython/pystate.h"
    void (*on_delete)(void *);
    void *on_delete_data;

    int coroutine_origin_tracking_depth;

    PyObject *async_gen_firstiter;
    PyObject *async_gen_finalizer;

    PyObject *context;
    uint64_t context_ver;


    uint64_t id;

    _PyStackChunk *datastack_chunk;
    PyObject **datastack_top;
    PyObject **datastack_limit;
# 245 "./cpython/Include/cpython/pystate.h"
    _PyErr_StackItem exc_state;


    _PyCFrame root_cframe;
};
# 282 "./cpython/Include/cpython/pystate.h"
__attribute__ ((visibility ("default"))) PyThreadState * _PyThreadState_Prealloc(PyInterpreterState *);



__attribute__ ((visibility ("default"))) PyThreadState * _PyThreadState_UncheckedGet(void);

__attribute__ ((visibility ("default"))) PyObject * _PyThreadState_GetDict(PyThreadState *tstate);


__attribute__ ((visibility ("default"))) void PyThreadState_EnterTracing(PyThreadState *tstate);



__attribute__ ((visibility ("default"))) void PyThreadState_LeaveTracing(PyThreadState *tstate);







__attribute__ ((visibility ("default"))) int PyGILState_Check(void);
# 312 "./cpython/Include/cpython/pystate.h"
__attribute__ ((visibility ("default"))) PyInterpreterState * _PyGILState_GetInterpreterStateUnsafe(void);




__attribute__ ((visibility ("default"))) PyObject * _PyThread_CurrentFrames(void);




__attribute__ ((visibility ("default"))) PyObject * _PyThread_CurrentExceptions(void);



__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_Main(void);
__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_Head(void);
__attribute__ ((visibility ("default"))) PyInterpreterState * PyInterpreterState_Next(PyInterpreterState *);
__attribute__ ((visibility ("default"))) PyThreadState * PyInterpreterState_ThreadHead(PyInterpreterState *);
__attribute__ ((visibility ("default"))) PyThreadState * PyThreadState_Next(PyThreadState *);
__attribute__ ((visibility ("default"))) void PyThreadState_DeleteCurrent(void);



typedef PyObject* (*_PyFrameEvalFunction)(PyThreadState *tstate, struct _PyInterpreterFrame *, int);

__attribute__ ((visibility ("default"))) _PyFrameEvalFunction _PyInterpreterState_GetEvalFrameFunc(
    PyInterpreterState *interp);
__attribute__ ((visibility ("default"))) void _PyInterpreterState_SetEvalFrameFunc(
    PyInterpreterState *interp,
    _PyFrameEvalFunction eval_frame);

__attribute__ ((visibility ("default"))) const PyConfig* _PyInterpreterState_GetConfig(PyInterpreterState *interp);
# 357 "./cpython/Include/cpython/pystate.h"
__attribute__ ((visibility ("default"))) int _PyInterpreterState_GetConfigCopy(
    struct PyConfig *config);
# 375 "./cpython/Include/cpython/pystate.h"
__attribute__ ((visibility ("default"))) int _PyInterpreterState_SetConfig(
    const struct PyConfig *config);



__attribute__ ((visibility ("default"))) const PyConfig* _Py_GetConfig(void);







typedef struct _xid _PyCrossInterpreterData;

typedef PyObject *(*xid_newobjectfunc)(_PyCrossInterpreterData *);
typedef void (*xid_freefunc)(void *);

struct _xid {



    void *data;






    PyObject *obj;
# 414 "./cpython/Include/cpython/pystate.h"
    int64_t interp;




    xid_newobjectfunc new_object;
# 429 "./cpython/Include/cpython/pystate.h"
    xid_freefunc free;
};

__attribute__ ((visibility ("default"))) void _PyCrossInterpreterData_Init(
        _PyCrossInterpreterData *data,
        PyInterpreterState *interp, void *shared, PyObject *obj,
        xid_newobjectfunc new_object);
__attribute__ ((visibility ("default"))) int _PyCrossInterpreterData_InitWithSize(
        _PyCrossInterpreterData *,
        PyInterpreterState *interp, const size_t, PyObject *,
        xid_newobjectfunc);
__attribute__ ((visibility ("default"))) void _PyCrossInterpreterData_Clear(
        PyInterpreterState *, _PyCrossInterpreterData *);

__attribute__ ((visibility ("default"))) int _PyObject_GetCrossInterpreterData(PyObject *, _PyCrossInterpreterData *);
__attribute__ ((visibility ("default"))) PyObject * _PyCrossInterpreterData_NewObject(_PyCrossInterpreterData *);
__attribute__ ((visibility ("default"))) int _PyCrossInterpreterData_Release(_PyCrossInterpreterData *);

__attribute__ ((visibility ("default"))) int _PyObject_CheckCrossInterpreterData(PyObject *);



typedef int (*crossinterpdatafunc)(PyThreadState *tstate, PyObject *,
                                   _PyCrossInterpreterData *);

__attribute__ ((visibility ("default"))) int _PyCrossInterpreterData_RegisterClass(PyTypeObject *, crossinterpdatafunc);
__attribute__ ((visibility ("default"))) int _PyCrossInterpreterData_UnregisterClass(PyTypeObject *);
__attribute__ ((visibility ("default"))) crossinterpdatafunc _PyCrossInterpreterData_Lookup(PyObject *);
# 126 "./cpython/Include/pystate.h" 2
# 58 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pyerrors.h" 1
# 11 "./cpython/Include/pyerrors.h"
__attribute__ ((visibility ("default"))) void PyErr_SetNone(PyObject *);
__attribute__ ((visibility ("default"))) void PyErr_SetObject(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) void PyErr_SetString(
    PyObject *exception,
    const char *string
    );
__attribute__ ((visibility ("default"))) PyObject * PyErr_Occurred(void);
__attribute__ ((visibility ("default"))) void PyErr_Clear(void);
__attribute__ ((visibility ("default"))) void PyErr_Fetch(PyObject **, PyObject **, PyObject **);
__attribute__ ((visibility ("default"))) void PyErr_Restore(PyObject *, PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyErr_GetRaisedException(void);
__attribute__ ((visibility ("default"))) void PyErr_SetRaisedException(PyObject *);

__attribute__ ((visibility ("default"))) PyObject* PyErr_GetHandledException(void);
__attribute__ ((visibility ("default"))) void PyErr_SetHandledException(PyObject *);


__attribute__ ((visibility ("default"))) void PyErr_GetExcInfo(PyObject **, PyObject **, PyObject **);
__attribute__ ((visibility ("default"))) void PyErr_SetExcInfo(PyObject *, PyObject *, PyObject *);







__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) Py_FatalError(const char *message);


__attribute__ ((visibility ("default"))) int PyErr_GivenExceptionMatches(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) int PyErr_ExceptionMatches(PyObject *);
__attribute__ ((visibility ("default"))) void PyErr_NormalizeException(PyObject**, PyObject**, PyObject**);


__attribute__ ((visibility ("default"))) int PyException_SetTraceback(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyException_GetTraceback(PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyException_GetCause(PyObject *);
__attribute__ ((visibility ("default"))) void PyException_SetCause(PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyException_GetContext(PyObject *);
__attribute__ ((visibility ("default"))) void PyException_SetContext(PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyException_GetArgs(PyObject *);
__attribute__ ((visibility ("default"))) void PyException_SetArgs(PyObject *, PyObject *);
# 69 "./cpython/Include/pyerrors.h"
__attribute__ ((visibility ("default"))) const char * PyExceptionClass_Name(PyObject *);
# 78 "./cpython/Include/pyerrors.h"
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BaseException;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_Exception;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BaseExceptionGroup;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_StopAsyncIteration;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_StopIteration;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_GeneratorExit;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ArithmeticError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_LookupError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_AssertionError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_AttributeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BufferError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_EOFError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_FloatingPointError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_OSError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ImportError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ModuleNotFoundError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_IndexError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_KeyError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_KeyboardInterrupt;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_MemoryError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_NameError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_OverflowError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_RuntimeError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_RecursionError;

extern __attribute__ ((visibility ("default"))) PyObject * PyExc_NotImplementedError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_SyntaxError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_IndentationError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_TabError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ReferenceError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_SystemError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_SystemExit;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_TypeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnboundLocalError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeEncodeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeDecodeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeTranslateError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ValueError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ZeroDivisionError;


extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BlockingIOError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BrokenPipeError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ChildProcessError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ConnectionError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ConnectionAbortedError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ConnectionRefusedError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ConnectionResetError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_FileExistsError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_FileNotFoundError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_InterruptedError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_IsADirectoryError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_NotADirectoryError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_PermissionError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ProcessLookupError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_TimeoutError;




extern __attribute__ ((visibility ("default"))) PyObject * PyExc_EnvironmentError;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_IOError;





extern __attribute__ ((visibility ("default"))) PyObject * PyExc_Warning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UserWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_DeprecationWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_PendingDeprecationWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_SyntaxWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_RuntimeWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_FutureWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ImportWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_UnicodeWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_BytesWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_EncodingWarning;
extern __attribute__ ((visibility ("default"))) PyObject * PyExc_ResourceWarning;




__attribute__ ((visibility ("default"))) int PyErr_BadArgument(void);
__attribute__ ((visibility ("default"))) PyObject * PyErr_NoMemory(void);
__attribute__ ((visibility ("default"))) PyObject * PyErr_SetFromErrno(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyErr_SetFromErrnoWithFilenameObject(
    PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyErr_SetFromErrnoWithFilenameObjects(
    PyObject *, PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyErr_SetFromErrnoWithFilename(
    PyObject *exc,
    const char *filename
    );

__attribute__ ((visibility ("default"))) PyObject * PyErr_Format(
    PyObject *exception,
    const char *format,
    ...
    );

__attribute__ ((visibility ("default"))) PyObject * PyErr_FormatV(
    PyObject *exception,
    const char *format,
    va_list vargs);
# 215 "./cpython/Include/pyerrors.h"
__attribute__ ((visibility ("default"))) PyObject * PyErr_SetImportErrorSubclass(PyObject *, PyObject *,
    PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyErr_SetImportError(PyObject *, PyObject *,
    PyObject *);



__attribute__ ((visibility ("default"))) void PyErr_BadInternalCall(void);
__attribute__ ((visibility ("default"))) void _PyErr_BadInternalCall(const char *filename, int lineno);





__attribute__ ((visibility ("default"))) PyObject * PyErr_NewException(
    const char *name, PyObject *base, PyObject *dict);
__attribute__ ((visibility ("default"))) PyObject * PyErr_NewExceptionWithDoc(
    const char *name, const char *doc, PyObject *base, PyObject *dict);
__attribute__ ((visibility ("default"))) void PyErr_WriteUnraisable(PyObject *);



__attribute__ ((visibility ("default"))) int PyErr_CheckSignals(void);
__attribute__ ((visibility ("default"))) void PyErr_SetInterrupt(void);

__attribute__ ((visibility ("default"))) int PyErr_SetInterruptEx(int signum);



__attribute__ ((visibility ("default"))) void PyErr_SyntaxLocation(
    const char *filename,
    int lineno);
__attribute__ ((visibility ("default"))) void PyErr_SyntaxLocationEx(
    const char *filename,
    int lineno,
    int col_offset);
__attribute__ ((visibility ("default"))) PyObject * PyErr_ProgramText(
    const char *filename,
    int lineno);





__attribute__ ((visibility ("default"))) PyObject * PyUnicodeDecodeError_Create(
    const char *encoding,
    const char *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );


__attribute__ ((visibility ("default"))) PyObject * PyUnicodeEncodeError_GetEncoding(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeDecodeError_GetEncoding(PyObject *);


__attribute__ ((visibility ("default"))) PyObject * PyUnicodeEncodeError_GetObject(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeDecodeError_GetObject(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeTranslateError_GetObject(PyObject *);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_GetStart(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_GetStart(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_GetStart(PyObject *, Py_ssize_t *);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_SetStart(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_SetStart(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_SetStart(PyObject *, Py_ssize_t);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_GetEnd(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_GetEnd(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_GetEnd(PyObject *, Py_ssize_t *);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_SetEnd(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_SetEnd(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_SetEnd(PyObject *, Py_ssize_t);


__attribute__ ((visibility ("default"))) PyObject * PyUnicodeEncodeError_GetReason(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeDecodeError_GetReason(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyUnicodeTranslateError_GetReason(PyObject *);



__attribute__ ((visibility ("default"))) int PyUnicodeEncodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
__attribute__ ((visibility ("default"))) int PyUnicodeDecodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
__attribute__ ((visibility ("default"))) int PyUnicodeTranslateError_SetReason(
    PyObject *exc,
    const char *reason
    );

__attribute__ ((visibility ("default"))) int PyOS_snprintf(char *str, size_t size, const char *format, ...)
                        __attribute__((format(printf, 3, 4)));
__attribute__ ((visibility ("default"))) int PyOS_vsnprintf(char *str, size_t size, const char *format, va_list va)
                        __attribute__((format(printf, 3, 0)));



# 1 "./cpython/Include/cpython/pyerrors.h" 1
# 13 "./cpython/Include/cpython/pyerrors.h"
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
} PyBaseExceptionObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *excs;
} PyBaseExceptionGroupObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *filename;
    PyObject *lineno;
    PyObject *offset;
    PyObject *end_lineno;
    PyObject *end_offset;
    PyObject *text;
    PyObject *print_file_and_line;
} PySyntaxErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *name;
    PyObject *path;
    PyObject *name_from;
} PyImportErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *encoding;
    PyObject *object;
    Py_ssize_t start;
    Py_ssize_t end;
    PyObject *reason;
} PyUnicodeErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *code;
} PySystemExitObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *myerrno;
    PyObject *strerror;
    PyObject *filename;
    PyObject *filename2;



    Py_ssize_t written;
} PyOSErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *value;
} PyStopIterationObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *name;
} PyNameErrorObject;

typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *notes; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *obj;
    PyObject *name;
} PyAttributeErrorObject;


typedef PyOSErrorObject PyEnvironmentErrorObject;






__attribute__ ((visibility ("default"))) void _PyErr_SetKeyError(PyObject *);
__attribute__ ((visibility ("default"))) _PyErr_StackItem* _PyErr_GetTopmostException(PyThreadState *tstate);
__attribute__ ((visibility ("default"))) PyObject* _PyErr_GetHandledException(PyThreadState *);
__attribute__ ((visibility ("default"))) void _PyErr_SetHandledException(PyThreadState *, PyObject *);
__attribute__ ((visibility ("default"))) void _PyErr_GetExcInfo(PyThreadState *, PyObject **, PyObject **, PyObject **);



__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void _PyErr_ChainExceptions(PyObject *, PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) void _PyErr_ChainExceptions1(PyObject *);




__attribute__ ((visibility ("default"))) PyObject * _PyErr_FormatFromCause(
    PyObject *exception,
    const char *format,
    ...
    );



__attribute__ ((visibility ("default"))) int _PyException_AddNote(
     PyObject *exc,
     PyObject *note);

__attribute__ ((visibility ("default"))) PyObject* PyUnstable_Exc_PrepReraiseStar(
     PyObject *orig,
     PyObject *excs);



int PySignal_SetWakeupFd(int fd);
__attribute__ ((visibility ("default"))) int _PyErr_CheckSignals(void);



__attribute__ ((visibility ("default"))) void PyErr_SyntaxLocationObject(
    PyObject *filename,
    int lineno,
    int col_offset);

__attribute__ ((visibility ("default"))) void PyErr_RangedSyntaxLocationObject(
    PyObject *filename,
    int lineno,
    int col_offset,
    int end_lineno,
    int end_col_offset);

__attribute__ ((visibility ("default"))) PyObject * PyErr_ProgramTextObject(
    PyObject *filename,
    int lineno);

__attribute__ ((visibility ("default"))) PyObject * _PyErr_ProgramDecodedTextObject(
    PyObject *filename,
    int lineno,
    const char* encoding);

__attribute__ ((visibility ("default"))) PyObject * _PyUnicodeTranslateError_Create(
    PyObject *object,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );

__attribute__ ((visibility ("default"))) void _PyErr_WriteUnraisableMsg(
    const char *err_msg,
    PyObject *obj);

__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) _Py_FatalErrorFunc(
    const char *func,
    const char *message);

__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) _Py_FatalErrorFormat(
    const char *func,
    const char *format,
    ...);

extern PyObject *_PyErr_SetImportErrorWithNameFrom(
        PyObject *,
        PyObject *,
        PyObject *,
        PyObject *);
# 331 "./cpython/Include/pyerrors.h" 2
# 59 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/longobject.h" 1
# 16 "./cpython/Include/longobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromLong(long);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromUnsignedLong(unsigned long);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromSize_t(size_t);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromSsize_t(Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromDouble(double);
__attribute__ ((visibility ("default"))) long PyLong_AsLong(PyObject *);
__attribute__ ((visibility ("default"))) long PyLong_AsLongAndOverflow(PyObject *, int *);
__attribute__ ((visibility ("default"))) Py_ssize_t PyLong_AsSsize_t(PyObject *);
__attribute__ ((visibility ("default"))) size_t PyLong_AsSize_t(PyObject *);
__attribute__ ((visibility ("default"))) unsigned long PyLong_AsUnsignedLong(PyObject *);
__attribute__ ((visibility ("default"))) unsigned long PyLong_AsUnsignedLongMask(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyLong_GetInfo(void);
# 80 "./cpython/Include/longobject.h"
__attribute__ ((visibility ("default"))) double PyLong_AsDouble(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromVoidPtr(void *);
__attribute__ ((visibility ("default"))) void * PyLong_AsVoidPtr(PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyLong_FromLongLong(long long);
__attribute__ ((visibility ("default"))) PyObject * PyLong_FromUnsignedLongLong(unsigned long long);
__attribute__ ((visibility ("default"))) long long PyLong_AsLongLong(PyObject *);
__attribute__ ((visibility ("default"))) unsigned long long PyLong_AsUnsignedLongLong(PyObject *);
__attribute__ ((visibility ("default"))) unsigned long long PyLong_AsUnsignedLongLongMask(PyObject *);
__attribute__ ((visibility ("default"))) long long PyLong_AsLongLongAndOverflow(PyObject *, int *);

__attribute__ ((visibility ("default"))) PyObject * PyLong_FromString(const char *, char **, int);




__attribute__ ((visibility ("default"))) unsigned long PyOS_strtoul(const char *, char **, int);
__attribute__ ((visibility ("default"))) long PyOS_strtol(const char *, char **, int);



# 1 "./cpython/Include/cpython/longobject.h" 1




__attribute__ ((visibility ("default"))) int _PyLong_AsInt(PyObject *);

__attribute__ ((visibility ("default"))) int _PyLong_UnsignedShort_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyLong_UnsignedInt_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyLong_UnsignedLong_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyLong_UnsignedLongLong_Converter(PyObject *, void *);
__attribute__ ((visibility ("default"))) int _PyLong_Size_t_Converter(PyObject *, void *);







__attribute__ ((visibility ("default"))) double _PyLong_Frexp(PyLongObject *a, Py_ssize_t *e);

__attribute__ ((visibility ("default"))) PyObject * PyLong_FromUnicodeObject(PyObject *u, int base);
__attribute__ ((visibility ("default"))) PyObject * _PyLong_FromBytes(const char *, Py_ssize_t, int);





__attribute__ ((visibility ("default"))) int _PyLong_Sign(PyObject *v);
# 37 "./cpython/Include/cpython/longobject.h"
__attribute__ ((visibility ("default"))) size_t _PyLong_NumBits(PyObject *v);







__attribute__ ((visibility ("default"))) PyObject * _PyLong_DivmodNear(PyObject *, PyObject *);
# 60 "./cpython/Include/cpython/longobject.h"
__attribute__ ((visibility ("default"))) PyObject * _PyLong_FromByteArray(
    const unsigned char* bytes, size_t n,
    int little_endian, int is_signed);
# 83 "./cpython/Include/cpython/longobject.h"
__attribute__ ((visibility ("default"))) int _PyLong_AsByteArray(PyLongObject* v,
    unsigned char* bytes, size_t n,
    int little_endian, int is_signed);



__attribute__ ((visibility ("default"))) PyObject * _PyLong_Format(PyObject *obj, int base);


__attribute__ ((visibility ("default"))) PyObject * _PyLong_GCD(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * _PyLong_Rshift(PyObject *, size_t);
__attribute__ ((visibility ("default"))) PyObject * _PyLong_Lshift(PyObject *, size_t);


__attribute__ ((visibility ("default"))) int PyUnstable_Long_IsCompact(const PyLongObject* op);
__attribute__ ((visibility ("default"))) Py_ssize_t PyUnstable_Long_CompactValue(const PyLongObject* op);
# 102 "./cpython/Include/longobject.h" 2
# 60 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/longintrepr.h" 1
# 43 "./cpython/Include/cpython/longintrepr.h"
typedef uint32_t digit;
typedef int32_t sdigit;
typedef uint64_t twodigits;
typedef int64_t stwodigits;
# 82 "./cpython/Include/cpython/longintrepr.h"
typedef struct _PyLongValue {
    uintptr_t lv_tag;
    digit ob_digit[1];
} _PyLongValue;

struct _longobject {
    PyObject ob_base;
    _PyLongValue long_value;
};

__attribute__ ((visibility ("default"))) PyLongObject * _PyLong_New(Py_ssize_t);


__attribute__ ((visibility ("default"))) PyObject * _PyLong_Copy(PyLongObject *src);

__attribute__ ((visibility ("default"))) PyLongObject *
_PyLong_FromDigits(int negative, Py_ssize_t digit_count, digit *digits);
# 108 "./cpython/Include/cpython/longintrepr.h"
static inline int
_PyLong_IsCompact(const PyLongObject* op) {
    
# 110 "./cpython/Include/cpython/longintrepr.h" 3 4
   (__builtin_expect(!(
# 110 "./cpython/Include/cpython/longintrepr.h"
   PyType_HasFeature((op)->ob_base.ob_type, (1UL << 24))
# 110 "./cpython/Include/cpython/longintrepr.h" 3 4
   ), 0) ? __assert_rtn(__func__, "longintrepr.h", 110, 
# 110 "./cpython/Include/cpython/longintrepr.h"
   "PyType_HasFeature((op)->ob_base.ob_type, Py_TPFLAGS_LONG_SUBCLASS)"
# 110 "./cpython/Include/cpython/longintrepr.h" 3 4
   ) : (void)0)
# 110 "./cpython/Include/cpython/longintrepr.h"
                                                                             ;
    return op->long_value.lv_tag < (2 << 3);
}



static inline Py_ssize_t
_PyLong_CompactValue(const PyLongObject *op)
{
    Py_ssize_t sign;
    
# 120 "./cpython/Include/cpython/longintrepr.h" 3 4
   (__builtin_expect(!(
# 120 "./cpython/Include/cpython/longintrepr.h"
   PyType_HasFeature((op)->ob_base.ob_type, (1UL << 24))
# 120 "./cpython/Include/cpython/longintrepr.h" 3 4
   ), 0) ? __assert_rtn(__func__, "longintrepr.h", 120, 
# 120 "./cpython/Include/cpython/longintrepr.h"
   "PyType_HasFeature((op)->ob_base.ob_type, Py_TPFLAGS_LONG_SUBCLASS)"
# 120 "./cpython/Include/cpython/longintrepr.h" 3 4
   ) : (void)0)
# 120 "./cpython/Include/cpython/longintrepr.h"
                                                                             ;
    
# 121 "./cpython/Include/cpython/longintrepr.h" 3 4
   (__builtin_expect(!(
# 121 "./cpython/Include/cpython/longintrepr.h"
   _PyLong_IsCompact(op)
# 121 "./cpython/Include/cpython/longintrepr.h" 3 4
   ), 0) ? __assert_rtn(__func__, "longintrepr.h", 121, 
# 121 "./cpython/Include/cpython/longintrepr.h"
   "PyUnstable_Long_IsCompact(op)"
# 121 "./cpython/Include/cpython/longintrepr.h" 3 4
   ) : (void)0)
# 121 "./cpython/Include/cpython/longintrepr.h"
                                        ;
    sign = 1 - (op->long_value.lv_tag & 3);
    return sign * (Py_ssize_t)op->long_value.ob_digit[0];
}
# 61 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/boolobject.h" 1
# 17 "./cpython/Include/boolobject.h"
extern __attribute__ ((visibility ("default"))) PyLongObject _Py_FalseStruct;
extern __attribute__ ((visibility ("default"))) PyLongObject _Py_TrueStruct;






__attribute__ ((visibility ("default"))) int Py_IsTrue(PyObject *x);



__attribute__ ((visibility ("default"))) int Py_IsFalse(PyObject *x);







__attribute__ ((visibility ("default"))) PyObject * PyBool_FromLong(long);
# 62 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/floatobject.h" 1
# 14 "./cpython/Include/floatobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyFloat_Type;
# 31 "./cpython/Include/floatobject.h"
__attribute__ ((visibility ("default"))) double PyFloat_GetMax(void);
__attribute__ ((visibility ("default"))) double PyFloat_GetMin(void);
__attribute__ ((visibility ("default"))) PyObject* PyFloat_GetInfo(void);


__attribute__ ((visibility ("default"))) PyObject* PyFloat_FromString(PyObject*);


__attribute__ ((visibility ("default"))) PyObject* PyFloat_FromDouble(double);



__attribute__ ((visibility ("default"))) double PyFloat_AsDouble(PyObject*);



# 1 "./cpython/Include/cpython/floatobject.h" 1




typedef struct {
    PyObject ob_base;
    double ob_fval;
} PyFloatObject;






static inline double PyFloat_AS_DOUBLE(PyObject *op) {
    return (
# 16 "./cpython/Include/cpython/floatobject.h" 3 4
          (__builtin_expect(!(
# 16 "./cpython/Include/cpython/floatobject.h"
          PyObject_TypeCheck(((PyObject*)((op))), (&PyFloat_Type))
# 16 "./cpython/Include/cpython/floatobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "floatobject.h", 16, 
# 16 "./cpython/Include/cpython/floatobject.h"
          "PyFloat_Check(op)"
# 16 "./cpython/Include/cpython/floatobject.h" 3 4
          ) : (void)0)
# 16 "./cpython/Include/cpython/floatobject.h"
          , ((PyFloatObject*)(op)))->ob_fval;
}



__attribute__ ((visibility ("default"))) int PyFloat_Pack2(double x, char *p, int le);
__attribute__ ((visibility ("default"))) int PyFloat_Pack4(double x, char *p, int le);
__attribute__ ((visibility ("default"))) int PyFloat_Pack8(double x, char *p, int le);

__attribute__ ((visibility ("default"))) double PyFloat_Unpack2(const char *p, int le);
__attribute__ ((visibility ("default"))) double PyFloat_Unpack4(const char *p, int le);
__attribute__ ((visibility ("default"))) double PyFloat_Unpack8(const char *p, int le);
# 48 "./cpython/Include/floatobject.h" 2
# 63 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/complexobject.h" 1
# 11 "./cpython/Include/complexobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyComplex_Type;




__attribute__ ((visibility ("default"))) PyObject * PyComplex_FromDoubles(double real, double imag);

__attribute__ ((visibility ("default"))) double PyComplex_RealAsDouble(PyObject *op);
__attribute__ ((visibility ("default"))) double PyComplex_ImagAsDouble(PyObject *op);



# 1 "./cpython/Include/cpython/complexobject.h" 1




typedef struct {
    double real;
    double imag;
} Py_complex;



__attribute__ ((visibility ("default"))) Py_complex _Py_c_sum(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_diff(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_neg(Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_prod(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_quot(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) Py_complex _Py_c_pow(Py_complex, Py_complex);
__attribute__ ((visibility ("default"))) double _Py_c_abs(Py_complex);







typedef struct {
    PyObject ob_base;
    Py_complex cval;
} PyComplexObject;

__attribute__ ((visibility ("default"))) PyObject * PyComplex_FromCComplex(Py_complex);

__attribute__ ((visibility ("default"))) Py_complex PyComplex_AsCComplex(PyObject *op);
# 24 "./cpython/Include/complexobject.h" 2
# 64 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/rangeobject.h" 1
# 18 "./cpython/Include/rangeobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyRange_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyRangeIter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyLongRangeIter_Type;
# 65 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/memoryobject.h" 1
# 9 "./cpython/Include/memoryobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyMemoryView_Type;



__attribute__ ((visibility ("default"))) PyObject * PyMemoryView_FromObject(PyObject *base);

__attribute__ ((visibility ("default"))) PyObject * PyMemoryView_FromMemory(char *mem, Py_ssize_t size,
                                               int flags);


__attribute__ ((visibility ("default"))) PyObject * PyMemoryView_FromBuffer(const Py_buffer *info);

__attribute__ ((visibility ("default"))) PyObject * PyMemoryView_GetContiguous(PyObject *base,
                                                  int buffertype,
                                                  char order);



# 1 "./cpython/Include/cpython/memoryobject.h" 1




extern __attribute__ ((visibility ("default"))) PyTypeObject _PyManagedBuffer_Type;







typedef struct {
    PyObject ob_base;
    int flags;
    Py_ssize_t exports;
    Py_buffer master;
} _PyManagedBufferObject;
# 29 "./cpython/Include/cpython/memoryobject.h"
typedef struct {
    PyVarObject ob_base;
    _PyManagedBufferObject *mbuf;
    Py_hash_t hash;
    int flags;
    Py_ssize_t exports;
    Py_buffer view;
    PyObject *weakreflist;
    Py_ssize_t ob_array[1];
} PyMemoryViewObject;




static inline Py_buffer* PyMemoryView_GET_BUFFER(PyObject *op) {
    return (&((PyMemoryViewObject*)(op))->view);
}



static inline PyObject* PyMemoryView_GET_BASE(PyObject *op) {
    return ((PyMemoryViewObject*)(op))->view.obj;
}
# 28 "./cpython/Include/memoryobject.h" 2
# 66 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/tupleobject.h" 1
# 23 "./cpython/Include/tupleobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyTuple_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyTupleIter_Type;





__attribute__ ((visibility ("default"))) PyObject * PyTuple_New(Py_ssize_t size);
__attribute__ ((visibility ("default"))) Py_ssize_t PyTuple_Size(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyTuple_GetItem(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyTuple_SetItem(PyObject *, Py_ssize_t, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyTuple_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
__attribute__ ((visibility ("default"))) PyObject * PyTuple_Pack(Py_ssize_t, ...);



# 1 "./cpython/Include/cpython/tupleobject.h" 1




typedef struct {
    PyVarObject ob_base;



    PyObject *ob_item[1];
} PyTupleObject;

__attribute__ ((visibility ("default"))) int _PyTuple_Resize(PyObject **, Py_ssize_t);
__attribute__ ((visibility ("default"))) void _PyTuple_MaybeUntrack(PyObject *);







static inline Py_ssize_t PyTuple_GET_SIZE(PyObject *op) {
    PyTupleObject *tuple = (
# 23 "./cpython/Include/cpython/tupleobject.h" 3 4
                          (__builtin_expect(!(
# 23 "./cpython/Include/cpython/tupleobject.h"
                          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 26)))
# 23 "./cpython/Include/cpython/tupleobject.h" 3 4
                          ), 0) ? __assert_rtn(__func__, "tupleobject.h", 23, 
# 23 "./cpython/Include/cpython/tupleobject.h"
                          "PyTuple_Check(op)"
# 23 "./cpython/Include/cpython/tupleobject.h" 3 4
                          ) : (void)0)
# 23 "./cpython/Include/cpython/tupleobject.h"
                          , ((PyTupleObject*)((op))));
    return Py_SIZE(((PyObject*)((tuple))));
}





static inline void
PyTuple_SET_ITEM(PyObject *op, Py_ssize_t index, PyObject *value) {
    PyTupleObject *tuple = (
# 33 "./cpython/Include/cpython/tupleobject.h" 3 4
                          (__builtin_expect(!(
# 33 "./cpython/Include/cpython/tupleobject.h"
                          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 26)))
# 33 "./cpython/Include/cpython/tupleobject.h" 3 4
                          ), 0) ? __assert_rtn(__func__, "tupleobject.h", 33, 
# 33 "./cpython/Include/cpython/tupleobject.h"
                          "PyTuple_Check(op)"
# 33 "./cpython/Include/cpython/tupleobject.h" 3 4
                          ) : (void)0)
# 33 "./cpython/Include/cpython/tupleobject.h"
                          , ((PyTupleObject*)((op))));
    tuple->ob_item[index] = value;
}



__attribute__ ((visibility ("default"))) void _PyTuple_DebugMallocStats(FILE *out);
# 40 "./cpython/Include/tupleobject.h" 2
# 67 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/listobject.h" 1
# 20 "./cpython/Include/listobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyList_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyListIter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyListRevIter_Type;





__attribute__ ((visibility ("default"))) PyObject * PyList_New(Py_ssize_t size);
__attribute__ ((visibility ("default"))) Py_ssize_t PyList_Size(PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyList_GetItem(PyObject *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyList_SetItem(PyObject *, Py_ssize_t, PyObject *);
__attribute__ ((visibility ("default"))) int PyList_Insert(PyObject *, Py_ssize_t, PyObject *);
__attribute__ ((visibility ("default"))) int PyList_Append(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyList_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyList_SetSlice(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);

__attribute__ ((visibility ("default"))) int PyList_Sort(PyObject *);
__attribute__ ((visibility ("default"))) int PyList_Reverse(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyList_AsTuple(PyObject *);



# 1 "./cpython/Include/cpython/listobject.h" 1




typedef struct {
    PyVarObject ob_base;

    PyObject **ob_item;
# 21 "./cpython/Include/cpython/listobject.h"
    Py_ssize_t allocated;
} PyListObject;

__attribute__ ((visibility ("default"))) PyObject * _PyList_Extend(PyListObject *, PyObject *);
__attribute__ ((visibility ("default"))) void _PyList_DebugMallocStats(FILE *out);







static inline Py_ssize_t PyList_GET_SIZE(PyObject *op) {
    PyListObject *list = (
# 34 "./cpython/Include/cpython/listobject.h" 3 4
                        (__builtin_expect(!(
# 34 "./cpython/Include/cpython/listobject.h"
                        PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 25)))
# 34 "./cpython/Include/cpython/listobject.h" 3 4
                        ), 0) ? __assert_rtn(__func__, "listobject.h", 34, 
# 34 "./cpython/Include/cpython/listobject.h"
                        "PyList_Check(op)"
# 34 "./cpython/Include/cpython/listobject.h" 3 4
                        ) : (void)0)
# 34 "./cpython/Include/cpython/listobject.h"
                        , ((PyListObject*)((op))));
    return Py_SIZE(((PyObject*)((list))));
}




static inline void
PyList_SET_ITEM(PyObject *op, Py_ssize_t index, PyObject *value) {
    PyListObject *list = (
# 43 "./cpython/Include/cpython/listobject.h" 3 4
                        (__builtin_expect(!(
# 43 "./cpython/Include/cpython/listobject.h"
                        PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 25)))
# 43 "./cpython/Include/cpython/listobject.h" 3 4
                        ), 0) ? __assert_rtn(__func__, "listobject.h", 43, 
# 43 "./cpython/Include/cpython/listobject.h"
                        "PyList_Check(op)"
# 43 "./cpython/Include/cpython/listobject.h" 3 4
                        ) : (void)0)
# 43 "./cpython/Include/cpython/listobject.h"
                        , ((PyListObject*)((op))));
    list->ob_item[index] = value;
}
# 46 "./cpython/Include/listobject.h" 2
# 68 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/dictobject.h" 1
# 15 "./cpython/Include/dictobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDict_Type;





__attribute__ ((visibility ("default"))) PyObject * PyDict_New(void);
__attribute__ ((visibility ("default"))) PyObject * PyDict_GetItem(PyObject *mp, PyObject *key);
__attribute__ ((visibility ("default"))) PyObject * PyDict_GetItemWithError(PyObject *mp, PyObject *key);
__attribute__ ((visibility ("default"))) int PyDict_SetItem(PyObject *mp, PyObject *key, PyObject *item);
__attribute__ ((visibility ("default"))) int PyDict_DelItem(PyObject *mp, PyObject *key);
__attribute__ ((visibility ("default"))) void PyDict_Clear(PyObject *mp);
__attribute__ ((visibility ("default"))) int PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value);
__attribute__ ((visibility ("default"))) PyObject * PyDict_Keys(PyObject *mp);
__attribute__ ((visibility ("default"))) PyObject * PyDict_Values(PyObject *mp);
__attribute__ ((visibility ("default"))) PyObject * PyDict_Items(PyObject *mp);
__attribute__ ((visibility ("default"))) Py_ssize_t PyDict_Size(PyObject *mp);
__attribute__ ((visibility ("default"))) PyObject * PyDict_Copy(PyObject *mp);
__attribute__ ((visibility ("default"))) int PyDict_Contains(PyObject *mp, PyObject *key);


__attribute__ ((visibility ("default"))) int PyDict_Update(PyObject *mp, PyObject *other);






__attribute__ ((visibility ("default"))) int PyDict_Merge(PyObject *mp,
                             PyObject *other,
                             int override);






__attribute__ ((visibility ("default"))) int PyDict_MergeFromSeq2(PyObject *d,
                                     PyObject *seq2,
                                     int override);

__attribute__ ((visibility ("default"))) PyObject * PyDict_GetItemString(PyObject *dp, const char *key);
__attribute__ ((visibility ("default"))) int PyDict_SetItemString(PyObject *dp, const char *key, PyObject *item);
__attribute__ ((visibility ("default"))) int PyDict_DelItemString(PyObject *dp, const char *key);

__attribute__ ((visibility ("default"))) PyObject * PyObject_GenericGetDict(PyObject *, void *);




extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictKeys_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictValues_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictItems_Type;
# 79 "./cpython/Include/dictobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictIterKey_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictIterValue_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictIterItem_Type;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictRevIterKey_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictRevIterItem_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictRevIterValue_Type;




# 1 "./cpython/Include/cpython/dictobject.h" 1




typedef struct _dictkeysobject PyDictKeysObject;
typedef struct _dictvalues PyDictValues;




typedef struct {
    PyObject ob_base;


    Py_ssize_t ma_used;






    __attribute__((__deprecated__)) uint64_t ma_version_tag;


    PyDictKeysObject *ma_keys;






    PyDictValues *ma_values;
} PyDictObject;

__attribute__ ((visibility ("default"))) PyObject * _PyDict_GetItem_KnownHash(PyObject *mp, PyObject *key,
                                       Py_hash_t hash);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_GetItemWithError(PyObject *dp, PyObject *key);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_GetItemIdWithError(PyObject *dp,
                                                  _Py_Identifier *key);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_GetItemStringWithError(PyObject *, const char *);
__attribute__ ((visibility ("default"))) PyObject * PyDict_SetDefault(
    PyObject *mp, PyObject *key, PyObject *defaultobj);
__attribute__ ((visibility ("default"))) int _PyDict_SetItem_KnownHash(PyObject *mp, PyObject *key,
                                          PyObject *item, Py_hash_t hash);
__attribute__ ((visibility ("default"))) int _PyDict_DelItem_KnownHash(PyObject *mp, PyObject *key,
                                          Py_hash_t hash);
__attribute__ ((visibility ("default"))) int _PyDict_DelItemIf(PyObject *mp, PyObject *key,
                                  int (*predicate)(PyObject *value));
__attribute__ ((visibility ("default"))) int _PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, Py_hash_t *hash);


static inline Py_ssize_t PyDict_GET_SIZE(PyObject *op) {
    PyDictObject *mp;
    
# 55 "./cpython/Include/cpython/dictobject.h" 3 4
   (__builtin_expect(!(
# 55 "./cpython/Include/cpython/dictobject.h"
   PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 29)))
# 55 "./cpython/Include/cpython/dictobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "dictobject.h", 55, 
# 55 "./cpython/Include/cpython/dictobject.h"
   "PyDict_Check(op)"
# 55 "./cpython/Include/cpython/dictobject.h" 3 4
   ) : (void)0)
# 55 "./cpython/Include/cpython/dictobject.h"
                           ;
    mp = ((PyDictObject*)(op));
    return mp->ma_used;
}


__attribute__ ((visibility ("default"))) int _PyDict_Contains_KnownHash(PyObject *, PyObject *, Py_hash_t);
__attribute__ ((visibility ("default"))) int _PyDict_ContainsId(PyObject *, _Py_Identifier *);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_NewPresized(Py_ssize_t minused);
__attribute__ ((visibility ("default"))) void _PyDict_MaybeUntrack(PyObject *mp);
__attribute__ ((visibility ("default"))) int _PyDict_HasOnlyStringKeys(PyObject *mp);
__attribute__ ((visibility ("default"))) Py_ssize_t _PyDict_SizeOf(PyDictObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyDict_Pop(PyObject *, PyObject *, PyObject *);







__attribute__ ((visibility ("default"))) int _PyDict_MergeEx(PyObject *mp, PyObject *other, int override);
__attribute__ ((visibility ("default"))) int _PyDict_SetItemId(PyObject *dp, _Py_Identifier *key, PyObject *item);

__attribute__ ((visibility ("default"))) int _PyDict_DelItemId(PyObject *mp, _Py_Identifier *key);
__attribute__ ((visibility ("default"))) void _PyDict_DebugMallocStats(FILE *out);



typedef struct {
    PyObject ob_base;
    PyDictObject *dv_dict;
} _PyDictViewObject;

__attribute__ ((visibility ("default"))) PyObject * _PyDictView_New(PyObject *, PyTypeObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyDictView_Intersect(PyObject* self, PyObject *other);
# 101 "./cpython/Include/cpython/dictobject.h"
typedef enum {

    PyDict_EVENT_ADDED, PyDict_EVENT_MODIFIED, PyDict_EVENT_DELETED, PyDict_EVENT_CLONED, PyDict_EVENT_CLEARED, PyDict_EVENT_DEALLOCATED,

} PyDict_WatchEvent;




typedef int(*PyDict_WatchCallback)(PyDict_WatchEvent event, PyObject* dict, PyObject* key, PyObject* new_value);


__attribute__ ((visibility ("default"))) int PyDict_AddWatcher(PyDict_WatchCallback callback);
__attribute__ ((visibility ("default"))) int PyDict_ClearWatcher(int watcher_id);


__attribute__ ((visibility ("default"))) int PyDict_Watch(int watcher_id, PyObject* dict);
__attribute__ ((visibility ("default"))) int PyDict_Unwatch(int watcher_id, PyObject* dict);
# 91 "./cpython/Include/dictobject.h" 2
# 69 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/odictobject.h" 1
# 13 "./cpython/Include/cpython/odictobject.h"
typedef struct _odictobject PyODictObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyODict_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyODictIter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyODictKeys_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyODictItems_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyODictValues_Type;





__attribute__ ((visibility ("default"))) PyObject * PyODict_New(void);
__attribute__ ((visibility ("default"))) int PyODict_SetItem(PyObject *od, PyObject *key, PyObject *item);
__attribute__ ((visibility ("default"))) int PyODict_DelItem(PyObject *od, PyObject *key);
# 70 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/enumobject.h" 1
# 10 "./cpython/Include/enumobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyEnum_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyReversed_Type;
# 71 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/setobject.h" 1
# 9 "./cpython/Include/setobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PySet_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyFrozenSet_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PySetIter_Type;

__attribute__ ((visibility ("default"))) PyObject * PySet_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFrozenSet_New(PyObject *);

__attribute__ ((visibility ("default"))) int PySet_Add(PyObject *set, PyObject *key);
__attribute__ ((visibility ("default"))) int PySet_Clear(PyObject *set);
__attribute__ ((visibility ("default"))) int PySet_Contains(PyObject *anyset, PyObject *key);
__attribute__ ((visibility ("default"))) int PySet_Discard(PyObject *set, PyObject *key);
__attribute__ ((visibility ("default"))) PyObject * PySet_Pop(PyObject *set);
__attribute__ ((visibility ("default"))) Py_ssize_t PySet_Size(PyObject *anyset);
# 42 "./cpython/Include/setobject.h"
# 1 "./cpython/Include/cpython/setobject.h" 1
# 20 "./cpython/Include/cpython/setobject.h"
typedef struct {
    PyObject *key;
    Py_hash_t hash;
} setentry;
# 36 "./cpython/Include/cpython/setobject.h"
typedef struct {
    PyObject ob_base;

    Py_ssize_t fill;
    Py_ssize_t used;





    Py_ssize_t mask;






    setentry *table;
    Py_hash_t hash;
    Py_ssize_t finger;

    setentry smalltable[8];
    PyObject *weakreflist;
} PySetObject;




static inline Py_ssize_t PySet_GET_SIZE(PyObject *so) {
    return (
# 65 "./cpython/Include/cpython/setobject.h" 3 4
          (__builtin_expect(!(
# 65 "./cpython/Include/cpython/setobject.h"
          (Py_IS_TYPE(((PyObject*)(((so)))), (&PySet_Type)) || Py_IS_TYPE(((PyObject*)(((so)))), (&PyFrozenSet_Type)) || PyType_IsSubtype(Py_TYPE(((PyObject*)((so)))), &PySet_Type) || PyType_IsSubtype(Py_TYPE(((PyObject*)((so)))), &PyFrozenSet_Type))
# 65 "./cpython/Include/cpython/setobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "setobject.h", 65, 
# 65 "./cpython/Include/cpython/setobject.h"
          "PyAnySet_Check(so)"
# 65 "./cpython/Include/cpython/setobject.h" 3 4
          ) : (void)0)
# 65 "./cpython/Include/cpython/setobject.h"
          , ((PySetObject*)(so)))->used;
}


extern __attribute__ ((visibility ("default"))) PyObject * _PySet_Dummy;

__attribute__ ((visibility ("default"))) int _PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, Py_hash_t *hash);
__attribute__ ((visibility ("default"))) int _PySet_Update(PyObject *set, PyObject *iterable);
# 43 "./cpython/Include/setobject.h" 2
# 72 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/methodobject.h" 1
# 14 "./cpython/Include/methodobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyCFunction_Type;




typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*_PyCFunctionFast) (PyObject *, PyObject *const *, Py_ssize_t);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,
                                             PyObject *);
typedef PyObject *(*_PyCFunctionFastWithKeywords) (PyObject *,
                                                   PyObject *const *, Py_ssize_t,
                                                   PyObject *);
typedef PyObject *(*PyCMethod)(PyObject *, PyTypeObject *, PyObject *const *,
                               size_t, PyObject *);
# 48 "./cpython/Include/methodobject.h"
__attribute__ ((visibility ("default"))) PyCFunction PyCFunction_GetFunction(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyCFunction_GetSelf(PyObject *);
__attribute__ ((visibility ("default"))) int PyCFunction_GetFlags(PyObject *);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject * PyCFunction_Call(PyObject *, PyObject *, PyObject *);

struct PyMethodDef {
    const char *ml_name;
    PyCFunction ml_meth;
    int ml_flags;

    const char *ml_doc;
};




__attribute__ ((visibility ("default"))) PyObject * PyCFunction_New(PyMethodDef *, PyObject *);



__attribute__ ((visibility ("default"))) PyObject * PyCFunction_NewEx(PyMethodDef *, PyObject *,
                                         PyObject *);



__attribute__ ((visibility ("default"))) PyObject * PyCMethod_New(PyMethodDef *, PyObject *,
                                     PyObject *, PyTypeObject *);
# 125 "./cpython/Include/methodobject.h"
# 1 "./cpython/Include/cpython/methodobject.h" 1






typedef struct {
    PyObject ob_base;
    PyMethodDef *m_ml;
    PyObject *m_self;
    PyObject *m_module;
    PyObject *m_weakreflist;
    vectorcallfunc vectorcall;
} PyCFunctionObject;
# 23 "./cpython/Include/cpython/methodobject.h"
typedef struct {
    PyCFunctionObject func;
    PyTypeObject *mm_class;
} PyCMethodObject;





extern __attribute__ ((visibility ("default"))) PyTypeObject PyCMethod_Type;







static inline PyCFunction PyCFunction_GET_FUNCTION(PyObject *func) {
    return (
# 41 "./cpython/Include/cpython/methodobject.h" 3 4
          (__builtin_expect(!(
# 41 "./cpython/Include/cpython/methodobject.h"
          PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCFunction_Type))
# 41 "./cpython/Include/cpython/methodobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "methodobject.h", 41, 
# 41 "./cpython/Include/cpython/methodobject.h"
          "PyCFunction_Check(func)"
# 41 "./cpython/Include/cpython/methodobject.h" 3 4
          ) : (void)0)
# 41 "./cpython/Include/cpython/methodobject.h"
          , ((PyCFunctionObject*)((func))))->m_ml->ml_meth;
}


static inline PyObject* PyCFunction_GET_SELF(PyObject *func_obj) {
    PyCFunctionObject *func = (
# 46 "./cpython/Include/cpython/methodobject.h" 3 4
                             (__builtin_expect(!(
# 46 "./cpython/Include/cpython/methodobject.h"
                             PyObject_TypeCheck(((PyObject*)(((func_obj)))), (&PyCFunction_Type))
# 46 "./cpython/Include/cpython/methodobject.h" 3 4
                             ), 0) ? __assert_rtn(__func__, "methodobject.h", 46, 
# 46 "./cpython/Include/cpython/methodobject.h"
                             "PyCFunction_Check(func_obj)"
# 46 "./cpython/Include/cpython/methodobject.h" 3 4
                             ) : (void)0)
# 46 "./cpython/Include/cpython/methodobject.h"
                             , ((PyCFunctionObject*)((func_obj))));
    if (func->m_ml->ml_flags & 0x0020) {
        return 
# 48 "./cpython/Include/cpython/methodobject.h" 3 4
              ((void *)0)
# 48 "./cpython/Include/cpython/methodobject.h"
                      ;
    }
    return func->m_self;
}


static inline int PyCFunction_GET_FLAGS(PyObject *func) {
    return (
# 55 "./cpython/Include/cpython/methodobject.h" 3 4
          (__builtin_expect(!(
# 55 "./cpython/Include/cpython/methodobject.h"
          PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCFunction_Type))
# 55 "./cpython/Include/cpython/methodobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "methodobject.h", 55, 
# 55 "./cpython/Include/cpython/methodobject.h"
          "PyCFunction_Check(func)"
# 55 "./cpython/Include/cpython/methodobject.h" 3 4
          ) : (void)0)
# 55 "./cpython/Include/cpython/methodobject.h"
          , ((PyCFunctionObject*)((func))))->m_ml->ml_flags;
}


static inline PyTypeObject* PyCFunction_GET_CLASS(PyObject *func_obj) {
    PyCFunctionObject *func = (
# 60 "./cpython/Include/cpython/methodobject.h" 3 4
                             (__builtin_expect(!(
# 60 "./cpython/Include/cpython/methodobject.h"
                             PyObject_TypeCheck(((PyObject*)(((func_obj)))), (&PyCFunction_Type))
# 60 "./cpython/Include/cpython/methodobject.h" 3 4
                             ), 0) ? __assert_rtn(__func__, "methodobject.h", 60, 
# 60 "./cpython/Include/cpython/methodobject.h"
                             "PyCFunction_Check(func_obj)"
# 60 "./cpython/Include/cpython/methodobject.h" 3 4
                             ) : (void)0)
# 60 "./cpython/Include/cpython/methodobject.h"
                             , ((PyCFunctionObject*)((func_obj))));
    if (func->m_ml->ml_flags & 0x0200) {
        return (
# 62 "./cpython/Include/cpython/methodobject.h" 3 4
              (__builtin_expect(!(
# 62 "./cpython/Include/cpython/methodobject.h"
              PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCMethod_Type))
# 62 "./cpython/Include/cpython/methodobject.h" 3 4
              ), 0) ? __assert_rtn(__func__, "methodobject.h", 62, 
# 62 "./cpython/Include/cpython/methodobject.h"
              "PyCMethod_Check(func)"
# 62 "./cpython/Include/cpython/methodobject.h" 3 4
              ) : (void)0)
# 62 "./cpython/Include/cpython/methodobject.h"
              , ((PyCMethodObject*)((func))))->mm_class;
    }
    return 
# 64 "./cpython/Include/cpython/methodobject.h" 3 4
          ((void *)0)
# 64 "./cpython/Include/cpython/methodobject.h"
                  ;
}
# 126 "./cpython/Include/methodobject.h" 2
# 73 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/moduleobject.h" 1
# 10 "./cpython/Include/moduleobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyModule_Type;





__attribute__ ((visibility ("default"))) PyObject * PyModule_NewObject(
    PyObject *name
    );

__attribute__ ((visibility ("default"))) PyObject * PyModule_New(
    const char *name
    );
__attribute__ ((visibility ("default"))) PyObject * PyModule_GetDict(PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyModule_GetNameObject(PyObject *);

__attribute__ ((visibility ("default"))) const char * PyModule_GetName(PyObject *);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) const char * PyModule_GetFilename(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyModule_GetFilenameObject(PyObject *);

__attribute__ ((visibility ("default"))) void _PyModule_Clear(PyObject *);
__attribute__ ((visibility ("default"))) void _PyModule_ClearDict(PyObject *);
__attribute__ ((visibility ("default"))) int _PyModuleSpec_IsInitializing(PyObject *);

__attribute__ ((visibility ("default"))) PyModuleDef* PyModule_GetDef(PyObject*);
__attribute__ ((visibility ("default"))) void* PyModule_GetState(PyObject*);



__attribute__ ((visibility ("default"))) PyObject * PyModuleDef_Init(PyModuleDef*);
extern __attribute__ ((visibility ("default"))) PyTypeObject PyModuleDef_Type;


typedef struct PyModuleDef_Base {
  PyObject ob_base;






  PyObject* (*m_init)(void);




  Py_ssize_t m_index;




  PyObject* m_copy;
} PyModuleDef_Base;
# 74 "./cpython/Include/moduleobject.h"
struct PyModuleDef_Slot {
    int slot;
    void *value;
};
# 98 "./cpython/Include/moduleobject.h"
struct PyModuleDef {
  PyModuleDef_Base m_base;
  const char* m_name;
  const char* m_doc;
  Py_ssize_t m_size;
  PyMethodDef *m_methods;
  PyModuleDef_Slot *m_slots;
  traverseproc m_traverse;
  inquiry m_clear;
  freefunc m_free;
};
# 74 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/funcobject.h" 1
# 21 "./cpython/Include/cpython/funcobject.h"
typedef struct {
    PyObject *fc_globals; PyObject *fc_builtins; PyObject *fc_name; PyObject *fc_qualname; PyObject *fc_code; PyObject *fc_defaults; PyObject *fc_kwdefaults; PyObject *fc_closure;
} PyFrameConstructor;
# 36 "./cpython/Include/cpython/funcobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *func_globals; PyObject *func_builtins; PyObject *func_name; PyObject *func_qualname; PyObject *func_code; PyObject *func_defaults; PyObject *func_kwdefaults; PyObject *func_closure;
    PyObject *func_doc;
    PyObject *func_dict;
    PyObject *func_weakreflist;
    PyObject *func_module;
    PyObject *func_annotations;
    PyObject *func_typeparams;
    vectorcallfunc vectorcall;
# 54 "./cpython/Include/cpython/funcobject.h"
    uint32_t func_version;






} PyFunctionObject;



extern __attribute__ ((visibility ("default"))) PyTypeObject PyFunction_Type;



__attribute__ ((visibility ("default"))) PyObject * PyFunction_New(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_NewWithQualName(PyObject *, PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetCode(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetGlobals(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetModule(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetDefaults(PyObject *);
__attribute__ ((visibility ("default"))) int PyFunction_SetDefaults(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) void PyFunction_SetVectorcall(PyFunctionObject *, vectorcallfunc);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetKwDefaults(PyObject *);
__attribute__ ((visibility ("default"))) int PyFunction_SetKwDefaults(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetClosure(PyObject *);
__attribute__ ((visibility ("default"))) int PyFunction_SetClosure(PyObject *, PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyFunction_GetAnnotations(PyObject *);
__attribute__ ((visibility ("default"))) int PyFunction_SetAnnotations(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * _PyFunction_Vectorcall(
    PyObject *func,
    PyObject *const *stack,
    size_t nargsf,
    PyObject *kwnames);






static inline PyObject* PyFunction_GET_CODE(PyObject *func) {
    return (
# 96 "./cpython/Include/cpython/funcobject.h" 3 4
          (__builtin_expect(!(
# 96 "./cpython/Include/cpython/funcobject.h"
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
# 96 "./cpython/Include/cpython/funcobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 96, 
# 96 "./cpython/Include/cpython/funcobject.h"
          "PyFunction_Check(func)"
# 96 "./cpython/Include/cpython/funcobject.h" 3 4
          ) : (void)0)
# 96 "./cpython/Include/cpython/funcobject.h"
          , ((PyFunctionObject*)(func)))->func_code;
}


static inline PyObject* PyFunction_GET_GLOBALS(PyObject *func) {
    return (
# 101 "./cpython/Include/cpython/funcobject.h" 3 4
          (__builtin_expect(!(
# 101 "./cpython/Include/cpython/funcobject.h"
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
# 101 "./cpython/Include/cpython/funcobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 101, 
# 101 "./cpython/Include/cpython/funcobject.h"
          "PyFunction_Check(func)"
# 101 "./cpython/Include/cpython/funcobject.h" 3 4
          ) : (void)0)
# 101 "./cpython/Include/cpython/funcobject.h"
          , ((PyFunctionObject*)(func)))->func_globals;
}


static inline PyObject* PyFunction_GET_MODULE(PyObject *func) {
    return (
# 106 "./cpython/Include/cpython/funcobject.h" 3 4
          (__builtin_expect(!(
# 106 "./cpython/Include/cpython/funcobject.h"
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
# 106 "./cpython/Include/cpython/funcobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 106, 
# 106 "./cpython/Include/cpython/funcobject.h"
          "PyFunction_Check(func)"
# 106 "./cpython/Include/cpython/funcobject.h" 3 4
          ) : (void)0)
# 106 "./cpython/Include/cpython/funcobject.h"
          , ((PyFunctionObject*)(func)))->func_module;
}


static inline PyObject* PyFunction_GET_DEFAULTS(PyObject *func) {
    return (
# 111 "./cpython/Include/cpython/funcobject.h" 3 4
          (__builtin_expect(!(
# 111 "./cpython/Include/cpython/funcobject.h"
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
# 111 "./cpython/Include/cpython/funcobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 111, 
# 111 "./cpython/Include/cpython/funcobject.h"
          "PyFunction_Check(func)"
# 111 "./cpython/Include/cpython/funcobject.h" 3 4
          ) : (void)0)
# 111 "./cpython/Include/cpython/funcobject.h"
          , ((PyFunctionObject*)(func)))->func_defaults;
}


static inline PyObject* PyFunction_GET_KW_DEFAULTS(PyObject *func) {
    return (
# 116 "./cpython/Include/cpython/funcobject.h" 3 4
          (__builtin_expect(!(
# 116 "./cpython/Include/cpython/funcobject.h"
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
# 116 "./cpython/Include/cpython/funcobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 116, 
# 116 "./cpython/Include/cpython/funcobject.h"
          "PyFunction_Check(func)"
# 116 "./cpython/Include/cpython/funcobject.h" 3 4
          ) : (void)0)
# 116 "./cpython/Include/cpython/funcobject.h"
          , ((PyFunctionObject*)(func)))->func_kwdefaults;
}


static inline PyObject* PyFunction_GET_CLOSURE(PyObject *func) {
    return (
# 121 "./cpython/Include/cpython/funcobject.h" 3 4
          (__builtin_expect(!(
# 121 "./cpython/Include/cpython/funcobject.h"
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
# 121 "./cpython/Include/cpython/funcobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 121, 
# 121 "./cpython/Include/cpython/funcobject.h"
          "PyFunction_Check(func)"
# 121 "./cpython/Include/cpython/funcobject.h" 3 4
          ) : (void)0)
# 121 "./cpython/Include/cpython/funcobject.h"
          , ((PyFunctionObject*)(func)))->func_closure;
}


static inline PyObject* PyFunction_GET_ANNOTATIONS(PyObject *func) {
    return (
# 126 "./cpython/Include/cpython/funcobject.h" 3 4
          (__builtin_expect(!(
# 126 "./cpython/Include/cpython/funcobject.h"
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
# 126 "./cpython/Include/cpython/funcobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 126, 
# 126 "./cpython/Include/cpython/funcobject.h"
          "PyFunction_Check(func)"
# 126 "./cpython/Include/cpython/funcobject.h" 3 4
          ) : (void)0)
# 126 "./cpython/Include/cpython/funcobject.h"
          , ((PyFunctionObject*)(func)))->func_annotations;
}



extern __attribute__ ((visibility ("default"))) PyTypeObject PyClassMethod_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyStaticMethod_Type;

__attribute__ ((visibility ("default"))) PyObject * PyClassMethod_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyStaticMethod_New(PyObject *);
# 144 "./cpython/Include/cpython/funcobject.h"
typedef enum {

    PyFunction_EVENT_CREATE, PyFunction_EVENT_DESTROY, PyFunction_EVENT_MODIFY_CODE, PyFunction_EVENT_MODIFY_DEFAULTS, PyFunction_EVENT_MODIFY_KWDEFAULTS,

} PyFunction_WatchEvent;
# 165 "./cpython/Include/cpython/funcobject.h"
typedef int (*PyFunction_WatchCallback)(
  PyFunction_WatchEvent event,
  PyFunctionObject *func,
  PyObject *new_value);
# 177 "./cpython/Include/cpython/funcobject.h"
__attribute__ ((visibility ("default"))) int PyFunction_AddWatcher(PyFunction_WatchCallback callback);






__attribute__ ((visibility ("default"))) int PyFunction_ClearWatcher(int watcher_id);
# 75 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/classobject.h" 1
# 12 "./cpython/Include/cpython/classobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *im_func;
    PyObject *im_self;
    PyObject *im_weakreflist;
    vectorcallfunc vectorcall;
} PyMethodObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyMethod_Type;



__attribute__ ((visibility ("default"))) PyObject * PyMethod_New(PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyMethod_Function(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyMethod_Self(PyObject *);






static inline PyObject* PyMethod_GET_FUNCTION(PyObject *meth) {
    return (
# 35 "./cpython/Include/cpython/classobject.h" 3 4
          (__builtin_expect(!(
# 35 "./cpython/Include/cpython/classobject.h"
          Py_IS_TYPE(((PyObject*)(((meth)))), (&PyMethod_Type))
# 35 "./cpython/Include/cpython/classobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "classobject.h", 35, 
# 35 "./cpython/Include/cpython/classobject.h"
          "PyMethod_Check(meth)"
# 35 "./cpython/Include/cpython/classobject.h" 3 4
          ) : (void)0)
# 35 "./cpython/Include/cpython/classobject.h"
          , ((PyMethodObject*)(meth)))->im_func;
}


static inline PyObject* PyMethod_GET_SELF(PyObject *meth) {
    return (
# 40 "./cpython/Include/cpython/classobject.h" 3 4
          (__builtin_expect(!(
# 40 "./cpython/Include/cpython/classobject.h"
          Py_IS_TYPE(((PyObject*)(((meth)))), (&PyMethod_Type))
# 40 "./cpython/Include/cpython/classobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "classobject.h", 40, 
# 40 "./cpython/Include/cpython/classobject.h"
          "PyMethod_Check(meth)"
# 40 "./cpython/Include/cpython/classobject.h" 3 4
          ) : (void)0)
# 40 "./cpython/Include/cpython/classobject.h"
          , ((PyMethodObject*)(meth)))->im_self;
}


typedef struct {
    PyObject ob_base;
    PyObject *func;
} PyInstanceMethodObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyInstanceMethod_Type;



__attribute__ ((visibility ("default"))) PyObject * PyInstanceMethod_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyInstanceMethod_Function(PyObject *);







static inline PyObject* PyInstanceMethod_GET_FUNCTION(PyObject *meth) {
    return (
# 63 "./cpython/Include/cpython/classobject.h" 3 4
          (__builtin_expect(!(
# 63 "./cpython/Include/cpython/classobject.h"
          Py_IS_TYPE(((PyObject*)(((meth)))), (&PyInstanceMethod_Type))
# 63 "./cpython/Include/cpython/classobject.h" 3 4
          ), 0) ? __assert_rtn(__func__, "classobject.h", 63, 
# 63 "./cpython/Include/cpython/classobject.h"
          "PyInstanceMethod_Check(meth)"
# 63 "./cpython/Include/cpython/classobject.h" 3 4
          ) : (void)0)
# 63 "./cpython/Include/cpython/classobject.h"
          , ((PyInstanceMethodObject*)(meth)))->func;
}
# 76 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/fileobject.h" 1
# 11 "./cpython/Include/fileobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyFile_FromFd(int, const char *, const char *, int,
                                     const char *, const char *,
                                     const char *, int);
__attribute__ ((visibility ("default"))) PyObject * PyFile_GetLine(PyObject *, int);
__attribute__ ((visibility ("default"))) int PyFile_WriteObject(PyObject *, PyObject *, int);
__attribute__ ((visibility ("default"))) int PyFile_WriteString(const char *, PyObject *);
__attribute__ ((visibility ("default"))) int PyObject_AsFileDescriptor(PyObject *);




__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) const char * Py_FileSystemDefaultEncoding;

__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) const char * Py_FileSystemDefaultEncodeErrors;

__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_HasFileSystemDefaultEncoding;


__attribute__((__deprecated__)) extern __attribute__ ((visibility ("default"))) int Py_UTF8Mode;
# 42 "./cpython/Include/fileobject.h"
# 1 "./cpython/Include/cpython/fileobject.h" 1




__attribute__ ((visibility ("default"))) char * Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);
__attribute__ ((visibility ("default"))) char * _Py_UniversalNewlineFgetsWithSize(char *, int, FILE*, PyObject *, size_t*);



__attribute__ ((visibility ("default"))) PyObject * PyFile_NewStdPrinter(int);
extern __attribute__ ((visibility ("default"))) PyTypeObject PyStdPrinter_Type;

typedef PyObject * (*Py_OpenCodeHookFunction)(PyObject *, void *);

__attribute__ ((visibility ("default"))) PyObject * PyFile_OpenCode(const char *utf8path);
__attribute__ ((visibility ("default"))) PyObject * PyFile_OpenCodeObject(PyObject *path);
__attribute__ ((visibility ("default"))) int PyFile_SetOpenCodeHook(Py_OpenCodeHookFunction hook, void *userData);

__attribute__ ((visibility ("default"))) int _PyLong_FileDescriptor_Converter(PyObject *, void *);
# 43 "./cpython/Include/fileobject.h" 2
# 77 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pycapsule.h" 1
# 21 "./cpython/Include/pycapsule.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyCapsule_Type;

typedef void (*PyCapsule_Destructor)(PyObject *);




__attribute__ ((visibility ("default"))) PyObject * PyCapsule_New(
    void *pointer,
    const char *name,
    PyCapsule_Destructor destructor);

__attribute__ ((visibility ("default"))) void * PyCapsule_GetPointer(PyObject *capsule, const char *name);

__attribute__ ((visibility ("default"))) PyCapsule_Destructor PyCapsule_GetDestructor(PyObject *capsule);

__attribute__ ((visibility ("default"))) const char * PyCapsule_GetName(PyObject *capsule);

__attribute__ ((visibility ("default"))) void * PyCapsule_GetContext(PyObject *capsule);

__attribute__ ((visibility ("default"))) int PyCapsule_IsValid(PyObject *capsule, const char *name);

__attribute__ ((visibility ("default"))) int PyCapsule_SetPointer(PyObject *capsule, void *pointer);

__attribute__ ((visibility ("default"))) int PyCapsule_SetDestructor(PyObject *capsule, PyCapsule_Destructor destructor);

__attribute__ ((visibility ("default"))) int PyCapsule_SetName(PyObject *capsule, const char *name);

__attribute__ ((visibility ("default"))) int PyCapsule_SetContext(PyObject *capsule, void *context);

__attribute__ ((visibility ("default"))) void * PyCapsule_Import(
    const char *name,
    int no_block);
# 78 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/code.h" 1
# 20 "./cpython/Include/cpython/code.h"
typedef struct _Py_LocalMonitors {

    uint8_t tools[15];
} _Py_LocalMonitors;

typedef struct _Py_GlobalMonitors {
    uint8_t tools[15];
} _Py_GlobalMonitors;
# 38 "./cpython/Include/cpython/code.h"
typedef union {
    uint16_t cache;
    struct {
        uint8_t code;
        uint8_t arg;
    } op;
} _Py_CODEUNIT;






static inline _Py_CODEUNIT
_py_make_codeunit(uint8_t opcode, uint8_t oparg)
{

    _Py_CODEUNIT word;
    word.op.code = opcode;
    word.op.arg = oparg;
    return word;
}

static inline void
_py_set_opcode(_Py_CODEUNIT *word, uint8_t opcode)
{
    word->op.code = opcode;
}





typedef struct {
    PyObject *_co_code;
    PyObject *_co_varnames;
    PyObject *_co_cellvars;
    PyObject *_co_freevars;
} _PyCoCached;




typedef struct {
    uint8_t original_opcode;
    int8_t line_delta;
} _PyCoLineInstrumentationData;




typedef struct {

    _Py_LocalMonitors local_monitors;

    _Py_LocalMonitors active_monitors;

    uint8_t *tools;

    _PyCoLineInstrumentationData *lines;

    uint8_t *line_tools;


    uint8_t *per_instruction_opcodes;

    uint8_t *per_instruction_tools;
} _PyCoMonitoringData;
# 175 "./cpython/Include/cpython/code.h"
struct PyCodeObject { PyVarObject ob_base; PyObject *co_consts; PyObject *co_names; PyObject *co_exceptiontable; int co_flags; int co_argcount; int co_posonlyargcount; int co_kwonlyargcount; int co_stacksize; int co_firstlineno; int co_nlocalsplus; int co_framesize; int co_nlocals; int co_ncellvars; int co_nfreevars; uint32_t co_version; PyObject *co_localsplusnames; PyObject *co_localspluskinds; PyObject *co_filename; PyObject *co_name; PyObject *co_qualname; PyObject *co_linetable; PyObject *co_weakreflist; _PyCoCached *_co_cached; uint64_t _co_instrumentation_version; _PyCoMonitoringData *_co_monitoring; int _co_firsttraceable; void *co_extra; char co_code_adaptive[(1)]; };
# 212 "./cpython/Include/cpython/code.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyCode_Type;



static inline Py_ssize_t PyCode_GetNumFree(PyCodeObject *op) {
    
# 217 "./cpython/Include/cpython/code.h" 3 4
   (__builtin_expect(!(
# 217 "./cpython/Include/cpython/code.h"
   Py_IS_TYPE(((PyObject*)(((op)))), (&PyCode_Type))
# 217 "./cpython/Include/cpython/code.h" 3 4
   ), 0) ? __assert_rtn(__func__, "code.h", 217, 
# 217 "./cpython/Include/cpython/code.h"
   "PyCode_Check(op)"
# 217 "./cpython/Include/cpython/code.h" 3 4
   ) : (void)0)
# 217 "./cpython/Include/cpython/code.h"
                           ;
    return op->co_nfreevars;
}

static inline int PyCode_GetFirstFree(PyCodeObject *op) {
    
# 222 "./cpython/Include/cpython/code.h" 3 4
   (__builtin_expect(!(
# 222 "./cpython/Include/cpython/code.h"
   Py_IS_TYPE(((PyObject*)(((op)))), (&PyCode_Type))
# 222 "./cpython/Include/cpython/code.h" 3 4
   ), 0) ? __assert_rtn(__func__, "code.h", 222, 
# 222 "./cpython/Include/cpython/code.h"
   "PyCode_Check(op)"
# 222 "./cpython/Include/cpython/code.h" 3 4
   ) : (void)0)
# 222 "./cpython/Include/cpython/code.h"
                           ;
    return op->co_nlocalsplus - op->co_nfreevars;
}





__attribute__ ((visibility ("default"))) PyCodeObject * PyUnstable_Code_New(
        int, int, int, int, int, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, int, PyObject *,
        PyObject *);

__attribute__ ((visibility ("default"))) PyCodeObject * PyUnstable_Code_NewWithPosOnlyArgs(
        int, int, int, int, int, int, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, int, PyObject *,
        PyObject *);


__attribute__((__deprecated__)) static inline PyCodeObject *
PyCode_New(
        int a, int b, int c, int d, int e, PyObject *f, PyObject *g,
        PyObject *h, PyObject *i, PyObject *j, PyObject *k,
        PyObject *l, PyObject *m, PyObject *n, int o, PyObject *p,
        PyObject *q)
{
    return PyUnstable_Code_New(
        a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q);
}
__attribute__((__deprecated__)) static inline PyCodeObject *
PyCode_NewWithPosOnlyArgs(
        int a, int poac, int b, int c, int d, int e, PyObject *f, PyObject *g,
        PyObject *h, PyObject *i, PyObject *j, PyObject *k,
        PyObject *l, PyObject *m, PyObject *n, int o, PyObject *p,
        PyObject *q)
{
    return PyUnstable_Code_NewWithPosOnlyArgs(
        a, poac, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q);
}


__attribute__ ((visibility ("default"))) PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno);




__attribute__ ((visibility ("default"))) int PyCode_Addr2Line(PyCodeObject *, int);

__attribute__ ((visibility ("default"))) int PyCode_Addr2Location(PyCodeObject *, int, int *, int *, int *, int *);





typedef enum {

    PY_CODE_EVENT_CREATE, PY_CODE_EVENT_DESTROY,

} PyCodeEvent;
# 295 "./cpython/Include/cpython/code.h"
typedef int (*PyCode_WatchCallback)(
  PyCodeEvent event,
  PyCodeObject* co);
# 306 "./cpython/Include/cpython/code.h"
__attribute__ ((visibility ("default"))) int PyCode_AddWatcher(PyCode_WatchCallback callback);






__attribute__ ((visibility ("default"))) int PyCode_ClearWatcher(int watcher_id);


struct _opaque {
    int computed_line;
    const uint8_t *lo_next;
    const uint8_t *limit;
};

typedef struct _line_offsets {
    int ar_start;
    int ar_end;
    int ar_line;
    struct _opaque opaque;
} PyCodeAddressRange;




__attribute__ ((visibility ("default"))) int _PyCode_CheckLineNumber(int lasti, PyCodeAddressRange *bounds);
# 341 "./cpython/Include/cpython/code.h"
__attribute__ ((visibility ("default"))) PyObject* _PyCode_ConstantKey(PyObject *obj);

__attribute__ ((visibility ("default"))) PyObject* PyCode_Optimize(PyObject *code, PyObject* consts,
                                      PyObject *names, PyObject *lnotab);

__attribute__ ((visibility ("default"))) int PyUnstable_Code_GetExtra(
    PyObject *code, Py_ssize_t index, void **extra);
__attribute__ ((visibility ("default"))) int PyUnstable_Code_SetExtra(
    PyObject *code, Py_ssize_t index, void *extra);

__attribute__((__deprecated__)) static inline int
_PyCode_GetExtra(PyObject *code, Py_ssize_t index, void **extra)
{
    return PyUnstable_Code_GetExtra(code, index, extra);
}
__attribute__((__deprecated__)) static inline int
_PyCode_SetExtra(PyObject *code, Py_ssize_t index, void *extra)
{
    return PyUnstable_Code_SetExtra(code, index, extra);
}



__attribute__ ((visibility ("default"))) PyObject * PyCode_GetCode(PyCodeObject *code);

__attribute__ ((visibility ("default"))) PyObject * PyCode_GetVarnames(PyCodeObject *code);

__attribute__ ((visibility ("default"))) PyObject * PyCode_GetCellvars(PyCodeObject *code);

__attribute__ ((visibility ("default"))) PyObject * PyCode_GetFreevars(PyCodeObject *code);

typedef enum _PyCodeLocationInfoKind {

    PY_CODE_LOCATION_INFO_SHORT0 = 0,

    PY_CODE_LOCATION_INFO_ONE_LINE0 = 10,
    PY_CODE_LOCATION_INFO_ONE_LINE1 = 11,
    PY_CODE_LOCATION_INFO_ONE_LINE2 = 12,

    PY_CODE_LOCATION_INFO_NO_COLUMNS = 13,
    PY_CODE_LOCATION_INFO_LONG = 14,
    PY_CODE_LOCATION_INFO_NONE = 15
} _PyCodeLocationInfoKind;
# 79 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pyframe.h" 1
# 13 "./cpython/Include/pyframe.h"
__attribute__ ((visibility ("default"))) int PyFrame_GetLineNumber(PyFrameObject *);

__attribute__ ((visibility ("default"))) PyCodeObject * PyFrame_GetCode(PyFrameObject *frame);



# 1 "./cpython/Include/cpython/pyframe.h" 1




extern __attribute__ ((visibility ("default"))) PyTypeObject PyFrame_Type;



__attribute__ ((visibility ("default"))) PyFrameObject * PyFrame_GetBack(PyFrameObject *frame);
__attribute__ ((visibility ("default"))) PyObject * PyFrame_GetLocals(PyFrameObject *frame);

__attribute__ ((visibility ("default"))) PyObject * PyFrame_GetGlobals(PyFrameObject *frame);
__attribute__ ((visibility ("default"))) PyObject * PyFrame_GetBuiltins(PyFrameObject *frame);

__attribute__ ((visibility ("default"))) PyObject * PyFrame_GetGenerator(PyFrameObject *frame);
__attribute__ ((visibility ("default"))) int PyFrame_GetLasti(PyFrameObject *frame);
__attribute__ ((visibility ("default"))) PyObject* PyFrame_GetVar(PyFrameObject *frame, PyObject *name);
__attribute__ ((visibility ("default"))) PyObject* PyFrame_GetVarString(PyFrameObject *frame, const char *name);




struct _PyInterpreterFrame;



__attribute__ ((visibility ("default"))) PyObject * PyUnstable_InterpreterFrame_GetCode(struct _PyInterpreterFrame *frame);



__attribute__ ((visibility ("default"))) int PyUnstable_InterpreterFrame_GetLasti(struct _PyInterpreterFrame *frame);



__attribute__ ((visibility ("default"))) int PyUnstable_InterpreterFrame_GetLine(struct _PyInterpreterFrame *frame);
# 20 "./cpython/Include/pyframe.h" 2
# 80 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/traceback.h" 1
# 9 "./cpython/Include/traceback.h"
__attribute__ ((visibility ("default"))) int PyTraceBack_Here(PyFrameObject *);
__attribute__ ((visibility ("default"))) int PyTraceBack_Print(PyObject *, PyObject *);


extern __attribute__ ((visibility ("default"))) PyTypeObject PyTraceBack_Type;





# 1 "./cpython/Include/cpython/traceback.h" 1




typedef struct _traceback PyTracebackObject;

struct _traceback {
    PyObject ob_base;
    PyTracebackObject *tb_next;
    PyFrameObject *tb_frame;
    int tb_lasti;
    int tb_lineno;
};

__attribute__ ((visibility ("default"))) int _Py_DisplaySourceLine(PyObject *, PyObject *, int, int, int *, PyObject **);
__attribute__ ((visibility ("default"))) void _PyTraceback_Add(const char *, const char *, int);
# 20 "./cpython/Include/traceback.h" 2
# 81 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/sliceobject.h" 1
# 9 "./cpython/Include/sliceobject.h"
extern __attribute__ ((visibility ("default"))) PyObject _Py_EllipsisObject;
# 22 "./cpython/Include/sliceobject.h"
typedef struct {
    PyObject ob_base;
    PyObject *start, *stop, *step;
} PySliceObject;


extern __attribute__ ((visibility ("default"))) PyTypeObject PySlice_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyEllipsis_Type;



__attribute__ ((visibility ("default"))) PyObject * PySlice_New(PyObject* start, PyObject* stop,
                                  PyObject* step);

__attribute__ ((visibility ("default"))) PyObject * _PySlice_FromIndices(Py_ssize_t start, Py_ssize_t stop);
__attribute__ ((visibility ("default"))) int _PySlice_GetLongIndices(PySliceObject *self, PyObject *length,
                                 PyObject **start_ptr, PyObject **stop_ptr,
                                 PyObject **step_ptr);

__attribute__ ((visibility ("default"))) int PySlice_GetIndices(PyObject *r, Py_ssize_t length,
                                  Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
__attribute__((__deprecated__))
__attribute__ ((visibility ("default"))) int PySlice_GetIndicesEx(PyObject *r, Py_ssize_t length,
                                     Py_ssize_t *start, Py_ssize_t *stop,
                                     Py_ssize_t *step,
                                     Py_ssize_t *slicelength);







__attribute__ ((visibility ("default"))) int PySlice_Unpack(PyObject *slice,
                               Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
__attribute__ ((visibility ("default"))) Py_ssize_t PySlice_AdjustIndices(Py_ssize_t length,
                                             Py_ssize_t *start, Py_ssize_t *stop,
                                             Py_ssize_t step);
# 82 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/cellobject.h" 1
# 10 "./cpython/Include/cpython/cellobject.h"
typedef struct {
    PyObject ob_base;

    PyObject *ob_ref;
} PyCellObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyCell_Type;



__attribute__ ((visibility ("default"))) PyObject * PyCell_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyCell_Get(PyObject *);
__attribute__ ((visibility ("default"))) int PyCell_Set(PyObject *, PyObject *);

static inline PyObject* PyCell_GET(PyObject *op) {
    PyCellObject *cell;
    
# 26 "./cpython/Include/cpython/cellobject.h" 3 4
   (__builtin_expect(!(
# 26 "./cpython/Include/cpython/cellobject.h"
   Py_IS_TYPE(((PyObject*)(((op)))), (&PyCell_Type))
# 26 "./cpython/Include/cpython/cellobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "cellobject.h", 26, 
# 26 "./cpython/Include/cpython/cellobject.h"
   "PyCell_Check(op)"
# 26 "./cpython/Include/cpython/cellobject.h" 3 4
   ) : (void)0)
# 26 "./cpython/Include/cpython/cellobject.h"
                           ;
    cell = ((PyCellObject*)(op));
    return cell->ob_ref;
}


static inline void PyCell_SET(PyObject *op, PyObject *value) {
    PyCellObject *cell;
    
# 34 "./cpython/Include/cpython/cellobject.h" 3 4
   (__builtin_expect(!(
# 34 "./cpython/Include/cpython/cellobject.h"
   Py_IS_TYPE(((PyObject*)(((op)))), (&PyCell_Type))
# 34 "./cpython/Include/cpython/cellobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "cellobject.h", 34, 
# 34 "./cpython/Include/cpython/cellobject.h"
   "PyCell_Check(op)"
# 34 "./cpython/Include/cpython/cellobject.h" 3 4
   ) : (void)0)
# 34 "./cpython/Include/cpython/cellobject.h"
                           ;
    cell = ((PyCellObject*)(op));
    cell->ob_ref = value;
}
# 83 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/iterobject.h" 1







extern __attribute__ ((visibility ("default"))) PyTypeObject PySeqIter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyCallIter_Type;






__attribute__ ((visibility ("default"))) PyObject * PySeqIter_New(PyObject *);




__attribute__ ((visibility ("default"))) PyObject * PyCallIter_New(PyObject *, PyObject *);
# 84 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/genobject.h" 1
# 31 "./cpython/Include/cpython/genobject.h"
typedef struct {

    PyObject ob_base; PyObject *gi_weakreflist; PyObject *gi_name; PyObject *gi_qualname; _PyErr_StackItem gi_exc_state; PyObject *gi_origin_or_finalizer; char gi_hooks_inited; char gi_closed; char gi_running_async; int8_t gi_frame_state; PyObject *gi_iframe[1];
} PyGenObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyGen_Type;




__attribute__ ((visibility ("default"))) PyObject * PyGen_New(PyFrameObject *);
__attribute__ ((visibility ("default"))) PyObject * PyGen_NewWithQualName(PyFrameObject *,
    PyObject *name, PyObject *qualname);
__attribute__ ((visibility ("default"))) int _PyGen_SetStopIterationValue(PyObject *);
__attribute__ ((visibility ("default"))) int _PyGen_FetchStopIterationValue(PyObject **);
__attribute__ ((visibility ("default"))) void _PyGen_Finalize(PyObject *self);
__attribute__ ((visibility ("default"))) PyCodeObject * PyGen_GetCode(PyGenObject *gen);




typedef struct {
    PyObject ob_base; PyObject *cr_weakreflist; PyObject *cr_name; PyObject *cr_qualname; _PyErr_StackItem cr_exc_state; PyObject *cr_origin_or_finalizer; char cr_hooks_inited; char cr_closed; char cr_running_async; int8_t cr_frame_state; PyObject *cr_iframe[1];
} PyCoroObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyCoro_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyCoroWrapper_Type;


__attribute__ ((visibility ("default"))) PyObject * PyCoro_New(PyFrameObject *,
    PyObject *name, PyObject *qualname);




typedef struct {
    PyObject ob_base; PyObject *ag_weakreflist; PyObject *ag_name; PyObject *ag_qualname; _PyErr_StackItem ag_exc_state; PyObject *ag_origin_or_finalizer; char ag_hooks_inited; char ag_closed; char ag_running_async; int8_t ag_frame_state; PyObject *ag_iframe[1];
} PyAsyncGenObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyAsyncGen_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyAsyncGenASend_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyAsyncGenWrappedValue_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyAsyncGenAThrow_Type;

__attribute__ ((visibility ("default"))) PyObject * PyAsyncGen_New(PyFrameObject *,
    PyObject *name, PyObject *qualname);
# 85 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/descrobject.h" 1







typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);

struct PyGetSetDef {
    const char *name;
    getter get;
    setter set;
    const char *doc;
    void *closure;
};

extern __attribute__ ((visibility ("default"))) PyTypeObject PyClassMethodDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyGetSetDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyMemberDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyMethodDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyWrapperDescr_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyDictProxy_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyProperty_Type;

__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewMethod(PyTypeObject *, PyMethodDef *);
__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewClassMethod(PyTypeObject *, PyMethodDef *);
__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewMember(PyTypeObject *, PyMemberDef *);
__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewGetSet(PyTypeObject *, PyGetSetDef *);

__attribute__ ((visibility ("default"))) PyObject * PyDictProxy_New(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyWrapper_New(PyObject *, PyObject *);







struct PyMemberDef {
    const char *name;
    int type;
    Py_ssize_t offset;
    int flags;
    const char *doc;
};
# 88 "./cpython/Include/descrobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyMember_GetOne(const char *, PyMemberDef *);
__attribute__ ((visibility ("default"))) int PyMember_SetOne(char *, PyMemberDef *, PyObject *);



# 1 "./cpython/Include/cpython/descrobject.h" 1




typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args,
                                 void *wrapped);

typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args,
                                      void *wrapped, PyObject *kwds);

struct wrapperbase {
    const char *name;
    int offset;
    void *function;
    wrapperfunc wrapper;
    const char *doc;
    int flags;
    PyObject *name_strobj;
};






typedef struct {
    PyObject ob_base;
    PyTypeObject *d_type;
    PyObject *d_name;
    PyObject *d_qualname;
} PyDescrObject;






typedef struct {
    PyDescrObject d_common;
    PyMethodDef *d_method;
    vectorcallfunc vectorcall;
} PyMethodDescrObject;

typedef struct {
    PyDescrObject d_common;
    PyMemberDef *d_member;
} PyMemberDescrObject;

typedef struct {
    PyDescrObject d_common;
    PyGetSetDef *d_getset;
} PyGetSetDescrObject;

typedef struct {
    PyDescrObject d_common;
    struct wrapperbase *d_base;
    void *d_wrapped;
} PyWrapperDescrObject;

extern __attribute__ ((visibility ("default"))) PyTypeObject _PyMethodWrapper_Type;

__attribute__ ((visibility ("default"))) PyObject * PyDescr_NewWrapper(PyTypeObject *,
                                                struct wrapperbase *, void *);
__attribute__ ((visibility ("default"))) int PyDescr_IsData(PyObject *);
# 94 "./cpython/Include/descrobject.h" 2
# 86 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/genericaliasobject.h" 1







__attribute__ ((visibility ("default"))) PyObject * Py_GenericAlias(PyObject *, PyObject *);
extern __attribute__ ((visibility ("default"))) PyTypeObject Py_GenericAliasType;
# 87 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/warnings.h" 1






__attribute__ ((visibility ("default"))) int PyErr_WarnEx(
    PyObject *category,
    const char *message,
    Py_ssize_t stack_level);

__attribute__ ((visibility ("default"))) int PyErr_WarnFormat(
    PyObject *category,
    Py_ssize_t stack_level,
    const char *format,
    ...);



__attribute__ ((visibility ("default"))) int PyErr_ResourceWarning(
    PyObject *source,
    Py_ssize_t stack_level,
    const char *format,
    ...);


__attribute__ ((visibility ("default"))) int PyErr_WarnExplicit(
    PyObject *category,
    const char *message,
    const char *filename,
    int lineno,
    const char *module,
    PyObject *registry);



# 1 "./cpython/Include/cpython/warnings.h" 1




__attribute__ ((visibility ("default"))) int PyErr_WarnExplicitObject(
    PyObject *category,
    PyObject *message,
    PyObject *filename,
    int lineno,
    PyObject *module,
    PyObject *registry);

__attribute__ ((visibility ("default"))) int PyErr_WarnExplicitFormat(
    PyObject *category,
    const char *filename, int lineno,
    const char *module, PyObject *registry,
    const char *format, ...);
# 38 "./cpython/Include/warnings.h" 2
# 88 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/weakrefobject.h" 1
# 9 "./cpython/Include/weakrefobject.h"
typedef struct _PyWeakReference PyWeakReference;

extern __attribute__ ((visibility ("default"))) PyTypeObject _PyWeakref_RefType;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyWeakref_ProxyType;
extern __attribute__ ((visibility ("default"))) PyTypeObject _PyWeakref_CallableProxyType;
# 26 "./cpython/Include/weakrefobject.h"
__attribute__ ((visibility ("default"))) PyObject * PyWeakref_NewRef(PyObject *ob,
                                        PyObject *callback);
__attribute__ ((visibility ("default"))) PyObject * PyWeakref_NewProxy(PyObject *ob,
                                          PyObject *callback);
__attribute__ ((visibility ("default"))) PyObject * PyWeakref_GetObject(PyObject *ref);




# 1 "./cpython/Include/cpython/weakrefobject.h" 1







struct _PyWeakReference {
    PyObject ob_base;





    PyObject *wr_object;


    PyObject *wr_callback;




    Py_hash_t hash;






    PyWeakReference *wr_prev;
    PyWeakReference *wr_next;
    vectorcallfunc vectorcall;
};

__attribute__ ((visibility ("default"))) Py_ssize_t _PyWeakref_GetWeakrefCount(PyWeakReference *head);

__attribute__ ((visibility ("default"))) void _PyWeakref_ClearRef(PyWeakReference *self);

static inline PyObject* PyWeakref_GET_OBJECT(PyObject *ref_obj) {
    PyWeakReference *ref;
    PyObject *obj;
    
# 42 "./cpython/Include/cpython/weakrefobject.h" 3 4
   (__builtin_expect(!(
# 42 "./cpython/Include/cpython/weakrefobject.h"
   (PyObject_TypeCheck(((PyObject*)(((ref_obj)))), (&_PyWeakref_RefType)) || (Py_IS_TYPE(((PyObject*)(((ref_obj)))), (&_PyWeakref_ProxyType)) || Py_IS_TYPE(((PyObject*)(((ref_obj)))), (&_PyWeakref_CallableProxyType))))
# 42 "./cpython/Include/cpython/weakrefobject.h" 3 4
   ), 0) ? __assert_rtn(__func__, "weakrefobject.h", 42, 
# 42 "./cpython/Include/cpython/weakrefobject.h"
   "PyWeakref_Check(ref_obj)"
# 42 "./cpython/Include/cpython/weakrefobject.h" 3 4
   ) : (void)0)
# 42 "./cpython/Include/cpython/weakrefobject.h"
                                   ;
    ref = ((PyWeakReference*)(ref_obj));
    obj = ref->wr_object;






    if (Py_REFCNT(((PyObject*)((obj)))) > 0) {
        return obj;
    }
    return (&_Py_NoneStruct);
}
# 36 "./cpython/Include/weakrefobject.h" 2
# 89 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/structseq.h" 1
# 10 "./cpython/Include/structseq.h"
typedef struct PyStructSequence_Field {
    const char *name;
    const char *doc;
} PyStructSequence_Field;

typedef struct PyStructSequence_Desc {
    const char *name;
    const char *doc;
    PyStructSequence_Field *fields;
    int n_in_sequence;
} PyStructSequence_Desc;

extern __attribute__ ((visibility ("default"))) const char * const PyStructSequence_UnnamedField;


__attribute__ ((visibility ("default"))) void PyStructSequence_InitType(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);
__attribute__ ((visibility ("default"))) int PyStructSequence_InitType2(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);

__attribute__ ((visibility ("default"))) PyTypeObject* PyStructSequence_NewType(PyStructSequence_Desc *desc);

__attribute__ ((visibility ("default"))) PyObject * PyStructSequence_New(PyTypeObject* type);


typedef PyTupleObject PyStructSequence;







__attribute__ ((visibility ("default"))) void PyStructSequence_SetItem(PyObject*, Py_ssize_t, PyObject*);
__attribute__ ((visibility ("default"))) PyObject* PyStructSequence_GetItem(PyObject*, Py_ssize_t);
# 90 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/picklebufobject.h" 1
# 13 "./cpython/Include/cpython/picklebufobject.h"
extern __attribute__ ((visibility ("default"))) PyTypeObject PyPickleBuffer_Type;




__attribute__ ((visibility ("default"))) PyObject * PyPickleBuffer_FromObject(PyObject *);



__attribute__ ((visibility ("default"))) const Py_buffer * PyPickleBuffer_GetBuffer(PyObject *);

__attribute__ ((visibility ("default"))) int PyPickleBuffer_Release(PyObject *);
# 91 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/pytime.h" 1
# 63 "./cpython/Include/cpython/pytime.h"
typedef int64_t _PyTime_t;






typedef enum {


    _PyTime_ROUND_FLOOR=0,


    _PyTime_ROUND_CEILING=1,


    _PyTime_ROUND_HALF_EVEN=2,






    _PyTime_ROUND_UP=3,


    _PyTime_ROUND_TIMEOUT = _PyTime_ROUND_UP
} _PyTime_round_t;



__attribute__ ((visibility ("default"))) PyObject * _PyLong_FromTime_t(
    time_t sec);


__attribute__ ((visibility ("default"))) time_t _PyLong_AsTime_t(
    PyObject *obj);


__attribute__ ((visibility ("default"))) int _PyTime_ObjectToTime_t(
    PyObject *obj,
    time_t *sec,
    _PyTime_round_t);




__attribute__ ((visibility ("default"))) int _PyTime_ObjectToTimeval(
    PyObject *obj,
    time_t *sec,
    long *usec,
    _PyTime_round_t);




__attribute__ ((visibility ("default"))) int _PyTime_ObjectToTimespec(
    PyObject *obj,
    time_t *sec,
    long *nsec,
    _PyTime_round_t);



__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_FromSeconds(int seconds);







__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_FromNanoseconds(_PyTime_t ns);



__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_FromMicrosecondsClamp(_PyTime_t us);


__attribute__ ((visibility ("default"))) int _PyTime_FromNanosecondsObject(_PyTime_t *t,
    PyObject *obj);



__attribute__ ((visibility ("default"))) int _PyTime_FromSecondsObject(_PyTime_t *t,
    PyObject *obj,
    _PyTime_round_t round);



__attribute__ ((visibility ("default"))) int _PyTime_FromMillisecondsObject(_PyTime_t *t,
    PyObject *obj,
    _PyTime_round_t round);


__attribute__ ((visibility ("default"))) double _PyTime_AsSecondsDouble(_PyTime_t t);


__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_AsMilliseconds(_PyTime_t t,
    _PyTime_round_t round);


__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_AsMicroseconds(_PyTime_t t,
    _PyTime_round_t round);


__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_AsNanoseconds(_PyTime_t t);
# 179 "./cpython/Include/cpython/pytime.h"
__attribute__ ((visibility ("default"))) PyObject * _PyTime_AsNanosecondsObject(_PyTime_t t);




__attribute__ ((visibility ("default"))) int _PyTime_FromTimeval(_PyTime_t *tp, struct timeval *tv);






__attribute__ ((visibility ("default"))) int _PyTime_AsTimeval(_PyTime_t t,
    struct timeval *tv,
    _PyTime_round_t round);



__attribute__ ((visibility ("default"))) void _PyTime_AsTimeval_clamp(_PyTime_t t,
    struct timeval *tv,
    _PyTime_round_t round);







__attribute__ ((visibility ("default"))) int _PyTime_AsTimevalTime_t(
    _PyTime_t t,
    time_t *secs,
    int *us,
    _PyTime_round_t round);




__attribute__ ((visibility ("default"))) int _PyTime_FromTimespec(_PyTime_t *tp, struct timespec *ts);




__attribute__ ((visibility ("default"))) int _PyTime_AsTimespec(_PyTime_t t, struct timespec *ts);



__attribute__ ((visibility ("default"))) void _PyTime_AsTimespec_clamp(_PyTime_t t, struct timespec *ts);




__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_Add(_PyTime_t t1, _PyTime_t t2);




__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_MulDiv(_PyTime_t ticks,
    _PyTime_t mul,
    _PyTime_t div);


typedef struct {
    const char *implementation;
    int monotonic;
    int adjustable;
    double resolution;
} _Py_clock_info_t;
# 254 "./cpython/Include/cpython/pytime.h"
__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_GetSystemClock(void);





__attribute__ ((visibility ("default"))) int _PyTime_GetSystemClockWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);
# 274 "./cpython/Include/cpython/pytime.h"
__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_GetMonotonicClock(void);
# 284 "./cpython/Include/cpython/pytime.h"
__attribute__ ((visibility ("default"))) int _PyTime_GetMonotonicClockWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);




__attribute__ ((visibility ("default"))) int _PyTime_localtime(time_t t, struct tm *tm);



__attribute__ ((visibility ("default"))) int _PyTime_gmtime(time_t t, struct tm *tm);
# 305 "./cpython/Include/cpython/pytime.h"
__attribute__ ((visibility ("default"))) _PyTime_t _PyTime_GetPerfCounter(void);







__attribute__ ((visibility ("default"))) int _PyTime_GetPerfCounterWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);




__attribute__ ((visibility ("default"))) _PyTime_t _PyDeadline_Init(_PyTime_t timeout);



__attribute__ ((visibility ("default"))) _PyTime_t _PyDeadline_Get(_PyTime_t deadline);
# 92 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/codecs.h" 1
# 26 "./cpython/Include/codecs.h"
__attribute__ ((visibility ("default"))) int PyCodec_Register(
       PyObject *search_function
       );





__attribute__ ((visibility ("default"))) int PyCodec_Unregister(
       PyObject *search_function
       );
# 57 "./cpython/Include/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * _PyCodec_Lookup(
       const char *encoding
       );

__attribute__ ((visibility ("default"))) int _PyCodec_Forget(
       const char *encoding
       );
# 73 "./cpython/Include/codecs.h"
__attribute__ ((visibility ("default"))) int PyCodec_KnownEncoding(
       const char *encoding
       );
# 87 "./cpython/Include/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * PyCodec_Encode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 103 "./cpython/Include/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * PyCodec_Decode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
# 123 "./cpython/Include/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * _PyCodec_LookupTextEncoding(
       const char *encoding,
       const char *alternate_command
       );

__attribute__ ((visibility ("default"))) PyObject * _PyCodec_EncodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );

__attribute__ ((visibility ("default"))) PyObject * _PyCodec_DecodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );




__attribute__ ((visibility ("default"))) PyObject * _PyCodecInfo_GetIncrementalDecoder(
       PyObject *codec_info,
       const char *errors
       );

__attribute__ ((visibility ("default"))) PyObject * _PyCodecInfo_GetIncrementalEncoder(
       PyObject *codec_info,
       const char *errors
       );
# 166 "./cpython/Include/codecs.h"
__attribute__ ((visibility ("default"))) PyObject * PyCodec_Encoder(
       const char *encoding
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_Decoder(
       const char *encoding
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_IncrementalEncoder(
       const char *encoding,
       const char *errors
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_IncrementalDecoder(
       const char *encoding,
       const char *errors
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_StreamReader(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );



__attribute__ ((visibility ("default"))) PyObject * PyCodec_StreamWriter(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );
# 214 "./cpython/Include/codecs.h"
__attribute__ ((visibility ("default"))) int PyCodec_RegisterError(const char *name, PyObject *error);




__attribute__ ((visibility ("default"))) PyObject * PyCodec_LookupError(const char *name);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_StrictErrors(PyObject *exc);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_IgnoreErrors(PyObject *exc);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_ReplaceErrors(PyObject *exc);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_XMLCharRefReplaceErrors(PyObject *exc);


__attribute__ ((visibility ("default"))) PyObject * PyCodec_BackslashReplaceErrors(PyObject *exc);



__attribute__ ((visibility ("default"))) PyObject * PyCodec_NameReplaceErrors(PyObject *exc);



extern __attribute__ ((visibility ("default"))) const char * Py_hexdigits;
# 93 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pythread.h" 1



typedef void *PyThread_type_lock;







typedef enum PyLockStatus {
    PY_LOCK_FAILURE = 0,
    PY_LOCK_ACQUIRED = 1,
    PY_LOCK_INTR
} PyLockStatus;

__attribute__ ((visibility ("default"))) void PyThread_init_thread(void);
__attribute__ ((visibility ("default"))) unsigned long PyThread_start_new_thread(void (*)(void *), void *);
__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) PyThread_exit_thread(void);
__attribute__ ((visibility ("default"))) unsigned long PyThread_get_thread_ident(void);





__attribute__ ((visibility ("default"))) unsigned long PyThread_get_thread_native_id(void);


__attribute__ ((visibility ("default"))) PyThread_type_lock PyThread_allocate_lock(void);
__attribute__ ((visibility ("default"))) void PyThread_free_lock(PyThread_type_lock);
__attribute__ ((visibility ("default"))) int PyThread_acquire_lock(PyThread_type_lock, int);
# 77 "./cpython/Include/pythread.h"
__attribute__ ((visibility ("default"))) PyLockStatus PyThread_acquire_lock_timed(PyThread_type_lock,
                                                     long long microseconds,
                                                     int intr_flag);

__attribute__ ((visibility ("default"))) void PyThread_release_lock(PyThread_type_lock);

__attribute__ ((visibility ("default"))) size_t PyThread_get_stacksize(void);
__attribute__ ((visibility ("default"))) int PyThread_set_stacksize(size_t);


__attribute__ ((visibility ("default"))) PyObject* PyThread_GetInfo(void);
# 98 "./cpython/Include/pythread.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PyThread_create_key(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyThread_delete_key(int key);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PyThread_set_key_value(int key,
                                                          void *value);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void * PyThread_get_key_value(int key);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyThread_delete_key_value(int key);


__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyThread_ReInitTLS(void);






typedef struct _Py_tss_t Py_tss_t;

__attribute__ ((visibility ("default"))) Py_tss_t * PyThread_tss_alloc(void);
__attribute__ ((visibility ("default"))) void PyThread_tss_free(Py_tss_t *key);


__attribute__ ((visibility ("default"))) int PyThread_tss_is_created(Py_tss_t *key);
__attribute__ ((visibility ("default"))) int PyThread_tss_create(Py_tss_t *key);
__attribute__ ((visibility ("default"))) void PyThread_tss_delete(Py_tss_t *key);
__attribute__ ((visibility ("default"))) int PyThread_tss_set(Py_tss_t *key, void *value);
__attribute__ ((visibility ("default"))) void * PyThread_tss_get(Py_tss_t *key);




# 1 "./cpython/Include/cpython/pythread.h" 1
# 11 "./cpython/Include/cpython/pythread.h"
__attribute__ ((visibility ("default"))) int _PyThread_at_fork_reinit(PyThread_type_lock *lock);




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 1 3 4
# 56 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/sched.h" 1 3 4
# 28 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/sched.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/pthread_impl.h" 1 3 4
# 29 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/sched.h" 2 3 4







# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/sched.h" 3 4
struct sched_param { int sched_priority; char __opaque[4]; };




extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);

# 57 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 61 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 62 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 63 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 64 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 65 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 66 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 67 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 68 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 31 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 69 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4

# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 1 3 4
# 34 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 3 4
# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/qos.h" 1 3 4
# 130 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/qos.h" 3 4
enum { QOS_CLASS_USER_INTERACTIVE __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x21, QOS_CLASS_USER_INITIATED __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x19, QOS_CLASS_DEFAULT __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x15, QOS_CLASS_UTILITY __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x11, QOS_CLASS_BACKGROUND __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x09, QOS_CLASS_UNSPECIFIED __attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0))) = 0x00, }; typedef unsigned int qos_class_t
# 143 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/qos.h" 3 4
 ;
# 159 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/qos.h" 3 4

# 170 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
qos_class_t
qos_class_self(void);
# 192 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
qos_class_t
qos_class_main(void);


# 35 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 2 3 4







# 81 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
  qos_class_t __qos_class, int __relative_priority);
# 112 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 153 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
  int __relative_priority);
# 184 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_get_qos_class_np(pthread_t __pthread,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 211 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 3 4
typedef struct pthread_override_s* pthread_override_t;
# 263 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
  qos_class_t __qos_class, int __relative_priority);
# 291 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macos,introduced=10.10))) __attribute__((availability(ios,introduced=8.0)))
int
pthread_override_qos_class_end_np(pthread_override_t __override);


# 71 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4



# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_mach_port_t.h" 1 3 4
# 50 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/sys/_types/_mach_port_t.h" 3 4
typedef __darwin_mach_port_t mach_port_t;
# 75 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 2 3 4
# 105 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 3 4

# 225 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 3 4
__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_atfork(void (* )(void), void (* )(void),
  void (* )(void));

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_destroy(pthread_attr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getdetachstate(const pthread_attr_t *, int *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getschedparam(const pthread_attr_t * restrict,
  struct sched_param * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getstack(const pthread_attr_t * restrict,
  void * * restrict, size_t * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getstackaddr(const pthread_attr_t * restrict,
  void * * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_init(pthread_attr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setdetachstate(pthread_attr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setguardsize(pthread_attr_t *, size_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setinheritsched(pthread_attr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setschedparam(pthread_attr_t * restrict,
  const struct sched_param * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setschedpolicy(pthread_attr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setscope(pthread_attr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setstack(pthread_attr_t *, void *, size_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setstackaddr(pthread_attr_t *, void *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_attr_setstacksize(pthread_attr_t *, size_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_broadcast(pthread_cond_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_destroy(pthread_cond_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_init(
  pthread_cond_t * restrict,
  const pthread_condattr_t * restrict)
  __asm("_" "pthread_cond_init" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_signal(pthread_cond_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_cond_timedwait(
  pthread_cond_t * restrict, pthread_mutex_t * restrict,
  const struct timespec * restrict)
  __asm("_" "pthread_cond_timedwait" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_cond_wait(pthread_cond_t * restrict,
  pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_condattr_destroy(pthread_condattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_condattr_init(pthread_condattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_condattr_setpshared(pthread_condattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_create(pthread_t * restrict,
  const pthread_attr_t * restrict,
  void * (* )(void * ),
  void * restrict);






__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_detach(pthread_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_equal(pthread_t , pthread_t );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

void pthread_exit(void * ) __attribute__((__noreturn__));

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_getconcurrency(void);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_getschedparam(pthread_t , int * restrict,
  struct sched_param * restrict);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
void* pthread_getspecific(pthread_key_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_join(pthread_t , void * * )
  __asm("_" "pthread_join" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_key_create(pthread_key_t *, void (* )(void *));

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_key_delete(pthread_key_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutex_destroy(pthread_mutex_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutex_init(pthread_mutex_t * restrict,
  const pthread_mutexattr_t * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_mutex_lock(pthread_mutex_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_mutex_trylock(pthread_mutex_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_mutex_unlock(pthread_mutex_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.13.4))) __attribute__((availability(ios,introduced=11.3))) __attribute__((availability(watchos,introduced=4.3))) __attribute__((availability(tvos,introduced=11.3)))
int pthread_mutexattr_getpolicy_np(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_init(pthread_mutexattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_mutexattr_settype(pthread_mutexattr_t *, int);

__attribute__((availability(macos,introduced=10.7))) __attribute__((availability(ios,introduced=5.0)))
int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_once(pthread_once_t *, void (* )(void));

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlock_init(pthread_rwlock_t * restrict,
  const pthread_rwlockattr_t * restrict)
  __asm("_" "pthread_rwlock_init" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
  int * restrict);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlockattr_init(pthread_rwlockattr_t *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
pthread_t pthread_self(void);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_setcancelstate(int , int * )
  __asm("_" "pthread_setcancelstate" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_setcanceltype(int , int * )
  __asm("_" "pthread_setcanceltype" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_setconcurrency(int);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_setschedparam(pthread_t, int, const struct sched_param *);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_setspecific(pthread_key_t , const void * );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

void pthread_testcancel(void) __asm("_" "pthread_testcancel" );




__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_is_threaded_np(void);

__attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.2)))
int pthread_threadid_np(pthread_t ,__uint64_t* );


__attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.2)))
int pthread_getname_np(pthread_t,char*,size_t);

__attribute__((availability(macos,introduced=10.6))) __attribute__((availability(ios,introduced=3.2)))

int pthread_setname_np(const char*);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_main_np(void);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
mach_port_t pthread_mach_thread_np(pthread_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
size_t pthread_get_stacksize_np(pthread_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
void* pthread_get_stackaddr_np(pthread_t);


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t );


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
  const struct timespec * );


__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

int pthread_create_suspended_np(
  pthread_t * , const pthread_attr_t * ,
  void * (* )(void * ), void * );





__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_kill(pthread_t, int);

__attribute__((availability(macos,introduced=10.5))) __attribute__((availability(ios,introduced=2.0)))
 pthread_t pthread_from_mach_thread_np(mach_port_t);

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))
int pthread_sigmask(int, const sigset_t * , sigset_t * )
  __asm("_" "pthread_sigmask" );

__attribute__((availability(macos,introduced=10.4))) __attribute__((availability(ios,introduced=2.0)))

void pthread_yield_np(void);

__attribute__((availability(macos,introduced=11.0)))
__attribute__((availability(ios,unavailable))) __attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(driverkit,unavailable)))
void pthread_jit_write_protect_np(int enabled);

__attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=17.4)))
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(driverkit,unavailable))) __attribute__((availability(visionos,unavailable)))
int pthread_jit_write_protect_supported_np(void);
# 608 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 3 4
typedef int (*pthread_jit_write_callback_t)(void * ctx);
# 694 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 3 4
__attribute__((availability(macos,introduced=11.4))) __attribute__((availability(ios,introduced=17.4)))
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(driverkit,unavailable))) __attribute__((availability(visionos,unavailable)))

int pthread_jit_write_with_callback_np(
  pthread_jit_write_callback_t callback, void * ctx);
# 725 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 3 4
__attribute__((availability(macos,introduced=12.1))) __attribute__((availability(ios,introduced=17.4)))
__attribute__((availability(tvos,unavailable))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(driverkit,unavailable))) __attribute__((availability(visionos,unavailable)))
void pthread_jit_write_freeze_callbacks_np(void);
# 744 "/Library/Developer/CommandLineTools/SDKs/MacOSX14.sdk/usr/include/pthread.h" 3 4
__attribute__((availability(macos,introduced=11.0))) __attribute__((availability(ios,introduced=14.2))) __attribute__((availability(tvos,introduced=14.2))) __attribute__((availability(watchos,introduced=7.1)))
int
pthread_cpu_number_np(size_t *cpu_number_out);



# 17 "./cpython/Include/cpython/pythread.h" 2
# 34 "./cpython/Include/cpython/pythread.h"

# 34 "./cpython/Include/cpython/pythread.h"
struct _Py_tss_t {
    int _is_initialized;
    pthread_key_t _key;
};
# 129 "./cpython/Include/pythread.h" 2
# 94 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/context.h" 1







extern __attribute__ ((visibility ("default"))) PyTypeObject PyContext_Type;
typedef struct _pycontextobject PyContext;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyContextVar_Type;
typedef struct _pycontextvarobject PyContextVar;

extern __attribute__ ((visibility ("default"))) PyTypeObject PyContextToken_Type;
typedef struct _pycontexttokenobject PyContextToken;







__attribute__ ((visibility ("default"))) PyObject * PyContext_New(void);
__attribute__ ((visibility ("default"))) PyObject * PyContext_Copy(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * PyContext_CopyCurrent(void);

__attribute__ ((visibility ("default"))) int PyContext_Enter(PyObject *);
__attribute__ ((visibility ("default"))) int PyContext_Exit(PyObject *);






__attribute__ ((visibility ("default"))) PyObject * PyContextVar_New(
    const char *name, PyObject *default_value);
# 54 "./cpython/Include/cpython/context.h"
__attribute__ ((visibility ("default"))) int PyContextVar_Get(
    PyObject *var, PyObject *default_value, PyObject **value);





__attribute__ ((visibility ("default"))) PyObject * PyContextVar_Set(PyObject *var, PyObject *value);





__attribute__ ((visibility ("default"))) int PyContextVar_Reset(PyObject *var, PyObject *token);



__attribute__ ((visibility ("default"))) PyObject * _PyContext_NewHamtForTests(void);
# 95 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/modsupport.h" 1
# 26 "./cpython/Include/modsupport.h"
__attribute__ ((visibility ("default"))) int PyArg_Parse(PyObject *, const char *, ...);
__attribute__ ((visibility ("default"))) int PyArg_ParseTuple(PyObject *, const char *, ...);
__attribute__ ((visibility ("default"))) int PyArg_ParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, ...);
__attribute__ ((visibility ("default"))) int PyArg_VaParse(PyObject *, const char *, va_list);
__attribute__ ((visibility ("default"))) int PyArg_VaParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, va_list);

__attribute__ ((visibility ("default"))) int PyArg_ValidateKeywordArguments(PyObject *);
__attribute__ ((visibility ("default"))) int PyArg_UnpackTuple(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...);
__attribute__ ((visibility ("default"))) PyObject * Py_BuildValue(const char *, ...);
__attribute__ ((visibility ("default"))) PyObject * _Py_BuildValue_SizeT(const char *, ...);


__attribute__ ((visibility ("default"))) PyObject * Py_VaBuildValue(const char *, va_list);





__attribute__ ((visibility ("default"))) int PyModule_AddObjectRef(PyObject *mod, const char *name, PyObject *value);




__attribute__ ((visibility ("default"))) int PyModule_AddObject(PyObject *mod, const char *, PyObject *value);

__attribute__ ((visibility ("default"))) int PyModule_AddIntConstant(PyObject *, const char *, long);
__attribute__ ((visibility ("default"))) int PyModule_AddStringConstant(PyObject *, const char *, const char *);



__attribute__ ((visibility ("default"))) int PyModule_AddType(PyObject *module, PyTypeObject *type);







__attribute__ ((visibility ("default"))) int PyModule_SetDocString(PyObject *, const char *);
__attribute__ ((visibility ("default"))) int PyModule_AddFunctions(PyObject *, PyMethodDef *);
__attribute__ ((visibility ("default"))) int PyModule_ExecDef(PyObject *module, PyModuleDef *def);
# 133 "./cpython/Include/modsupport.h"
__attribute__ ((visibility ("default"))) PyObject * PyModule_Create2(PyModuleDef*, int apiver);
# 145 "./cpython/Include/modsupport.h"
__attribute__ ((visibility ("default"))) PyObject * PyModule_FromDefAndSpec2(PyModuleDef *def,
                                                PyObject *spec,
                                                int module_api_version);
# 161 "./cpython/Include/modsupport.h"
# 1 "./cpython/Include/cpython/modsupport.h" 1
# 10 "./cpython/Include/cpython/modsupport.h"
__attribute__ ((visibility ("default"))) PyObject * _Py_VaBuildValue_SizeT(const char *, va_list);
__attribute__ ((visibility ("default"))) PyObject ** _Py_VaBuildStack_SizeT(
    PyObject **small_stack,
    Py_ssize_t small_stack_len,
    const char *format,
    va_list va,
    Py_ssize_t *p_nargs);


__attribute__ ((visibility ("default"))) int _PyArg_UnpackStack(
    PyObject *const *args,
    Py_ssize_t nargs,
    const char *name,
    Py_ssize_t min,
    Py_ssize_t max,
    ...);

__attribute__ ((visibility ("default"))) int _PyArg_NoKeywords(const char *funcname, PyObject *kwargs);
__attribute__ ((visibility ("default"))) int _PyArg_NoKwnames(const char *funcname, PyObject *kwnames);
__attribute__ ((visibility ("default"))) int _PyArg_NoPositional(const char *funcname, PyObject *args);
# 39 "./cpython/Include/cpython/modsupport.h"
__attribute__ ((visibility ("default"))) void _PyArg_BadArgument(const char *, const char *, const char *, PyObject *);
__attribute__ ((visibility ("default"))) int _PyArg_CheckPositional(const char *, Py_ssize_t,
                                       Py_ssize_t, Py_ssize_t);




__attribute__ ((visibility ("default"))) PyObject ** _Py_VaBuildStack(
    PyObject **small_stack,
    Py_ssize_t small_stack_len,
    const char *format,
    va_list va,
    Py_ssize_t *p_nargs);

typedef struct _PyArg_Parser {
    int initialized;
    const char *format;
    const char * const *keywords;
    const char *fname;
    const char *custom_msg;
    int pos;
    int min;
    int max;
    PyObject *kwtuple;
    struct _PyArg_Parser *next;
} _PyArg_Parser;
# 73 "./cpython/Include/cpython/modsupport.h"
__attribute__ ((visibility ("default"))) int _PyArg_ParseTupleAndKeywordsFast(PyObject *, PyObject *,
                                                 struct _PyArg_Parser *, ...);
__attribute__ ((visibility ("default"))) int _PyArg_ParseStack(
    PyObject *const *args,
    Py_ssize_t nargs,
    const char *format,
    ...);
__attribute__ ((visibility ("default"))) int _PyArg_ParseStackAndKeywords(
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwnames,
    struct _PyArg_Parser *,
    ...);
__attribute__ ((visibility ("default"))) int _PyArg_VaParseTupleAndKeywordsFast(PyObject *, PyObject *,
                                                   struct _PyArg_Parser *, va_list);
__attribute__ ((visibility ("default"))) PyObject * const * _PyArg_UnpackKeywords(
        PyObject *const *args, Py_ssize_t nargs,
        PyObject *kwargs, PyObject *kwnames,
        struct _PyArg_Parser *parser,
        int minpos, int maxpos, int minkw,
        PyObject **buf);

__attribute__ ((visibility ("default"))) PyObject * const * _PyArg_UnpackKeywordsWithVararg(
        PyObject *const *args, Py_ssize_t nargs,
        PyObject *kwargs, PyObject *kwnames,
        struct _PyArg_Parser *parser,
        int minpos, int maxpos, int minkw,
        int vararg, PyObject **buf);







__attribute__ ((visibility ("default"))) PyObject * _PyModule_CreateInitialized(PyModuleDef*, int apiver);
__attribute__ ((visibility ("default"))) int _PyModule_Add(PyObject *, const char *, PyObject *);
# 162 "./cpython/Include/modsupport.h" 2
# 96 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/compile.h" 1
# 15 "./cpython/Include/compile.h"
# 1 "./cpython/Include/cpython/compile.h" 1
# 26 "./cpython/Include/cpython/compile.h"
typedef struct {
    int cf_flags;
    int cf_feature_version;
} PyCompilerFlags;





typedef struct {
    int lineno;
    int end_lineno;
    int col_offset;
    int end_col_offset;
} _PyCompilerSrcLocation;
# 51 "./cpython/Include/cpython/compile.h"
typedef struct {
    int ff_features;
    _PyCompilerSrcLocation ff_location;
} PyFutureFeatures;
# 68 "./cpython/Include/cpython/compile.h"
__attribute__ ((visibility ("default"))) int PyCompile_OpcodeStackEffect(int opcode, int oparg);
__attribute__ ((visibility ("default"))) int PyCompile_OpcodeStackEffectWithJump(int opcode, int oparg, int jump);
# 16 "./cpython/Include/compile.h" 2
# 97 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pythonrun.h" 1
# 10 "./cpython/Include/pythonrun.h"
__attribute__ ((visibility ("default"))) PyObject * Py_CompileString(const char *, const char *, int);

__attribute__ ((visibility ("default"))) void PyErr_Print(void);
__attribute__ ((visibility ("default"))) void PyErr_PrintEx(int);
__attribute__ ((visibility ("default"))) void PyErr_Display(PyObject *, PyObject *, PyObject *);


__attribute__ ((visibility ("default"))) void PyErr_DisplayException(PyObject *);




extern __attribute__ ((visibility ("default"))) int (*PyOS_InputHook)(void);
# 42 "./cpython/Include/pythonrun.h"
# 1 "./cpython/Include/cpython/pythonrun.h" 1




__attribute__ ((visibility ("default"))) int PyRun_SimpleStringFlags(const char *, PyCompilerFlags *);
__attribute__ ((visibility ("default"))) int _PyRun_SimpleFileObject(
    FILE *fp,
    PyObject *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_AnyFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int _PyRun_AnyFileObject(
    FILE *fp,
    PyObject *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_SimpleFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveOneFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveOneObject(
    FILE *fp,
    PyObject *filename,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveLoopFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
__attribute__ ((visibility ("default"))) int _PyRun_InteractiveLoopObject(
    FILE *fp,
    PyObject *filename,
    PyCompilerFlags *flags);


__attribute__ ((visibility ("default"))) PyObject * PyRun_StringFlags(const char *, int, PyObject *,
                                         PyObject *, PyCompilerFlags *);

__attribute__ ((visibility ("default"))) PyObject * PyRun_FileExFlags(
    FILE *fp,
    const char *filename,
    int start,
    PyObject *globals,
    PyObject *locals,
    int closeit,
    PyCompilerFlags *flags);


__attribute__ ((visibility ("default"))) PyObject * Py_CompileStringExFlags(
    const char *str,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    int optimize);
__attribute__ ((visibility ("default"))) PyObject * Py_CompileStringObject(
    const char *str,
    PyObject *filename, int start,
    PyCompilerFlags *flags,
    int optimize);





__attribute__ ((visibility ("default"))) const char * _Py_SourceAsString(
    PyObject *cmd,
    const char *funcname,
    const char *what,
    PyCompilerFlags *cf,
    PyObject **cmd_copy);






__attribute__ ((visibility ("default"))) PyObject * PyRun_String(const char *str, int s, PyObject *g, PyObject *l);
__attribute__ ((visibility ("default"))) int PyRun_AnyFile(FILE *fp, const char *name);
__attribute__ ((visibility ("default"))) int PyRun_AnyFileEx(FILE *fp, const char *name, int closeit);
__attribute__ ((visibility ("default"))) int PyRun_AnyFileFlags(FILE *, const char *, PyCompilerFlags *);
__attribute__ ((visibility ("default"))) int PyRun_SimpleString(const char *s);
__attribute__ ((visibility ("default"))) int PyRun_SimpleFile(FILE *f, const char *p);
__attribute__ ((visibility ("default"))) int PyRun_SimpleFileEx(FILE *f, const char *p, int c);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveOne(FILE *f, const char *p);
__attribute__ ((visibility ("default"))) int PyRun_InteractiveLoop(FILE *f, const char *p);
__attribute__ ((visibility ("default"))) PyObject * PyRun_File(FILE *fp, const char *p, int s, PyObject *g, PyObject *l);
__attribute__ ((visibility ("default"))) PyObject * PyRun_FileEx(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, int c);
__attribute__ ((visibility ("default"))) PyObject * PyRun_FileFlags(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, PyCompilerFlags *flags);
# 119 "./cpython/Include/cpython/pythonrun.h"
__attribute__ ((visibility ("default"))) char * PyOS_Readline(FILE *, FILE *, const char *);
extern __attribute__ ((visibility ("default"))) PyThreadState* _PyOS_ReadlineTState;
extern __attribute__ ((visibility ("default"))) char *(*PyOS_ReadlineFunctionPointer)(FILE *, FILE *, const char *);
# 43 "./cpython/Include/pythonrun.h" 2
# 98 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pylifecycle.h" 1
# 12 "./cpython/Include/pylifecycle.h"
__attribute__ ((visibility ("default"))) void Py_Initialize(void);
__attribute__ ((visibility ("default"))) void Py_InitializeEx(int);
__attribute__ ((visibility ("default"))) void Py_Finalize(void);

__attribute__ ((visibility ("default"))) int Py_FinalizeEx(void);

__attribute__ ((visibility ("default"))) int Py_IsInitialized(void);


__attribute__ ((visibility ("default"))) PyThreadState * Py_NewInterpreter(void);
__attribute__ ((visibility ("default"))) void Py_EndInterpreter(PyThreadState *);





__attribute__ ((visibility ("default"))) int Py_AtExit(void (*func)(void));

__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) Py_Exit(int);


__attribute__ ((visibility ("default"))) int Py_Main(int argc, wchar_t **argv);
__attribute__ ((visibility ("default"))) int Py_BytesMain(int argc, char **argv);


__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void Py_SetProgramName(const wchar_t *);
__attribute__ ((visibility ("default"))) wchar_t * Py_GetProgramName(void);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void Py_SetPythonHome(const wchar_t *);
__attribute__ ((visibility ("default"))) wchar_t * Py_GetPythonHome(void);

__attribute__ ((visibility ("default"))) wchar_t * Py_GetProgramFullPath(void);

__attribute__ ((visibility ("default"))) wchar_t * Py_GetPrefix(void);
__attribute__ ((visibility ("default"))) wchar_t * Py_GetExecPrefix(void);
__attribute__ ((visibility ("default"))) wchar_t * Py_GetPath(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void Py_SetPath(const wchar_t *);





__attribute__ ((visibility ("default"))) const char * Py_GetVersion(void);
__attribute__ ((visibility ("default"))) const char * Py_GetPlatform(void);
__attribute__ ((visibility ("default"))) const char * Py_GetCopyright(void);
__attribute__ ((visibility ("default"))) const char * Py_GetCompiler(void);
__attribute__ ((visibility ("default"))) const char * Py_GetBuildInfo(void);


typedef void (*PyOS_sighandler_t)(int);
__attribute__ ((visibility ("default"))) PyOS_sighandler_t PyOS_getsig(int);
__attribute__ ((visibility ("default"))) PyOS_sighandler_t PyOS_setsig(int, PyOS_sighandler_t);


extern __attribute__ ((visibility ("default"))) const unsigned long Py_Version;




# 1 "./cpython/Include/cpython/pylifecycle.h" 1






__attribute__ ((visibility ("default"))) int Py_FrozenMain(int argc, char **argv);




__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int Py_SetStandardStreamEncoding(
    const char *encoding,
    const char *errors);



__attribute__ ((visibility ("default"))) PyStatus Py_PreInitialize(
    const PyPreConfig *src_config);
__attribute__ ((visibility ("default"))) PyStatus Py_PreInitializeFromBytesArgs(
    const PyPreConfig *src_config,
    Py_ssize_t argc,
    char **argv);
__attribute__ ((visibility ("default"))) PyStatus Py_PreInitializeFromArgs(
    const PyPreConfig *src_config,
    Py_ssize_t argc,
    wchar_t **argv);

__attribute__ ((visibility ("default"))) int _Py_IsCoreInitialized(void);




__attribute__ ((visibility ("default"))) PyStatus Py_InitializeFromConfig(
    const PyConfig *config);
__attribute__ ((visibility ("default"))) PyStatus _Py_InitializeMain(void);

__attribute__ ((visibility ("default"))) int Py_RunMain(void);


__attribute__ ((visibility ("default"))) void __attribute__((__noreturn__)) Py_ExitStatusException(PyStatus err);


__attribute__ ((visibility ("default"))) void _Py_RestoreSignals(void);

__attribute__ ((visibility ("default"))) int Py_FdIsInteractive(FILE *, const char *);
__attribute__ ((visibility ("default"))) int _Py_FdIsInteractive(FILE *fp, PyObject *filename);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void _Py_SetProgramFullPath(const wchar_t *);

__attribute__ ((visibility ("default"))) const char * _Py_gitidentifier(void);
__attribute__ ((visibility ("default"))) const char * _Py_gitversion(void);

__attribute__ ((visibility ("default"))) int _Py_IsFinalizing(void);
__attribute__ ((visibility ("default"))) int _Py_IsInterpreterFinalizing(PyInterpreterState *interp);


__attribute__ ((visibility ("default"))) int _PyOS_URandom(void *buffer, Py_ssize_t size);
__attribute__ ((visibility ("default"))) int _PyOS_URandomNonblock(void *buffer, Py_ssize_t size);


__attribute__ ((visibility ("default"))) int _Py_CoerceLegacyLocale(int warn);
__attribute__ ((visibility ("default"))) int _Py_LegacyLocaleDetected(int warn);
__attribute__ ((visibility ("default"))) char * _Py_SetLocaleFromEnv(int category);







typedef struct {

    int use_main_obmalloc;
    int allow_fork;
    int allow_exec;
    int allow_threads;
    int allow_daemon_threads;
    int check_multi_interp_extensions;
    int gil;
} PyInterpreterConfig;
# 105 "./cpython/Include/cpython/pylifecycle.h"
__attribute__ ((visibility ("default"))) PyStatus Py_NewInterpreterFromConfig(
    PyThreadState **tstate_p,
    const PyInterpreterConfig *config);

typedef void (*atexit_datacallbackfunc)(void *);
__attribute__ ((visibility ("default"))) int _Py_AtExit(
        PyInterpreterState *, atexit_datacallbackfunc, void *);
# 72 "./cpython/Include/pylifecycle.h" 2
# 99 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/ceval.h" 1
# 10 "./cpython/Include/ceval.h"
__attribute__ ((visibility ("default"))) PyObject * PyEval_EvalCode(PyObject *, PyObject *, PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyEval_EvalCodeEx(PyObject *co,
                                         PyObject *globals,
                                         PyObject *locals,
                                         PyObject *const *args, int argc,
                                         PyObject *const *kwds, int kwdc,
                                         PyObject *const *defs, int defc,
                                         PyObject *kwdefs, PyObject *closure);
# 27 "./cpython/Include/ceval.h"
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject * PyEval_CallObjectWithKeywords(
    PyObject *callable,
    PyObject *args,
    PyObject *kwargs);





__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject * PyEval_CallFunction(
    PyObject *callable, const char *format, ...);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) PyObject * PyEval_CallMethod(
    PyObject *obj, const char *name, const char *format, ...);

__attribute__ ((visibility ("default"))) PyObject * PyEval_GetBuiltins(void);
__attribute__ ((visibility ("default"))) PyObject * PyEval_GetGlobals(void);
__attribute__ ((visibility ("default"))) PyObject * PyEval_GetLocals(void);
__attribute__ ((visibility ("default"))) PyFrameObject * PyEval_GetFrame(void);

__attribute__ ((visibility ("default"))) int Py_AddPendingCall(int (*func)(void *), void *arg);
__attribute__ ((visibility ("default"))) int Py_MakePendingCalls(void);
# 74 "./cpython/Include/ceval.h"
__attribute__ ((visibility ("default"))) void Py_SetRecursionLimit(int);
__attribute__ ((visibility ("default"))) int Py_GetRecursionLimit(void);

__attribute__ ((visibility ("default"))) int Py_EnterRecursiveCall(const char *where);
__attribute__ ((visibility ("default"))) void Py_LeaveRecursiveCall(void);

__attribute__ ((visibility ("default"))) const char * PyEval_GetFuncName(PyObject *);
__attribute__ ((visibility ("default"))) const char * PyEval_GetFuncDesc(PyObject *);

__attribute__ ((visibility ("default"))) PyObject * PyEval_EvalFrame(PyFrameObject *);
__attribute__ ((visibility ("default"))) PyObject * PyEval_EvalFrameEx(PyFrameObject *f, int exc);
# 128 "./cpython/Include/ceval.h"
__attribute__ ((visibility ("default"))) PyThreadState * PyEval_SaveThread(void);
__attribute__ ((visibility ("default"))) void PyEval_RestoreThread(PyThreadState *);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PyEval_ThreadsInitialized(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyEval_InitThreads(void);




__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyEval_AcquireLock(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyEval_ReleaseLock(void);
__attribute__ ((visibility ("default"))) void PyEval_AcquireThread(PyThreadState *tstate);
__attribute__ ((visibility ("default"))) void PyEval_ReleaseThread(PyThreadState *tstate);
# 161 "./cpython/Include/ceval.h"
# 1 "./cpython/Include/cpython/ceval.h" 1




__attribute__ ((visibility ("default"))) void PyEval_SetProfile(Py_tracefunc, PyObject *);
__attribute__ ((visibility ("default"))) void PyEval_SetProfileAllThreads(Py_tracefunc, PyObject *);
extern __attribute__ ((visibility ("default"))) int _PyEval_SetProfile(PyThreadState *tstate, Py_tracefunc func, PyObject *arg);
__attribute__ ((visibility ("default"))) void PyEval_SetTrace(Py_tracefunc, PyObject *);
__attribute__ ((visibility ("default"))) void PyEval_SetTraceAllThreads(Py_tracefunc, PyObject *);
__attribute__ ((visibility ("default"))) int _PyEval_SetTrace(PyThreadState *tstate, Py_tracefunc func, PyObject *arg);


__attribute__ ((visibility ("default"))) PyObject * _PyEval_GetBuiltin(PyObject *);
__attribute__ ((visibility ("default"))) PyObject * _PyEval_GetBuiltinId(_Py_Identifier *);



__attribute__ ((visibility ("default"))) int PyEval_MergeCompilerFlags(PyCompilerFlags *cf);

__attribute__ ((visibility ("default"))) PyObject * _PyEval_EvalFrameDefault(PyThreadState *tstate, struct _PyInterpreterFrame *f, int exc);

__attribute__ ((visibility ("default"))) void _PyEval_SetSwitchInterval(unsigned long microseconds);
__attribute__ ((visibility ("default"))) unsigned long _PyEval_GetSwitchInterval(void);

__attribute__ ((visibility ("default"))) int _PyEval_MakePendingCalls(PyThreadState *);

__attribute__ ((visibility ("default"))) Py_ssize_t PyUnstable_Eval_RequestCodeExtraIndex(freefunc);

__attribute__((__deprecated__)) static inline Py_ssize_t
_PyEval_RequestCodeExtraIndex(freefunc f) {
    return PyUnstable_Eval_RequestCodeExtraIndex(f);
}

__attribute__ ((visibility ("default"))) int _PyEval_SliceIndex(PyObject *, Py_ssize_t *);
__attribute__ ((visibility ("default"))) int _PyEval_SliceIndexNotNone(PyObject *, Py_ssize_t *);
# 162 "./cpython/Include/ceval.h" 2
# 100 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/sysmodule.h" 1
# 10 "./cpython/Include/sysmodule.h"
__attribute__ ((visibility ("default"))) PyObject * PySys_GetObject(const char *);
__attribute__ ((visibility ("default"))) int PySys_SetObject(const char *, PyObject *);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_SetArgv(int, wchar_t **);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_SetArgvEx(int, wchar_t **, int);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_SetPath(const wchar_t *);

__attribute__ ((visibility ("default"))) void PySys_WriteStdout(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
__attribute__ ((visibility ("default"))) void PySys_WriteStderr(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
__attribute__ ((visibility ("default"))) void PySys_FormatStdout(const char *format, ...);
__attribute__ ((visibility ("default"))) void PySys_FormatStderr(const char *format, ...);

__attribute__ ((visibility ("default"))) void PySys_ResetWarnOptions(void);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_AddWarnOption(const wchar_t *);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_AddWarnOptionUnicode(PyObject *);
__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PySys_HasWarnOptions(void);

__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PySys_AddXOption(const wchar_t *);
__attribute__ ((visibility ("default"))) PyObject * PySys_GetXOptions(void);


typedef struct {
    FILE* perf_map;
    PyThread_type_lock map_lock;
} PerfMapState;

__attribute__ ((visibility ("default"))) int PyUnstable_PerfMapState_Init(void);

__attribute__ ((visibility ("default"))) int PyUnstable_WritePerfMapEntry(const void *code_addr, unsigned int code_size, const char *entry_name);

__attribute__ ((visibility ("default"))) void PyUnstable_PerfMapState_Fini(void);




# 1 "./cpython/Include/cpython/sysmodule.h" 1




__attribute__ ((visibility ("default"))) PyObject * _PySys_GetAttr(PyThreadState *tstate,
                                      PyObject *name);

__attribute__ ((visibility ("default"))) size_t _PySys_GetSizeOf(PyObject *);

typedef int(*Py_AuditHookFunction)(const char *, PyObject *, void *);

__attribute__ ((visibility ("default"))) int PySys_Audit(
    const char *event,
    const char *argFormat,
    ...);
__attribute__ ((visibility ("default"))) int PySys_AddAuditHook(Py_AuditHookFunction, void*);
# 48 "./cpython/Include/sysmodule.h" 2
# 101 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/osmodule.h" 1
# 11 "./cpython/Include/osmodule.h"
__attribute__ ((visibility ("default"))) PyObject * PyOS_FSPath(PyObject *path);
# 102 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/intrcheck.h" 1






__attribute__ ((visibility ("default"))) int PyOS_InterruptOccurred(void);


__attribute__ ((visibility ("default"))) void PyOS_BeforeFork(void);
__attribute__ ((visibility ("default"))) void PyOS_AfterFork_Parent(void);
__attribute__ ((visibility ("default"))) void PyOS_AfterFork_Child(void);



__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) void PyOS_AfterFork(void);


__attribute__ ((visibility ("default"))) int _PyOS_IsMainThread(void);
# 103 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/import.h" 1
# 9 "./cpython/Include/import.h"
__attribute__ ((visibility ("default"))) long PyImport_GetMagicNumber(void);
__attribute__ ((visibility ("default"))) const char * PyImport_GetMagicTag(void);
__attribute__ ((visibility ("default"))) PyObject * PyImport_ExecCodeModule(
    const char *name,
    PyObject *co
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ExecCodeModuleEx(
    const char *name,
    PyObject *co,
    const char *pathname
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ExecCodeModuleWithPathnames(
    const char *name,
    PyObject *co,
    const char *pathname,
    const char *cpathname
    );

__attribute__ ((visibility ("default"))) PyObject * PyImport_ExecCodeModuleObject(
    PyObject *name,
    PyObject *co,
    PyObject *pathname,
    PyObject *cpathname
    );

__attribute__ ((visibility ("default"))) PyObject * PyImport_GetModuleDict(void);

__attribute__ ((visibility ("default"))) PyObject * PyImport_GetModule(PyObject *name);


__attribute__ ((visibility ("default"))) PyObject * PyImport_AddModuleObject(
    PyObject *name
    );

__attribute__ ((visibility ("default"))) PyObject * PyImport_AddModule(
    const char *name
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ImportModule(
    const char *name
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ImportModuleNoBlock(
    const char *name
    );
__attribute__ ((visibility ("default"))) PyObject * PyImport_ImportModuleLevel(
    const char *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );

__attribute__ ((visibility ("default"))) PyObject * PyImport_ImportModuleLevelObject(
    PyObject *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );





__attribute__ ((visibility ("default"))) PyObject * PyImport_GetImporter(PyObject *path);
__attribute__ ((visibility ("default"))) PyObject * PyImport_Import(PyObject *name);
__attribute__ ((visibility ("default"))) PyObject * PyImport_ReloadModule(PyObject *m);

__attribute__ ((visibility ("default"))) int PyImport_ImportFrozenModuleObject(
    PyObject *name
    );

__attribute__ ((visibility ("default"))) int PyImport_ImportFrozenModule(
    const char *name
    );

__attribute__ ((visibility ("default"))) int PyImport_AppendInittab(
    const char *name,
    PyObject* (*initfunc)(void)
    );



# 1 "./cpython/Include/cpython/import.h" 1




__attribute__ ((visibility ("default"))) PyObject* PyInit__imp(void);

__attribute__ ((visibility ("default"))) int _PyImport_IsInitialized(PyInterpreterState *);

__attribute__ ((visibility ("default"))) PyObject * _PyImport_GetModuleId(_Py_Identifier *name);
__attribute__ ((visibility ("default"))) int _PyImport_SetModule(PyObject *name, PyObject *module);
__attribute__ ((visibility ("default"))) int _PyImport_SetModuleString(const char *name, PyObject* module);

__attribute__ ((visibility ("default"))) void _PyImport_AcquireLock(PyInterpreterState *interp);
__attribute__ ((visibility ("default"))) int _PyImport_ReleaseLock(PyInterpreterState *interp);

__attribute__ ((visibility ("default"))) int _PyImport_FixupBuiltin(
    PyObject *mod,
    const char *name,
    PyObject *modules
    );
__attribute__ ((visibility ("default"))) int _PyImport_FixupExtensionObject(PyObject*, PyObject *,
                                               PyObject *, PyObject *);

struct _inittab {
    const char *name;
    PyObject* (*initfunc)(void);
};

extern __attribute__ ((visibility ("default"))) struct _inittab * PyImport_Inittab;
__attribute__ ((visibility ("default"))) int PyImport_ExtendInittab(struct _inittab *newtab);

struct _frozen {
    const char *name;
    const unsigned char *code;
    int size;
    int is_package;
    PyObject *(*get_code)(void);
};




extern __attribute__ ((visibility ("default"))) const struct _frozen * PyImport_FrozenModules;

extern __attribute__ ((visibility ("default"))) PyObject * _PyImport_GetModuleAttr(PyObject *, PyObject *);
extern __attribute__ ((visibility ("default"))) PyObject * _PyImport_GetModuleAttrString(const char *, const char *);
# 92 "./cpython/Include/import.h" 2
# 104 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/abstract.h" 1
# 146 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallNoArgs(PyObject *func);
# 158 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_Call(PyObject *callable,
                                     PyObject *args, PyObject *kwargs);
# 169 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallObject(PyObject *callable,
                                           PyObject *args);
# 182 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallFunction(PyObject *callable,
                                             const char *format, ...);
# 194 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallMethod(PyObject *obj,
                                           const char *name,
                                           const char *format, ...);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallFunction_SizeT(PyObject *callable,
                                                    const char *format,
                                                    ...);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethod_SizeT(PyObject *obj,
                                                  const char *name,
                                                  const char *format,
                                                  ...);
# 215 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallFunctionObjArgs(PyObject *callable,
                                                    ...);
# 226 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_CallMethodObjArgs(
    PyObject *obj,
    PyObject *name,
    ...);





__attribute__ ((visibility ("default"))) Py_ssize_t PyVectorcall_NARGS(size_t nargsf);



__attribute__ ((visibility ("default"))) PyObject * PyVectorcall_Call(PyObject *callable, PyObject *tuple, PyObject *dict);






__attribute__ ((visibility ("default"))) PyObject * PyObject_Vectorcall(
    PyObject *callable,
    PyObject *const *args,
    size_t nargsf,
    PyObject *kwnames);


__attribute__ ((visibility ("default"))) PyObject * PyObject_VectorcallMethod(
    PyObject *name, PyObject *const *args,
    size_t nargsf, PyObject *kwnames);
# 294 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_Type(PyObject *o);
# 303 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PyObject_Size(PyObject *o);




__attribute__ ((visibility ("default"))) Py_ssize_t PyObject_Length(PyObject *o);






__attribute__ ((visibility ("default"))) PyObject * PyObject_GetItem(PyObject *o, PyObject *key);







__attribute__ ((visibility ("default"))) int PyObject_SetItem(PyObject *o, PyObject *key, PyObject *v);





__attribute__ ((visibility ("default"))) int PyObject_DelItemString(PyObject *o, const char *key);





__attribute__ ((visibility ("default"))) int PyObject_DelItem(PyObject *o, PyObject *key);
# 351 "./cpython/Include/abstract.h"
__attribute__((__deprecated__))
__attribute__ ((visibility ("default"))) int PyObject_AsCharBuffer(PyObject *obj,
                                      const char **buffer,
                                      Py_ssize_t *buffer_len);





__attribute__((__deprecated__)) __attribute__ ((visibility ("default"))) int PyObject_CheckReadBuffer(PyObject *obj);







__attribute__((__deprecated__))
__attribute__ ((visibility ("default"))) int PyObject_AsReadBuffer(PyObject *obj,
                                      const void **buffer,
                                      Py_ssize_t *buffer_len);







__attribute__((__deprecated__))
__attribute__ ((visibility ("default"))) int PyObject_AsWriteBuffer(PyObject *obj,
                                       void **buffer,
                                       Py_ssize_t *buffer_len);






__attribute__ ((visibility ("default"))) PyObject * PyObject_Format(PyObject *obj,
                                       PyObject *format_spec);







__attribute__ ((visibility ("default"))) PyObject * PyObject_GetIter(PyObject *);




__attribute__ ((visibility ("default"))) PyObject * PyObject_GetAIter(PyObject *);




__attribute__ ((visibility ("default"))) int PyIter_Check(PyObject *);




__attribute__ ((visibility ("default"))) int PyAIter_Check(PyObject *);
# 422 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyIter_Next(PyObject *);
# 434 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PySendResult PyIter_Send(PyObject *, PyObject *, PyObject **);
# 443 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) int PyNumber_Check(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Add(PyObject *o1, PyObject *o2);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Subtract(PyObject *o1, PyObject *o2);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Multiply(PyObject *o1, PyObject *o2);



__attribute__ ((visibility ("default"))) PyObject * PyNumber_MatrixMultiply(PyObject *o1, PyObject *o2);






__attribute__ ((visibility ("default"))) PyObject * PyNumber_FloorDivide(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_TrueDivide(PyObject *o1, PyObject *o2);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Remainder(PyObject *o1, PyObject *o2);






__attribute__ ((visibility ("default"))) PyObject * PyNumber_Divmod(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Power(PyObject *o1, PyObject *o2,
                                      PyObject *o3);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Negative(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Positive(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Absolute(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Invert(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Lshift(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Rshift(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_And(PyObject *o1, PyObject *o2);




__attribute__ ((visibility ("default"))) PyObject * PyNumber_Xor(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Or(PyObject *o1, PyObject *o2);



__attribute__ ((visibility ("default"))) int PyIndex_Check(PyObject *);



__attribute__ ((visibility ("default"))) PyObject * PyNumber_Index(PyObject *o);







__attribute__ ((visibility ("default"))) Py_ssize_t PyNumber_AsSsize_t(PyObject *o, PyObject *exc);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Long(PyObject *o);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_Float(PyObject *o);
# 579 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceAdd(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceSubtract(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceMultiply(PyObject *o1, PyObject *o2);



__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceMatrixMultiply(PyObject *o1, PyObject *o2);






__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceFloorDivide(PyObject *o1,
                                                   PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceTrueDivide(PyObject *o1,
                                                  PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceRemainder(PyObject *o1, PyObject *o2);






__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlacePower(PyObject *o1, PyObject *o2,
                                             PyObject *o3);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceLshift(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceRshift(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceAnd(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceXor(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_InPlaceOr(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PyNumber_ToBase(PyObject *n, int base);
# 669 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) int PySequence_Check(PyObject *o);


__attribute__ ((visibility ("default"))) Py_ssize_t PySequence_Size(PyObject *o);



__attribute__ ((visibility ("default"))) Py_ssize_t PySequence_Length(PyObject *o);






__attribute__ ((visibility ("default"))) PyObject * PySequence_Concat(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PySequence_Repeat(PyObject *o, Py_ssize_t count);




__attribute__ ((visibility ("default"))) PyObject * PySequence_GetItem(PyObject *o, Py_ssize_t i);




__attribute__ ((visibility ("default"))) PyObject * PySequence_GetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);





__attribute__ ((visibility ("default"))) int PySequence_SetItem(PyObject *o, Py_ssize_t i, PyObject *v);




__attribute__ ((visibility ("default"))) int PySequence_DelItem(PyObject *o, Py_ssize_t i);





__attribute__ ((visibility ("default"))) int PySequence_SetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2,
                                    PyObject *v);





__attribute__ ((visibility ("default"))) int PySequence_DelSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);




__attribute__ ((visibility ("default"))) PyObject * PySequence_Tuple(PyObject *o);



__attribute__ ((visibility ("default"))) PyObject * PySequence_List(PyObject *o);
# 741 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PySequence_Fast(PyObject *o, const char* m);
# 764 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PySequence_Count(PyObject *o, PyObject *value);





__attribute__ ((visibility ("default"))) int PySequence_Contains(PyObject *seq, PyObject *ob);







__attribute__ ((visibility ("default"))) int PySequence_In(PyObject *o, PyObject *value);
# 788 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) Py_ssize_t PySequence_Index(PyObject *o, PyObject *value);
# 797 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PySequence_InPlaceConcat(PyObject *o1, PyObject *o2);





__attribute__ ((visibility ("default"))) PyObject * PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count);







__attribute__ ((visibility ("default"))) int PyMapping_Check(PyObject *o);



__attribute__ ((visibility ("default"))) Py_ssize_t PyMapping_Size(PyObject *o);



__attribute__ ((visibility ("default"))) Py_ssize_t PyMapping_Length(PyObject *o);
# 849 "./cpython/Include/abstract.h"
__attribute__ ((visibility ("default"))) int PyMapping_HasKeyString(PyObject *o, const char *key);






__attribute__ ((visibility ("default"))) int PyMapping_HasKey(PyObject *o, PyObject *key);



__attribute__ ((visibility ("default"))) PyObject * PyMapping_Keys(PyObject *o);



__attribute__ ((visibility ("default"))) PyObject * PyMapping_Values(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyMapping_Items(PyObject *o);




__attribute__ ((visibility ("default"))) PyObject * PyMapping_GetItemString(PyObject *o,
                                               const char *key);





__attribute__ ((visibility ("default"))) int PyMapping_SetItemString(PyObject *o, const char *key,
                                        PyObject *value);


__attribute__ ((visibility ("default"))) int PyObject_IsInstance(PyObject *object, PyObject *typeorclass);


__attribute__ ((visibility ("default"))) int PyObject_IsSubclass(PyObject *object, PyObject *typeorclass);



# 1 "./cpython/Include/cpython/abstract.h" 1
# 21 "./cpython/Include/cpython/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * _PyStack_AsDict(
    PyObject *const *values,
    PyObject *kwnames);
# 36 "./cpython/Include/cpython/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * _Py_CheckFunctionResult(
    PyThreadState *tstate,
    PyObject *callable,
    PyObject *result,
    const char *where);






__attribute__ ((visibility ("default"))) PyObject * _PyObject_MakeTpCall(
    PyThreadState *tstate,
    PyObject *callable,
    PyObject *const *args, Py_ssize_t nargs,
    PyObject *keywords);





static inline Py_ssize_t
_PyVectorcall_NARGS(size_t n)
{
    return n & ~(((size_t)(1)) << (8 * 8 - 1));
}

__attribute__ ((visibility ("default"))) vectorcallfunc PyVectorcall_Function(PyObject *callable);
# 76 "./cpython/Include/cpython/abstract.h"
__attribute__ ((visibility ("default"))) PyObject * PyObject_VectorcallDict(
    PyObject *callable,
    PyObject *const *args,
    size_t nargsf,
    PyObject *kwargs);


__attribute__ ((visibility ("default"))) PyObject * _PyObject_FastCall(
    PyObject *func,
    PyObject *const *args,
    Py_ssize_t nargs);

__attribute__ ((visibility ("default"))) PyObject * PyObject_CallOneArg(PyObject *func, PyObject *arg);

static inline PyObject *
PyObject_CallMethodNoArgs(PyObject *self, PyObject *name)
{
    size_t nargsf = 1 | (((size_t)(1)) << (8 * 8 - 1));
    return PyObject_VectorcallMethod(name, &self, nargsf, 
# 94 "./cpython/Include/cpython/abstract.h" 3 4
                                                         ((void *)0)
# 94 "./cpython/Include/cpython/abstract.h"
                                                                 );
}

static inline PyObject *
PyObject_CallMethodOneArg(PyObject *self, PyObject *name, PyObject *arg)
{
    PyObject *args[2] = {self, arg};
    size_t nargsf = 2 | (((size_t)(1)) << (8 * 8 - 1));
    
# 102 "./cpython/Include/cpython/abstract.h" 3 4
   (__builtin_expect(!(
# 102 "./cpython/Include/cpython/abstract.h"
   arg != 
# 102 "./cpython/Include/cpython/abstract.h" 3 4
   ((void *)0)), 0) ? __assert_rtn(__func__, "abstract.h", 102, 
# 102 "./cpython/Include/cpython/abstract.h"
   "arg != NULL"
# 102 "./cpython/Include/cpython/abstract.h" 3 4
   ) : (void)0)
# 102 "./cpython/Include/cpython/abstract.h"
                      ;
    return PyObject_VectorcallMethod(name, args, nargsf, 
# 103 "./cpython/Include/cpython/abstract.h" 3 4
                                                        ((void *)0)
# 103 "./cpython/Include/cpython/abstract.h"
                                                                );
}

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethod(PyObject *obj,
                                            PyObject *name,
                                            const char *format, ...);



__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethodId(PyObject *obj,
                                              _Py_Identifier *name,
                                              const char *format, ...);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethodId_SizeT(PyObject *obj,
                                                    _Py_Identifier *name,
                                                    const char *format,
                                                    ...);

__attribute__ ((visibility ("default"))) PyObject * _PyObject_CallMethodIdObjArgs(
    PyObject *obj,
    _Py_Identifier *name,
    ...);

static inline PyObject *
_PyObject_VectorcallMethodId(
    _Py_Identifier *name, PyObject *const *args,
    size_t nargsf, PyObject *kwnames)
{
    PyObject *oname = _PyUnicode_FromId(name);
    if (!oname) {
        return 
# 133 "./cpython/Include/cpython/abstract.h" 3 4
              ((void *)0)
# 133 "./cpython/Include/cpython/abstract.h"
                      ;
    }
    return PyObject_VectorcallMethod(oname, args, nargsf, kwnames);
}

static inline PyObject *
_PyObject_CallMethodIdNoArgs(PyObject *self, _Py_Identifier *name)
{
    size_t nargsf = 1 | (((size_t)(1)) << (8 * 8 - 1));
    return _PyObject_VectorcallMethodId(name, &self, nargsf, 
# 142 "./cpython/Include/cpython/abstract.h" 3 4
                                                            ((void *)0)
# 142 "./cpython/Include/cpython/abstract.h"
                                                                    );
}

static inline PyObject *
_PyObject_CallMethodIdOneArg(PyObject *self, _Py_Identifier *name, PyObject *arg)
{
    PyObject *args[2] = {self, arg};
    size_t nargsf = 2 | (((size_t)(1)) << (8 * 8 - 1));
    
# 150 "./cpython/Include/cpython/abstract.h" 3 4
   (__builtin_expect(!(
# 150 "./cpython/Include/cpython/abstract.h"
   arg != 
# 150 "./cpython/Include/cpython/abstract.h" 3 4
   ((void *)0)), 0) ? __assert_rtn(__func__, "abstract.h", 150, 
# 150 "./cpython/Include/cpython/abstract.h"
   "arg != NULL"
# 150 "./cpython/Include/cpython/abstract.h" 3 4
   ) : (void)0)
# 150 "./cpython/Include/cpython/abstract.h"
                      ;
    return _PyObject_VectorcallMethodId(name, args, nargsf, 
# 151 "./cpython/Include/cpython/abstract.h" 3 4
                                                           ((void *)0)
# 151 "./cpython/Include/cpython/abstract.h"
                                                                   );
}

__attribute__ ((visibility ("default"))) int _PyObject_HasLen(PyObject *o);




__attribute__ ((visibility ("default"))) Py_ssize_t PyObject_LengthHint(PyObject *o, Py_ssize_t);
# 183 "./cpython/Include/cpython/abstract.h"
__attribute__ ((visibility ("default"))) Py_ssize_t _PySequence_IterSearch(PyObject *seq,
                                              PyObject *obj, int operation);



__attribute__ ((visibility ("default"))) int _PyObject_RealIsInstance(PyObject *inst, PyObject *cls);

__attribute__ ((visibility ("default"))) int _PyObject_RealIsSubclass(PyObject *derived, PyObject *cls);

__attribute__ ((visibility ("default"))) char *const * _PySequence_BytesToCharpArray(PyObject* self);

__attribute__ ((visibility ("default"))) void _Py_FreeCharPArray(char *const array[]);


__attribute__ ((visibility ("default"))) void _Py_add_one_to_index_F(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
__attribute__ ((visibility ("default"))) void _Py_add_one_to_index_C(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);


__attribute__ ((visibility ("default"))) int _Py_convert_optional_to_ssize_t(PyObject *, void *);


__attribute__ ((visibility ("default"))) PyObject * _PyNumber_Index(PyObject *o);
# 893 "./cpython/Include/abstract.h" 2
# 105 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/bltinmodule.h" 1






extern __attribute__ ((visibility ("default"))) PyTypeObject PyFilter_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyMap_Type;
extern __attribute__ ((visibility ("default"))) PyTypeObject PyZip_Type;
# 106 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/pyctype.h" 1
# 16 "./cpython/Include/cpython/pyctype.h"
extern __attribute__ ((visibility ("default"))) const unsigned int _Py_ctype_table[256];
# 29 "./cpython/Include/cpython/pyctype.h"
extern __attribute__ ((visibility ("default"))) const unsigned char _Py_ctype_tolower[256];
extern __attribute__ ((visibility ("default"))) const unsigned char _Py_ctype_toupper[256];
# 107 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pystrtod.h" 1
# 9 "./cpython/Include/pystrtod.h"
__attribute__ ((visibility ("default"))) double PyOS_string_to_double(const char *str,
                                         char **endptr,
                                         PyObject *overflow_exception);



__attribute__ ((visibility ("default"))) char * PyOS_double_to_string(double val,
                                         char format_code,
                                         int precision,
                                         int flags,
                                         int *type);


__attribute__ ((visibility ("default"))) PyObject * _Py_string_to_number_with_underscores(
    const char *str, Py_ssize_t len, const char *what, PyObject *obj, void *arg,
    PyObject *(*innerfunc)(const char *, Py_ssize_t, void *));

__attribute__ ((visibility ("default"))) double _Py_parse_inf_or_nan(const char *p, char **endptr);
# 108 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/pystrcmp.h" 1







__attribute__ ((visibility ("default"))) int PyOS_mystrnicmp(const char *, const char *, Py_ssize_t);
__attribute__ ((visibility ("default"))) int PyOS_mystricmp(const char *, const char *);
# 109 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/fileutils.h" 1







__attribute__ ((visibility ("default"))) wchar_t * Py_DecodeLocale(
    const char *arg,
    size_t *size);

__attribute__ ((visibility ("default"))) char* Py_EncodeLocale(
    const wchar_t *text,
    size_t *error_pos);




# 1 "./cpython/Include/cpython/fileutils.h" 1





__attribute__ ((visibility ("default"))) FILE* _Py_fopen_obj(
    PyObject *path,
    const char *mode);
# 20 "./cpython/Include/fileutils.h" 2
# 110 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/cpython/pyfpe.h" 1
# 111 "./cpython/Include/Python.h" 2
# 1 "./cpython/Include/tracemalloc.h" 1
# 15 "./cpython/Include/tracemalloc.h"
__attribute__ ((visibility ("default"))) int PyTraceMalloc_Track(
    unsigned int domain,
    uintptr_t ptr,
    size_t size);





__attribute__ ((visibility ("default"))) int PyTraceMalloc_Untrack(
    unsigned int domain,
    uintptr_t ptr);
# 36 "./cpython/Include/tracemalloc.h"
__attribute__ ((visibility ("default"))) PyObject* _PyTraceMalloc_GetTraceback(
    unsigned int domain,
    uintptr_t ptr);


__attribute__ ((visibility ("default"))) int _PyTraceMalloc_IsTracing(void);


__attribute__ ((visibility ("default"))) void _PyTraceMalloc_ClearTraces(void);


__attribute__ ((visibility ("default"))) PyObject * _PyTraceMalloc_GetTraces(void);


__attribute__ ((visibility ("default"))) PyObject * _PyTraceMalloc_GetObjectTraceback(PyObject *obj);


__attribute__ ((visibility ("default"))) PyStatus _PyTraceMalloc_Init(void);


__attribute__ ((visibility ("default"))) int _PyTraceMalloc_Start(int max_nframe);


__attribute__ ((visibility ("default"))) void _PyTraceMalloc_Stop(void);


__attribute__ ((visibility ("default"))) int _PyTraceMalloc_GetTracebackLimit(void);


__attribute__ ((visibility ("default"))) size_t _PyTraceMalloc_GetMemory(void);


__attribute__ ((visibility ("default"))) PyObject * _PyTraceMalloc_GetTracedMemory(void);


__attribute__ ((visibility ("default"))) void _PyTraceMalloc_ResetPeak(void);
# 112 "./cpython/Include/Python.h" 2
