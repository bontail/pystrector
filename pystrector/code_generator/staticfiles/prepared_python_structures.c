typedef void __builtin_va_list;
typedef long long __uint128_t;


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
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;

typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





typedef __darwin_pid_t pid_t;
typedef __darwin_id_t id_t;
typedef int sig_atomic_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;





typedef __darwin_intptr_t intptr_t;
typedef unsigned long uintptr_t;




typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;
typedef u_int64_t syscall_arg_t;



struct __darwin_arm_exception_state
{
 __uint32_t __exception;
 __uint32_t __fsr;
 __uint32_t __far;
};
struct __darwin_arm_exception_state64
{
 __uint64_t __far;
 __uint32_t __esr;
 __uint32_t __exception;
};
struct __darwin_arm_thread_state
{
 __uint32_t __r[13];
 __uint32_t __sp;
 __uint32_t __lr;
 __uint32_t __pc;
 __uint32_t __cpsr;
};
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
struct __darwin_arm_vfp_state
{
 __uint32_t __r[64];
 __uint32_t __fpscr;
};
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
struct __arm_pagein_state
{
 int __pagein_error;
};
struct __arm_legacy_debug_state
{
 __uint32_t __bvr[16];
 __uint32_t __bcr[16];
 __uint32_t __wvr[16];
 __uint32_t __wcr[16];
};
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
struct __darwin_arm_cpmu_state64
{
 __uint64_t __ctrs[16];
};




struct __darwin_mcontext32
{
 struct __darwin_arm_exception_state __es;
 struct __darwin_arm_thread_state __ss;
 struct __darwin_arm_vfp_state __fs;
};
struct __darwin_mcontext64
{
 struct __darwin_arm_exception_state64 __es;
 struct __darwin_arm_thread_state64 __ss;
 struct __darwin_arm_neon_state64 __ns;
};
typedef struct __darwin_mcontext64 *mcontext_t;

typedef __darwin_pthread_attr_t pthread_attr_t;

struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
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


typedef __darwin_sigset_t sigset_t;
typedef __darwin_size_t size_t;
typedef __darwin_uid_t uid_t;

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
typedef void (*sig_t)(int);
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};

void(*signal(int, void (*)(int)))(int);

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;


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
typedef long int intmax_t;
typedef long unsigned int uintmax_t;







struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
typedef __uint64_t rlim_t;
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
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
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};

int getpriority(int, id_t);

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) ;
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

int setrlimit(int, const struct rlimit *) ;




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
} ;

struct _OSUnalignedU32 {
 volatile uint32_t __val;
} ;

struct _OSUnalignedU64 {
 volatile uint64_t __val;
} ;
static inline
uint16_t
OSReadSwapInt16(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt16(((struct _OSUnalignedU16 *)((uintptr_t)_base + _offset))->__val);
}
static inline
uint32_t
OSReadSwapInt32(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt32(((struct _OSUnalignedU32 *)((uintptr_t)_base + _offset))->__val);
}
static inline
uint64_t
OSReadSwapInt64(
 const volatile void * _base,
 uintptr_t _offset
 )
{
 return _OSSwapInt64(((struct _OSUnalignedU64 *)((uintptr_t)_base + _offset))->__val);
}
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

pid_t wait(int *) ;
pid_t waitpid(pid_t, int *, int) ;

int waitid(idtype_t, id_t, siginfo_t *, int) ;


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);




void *alloca(size_t);

typedef __darwin_ct_rune_t ct_rune_t;
typedef __darwin_rune_t rune_t;


typedef __darwin_wchar_t wchar_t;

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


extern int __mb_cur_max;








typedef unsigned long long malloc_type_id_t;




     void *malloc_type_malloc(size_t size, malloc_type_id_t type_id)  ;
     void *malloc_type_calloc(size_t count, size_t size, malloc_type_id_t type_id)  ;
     void malloc_type_free(void * ptr, malloc_type_id_t type_id);
     void *malloc_type_realloc(void * ptr, size_t size, malloc_type_id_t type_id)  ;
     void *malloc_type_valloc(size_t size, malloc_type_id_t type_id)  ;
     void *malloc_type_aligned_alloc(size_t alignment, size_t size, malloc_type_id_t type_id)  ;

     int malloc_type_posix_memalign(void * *memptr, size_t alignment, size_t size, malloc_type_id_t type_id) ;




typedef struct _malloc_zone_t malloc_zone_t;

     void *malloc_type_zone_malloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id)  ;
     void *malloc_type_zone_calloc(malloc_zone_t *zone, size_t count, size_t size, malloc_type_id_t type_id)  ;
     void malloc_type_zone_free(malloc_zone_t *zone, void * ptr, malloc_type_id_t type_id);
     void *malloc_type_zone_realloc(malloc_zone_t *zone, void * ptr, size_t size, malloc_type_id_t type_id)  ;
     void *malloc_type_zone_valloc(malloc_zone_t *zone, size_t size, malloc_type_id_t type_id)  ;
     void *malloc_type_zone_memalign(malloc_zone_t *zone, size_t alignment, size_t size, malloc_type_id_t type_id)  ;











void *malloc(size_t __size)   ;
void *calloc(size_t __count, size_t __size)   ;
void free(void * );
void *realloc(void * __ptr, size_t __size)   ;
void *reallocf(void * __ptr, size_t __size)  ;

void *valloc(size_t)  ;




void *aligned_alloc(size_t __alignment, size_t __size)      ;


int posix_memalign(void * *__memptr, size_t __alignment, size_t __size) ;




void abort(void)  ;
int abs(int) ;
int atexit(void (* )(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *__key, const void *__base, size_t __nel,
     size_t __width, int (* __compar)(const void *, const void *));

div_t div(int, int) ;
void exit(int) ;

char *getenv(const char *);
long labs(long) ;
ldiv_t ldiv(long, long) ;

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
double strtod(const char *, char **) ;
float strtof(const char *, char **) ;
long strtol(const char *__str, char **__endptr, int __base);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *__str, char **__endptr, int __base);

unsigned long
  strtoul(const char *__str, char **__endptr, int __base);

unsigned long long
  strtoull(const char *__str, char **__endptr, int __base);



 

int system(const char *) ;


size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) ;
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



char *mktemp(char *);
int mkstemp(char *);
long mrand48(void) ;
long nrand48(unsigned short[3]) ;
int posix_openpt(int);
char *ptsname(int);


int ptsname_r(int fildes, char *buffer, size_t buflen)    ;


int putenv(char *) ;
long random(void) ;
int rand_r(unsigned *) ;

char *realpath(const char * restrict, char * restrict) ;



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char * __name, const char * __value, int __overwrite) ;

void setkey(const char *) ;



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) ;








typedef __darwin_dev_t dev_t;
typedef __darwin_mode_t mode_t;



uint32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int )
     
     
   
    ;
void arc4random_buf(void * __buf, size_t __nbytes) ;
void arc4random_stir(void);
uint32_t
  arc4random_uniform(uint32_t __upper_bound) ;
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

int daemon(int, int)   ;
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);
void setprogname(const char *);
int heapsort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





int mergesort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *));





void psort(void *__base, size_t __nel, size_t __width,
     int (* __compar)(const void *, const void *))
     ;





void psort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *))
     ;





void qsort_r(void *__base, size_t __nel, size_t __width, void *,
     int (* __compar)(void *, const void *, const void *));
int radixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
int rpmatch(const char *)
    ;
int sradixsort(const unsigned char **__base, int __nel, const unsigned char *__table,
     unsigned __endbyte);
void sranddev(void);
void srandomdev(void);

long long
 strtonum(const char *__numstr, long long __minval, long long __maxval, const char **__errstrp)
    ;

long long
  strtoq(const char *__str, char **__endptr, int __base);
unsigned long long
  strtouq(const char *__str, char **__endptr, int __base);

extern char *suboptarg;










typedef __builtin_va_list __gnuc_va_list;
typedef __darwin_va_list va_list;





int renameat(int, const char *, int, const char *) ;



int renamex_np(const char *, const char *, unsigned int)   ;
int renameatx_np(int, const char *, int, const char *, unsigned int)   ;





typedef __darwin_off_t fpos_t;
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
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



extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;


void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);

FILE *fopen(const char * restrict __filename, const char * restrict __mode) ;



int fprintf(FILE * restrict, const char * restrict, ...) ;
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) ;
size_t fread(void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) ;
int fscanf(FILE * restrict, const char * restrict, ...) ;
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict __ptr, size_t __size, size_t __nitems, FILE * restrict __stream) ;
int getc(FILE *);
int getchar(void);






char *gets(char *);

void perror(const char *) ;
int printf(const char * restrict, ...) ;
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *__old, const char *__new);
void rewind(FILE *);
int scanf(const char * restrict, ...) ;
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);







int sprintf(char * restrict, const char * restrict, ...) ;

int sscanf(const char * restrict, const char * restrict, ...) ;
FILE *tmpfile(void);







char *tmpnam(char *);

int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, __gnuc_va_list) ;
int vprintf(const char * restrict, __gnuc_va_list) ;







int vsprintf(char * restrict, const char * restrict, __gnuc_va_list) ;



char *ctermid(char *);






FILE *fdopen(int, const char *) ;



int fileno(FILE *);


int pclose(FILE *) ;

FILE *popen(const char *, const char *)  ;





int __srget(FILE *);
int __svfscanf(FILE *, const char *, __gnuc_va_list) ;
int __swbuf(int, FILE *);








extern    int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}

void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);








char *tempnam(const char *__dir, const char *__prefix) ;

typedef __darwin_off_t off_t;


int fseeko(FILE * __stream, off_t __offset, int __whence);
off_t ftello(FILE * __stream);





int snprintf(char * restrict __str, size_t __size, const char * restrict __format, ...) ;
int vfscanf(FILE * restrict __stream, const char * restrict __format, __gnuc_va_list) ;
int vscanf(const char * restrict __format, __gnuc_va_list) ;
int vsnprintf(char * restrict __str, size_t __size, const char * restrict __format, __gnuc_va_list) ;
int vsscanf(const char * restrict __str, const char * restrict __format, __gnuc_va_list) ;

typedef __darwin_ssize_t ssize_t;


int dprintf(int, const char * restrict, ...)  ;
int vdprintf(int, const char * restrict, __gnuc_va_list)  ;
ssize_t getdelim(char ** restrict __linep, size_t * restrict __linecapp, int __delimiter, FILE * restrict __stream) ;
ssize_t getline(char ** restrict __linep, size_t * restrict __linecapp, FILE * restrict __stream) ;
FILE *fmemopen(void * restrict __buf, size_t __size, const char * restrict __mode)    ;
FILE *open_memstream(char **__bufp, size_t *__sizep)    ;









extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) ;
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *) ;
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, __gnuc_va_list) ;





FILE *funopen(const void *,
                 int (* )(void *, char *, int),
                 int (* )(void *, const char *, int),
                 fpos_t (* )(void *, fpos_t, int),
                 int (* )(void *));

extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);

extern int * __error(void);



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
char *strerror(int __errnum) ;
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


char *strtok_r(char *__str, const char *__sep, char **__lasts);


int strerror_r(int __errnum, char *__strerrbuf, size_t __buflen);
char *strdup(const char *__s1);
void *memccpy(void *__dst, const void *__src, int __c, size_t __n);


char *stpcpy(char *__dst, const char *__src);
char *stpncpy(char *__dst, const char *__src, size_t __n) ;
char *strndup(const char *__s1, size_t __n) ;
size_t strnlen(const char *__s1, size_t __n) ;
char *strsignal(int __sig);


void *memmem(const void *__big, size_t __big_len, const void *__little, size_t __little_len) ;
void memset_pattern4(void *__b, const void *__pattern4, size_t __len) ;
void memset_pattern8(void *__b, const void *__pattern8, size_t __len) ;
void memset_pattern16(void *__b, const void *__pattern16, size_t __len) ;

char *strcasestr(const char *__big, const char *__little);
char *strnstr(const char *__big, const char *__little, size_t __len);
size_t strlcat(char *__dst, const char *__source, size_t __size);
size_t strlcpy(char *__dst, const char *__source, size_t __size);
void strmode(int __mode, char *__bp);
char *strsep(char **__stringp, const char *__delim);


void swab(const void * restrict, void * restrict, ssize_t);

 

int timingsafe_bcmp(const void *__b1, const void *__b2, size_t __len);

 

int strsignal_r(int __sig, char *__strsignalbuf, size_t __buflen);










int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) ;
int ffsll(long long) ;
int fls(int) ;
int flsl(long) ;
int flsll(long long) ;








struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};


int getattrlistbulk(int, void *, void *, size_t, uint64_t) ;
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) ;
int setattrlistat(int, const char *, void *, void *, size_t, uint32_t)   ;
ssize_t freadlink(int, char * restrict, size_t)    ;


typedef __darwin_gid_t gid_t;




int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;


typedef __darwin_useconds_t useconds_t;

void _exit(int) ;
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) ;

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

int getgroups(int, gid_t []) ;



char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) ;

int pipe(int [2]);

ssize_t read(int, void *, size_t) ;

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) ;

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) ;




int unlink(const char *);

ssize_t write(int __fd, const void * __buf, size_t __nbyte) ;


size_t confstr(int, char *, size_t) ;

int getopt(int, char * const [], const char *) ;

extern char *optarg;
extern int optind, opterr, optopt;









void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);

void encrypt(char *, int) ;



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void)  ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) ;

int lockf(int, int, off_t) ;

int nice(int) ;

ssize_t pread(int __fd, void * __buf, size_t __nbyte, off_t __offset) ;

ssize_t pwrite(int __fd, const void * __buf, size_t __nbyte, off_t __offset) ;








void *sbrk(int);



pid_t setpgrp(void) ;




int setregid(gid_t, gid_t) ;

int setreuid(uid_t, uid_t) ;

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) ;




pid_t vfork(void) ;


int fsync(int) ;

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);


int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);









typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((
                         4 
                         * 8))) == 0) ? ((1024) / ((
                         4 
                         * 8))) : (((1024) / ((
                         4 
                         * 8))) + 1))];
} fd_set;

int __darwin_check_fd_set_overflow(int, const void *, int)    ;


extern    int
__darwin_check_fd_set(int _a, const void *_b)
{




 if ((uintptr_t)&__darwin_check_fd_set_overflow != (uintptr_t) 0) {

  return __darwin_check_fd_set_overflow(_a, _b, 1);



 } else {
  return 1;
 }



}


extern    int
__darwin_fd_isset(int _fd, const struct fd_set *_p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  return _p->fds_bits[(unsigned long)_fd / (
                                          4 
                                          * 8)] & ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (
                                                                                                                       4 
                                                                                                                       * 8))));
 }

 return 0;
}

extern    void
__darwin_fd_set(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (
                                    4 
                                    * 8)] |= ((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (
                                                                                                                  4 
                                                                                                                  * 8)))));
 }
}

extern    void
__darwin_fd_clr(int _fd, struct fd_set *const _p)
{
 if (__darwin_check_fd_set(_fd, (const void *) _p)) {
  (_p->fds_bits[(unsigned long)_fd / (
                                    4 
                                    * 8)] &= ~((__int32_t)(((unsigned long)1) << ((unsigned long)_fd % (
                                                                                                                   4 
                                                                                                                   * 8)))));
 }
}
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};







typedef __darwin_time_t time_t;
typedef __darwin_suseconds_t suseconds_t;








int pselect(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, const struct timespec * restrict,
    const sigset_t * restrict)









;




int select(int, fd_set * restrict, fd_set * restrict,
    fd_set * restrict, struct timeval * restrict)










;



typedef __darwin_uuid_t uuid_t;


void _Exit(int) ;
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) ;
void endusershell(void);
int execvP(const char * __file, const char * __searchpath, char * const * __argv) ;
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);









int gethostuuid(uuid_t, const struct timespec *)    ;







mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) ;
int mkpathat_np(int dfd, const char *path, mode_t omode)
   
  ;
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int mkostemp(char *path, int oflags)
   
  ;
int mkostemps(char *path, int slen, int oflags)
   
  ;

int mkstemp_dprotected_np(char *path, int dpclass, int dpflags)
   
  ;
char *mkdtempat_np(int dfd, char *path)
   
  ;
int mkstempsat_np(int dfd, char *path, int slen)
   
  ;
int mkostempsat_np(int dfd, char *path, int slen, int oflags)
   
  ;
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);


int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);

int reboot(int);
int revoke(const char *);

 int rcmd(char **, int, const char *, const char *, const char *, int *);
 int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
 int rresvport(int *);
 int rresvport_af(int *, int);
 int iruserok(unsigned long, int, const char *, const char *);
 int iruserok_sa(const void *, int, int, const char *, const char *);
 int ruserok(const char *, int, const char *, const char *);

int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) ;



int setlogin(const char *);
void *setmode(const char *) ;
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






int syscall(int, ...);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) ;
int fsetattrlist(int,void*,void*,size_t,unsigned int) ;
int getattrlist(const char*,void*,void*,size_t,unsigned int) ;
int setattrlist(const char*,void*,void*,size_t,unsigned int) ;
int exchangedata(const char*,const char*,unsigned int) ;
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) ;
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) ;
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) ;




int fsync_volume_np(int, int) ;
int sync_volume_np(const char *, int) ;

extern int optreset;








void __assert_rtn(const char *, const char *, int, const char *)   ;




typedef __darwin_mbstate_t mbstate_t;


typedef __gnuc_va_list va_list;

typedef __darwin_clock_t clock_t;





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
extern char *tzname[];


extern int getdate_err;

extern long timezone ;

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) ;
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) ;
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) ;
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) ;
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



int nanosleep(const struct timespec *__rqtp, struct timespec *__rmtp) ;
typedef enum {
_CLOCK_REALTIME   = 0,

_CLOCK_MONOTONIC   = 6,


_CLOCK_MONOTONIC_RAW   = 4,

_CLOCK_MONOTONIC_RAW_APPROX   = 5,

_CLOCK_UPTIME_RAW   = 8,

_CLOCK_UPTIME_RAW_APPROX   = 9,


_CLOCK_PROCESS_CPUTIME_ID   = 12,

_CLOCK_THREAD_CPUTIME_ID   = 16

} clockid_t;

 
int clock_getres(clockid_t __clock_id, struct timespec *__res);

 
int clock_gettime(clockid_t __clock_id, struct timespec *__tp);


 
__uint64_t clock_gettime_nsec_np(clockid_t __clock_id);


 

int clock_settime(clockid_t __clock_id, const struct timespec *__tp);
   
int timespec_get(struct timespec *ts, int base);



typedef __darwin_wint_t wint_t;

typedef __darwin_wctype_t wctype_t;
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


unsigned long ___runetype(__darwin_ct_rune_t);
__darwin_ct_rune_t ___tolower(__darwin_ct_rune_t);
__darwin_ct_rune_t ___toupper(__darwin_ct_rune_t);


extern   int
isascii(int _c)
{
 return ((_c & ~0x7F) == 0);
}

int __maskrune(__darwin_ct_rune_t, unsigned long);



extern   int
__istype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (isascii(_c) ? !!(_DefaultRuneLocale.__runetype[_c] & _f)
  : !!__maskrune(_c, _f));

}

extern   __darwin_ct_rune_t
__isctype(__darwin_ct_rune_t _c, unsigned long _f)
{



 return (_c < 0 || _c >= (1 <<8 )) ? 0 :
  !!(_DefaultRuneLocale.__runetype[_c] & _f);

}

__darwin_ct_rune_t __toupper(__darwin_ct_rune_t);
__darwin_ct_rune_t __tolower(__darwin_ct_rune_t);



extern   int
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






extern   int
isalnum(int _c)
{
 return (__istype(_c, 0x00000100L|0x00000400L));
}

extern   int
isalpha(int _c)
{
 return (__istype(_c, 0x00000100L));
}

extern   int
isblank(int _c)
{
 return (__istype(_c, 0x00020000L));
}

extern   int
iscntrl(int _c)
{
 return (__istype(_c, 0x00000200L));
}


extern   int
isdigit(int _c)
{
 return (__isctype(_c, 0x00000400L));
}

extern   int
isgraph(int _c)
{
 return (__istype(_c, 0x00000800L));
}

extern   int
islower(int _c)
{
 return (__istype(_c, 0x00001000L));
}

extern   int
isprint(int _c)
{
 return (__istype(_c, 0x00040000L));
}

extern   int
ispunct(int _c)
{
 return (__istype(_c, 0x00002000L));
}

extern   int
isspace(int _c)
{
 return (__istype(_c, 0x00004000L));
}

extern   int
isupper(int _c)
{
 return (__istype(_c, 0x00008000L));
}


extern   int
isxdigit(int _c)
{
 return (__isctype(_c, 0x00010000L));
}

extern   int
toascii(int _c)
{
 return (_c & 0x7F);
}

extern   int
tolower(int _c)
{
        return (__tolower(_c));
}

extern   int
toupper(int _c)
{
        return (__toupper(_c));
}


extern   int
digittoint(int _c)
{
 return (__maskrune(_c, 0x0F));
}

extern   int
ishexnumber(int _c)
{
 return (__istype(_c, 0x00010000L));
}

extern   int
isideogram(int _c)
{
 return (__istype(_c, 0x00080000L));
}

extern   int
isnumber(int _c)
{
 return (__istype(_c, 0x00000400L));
}

extern   int
isphonogram(int _c)
{
 return (__istype(_c, 0x00200000L));
}

extern   int
isrune(int _c)
{
 return (__istype(_c, 0xFFFFFFF0L));
}

extern   int
isspecial(int _c)
{
 return (__istype(_c, 0x00100000L));
}







extern   int
iswalnum(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L|0x00000400L));
}

extern   int
iswalpha(wint_t _wc)
{
 return (__istype(_wc, 0x00000100L));
}

extern   int
iswcntrl(wint_t _wc)
{
 return (__istype(_wc, 0x00000200L));
}

extern   int
iswctype(wint_t _wc, wctype_t _charclass)
{
 return (__istype(_wc, _charclass));
}

extern   int
iswdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00000400L));
}

extern   int
iswgraph(wint_t _wc)
{
 return (__istype(_wc, 0x00000800L));
}

extern   int
iswlower(wint_t _wc)
{
 return (__istype(_wc, 0x00001000L));
}

extern   int
iswprint(wint_t _wc)
{
 return (__istype(_wc, 0x00040000L));
}

extern   int
iswpunct(wint_t _wc)
{
 return (__istype(_wc, 0x00002000L));
}

extern   int
iswspace(wint_t _wc)
{
 return (__istype(_wc, 0x00004000L));
}

extern   int
iswupper(wint_t _wc)
{
 return (__istype(_wc, 0x00008000L));
}

extern   int
iswxdigit(wint_t _wc)
{
 return (__isctype(_wc, 0x00010000L));
}

extern   wint_t
towlower(wint_t _wc)
{
        return (__tolower(_wc));
}

extern   wint_t
towupper(wint_t _wc)
{
        return (__toupper(_wc));
}

wctype_t
 wctype(const char *);





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
     const struct tm * restrict) ;
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



size_t mbsnrtowcs(wchar_t * restrict, const char ** restrict, size_t,
            size_t, mbstate_t * restrict);
wchar_t *wcpcpy(wchar_t * restrict, const wchar_t * restrict) ;
wchar_t *wcpncpy(wchar_t * restrict, const wchar_t * restrict, size_t) ;
wchar_t *wcsdup(const wchar_t *) ;
int wcscasecmp(const wchar_t *, const wchar_t *) ;
int wcsncasecmp(const wchar_t *, const wchar_t *, size_t n) ;
size_t wcsnlen(const wchar_t *, size_t) ;
size_t wcsnrtombs(char * restrict, const wchar_t ** restrict, size_t,
            size_t, mbstate_t * restrict);
FILE *open_wmemstream(wchar_t ** __bufp, size_t * __sizep)    ;









wchar_t *fgetwln(FILE * restrict, size_t *) ;
size_t wcslcat(wchar_t *, const wchar_t *, size_t);
size_t wcslcpy(wchar_t *, const wchar_t *, size_t);














extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;


extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);



extern intmax_t
strtoimax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);


extern uintmax_t
strtoumax(const char * restrict __nptr,
   char ** restrict __endptr,
   int __base);



extern intmax_t
wcstoimax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);


extern uintmax_t
wcstoumax(const wchar_t * restrict __nptr,
   wchar_t ** restrict __endptr,
   int __base);















typedef uintptr_t Py_uintptr_t;
typedef intptr_t Py_intptr_t;
typedef ssize_t Py_ssize_t;
typedef Py_ssize_t Py_hash_t;


typedef size_t Py_uhash_t;


typedef Py_ssize_t Py_ssize_clean_t;

    
   typedef float float_t;
    typedef double double_t;
extern int __math_errhandling(void);
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
extern    int _isfinitef(float);
extern    int _isfinited(double);
extern    int _isfinitel(long double);
extern    int _isinff(float);
extern    int _isinfd(double);
extern    int _isinfl(long double);
extern    int _isnanf(float);
extern    int _isnand(double);
extern    int _isnanl(long double);
extern    int _isnormalf(float);
extern    int _isnormald(double);
extern    int _isnormall(long double);
extern    int _signbitf(float);
extern    int _signbitd(double);
extern    int _signbitl(long double);

extern    int _isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
extern    int _isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
extern    int _isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
extern    int _isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
extern    int _isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
extern    int _isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
extern    int _isnanf(float __x) {
    return __x != __x;
}
extern    int _isnand(double __x) {
    return __x != __x;
}
extern    int _isnanl(long double __x) {
    return __x != __x;
}
extern    int _signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
extern    int _signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}
extern    int _signbitl(long double __x) {
    union { long double __f; unsigned long long __u;} __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

extern    int _isnormalf(float __x) {
    return _isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435082228750796873653722224568e-38F;
}
extern    int _isnormald(double __x) {
    return _isfinited(__x) && __builtin_fabs(__x) >= ((double)2.22507385850720138309023271733240406e-308L);
}
extern    int _isnormall(long double __x) {
    return _isfinitel(__x) && __builtin_fabsl(__x) >= 2.22507385850720138309023271733240406e-308L;
}
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
extern float lgammaf_r(float, int *)  ;
extern double lgamma_r(double, int *)  ;
extern long double lgammal_r(long double, int *)  ;
extern float __exp10f(float)  ;
extern double __exp10(double)  ;





extern    void __sincosf(float __x, float *__sinp, float *__cosp);
extern    void __sincos(double __x, double *__sinp, double *__cosp);
extern float __cospif(float)  ;
extern double __cospi(double)  ;
extern float __sinpif(float)  ;
extern double __sinpi(double)  ;
extern float __tanpif(float)  ;
extern double __tanpi(double)  ;
extern    void __sincospif(float __x, float *__sinp, float *__cosp);
extern    void __sincospi(double __x, double *__sinp, double *__cosp);






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

extern    void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern    void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern    void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

extern    void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}







extern double j0(double)  ;
extern double j1(double)  ;
extern double jn(int, double)  ;
extern double y0(double)  ;
extern double y1(double)  ;
extern double yn(int, double)  ;
extern double scalb(double, double);
extern int signgam;
struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};











struct timeval64 {
 __int64_t tv_sec;
 __int64_t tv_usec;
};
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};



int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) ;
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * restrict, void * restrict);







int setitimer(int, const struct itimerval * restrict,
    struct itimerval * restrict);
int utimes(const char *, const struct timeval *);


typedef __darwin_blkcnt_t blkcnt_t;
typedef __darwin_blksize_t blksize_t;

typedef __darwin_ino_t ino_t;


typedef __darwin_ino64_t ino64_t;



typedef __uint16_t nlink_t;
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
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };


int chmod(const char *, mode_t) ;
int fchmod(int, mode_t) ;
int fstat(int, struct stat *) ;
int lstat(const char *, struct stat *) ;
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) ;
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);


int fchmodat(int, const char *, mode_t, int) ;
int fstatat(int, const char *, struct stat *, int)  ;
int mkdirat(int, const char *, mode_t) ;
int mkfifoat(int, const char *, mode_t)    ;
int mknodat(int, const char *, mode_t, dev_t)    ;




int futimens(int __fd, const struct timespec __times[2])    ;
int utimensat(int __fd, const char *__path, const struct timespec __times[2],
    int __flag)    ;





struct _filesec;
typedef struct _filesec *filesec_t;


int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) ;
int lchflags(const char *, __uint32_t) ;
int lchmod(const char *, mode_t) ;
int lstatx_np(const char *, struct stat *, filesec_t) ;
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) ;
int umaskx_np(filesec_t) ;

typedef __darwin_wctrans_t wctrans_t;
extern   int
iswblank(wint_t _wc)
{
 return (__istype(_wc, 0x00020000L));
}


extern   int
iswascii(wint_t _wc)
{
 return ((_wc & ~0x7F) == 0);
}

extern   int
iswhexnumber(wint_t _wc)
{
 return (__istype(_wc, 0x00010000L));
}

extern   int
iswideogram(wint_t _wc)
{
 return (__istype(_wc, 0x00080000L));
}

extern   int
iswnumber(wint_t _wc)
{
 return (__istype(_wc, 0x00000400L));
}

extern   int
iswphonogram(wint_t _wc)
{
 return (__istype(_wc, 0x00200000L));
}

extern   int
iswrune(wint_t _wc)
{
 return (__istype(_wc, 0xFFFFFFF0L));
}

extern   int
iswspecial(wint_t _wc)
{
 return (__istype(_wc, 0x00100000L));
}


wint_t nextwctype(wint_t, wctype_t);

wint_t towctrans(wint_t, wctrans_t);
wctrans_t
 wctrans(const char *);


 void * PyMem_Malloc(size_t size);
 void * PyMem_Calloc(size_t nelem, size_t elsize);
 void * PyMem_Realloc(void *ptr, size_t new_size);
 void PyMem_Free(void *ptr);




 void * PyMem_RawMalloc(size_t size);
 void * PyMem_RawCalloc(size_t nelem, size_t elsize);
 void * PyMem_RawRealloc(void *ptr, size_t new_size);
 void PyMem_RawFree(void *ptr);


 const char* _PyMem_GetCurrentAllocatorName(void);


 char * _PyMem_RawStrdup(const char *str);


 char * _PyMem_Strdup(const char *str);


 wchar_t* _PyMem_RawWcsdup(const wchar_t *str);


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


 void PyMem_GetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocatorEx *allocator);
 void PyMem_SetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocatorEx *allocator);
 void PyMem_SetupDebugHooks(void);
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


 int PyObject_CheckBuffer(PyObject *obj);






 int PyObject_GetBuffer(PyObject *obj, Py_buffer *view,
                                   int flags);



 void * PyBuffer_GetPointer(const Py_buffer *view, const Py_ssize_t *indices);



 Py_ssize_t PyBuffer_SizeFromFormat(const char *format);


 int PyBuffer_ToContiguous(void *buf, const Py_buffer *view,
                                      Py_ssize_t len, char order);

 int PyBuffer_FromContiguous(const Py_buffer *view, const void *buf,
                                        Py_ssize_t len, char order);
 int PyObject_CopyData(PyObject *dest, PyObject *src);


 int PyBuffer_IsContiguous(const Py_buffer *view, char fort);





 void PyBuffer_FillContiguousStrides(int ndims,
                                               Py_ssize_t *shape,
                                               Py_ssize_t *strides,
                                               int itemsize,
                                               char fort);






 int PyBuffer_FillInfo(Py_buffer *view, PyObject *o, void *buf,
                                  Py_ssize_t len, int readonly,
                                  int flags);


 void PyBuffer_Release(Py_buffer *view);
struct _object {
   




    







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






 int Py_Is(PyObject *x, PyObject *y);



static inline Py_ssize_t Py_REFCNT(PyObject *ob) {
    return ob->ob_refcnt;
}






static inline PyTypeObject* Py_TYPE(PyObject *ob) {
    return ob->ob_type;
}




extern  PyTypeObject PyLong_Type;
extern  PyTypeObject PyBool_Type;


static inline Py_ssize_t Py_SIZE(PyObject *ob) {
    
   (__builtin_expect(!(
   ob->ob_type != &PyLong_Type
   ), 0) ? __assert_rtn(__func__, "object.h", 231, 
   "ob->ob_type != &PyLong_Type"
   ) : (void)0)
                                      ;
    
   (__builtin_expect(!(
   ob->ob_type != &PyBool_Type
   ), 0) ? __assert_rtn(__func__, "object.h", 232, 
   "ob->ob_type != &PyBool_Type"
   ) : (void)0)
                                      ;
    return ((PyVarObject*)((ob)))->ob_size;
}




static inline  int _Py_IsImmortal(PyObject *op)
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
    
   (__builtin_expect(!(
   ob->ob_base.ob_type != &PyLong_Type
   ), 0) ? __assert_rtn(__func__, "object.h", 280, 
   "ob->ob_base.ob_type != &PyLong_Type"
   ) : (void)0)
                                              ;
    
   (__builtin_expect(!(
   ob->ob_base.ob_type != &PyBool_Type
   ), 0) ? __assert_rtn(__func__, "object.h", 281, 
   "ob->ob_base.ob_type != &PyBool_Type"
   ) : (void)0)
                                              ;
    ob->ob_size = size;
}
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

 PyObject* PyType_FromSpec(PyType_Spec*);

 PyObject* PyType_FromSpecWithBases(PyType_Spec*, PyObject*);


 void* PyType_GetSlot(PyTypeObject*, int);


 PyObject* PyType_FromModuleAndSpec(PyObject *, PyType_Spec *, PyObject *);
 PyObject * PyType_GetModule(PyTypeObject *);
 void * PyType_GetModuleState(PyTypeObject *);


 PyObject * PyType_GetName(PyTypeObject *);
 PyObject * PyType_GetQualName(PyTypeObject *);


 PyObject * PyType_FromMetaclass(PyTypeObject*, PyObject*, PyType_Spec*, PyObject*);
 void * PyObject_GetTypeData(PyObject *obj, PyTypeObject *cls);
 Py_ssize_t PyType_GetTypeDataSize(PyTypeObject *cls);



 int PyType_IsSubtype(PyTypeObject *, PyTypeObject *);

static inline int PyObject_TypeCheck(PyObject *ob, PyTypeObject *type) {
    return Py_IS_TYPE(((PyObject*)((ob))), (type)) || PyType_IsSubtype(Py_TYPE(((PyObject*)((ob)))), type);
}




extern  PyTypeObject PyType_Type;
extern  PyTypeObject PyBaseObject_Type;
extern  PyTypeObject PySuper_Type;

 unsigned long PyType_GetFlags(PyTypeObject*);

 int PyType_Ready(PyTypeObject *);
 PyObject * PyType_GenericAlloc(PyTypeObject *, Py_ssize_t);
 PyObject * PyType_GenericNew(PyTypeObject *,
                                               PyObject *, PyObject *);
 unsigned int PyType_ClearCache(void);
 void PyType_Modified(PyTypeObject *);


 PyObject * PyObject_Repr(PyObject *);
 PyObject * PyObject_Str(PyObject *);
 PyObject * PyObject_ASCII(PyObject *);
 PyObject * PyObject_Bytes(PyObject *);
 PyObject * PyObject_RichCompare(PyObject *, PyObject *, int);
 int PyObject_RichCompareBool(PyObject *, PyObject *, int);
 PyObject * PyObject_GetAttrString(PyObject *, const char *);
 int PyObject_SetAttrString(PyObject *, const char *, PyObject *);
 int PyObject_HasAttrString(PyObject *, const char *);
 PyObject * PyObject_GetAttr(PyObject *, PyObject *);
 int PyObject_SetAttr(PyObject *, PyObject *, PyObject *);
 int PyObject_HasAttr(PyObject *, PyObject *);
 PyObject * PyObject_SelfIter(PyObject *);
 PyObject * PyObject_GenericGetAttr(PyObject *, PyObject *);
 int PyObject_GenericSetAttr(PyObject *, PyObject *, PyObject *);

 int PyObject_GenericSetDict(PyObject *, PyObject *, void *);

 Py_hash_t PyObject_Hash(PyObject *);
 Py_hash_t PyObject_HashNotImplemented(PyObject *);
 int PyObject_IsTrue(PyObject *);
 int PyObject_Not(PyObject *);
 int PyCallable_Check(PyObject *);
 void PyObject_ClearWeakRefs(PyObject *);






 PyObject * PyObject_Dir(PyObject *);



 PyObject * _PyObject_GetState(PyObject *);




 int Py_ReprEnter(PyObject *);
 void Py_ReprLeave(PyObject *);
 void _Py_Dealloc(PyObject *);





 void Py_IncRef(PyObject *);
 void Py_DecRef(PyObject *);



 void _Py_IncRef(PyObject *);
 void _Py_DecRef(PyObject *);

static inline  void Py_INCREF(PyObject *op)
{
    uint32_t cur_refcnt = op->ob_refcnt_split[0];
    uint32_t new_refcnt = cur_refcnt + 1;
    if (new_refcnt == 0) {
        return;
    }
    op->ob_refcnt_split[0] = new_refcnt;







    ((void)0);




}
static inline  void Py_DECREF(PyObject *op)
{


    if (_Py_IsImmortal(((PyObject*)((op))))) {
        return;
    }
    ((void)0);
    if (--op->ob_refcnt == 0) {
        _Py_Dealloc(op);
    }
}
static inline void Py_XINCREF(PyObject *op)
{
    if (op != 
             ((void *)0)
                     ) {
        Py_INCREF(((PyObject*)((op))));
    }
}




static inline void Py_XDECREF(PyObject *op)
{
    if (op != 
             ((void *)0)
                     ) {
        Py_DECREF(((PyObject*)((op))));
    }
}






 PyObject* Py_NewRef(PyObject *obj);


 PyObject* Py_XNewRef(PyObject *obj);

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
extern  PyObject _Py_NoneStruct;



 int Py_IsNone(PyObject *x);
extern  PyObject _Py_NotImplementedStruct;
typedef enum {
    PYGEN_RETURN = 0,
    PYGEN_ERROR = -1,
    PYGEN_NEXT = 1,
} PySendResult;




 void _Py_NewReference(PyObject *op);
 void _Py_NewReferenceNoTotal(PyObject *op);
typedef struct _Py_Identifier {
    const char* string;


    Py_ssize_t index;
} _Py_Identifier;
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

 const char * _PyType_Name(PyTypeObject *);
 PyObject * _PyType_Lookup(PyTypeObject *, PyObject *);
 PyObject * _PyType_LookupId(PyTypeObject *, _Py_Identifier *);
 PyObject * _PyObject_LookupSpecialId(PyObject *, _Py_Identifier *);





 PyTypeObject * _PyType_CalculateMetaclass(PyTypeObject *, PyObject *);
 PyObject * _PyType_GetDocFromInternalDoc(const char *, const char *);
 PyObject * _PyType_GetTextSignatureFromInternalDoc(const char *, const char *);
 PyObject * PyType_GetModuleByDef(PyTypeObject *, PyModuleDef *);
 PyObject * PyType_GetDict(PyTypeObject *);

 int PyObject_Print(PyObject *, FILE *, int);
 void _Py_BreakPoint(void);
 void _PyObject_Dump(PyObject *);
 int _PyObject_IsFreed(PyObject *);

 int _PyObject_IsAbstract(PyObject *);
 PyObject * _PyObject_GetAttrId(PyObject *, _Py_Identifier *);
 int _PyObject_SetAttrId(PyObject *, _Py_Identifier *, PyObject *);
 int _PyObject_LookupAttr(PyObject *, PyObject *, PyObject **);
 int _PyObject_LookupAttrId(PyObject *, _Py_Identifier *, PyObject **);

 int _PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);

 PyObject ** _PyObject_GetDictPtr(PyObject *);
 PyObject * _PyObject_NextNotImplemented(PyObject *);
 void PyObject_CallFinalizer(PyObject *);
 int PyObject_CallFinalizerFromDealloc(PyObject *);



 PyObject *
_PyObject_GenericGetAttrWithDict(PyObject *, PyObject *, PyObject *, int);
 int
_PyObject_GenericSetAttrWithDict(PyObject *, PyObject *,
                                 PyObject *, PyObject *);

 PyObject * _PyObject_FunctionStr(PyObject *);
extern  PyTypeObject _PyNone_Type;
extern  PyTypeObject _PyNotImplemented_Type;




extern  int _Py_SwappedOp[];

 void
_PyDebugAllocatorStats(FILE *out, const char *block_name, int num_blocks,
                       size_t sizeof_block);
 void
_PyObject_DebugTypeStats(FILE *out);
 void  _PyObject_AssertFailed(
    PyObject *obj,
    const char *expr,
    const char *msg,
    const char *file,
    int line,
    const char *function);
 int _PyObject_CheckConsistency(
    PyObject *op,
    int check_content);
 int _PyTrash_begin(PyThreadState *tstate, PyObject *op);
 void _PyTrash_end(PyThreadState *tstate);

 int _PyTrash_cond(PyObject *op, destructor dealloc);
 typedef int UsingDeprecatedTrashcanMacro;
 void * PyObject_GetItemData(PyObject *obj);

 int _PyObject_VisitManagedDict(PyObject *obj, visitproc visit, void *arg);
 void _PyObject_ClearManagedDict(PyObject *obj);



typedef int(*PyType_WatchCallback)(PyTypeObject *);
 int PyType_AddWatcher(PyType_WatchCallback callback);
 int PyType_ClearWatcher(int watcher_id);
 int PyType_Watch(int watcher_id, PyObject *type);
 int PyType_Unwatch(int watcher_id, PyObject *type);






 int PyUnstable_Type_AssignVersionTag(PyTypeObject *type);




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
 void * PyObject_Malloc(size_t size);

 void * PyObject_Calloc(size_t nelem, size_t elsize);

 void * PyObject_Realloc(void *ptr, size_t new_size);
 void PyObject_Free(void *ptr);
 PyObject * PyObject_Init(PyObject *, PyTypeObject *);
 PyVarObject * PyObject_InitVar(PyVarObject *,
                                           PyTypeObject *, Py_ssize_t);







 PyObject * _PyObject_New(PyTypeObject *);
 PyVarObject * _PyObject_NewVar(PyTypeObject *, Py_ssize_t);
 Py_ssize_t PyGC_Collect(void);

 int PyGC_Enable(void);
 int PyGC_Disable(void);
 int PyGC_IsEnabled(void);
typedef int (*gcvisitobjects_t)(PyObject*, void*);
 void PyUnstable_GC_VisitObjects(gcvisitobjects_t callback, void* arg);





 PyVarObject * _PyObject_GC_Resize(PyVarObject *, Py_ssize_t);





 PyObject * _PyObject_GC_New(PyTypeObject *);
 PyVarObject * _PyObject_GC_NewVar(PyTypeObject *, Py_ssize_t);




 void PyObject_GC_Track(void *);




 void PyObject_GC_UnTrack(void *);

 void PyObject_GC_Del(void *);






 int PyObject_GC_IsTracked(PyObject *);
 int PyObject_GC_IsFinalized(PyObject *);




static inline size_t _PyObject_SIZE(PyTypeObject *type) {
    return ((size_t)(type->tp_basicsize));
}
static inline size_t _PyObject_VAR_SIZE(PyTypeObject *type, Py_ssize_t nitems) {
    size_t size = ((size_t)(type->tp_basicsize));
    size += ((size_t)(nitems)) * ((size_t)(type->tp_itemsize));
    return (((size_t)(size) + (size_t)((8) - 1)) & ~(size_t)((8) - 1));
}
typedef struct {

    void *ctx;


    void* (*alloc) (void *ctx, size_t size);


    void (*free) (void *ctx, void *ptr, size_t size);
} PyObjectArenaAllocator;


 void PyObject_GetArenaAllocator(PyObjectArenaAllocator *allocator);


 void PyObject_SetArenaAllocator(PyObjectArenaAllocator *allocator);



 int PyObject_IS_GC(PyObject *obj);
 int PyType_SUPPORTS_WEAKREFS(PyTypeObject *type);

 PyObject ** PyObject_GET_WEAKREFS_LISTPTR(PyObject *op);

 PyObject * PyUnstable_Object_GC_NewWithExtraData(PyTypeObject *,
                                                             size_t);
 Py_hash_t _Py_HashDouble(PyObject *, double);
 Py_hash_t _Py_HashPointer(const void*);

 Py_hash_t _Py_HashPointerRaw(const void*);
 Py_hash_t _Py_HashBytes(const void*, Py_ssize_t);
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
extern  _Py_HashSecret_t _Py_HashSecret;







typedef struct {
    Py_hash_t (*const hash)(const void *, Py_ssize_t);
    const char *name;
    const int hash_bits;
    const int seed_bits;
} PyHash_FuncDef;

 PyHash_FuncDef* PyHash_GetFuncDef(void);







 extern  int Py_DebugFlag;
 extern  int Py_VerboseFlag;
 extern  int Py_QuietFlag;
 extern  int Py_InteractiveFlag;
 extern  int Py_InspectFlag;
 extern  int Py_OptimizeFlag;
 extern  int Py_NoSiteFlag;
 extern  int Py_BytesWarningFlag;
 extern  int Py_FrozenFlag;
 extern  int Py_IgnoreEnvironmentFlag;
 extern  int Py_DontWriteBytecodeFlag;
 extern  int Py_NoUserSiteDirectory;
 extern  int Py_UnbufferedStdioFlag;
 extern  int Py_HashRandomizationFlag;
 extern  int Py_IsolatedFlag;
 char* Py_GETENV(const char *name);
extern  PyTypeObject PyByteArray_Type;
extern  PyTypeObject PyByteArrayIter_Type;






 PyObject * PyByteArray_FromObject(PyObject *);
 PyObject * PyByteArray_Concat(PyObject *, PyObject *);
 PyObject * PyByteArray_FromStringAndSize(const char *, Py_ssize_t);
 Py_ssize_t PyByteArray_Size(PyObject *);
 char * PyByteArray_AsString(PyObject *);
 int PyByteArray_Resize(PyObject *, Py_ssize_t);








typedef struct {
    PyVarObject ob_base;
    Py_ssize_t ob_alloc;
    char *ob_bytes;
    char *ob_start;
    Py_ssize_t ob_exports;
} PyByteArrayObject;

extern  char _PyByteArray_empty_string[];





static inline char* PyByteArray_AS_STRING(PyObject *op)
{
    PyByteArrayObject *self = (
                             (__builtin_expect(!(
                             PyObject_TypeCheck(((PyObject*)(((op)))), (&PyByteArray_Type))
                             ), 0) ? __assert_rtn(__func__, "bytearrayobject.h", 22, 
                             "PyByteArray_Check(op)"
                             ) : (void)0)
                             , ((PyByteArrayObject*)(op)));
    if (Py_SIZE(((PyObject*)((self))))) {
        return self->ob_start;
    }
    return _PyByteArray_empty_string;
}


static inline Py_ssize_t PyByteArray_GET_SIZE(PyObject *op) {
    PyByteArrayObject *self = (
                             (__builtin_expect(!(
                             PyObject_TypeCheck(((PyObject*)(((op)))), (&PyByteArray_Type))
                             ), 0) ? __assert_rtn(__func__, "bytearrayobject.h", 31, 
                             "PyByteArray_Check(op)"
                             ) : (void)0)
                             , ((PyByteArrayObject*)(op)));
    return Py_SIZE(((PyObject*)((self))));
}
extern  PyTypeObject PyBytes_Type;
extern  PyTypeObject PyBytesIter_Type;





 PyObject * PyBytes_FromStringAndSize(const char *, Py_ssize_t);
 PyObject * PyBytes_FromString(const char *);
 PyObject * PyBytes_FromObject(PyObject *);
 PyObject * PyBytes_FromFormatV(const char*, va_list)
                                ;
 PyObject * PyBytes_FromFormat(const char*, ...)
                                ;
 Py_ssize_t PyBytes_Size(PyObject *);
 char * PyBytes_AsString(PyObject *);
 PyObject * PyBytes_Repr(PyObject *, int);
 void PyBytes_Concat(PyObject **, PyObject *);
 void PyBytes_ConcatAndDel(PyObject **, PyObject *);
 PyObject * PyBytes_DecodeEscape(const char *, Py_ssize_t,
                                            const char *, Py_ssize_t,
                                            const char *);





 int PyBytes_AsStringAndSize(
    PyObject *obj,
    char **s,
    Py_ssize_t *len
    );







typedef struct {
    PyVarObject ob_base;
     Py_hash_t ob_shash;
    char ob_sval[1];






} PyBytesObject;

 int _PyBytes_Resize(PyObject **, Py_ssize_t);
 PyObject* _PyBytes_FormatEx(
    const char *format,
    Py_ssize_t format_len,
    PyObject *args,
    int use_bytearray);
 PyObject* _PyBytes_FromHex(
    PyObject *string,
    int use_bytearray);


 PyObject * _PyBytes_DecodeEscape(const char *, Py_ssize_t,
                                             const char *, const char **);





static inline char* PyBytes_AS_STRING(PyObject *op)
{
    return (
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 27)))
          ), 0) ? __assert_rtn(__func__, "bytesobject.h", 37, 
          "PyBytes_Check(op)"
          ) : (void)0)
          , ((PyBytesObject*)(op)))->ob_sval;
}


static inline Py_ssize_t PyBytes_GET_SIZE(PyObject *op) {
    PyBytesObject *self = (
                         (__builtin_expect(!(
                         PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 27)))
                         ), 0) ? __assert_rtn(__func__, "bytesobject.h", 42, 
                         "PyBytes_Check(op)"
                         ) : (void)0)
                         , ((PyBytesObject*)(op)));
    return Py_SIZE(((PyObject*)((self))));
}




 PyObject * _PyBytes_Join(PyObject *sep, PyObject *x);





typedef struct {

    PyObject *buffer;


    Py_ssize_t allocated;



    Py_ssize_t min_size;


    int use_bytearray;



    int overallocate;


    int use_small_buffer;
    char small_buffer[512];
} _PyBytesWriter;





 void _PyBytesWriter_Init(_PyBytesWriter *writer);




 PyObject * _PyBytesWriter_Finish(_PyBytesWriter *writer,
    void *str);


 void _PyBytesWriter_Dealloc(_PyBytesWriter *writer);




 void* _PyBytesWriter_Alloc(_PyBytesWriter *writer,
    Py_ssize_t size);







 void* _PyBytesWriter_Prepare(_PyBytesWriter *writer,
    void *str,
    Py_ssize_t size);
 void* _PyBytesWriter_Resize(_PyBytesWriter *writer,
    void *str,
    Py_ssize_t size);



 void* _PyBytesWriter_WriteBytes(_PyBytesWriter *writer,
    void *str,
    const void *bytes,
    Py_ssize_t size);
typedef uint32_t Py_UCS4;
typedef uint16_t Py_UCS2;
typedef uint8_t Py_UCS1;






extern  PyTypeObject PyUnicode_Type;
extern  PyTypeObject PyUnicodeIter_Type;
 PyObject* PyUnicode_FromStringAndSize(
    const char *u,
    Py_ssize_t size
    );



 PyObject* PyUnicode_FromString(
    const char *u
    );


 PyObject* PyUnicode_Substring(
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end);
 Py_UCS4* PyUnicode_AsUCS4(
    PyObject *unicode,
    Py_UCS4* buffer,
    Py_ssize_t buflen,
    int copy_null);




 Py_UCS4* PyUnicode_AsUCS4Copy(PyObject *unicode);





 Py_ssize_t PyUnicode_GetLength(
    PyObject *unicode
);





 Py_UCS4 PyUnicode_ReadChar(
    PyObject *unicode,
    Py_ssize_t index
    );






 int PyUnicode_WriteChar(
    PyObject *unicode,
    Py_ssize_t index,
    Py_UCS4 character
    );
 int PyUnicode_Resize(
    PyObject **unicode,
    Py_ssize_t length
    );
 PyObject* PyUnicode_FromEncodedObject(
    PyObject *obj,
    const char *encoding,
    const char *errors
    );
 PyObject* PyUnicode_FromObject(
    PyObject *obj
    );

 PyObject * PyUnicode_FromFormatV(
    const char *format,
    va_list vargs
    );
 PyObject * PyUnicode_FromFormat(
    const char *format,
    ...
    );

 void PyUnicode_InternInPlace(PyObject **);
 PyObject * PyUnicode_InternFromString(
    const char *u
    );
 PyObject* PyUnicode_FromWideChar(
    const wchar_t *w,
    Py_ssize_t size
    );
 Py_ssize_t PyUnicode_AsWideChar(
    PyObject *unicode,
    wchar_t *w,
    Py_ssize_t size
    );
 wchar_t* PyUnicode_AsWideCharString(
    PyObject *unicode,
    Py_ssize_t *size
    );
 PyObject* PyUnicode_FromOrdinal(int ordinal);
 const char* PyUnicode_GetDefaultEncoding(void);






 PyObject* PyUnicode_Decode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );
  PyObject* PyUnicode_AsDecodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
  PyObject* PyUnicode_AsDecodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
  PyObject* PyUnicode_AsEncodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );




 PyObject* PyUnicode_AsEncodedString(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
  PyObject* PyUnicode_AsEncodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );



 PyObject* PyUnicode_BuildEncodingMap(
    PyObject* string
   );



 PyObject* PyUnicode_DecodeUTF7(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

 PyObject* PyUnicode_DecodeUTF7Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );



 PyObject* PyUnicode_DecodeUTF8(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

 PyObject* PyUnicode_DecodeUTF8Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );

 PyObject* PyUnicode_AsUTF8String(
    PyObject *unicode
    );
 const char * PyUnicode_AsUTF8AndSize(
    PyObject *unicode,
    Py_ssize_t *size);
 PyObject* PyUnicode_DecodeUTF32(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

 PyObject* PyUnicode_DecodeUTF32Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




 PyObject* PyUnicode_AsUTF32String(
    PyObject *unicode
    );
 PyObject* PyUnicode_DecodeUTF16(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder


    );

 PyObject* PyUnicode_DecodeUTF16Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,


    Py_ssize_t *consumed
    );




 PyObject* PyUnicode_AsUTF16String(
    PyObject *unicode
    );



 PyObject* PyUnicode_DecodeUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

 PyObject* PyUnicode_AsUnicodeEscapeString(
    PyObject *unicode
    );



 PyObject* PyUnicode_DecodeRawUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

 PyObject* PyUnicode_AsRawUnicodeEscapeString(
    PyObject *unicode
    );





 PyObject* PyUnicode_DecodeLatin1(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

 PyObject* PyUnicode_AsLatin1String(
    PyObject *unicode
    );







 PyObject* PyUnicode_DecodeASCII(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );

 PyObject* PyUnicode_AsASCIIString(
    PyObject *unicode
    );
 PyObject* PyUnicode_DecodeCharmap(
    const char *string,
    Py_ssize_t length,
    PyObject *mapping,
    const char *errors
    );

 PyObject* PyUnicode_AsCharmapString(
    PyObject *unicode,
    PyObject *mapping
    );
 PyObject* PyUnicode_DecodeLocaleAndSize(
    const char *str,
    Py_ssize_t len,
    const char *errors);




 PyObject* PyUnicode_DecodeLocale(
    const char *str,
    const char *errors);






 PyObject* PyUnicode_EncodeLocale(
    PyObject *unicode,
    const char *errors
    );







 int PyUnicode_FSConverter(PyObject*, void*);




 int PyUnicode_FSDecoder(PyObject*, void*);





 PyObject* PyUnicode_DecodeFSDefault(
    const char *s
    );


 PyObject* PyUnicode_DecodeFSDefaultAndSize(
    const char *s,
    Py_ssize_t size
    );



 PyObject* PyUnicode_EncodeFSDefault(
    PyObject *unicode
    );
 PyObject* PyUnicode_Concat(
    PyObject *left,
    PyObject *right
    );




 void PyUnicode_Append(
    PyObject **pleft,
    PyObject *right
    );




 void PyUnicode_AppendAndDel(
    PyObject **pleft,
    PyObject *right
    );
 PyObject* PyUnicode_Split(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );






 PyObject* PyUnicode_Splitlines(
    PyObject *s,
    int keepends
    );



 PyObject* PyUnicode_Partition(
    PyObject *s,
    PyObject *sep
    );




 PyObject* PyUnicode_RPartition(
    PyObject *s,
    PyObject *sep
    );
 PyObject* PyUnicode_RSplit(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );
 PyObject * PyUnicode_Translate(
    PyObject *str,
    PyObject *table,
    const char *errors
    );




 PyObject* PyUnicode_Join(
    PyObject *separator,
    PyObject *seq
    );




 Py_ssize_t PyUnicode_Tailmatch(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );





 Py_ssize_t PyUnicode_Find(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );



 Py_ssize_t PyUnicode_FindChar(
    PyObject *str,
    Py_UCS4 ch,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );




 Py_ssize_t PyUnicode_Count(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end
    );




 PyObject * PyUnicode_Replace(
    PyObject *str,
    PyObject *substr,
    PyObject *replstr,
    Py_ssize_t maxcount

    );





 int PyUnicode_Compare(
    PyObject *left,
    PyObject *right
    );







 int PyUnicode_CompareWithASCIIString(
    PyObject *left,
    const char *right
    );
 PyObject * PyUnicode_RichCompare(
    PyObject *left,
    PyObject *right,
    int op
    );




 PyObject * PyUnicode_Format(
    PyObject *format,
    PyObject *args
    );







 int PyUnicode_Contains(
    PyObject *container,
    PyObject *element
    );



 int PyUnicode_IsIdentifier(PyObject *s);





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
    
   (__builtin_expect(!(
   Py_UNICODE_IS_HIGH_SURROGATE(high)
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 27, 
   "Py_UNICODE_IS_HIGH_SURROGATE(high)"
   ) : (void)0)
                                             ;
    
   (__builtin_expect(!(
   Py_UNICODE_IS_LOW_SURROGATE(low)
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 28, 
   "Py_UNICODE_IS_LOW_SURROGATE(low)"
   ) : (void)0)
                                           ;
    return 0x10000 + (((high & 0x03FF) << 10) | (low & 0x03FF));
}



static inline Py_UCS4 Py_UNICODE_HIGH_SURROGATE(Py_UCS4 ch) {
    
   (__builtin_expect(!(
   0x10000 <= ch && ch <= 0x10ffff
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 35, 
   "0x10000 <= ch && ch <= 0x10ffff"
   ) : (void)0)
                                          ;
    return (0xD800 - (0x10000 >> 10) + (ch >> 10));
}



static inline Py_UCS4 Py_UNICODE_LOW_SURROGATE(Py_UCS4 ch) {
    
   (__builtin_expect(!(
   0x10000 <= ch && ch <= 0x10ffff
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 42, 
   "0x10000 <= ch && ch <= 0x10ffff"
   ) : (void)0)
                                          ;
    return (0xDC00 + (ch & 0x3FF));
}







typedef struct {
    PyObject ob_base;
    Py_ssize_t length;
    Py_hash_t hash;
    struct {
        unsigned int interned:2;
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

 int _PyUnicode_CheckConsistency(
    PyObject *op,
    int check_content);
static inline unsigned int PyUnicode_CHECK_INTERNED(PyObject *op) {
    return (
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 200, 
          "PyUnicode_Check(op)"
          ) : (void)0)
          , ((PyASCIIObject*)((op))))->state.interned;
}



static inline unsigned int PyUnicode_IS_READY(PyObject* _unused_op ) {
    return 1;
}





static inline unsigned int PyUnicode_IS_ASCII(PyObject *op) {
    return (
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 214, 
          "PyUnicode_Check(op)"
          ) : (void)0)
          , ((PyASCIIObject*)((op))))->state.ascii;
}




static inline unsigned int PyUnicode_IS_COMPACT(PyObject *op) {
    return (
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 221, 
          "PyUnicode_Check(op)"
          ) : (void)0)
          , ((PyASCIIObject*)((op))))->state.compact;
}




static inline int PyUnicode_IS_COMPACT_ASCII(PyObject *op) {
    return ((
           (__builtin_expect(!(
           PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
           ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 228, 
           "PyUnicode_Check(op)"
           ) : (void)0)
           , ((PyASCIIObject*)((op))))->state.ascii && PyUnicode_IS_COMPACT(((PyObject*)((op)))));
}


enum PyUnicode_Kind {

    PyUnicode_1BYTE_KIND = 1,
    PyUnicode_2BYTE_KIND = 2,
    PyUnicode_4BYTE_KIND = 4
};
static inline void* _PyUnicode_COMPACT_DATA(PyObject *op) {
    if (PyUnicode_IS_ASCII(((PyObject*)((op))))) {
        return ((void*)(((
              (__builtin_expect(!(
              PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
              ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 250, 
              "PyUnicode_Check(op)"
              ) : (void)0)
              , ((PyASCIIObject*)((op)))) + 1)));
    }
    return ((void*)(((
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 252, 
          "PyUnicode_Check(op)"
          ) : (void)0)
          , ((PyCompactUnicodeObject*)((op)))) + 1)));
}

static inline void* _PyUnicode_NONCOMPACT_DATA(PyObject *op) {
    void *data;
    
   (__builtin_expect(!(
   !PyUnicode_IS_COMPACT(((PyObject*)((op))))
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 257, 
   "!PyUnicode_IS_COMPACT(op)"
   ) : (void)0)
                                    ;
    data = (
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 258, 
          "PyUnicode_Check(op)"
          ) : (void)0)
          , ((PyUnicodeObject*)((op))))->data.any;
    
   (__builtin_expect(!(
   data != 
   ((void *)0)), 0) ? __assert_rtn(__func__, "unicodeobject.h", 259, 
   "data != NULL"
   ) : (void)0)
                       ;
    return data;
}

static inline void* PyUnicode_DATA(PyObject *op) {
    if (PyUnicode_IS_COMPACT(((PyObject*)((op))))) {
        return _PyUnicode_COMPACT_DATA(op);
    }
    return _PyUnicode_NONCOMPACT_DATA(op);
}
static inline Py_ssize_t PyUnicode_GET_LENGTH(PyObject *op) {
    return (
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 282, 
          "PyUnicode_Check(op)"
          ) : (void)0)
          , ((PyASCIIObject*)((op))))->length;
}







static inline void PyUnicode_WRITE(int kind, void *data,
                                   Py_ssize_t index, Py_UCS4 value)
{
    
   (__builtin_expect(!(
   index >= 0
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 294, 
   "index >= 0"
   ) : (void)0)
                     ;
    if (kind == PyUnicode_1BYTE_KIND) {
        
       (__builtin_expect(!(
       value <= 0xffU
       ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 296, 
       "value <= 0xffU"
       ) : (void)0)
                             ;
        ((Py_UCS1*)(data))[index] = ((Py_UCS1)(value));
    }
    else if (kind == PyUnicode_2BYTE_KIND) {
        
       (__builtin_expect(!(
       value <= 0xffffU
       ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 300, 
       "value <= 0xffffU"
       ) : (void)0)
                               ;
        ((Py_UCS2*)(data))[index] = ((Py_UCS2)(value));
    }
    else {
        
       (__builtin_expect(!(
       kind == PyUnicode_4BYTE_KIND
       ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 304, 
       "kind == PyUnicode_4BYTE_KIND"
       ) : (void)0)
                                           ;
        
       (__builtin_expect(!(
       value <= 0x10ffffU
       ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 305, 
       "value <= 0x10ffffU"
       ) : (void)0)
                                 ;
        ((Py_UCS4*)(data))[index] = value;
    }
}






static inline Py_UCS4 PyUnicode_READ(int kind,
                                     const void *data, Py_ssize_t index)
{
    
   (__builtin_expect(!(
   index >= 0
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 318, 
   "index >= 0"
   ) : (void)0)
                     ;
    if (kind == PyUnicode_1BYTE_KIND) {
        return ((const Py_UCS1*)(data))[index];
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return ((const Py_UCS2*)(data))[index];
    }
    
   (__builtin_expect(!(
   kind == PyUnicode_4BYTE_KIND
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 325, 
   "kind == PyUnicode_4BYTE_KIND"
   ) : (void)0)
                                       ;
    return ((const Py_UCS4*)(data))[index];
}
static inline Py_UCS4 PyUnicode_READ_CHAR(PyObject *unicode, Py_ssize_t index)
{
    int kind;

    
   (__builtin_expect(!(
   index >= 0
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 341, 
   "index >= 0"
   ) : (void)0)
                     ;

    
   (__builtin_expect(!(
   index <= PyUnicode_GET_LENGTH(((PyObject*)((unicode))))
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 343, 
   "index <= PyUnicode_GET_LENGTH(unicode)"
   ) : (void)0)
                                                 ;

    kind = ((void)0, ((
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((unicode))))), ((1UL << 28)))
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 345, 
          "PyUnicode_Check(unicode)"
          ) : (void)0)
          , ((PyASCIIObject*)((unicode))))->state.kind));
    if (kind == PyUnicode_1BYTE_KIND) {
        return ((Py_UCS1*)(PyUnicode_DATA(((PyObject*)((unicode))))))[index];
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return ((Py_UCS2*)(PyUnicode_DATA(((PyObject*)((unicode))))))[index];
    }
    
   (__builtin_expect(!(
   kind == PyUnicode_4BYTE_KIND
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 352, 
   "kind == PyUnicode_4BYTE_KIND"
   ) : (void)0)
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
          (__builtin_expect(!(
          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 28)))
          ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 369, 
          "PyUnicode_Check(op)"
          ) : (void)0)
          , ((PyASCIIObject*)((op))))->state.kind));
    if (kind == PyUnicode_1BYTE_KIND) {
       return 0xffU;
    }
    if (kind == PyUnicode_2BYTE_KIND) {
        return 0xffffU;
    }
    
   (__builtin_expect(!(
   kind == PyUnicode_4BYTE_KIND
   ), 0) ? __assert_rtn(__func__, "unicodeobject.h", 376, 
   "kind == PyUnicode_4BYTE_KIND"
   ) : (void)0)
                                       ;
    return 0x10ffffU;
}
 PyObject* PyUnicode_New(
    Py_ssize_t size,
    Py_UCS4 maxchar
    );


static inline int PyUnicode_READY(PyObject* _unused_op )
{
    return 0;
}



 PyObject* _PyUnicode_Copy(
    PyObject *unicode
    );
 Py_ssize_t PyUnicode_CopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );




 void _PyUnicode_FastCopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );
 Py_ssize_t PyUnicode_Fill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );



 void _PyUnicode_FastFill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );



 PyObject* PyUnicode_FromKindAndData(
    int kind,
    const void *buffer,
    Py_ssize_t size);



 PyObject* _PyUnicode_FromASCII(
    const char *buffer,
    Py_ssize_t size);



 Py_UCS4 _PyUnicode_FindMaxChar (
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






 void
_PyUnicodeWriter_Init(_PyUnicodeWriter *writer);
 int
_PyUnicodeWriter_PrepareInternal(_PyUnicodeWriter *writer,
                                 Py_ssize_t length, Py_UCS4 maxchar);
 int
_PyUnicodeWriter_PrepareKindInternal(_PyUnicodeWriter *writer,
                                     int kind);



 int
_PyUnicodeWriter_WriteChar(_PyUnicodeWriter *writer,
    Py_UCS4 ch
    );



 int
_PyUnicodeWriter_WriteStr(_PyUnicodeWriter *writer,
    PyObject *str
    );



 int
_PyUnicodeWriter_WriteSubstring(_PyUnicodeWriter *writer,
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end
    );



 int
_PyUnicodeWriter_WriteASCIIString(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );



 int
_PyUnicodeWriter_WriteLatin1String(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );




 PyObject *
_PyUnicodeWriter_Finish(_PyUnicodeWriter *writer);


 void
_PyUnicodeWriter_Dealloc(_PyUnicodeWriter *writer);




 int _PyUnicode_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
 const char * PyUnicode_AsUTF8(PyObject *unicode);





 PyObject* _PyUnicode_EncodeUTF7(
    PyObject *unicode,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );



 PyObject* _PyUnicode_AsUTF8String(
    PyObject *unicode,
    const char *errors);



 PyObject* _PyUnicode_EncodeUTF32(
    PyObject *object,
    const char *errors,
    int byteorder
    );
 PyObject* _PyUnicode_EncodeUTF16(
    PyObject* unicode,
    const char *errors,
    int byteorder
    );




 PyObject* _PyUnicode_DecodeUnicodeEscapeStateful(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed
);


 PyObject* _PyUnicode_DecodeUnicodeEscapeInternal(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed,
        const char **first_invalid_escape


);




 PyObject* _PyUnicode_DecodeRawUnicodeEscapeStateful(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        Py_ssize_t *consumed
);



 PyObject* _PyUnicode_AsLatin1String(
    PyObject* unicode,
    const char* errors);



 PyObject* _PyUnicode_AsASCIIString(
    PyObject* unicode,
    const char* errors);
 PyObject* _PyUnicode_EncodeCharmap(
    PyObject *unicode,
    PyObject *mapping,
    const char *errors
    );
 PyObject* _PyUnicode_TransformDecimalAndSpaceToASCII(
    PyObject *unicode
    );



 PyObject * _PyUnicode_JoinArray(
    PyObject *separator,
    PyObject *const *items,
    Py_ssize_t seqlen
    );




 int _PyUnicode_EqualToASCIIId(
    PyObject *left,
    _Py_Identifier *right
    );




 int _PyUnicode_EqualToASCIIString(
    PyObject *left,
    const char *right
    );


 PyObject * _PyUnicode_XStrip(
    PyObject *self,
    int striptype,
    PyObject *sepobj
    );




 Py_ssize_t _PyUnicode_InsertThousandsGrouping(
    _PyUnicodeWriter *writer,
    Py_ssize_t n_buffer,
    PyObject *digits,
    Py_ssize_t d_pos,
    Py_ssize_t n_digits,
    Py_ssize_t min_width,
    const char *grouping,
    PyObject *thousands_sep,
    Py_UCS4 *maxchar);
 int _PyUnicode_IsLowercase(
    Py_UCS4 ch
    );

 int _PyUnicode_IsUppercase(
    Py_UCS4 ch
    );

 int _PyUnicode_IsTitlecase(
    Py_UCS4 ch
    );

 int _PyUnicode_IsXidStart(
    Py_UCS4 ch
    );

 int _PyUnicode_IsXidContinue(
    Py_UCS4 ch
    );

 int _PyUnicode_IsWhitespace(
    const Py_UCS4 ch
    );

 int _PyUnicode_IsLinebreak(
    const Py_UCS4 ch
    );

                          Py_UCS4 _PyUnicode_ToLowercase(
    Py_UCS4 ch
    );

                          Py_UCS4 _PyUnicode_ToUppercase(
    Py_UCS4 ch
    );

  Py_UCS4 _PyUnicode_ToTitlecase(
    Py_UCS4 ch
    );

 int _PyUnicode_ToLowerFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

 int _PyUnicode_ToTitleFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

 int _PyUnicode_ToUpperFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

 int _PyUnicode_ToFoldedFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );

 int _PyUnicode_IsCaseIgnorable(
    Py_UCS4 ch
    );

 int _PyUnicode_IsCased(
    Py_UCS4 ch
    );

 int _PyUnicode_ToDecimalDigit(
    Py_UCS4 ch
    );

 int _PyUnicode_ToDigit(
    Py_UCS4 ch
    );

 double _PyUnicode_ToNumeric(
    Py_UCS4 ch
    );

 int _PyUnicode_IsDecimalDigit(
    Py_UCS4 ch
    );

 int _PyUnicode_IsDigit(
    Py_UCS4 ch
    );

 int _PyUnicode_IsNumeric(
    Py_UCS4 ch
    );

 int _PyUnicode_IsPrintable(
    Py_UCS4 ch
    );

 int _PyUnicode_IsAlpha(
    Py_UCS4 ch
    );


extern  const unsigned char _Py_ascii_whitespace[];





static inline int Py_UNICODE_ISSPACE(Py_UCS4 ch) {
    if (ch < 128) {
        return _Py_ascii_whitespace[ch];
    }
    return _PyUnicode_IsWhitespace(ch);
}
static inline int Py_UNICODE_ISALNUM(Py_UCS4 ch) {
   return (_PyUnicode_IsAlpha(ch)
           || _PyUnicode_IsDecimalDigit(ch)
           || _PyUnicode_IsDigit(ch)
           || _PyUnicode_IsNumeric(ch));
}




 PyObject* _PyUnicode_FormatLong(PyObject *, int, int, int);


 PyObject* _PyUnicode_FromId(_Py_Identifier*);



 int _PyUnicode_EQ(PyObject *, PyObject *);


 int _PyUnicode_Equal(PyObject *, PyObject *);

 int _PyUnicode_WideCharString_Converter(PyObject *, void *);
 int _PyUnicode_WideCharString_Opt_Converter(PyObject *, void *);

 Py_ssize_t _PyUnicode_ScanIdentifier(PyObject *);
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

 PyStatus PyStatus_Ok(void);
 PyStatus PyStatus_Error(const char *err_msg);
 PyStatus PyStatus_NoMemory(void);
 PyStatus PyStatus_Exit(int exitcode);
 int PyStatus_IsError(PyStatus err);
 int PyStatus_IsExit(PyStatus err);
 int PyStatus_Exception(PyStatus err);
 PyObject * _PyErr_SetFromPyStatus(PyStatus status);



typedef struct {


    Py_ssize_t length;
    wchar_t **items;
} PyWideStringList;

 PyStatus PyWideStringList_Append(PyWideStringList *list,
    const wchar_t *item);
 PyStatus PyWideStringList_Insert(PyWideStringList *list,
    Py_ssize_t index,
    const wchar_t *item);




typedef struct PyPreConfig {
    int _config_init;



    int parse_argv;






    int isolated;




    int use_environment;



    int configure_locale;
    int coerce_c_locale;







    int coerce_c_locale_warn;
    int utf8_mode;





    int dev_mode;



    int allocator;
} PyPreConfig;

 void PyPreConfig_InitPythonConfig(PyPreConfig *config);
 void PyPreConfig_InitIsolatedConfig(PyPreConfig *config);





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

 void PyConfig_InitPythonConfig(PyConfig *config);
 void PyConfig_InitIsolatedConfig(PyConfig *config);
 void PyConfig_Clear(PyConfig *);
 PyStatus PyConfig_SetString(
    PyConfig *config,
    wchar_t **config_str,
    const wchar_t *str);
 PyStatus PyConfig_SetBytesString(
    PyConfig *config,
    wchar_t **config_str,
    const char *str);
 PyStatus PyConfig_Read(PyConfig *config);
 PyStatus PyConfig_SetBytesArgv(
    PyConfig *config,
    Py_ssize_t argc,
    char * const *argv);
 PyStatus PyConfig_SetArgv(PyConfig *config,
    Py_ssize_t argc,
    wchar_t * const *argv);
 PyStatus PyConfig_SetWideStringList(PyConfig *config,
    PyWideStringList *list,
    Py_ssize_t length, wchar_t **items);







 void Py_GetArgcArgv(int *argc, wchar_t ***argv);
 PyInterpreterState * PyInterpreterState_New(void);
 void PyInterpreterState_Clear(PyInterpreterState *);
 void PyInterpreterState_Delete(PyInterpreterState *);
 PyInterpreterState * PyInterpreterState_Get(void);




 PyObject * PyInterpreterState_GetDict(PyInterpreterState *);




 int64_t PyInterpreterState_GetID(PyInterpreterState *);






 int PyState_AddModule(PyObject*, PyModuleDef*);
 int PyState_RemoveModule(PyModuleDef*);

 PyObject* PyState_FindModule(PyModuleDef*);

 PyThreadState * PyThreadState_New(PyInterpreterState *);
 void PyThreadState_Clear(PyThreadState *);
 void PyThreadState_Delete(PyThreadState *);
 PyThreadState * PyThreadState_Get(void);




 PyThreadState * PyThreadState_Swap(PyThreadState *);
 PyObject * PyThreadState_GetDict(void);
 int PyThreadState_SetAsyncExc(unsigned long, PyObject *);



 PyInterpreterState* PyThreadState_GetInterpreter(PyThreadState *tstate);
 PyFrameObject* PyThreadState_GetFrame(PyThreadState *tstate);
 uint64_t PyThreadState_GetID(PyThreadState *tstate);


typedef
    enum {PyGILState_LOCKED, PyGILState_UNLOCKED}
        PyGILState_STATE;
 PyGILState_STATE PyGILState_Ensure(void);
 void PyGILState_Release(PyGILState_STATE);







 PyThreadState * PyGILState_GetThisThreadState(void);




 int _PyInterpreterState_HasFeature(PyInterpreterState *interp,
                                               unsigned long feature);




 int _PyInterpreterState_RequiresIDRef(PyInterpreterState *);
 void _PyInterpreterState_RequireIDRef(PyInterpreterState *, int);

 PyObject * _PyInterpreterState_GetMainModule(PyInterpreterState *);





typedef int (*Py_tracefunc)(PyObject *, PyFrameObject *, int, PyObject *);
typedef struct _PyCFrame {
    struct _PyInterpreterFrame *current_frame;
    struct _PyCFrame *previous;
} _PyCFrame;

typedef struct _err_stackitem {
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
    _PyErr_StackItem exc_state;


    _PyCFrame root_cframe;
};
 PyThreadState * _PyThreadState_Prealloc(PyInterpreterState *);



 PyThreadState * _PyThreadState_UncheckedGet(void);

 PyObject * _PyThreadState_GetDict(PyThreadState *tstate);


 void PyThreadState_EnterTracing(PyThreadState *tstate);



 void PyThreadState_LeaveTracing(PyThreadState *tstate);







 int PyGILState_Check(void);
 PyInterpreterState * _PyGILState_GetInterpreterStateUnsafe(void);




 PyObject * _PyThread_CurrentFrames(void);




 PyObject * _PyThread_CurrentExceptions(void);



 PyInterpreterState * PyInterpreterState_Main(void);
 PyInterpreterState * PyInterpreterState_Head(void);
 PyInterpreterState * PyInterpreterState_Next(PyInterpreterState *);
 PyThreadState * PyInterpreterState_ThreadHead(PyInterpreterState *);
 PyThreadState * PyThreadState_Next(PyThreadState *);
 void PyThreadState_DeleteCurrent(void);



typedef PyObject* (*_PyFrameEvalFunction)(PyThreadState *tstate, struct _PyInterpreterFrame *, int);

 _PyFrameEvalFunction _PyInterpreterState_GetEvalFrameFunc(
    PyInterpreterState *interp);
 void _PyInterpreterState_SetEvalFrameFunc(
    PyInterpreterState *interp,
    _PyFrameEvalFunction eval_frame);

 const PyConfig* _PyInterpreterState_GetConfig(PyInterpreterState *interp);
 int _PyInterpreterState_GetConfigCopy(
    struct PyConfig *config);
 int _PyInterpreterState_SetConfig(
    const struct PyConfig *config);



 const PyConfig* _Py_GetConfig(void);







typedef struct _xid _PyCrossInterpreterData;

typedef PyObject *(*xid_newobjectfunc)(_PyCrossInterpreterData *);
typedef void (*xid_freefunc)(void *);

struct _xid {



    void *data;






    PyObject *obj;
    int64_t interp;




    xid_newobjectfunc new_object;
    xid_freefunc free;
};

 void _PyCrossInterpreterData_Init(
        _PyCrossInterpreterData *data,
        PyInterpreterState *interp, void *shared, PyObject *obj,
        xid_newobjectfunc new_object);
 int _PyCrossInterpreterData_InitWithSize(
        _PyCrossInterpreterData *,
        PyInterpreterState *interp, const size_t, PyObject *,
        xid_newobjectfunc);
 void _PyCrossInterpreterData_Clear(
        PyInterpreterState *, _PyCrossInterpreterData *);

 int _PyObject_GetCrossInterpreterData(PyObject *, _PyCrossInterpreterData *);
 PyObject * _PyCrossInterpreterData_NewObject(_PyCrossInterpreterData *);
 int _PyCrossInterpreterData_Release(_PyCrossInterpreterData *);

 int _PyObject_CheckCrossInterpreterData(PyObject *);



typedef int (*crossinterpdatafunc)(PyThreadState *tstate, PyObject *,
                                   _PyCrossInterpreterData *);

 int _PyCrossInterpreterData_RegisterClass(PyTypeObject *, crossinterpdatafunc);
 int _PyCrossInterpreterData_UnregisterClass(PyTypeObject *);
 crossinterpdatafunc _PyCrossInterpreterData_Lookup(PyObject *);
 void PyErr_SetNone(PyObject *);
 void PyErr_SetObject(PyObject *, PyObject *);
 void PyErr_SetString(
    PyObject *exception,
    const char *string
    );
 PyObject * PyErr_Occurred(void);
 void PyErr_Clear(void);
 void PyErr_Fetch(PyObject **, PyObject **, PyObject **);
 void PyErr_Restore(PyObject *, PyObject *, PyObject *);
 PyObject * PyErr_GetRaisedException(void);
 void PyErr_SetRaisedException(PyObject *);

 PyObject* PyErr_GetHandledException(void);
 void PyErr_SetHandledException(PyObject *);


 void PyErr_GetExcInfo(PyObject **, PyObject **, PyObject **);
 void PyErr_SetExcInfo(PyObject *, PyObject *, PyObject *);







 void  Py_FatalError(const char *message);


 int PyErr_GivenExceptionMatches(PyObject *, PyObject *);
 int PyErr_ExceptionMatches(PyObject *);
 void PyErr_NormalizeException(PyObject**, PyObject**, PyObject**);


 int PyException_SetTraceback(PyObject *, PyObject *);
 PyObject * PyException_GetTraceback(PyObject *);


 PyObject * PyException_GetCause(PyObject *);
 void PyException_SetCause(PyObject *, PyObject *);


 PyObject * PyException_GetContext(PyObject *);
 void PyException_SetContext(PyObject *, PyObject *);


 PyObject * PyException_GetArgs(PyObject *);
 void PyException_SetArgs(PyObject *, PyObject *);
 const char * PyExceptionClass_Name(PyObject *);
extern  PyObject * PyExc_BaseException;
extern  PyObject * PyExc_Exception;
extern  PyObject * PyExc_BaseExceptionGroup;

extern  PyObject * PyExc_StopAsyncIteration;

extern  PyObject * PyExc_StopIteration;
extern  PyObject * PyExc_GeneratorExit;
extern  PyObject * PyExc_ArithmeticError;
extern  PyObject * PyExc_LookupError;

extern  PyObject * PyExc_AssertionError;
extern  PyObject * PyExc_AttributeError;
extern  PyObject * PyExc_BufferError;
extern  PyObject * PyExc_EOFError;
extern  PyObject * PyExc_FloatingPointError;
extern  PyObject * PyExc_OSError;
extern  PyObject * PyExc_ImportError;

extern  PyObject * PyExc_ModuleNotFoundError;

extern  PyObject * PyExc_IndexError;
extern  PyObject * PyExc_KeyError;
extern  PyObject * PyExc_KeyboardInterrupt;
extern  PyObject * PyExc_MemoryError;
extern  PyObject * PyExc_NameError;
extern  PyObject * PyExc_OverflowError;
extern  PyObject * PyExc_RuntimeError;

extern  PyObject * PyExc_RecursionError;

extern  PyObject * PyExc_NotImplementedError;
extern  PyObject * PyExc_SyntaxError;
extern  PyObject * PyExc_IndentationError;
extern  PyObject * PyExc_TabError;
extern  PyObject * PyExc_ReferenceError;
extern  PyObject * PyExc_SystemError;
extern  PyObject * PyExc_SystemExit;
extern  PyObject * PyExc_TypeError;
extern  PyObject * PyExc_UnboundLocalError;
extern  PyObject * PyExc_UnicodeError;
extern  PyObject * PyExc_UnicodeEncodeError;
extern  PyObject * PyExc_UnicodeDecodeError;
extern  PyObject * PyExc_UnicodeTranslateError;
extern  PyObject * PyExc_ValueError;
extern  PyObject * PyExc_ZeroDivisionError;


extern  PyObject * PyExc_BlockingIOError;
extern  PyObject * PyExc_BrokenPipeError;
extern  PyObject * PyExc_ChildProcessError;
extern  PyObject * PyExc_ConnectionError;
extern  PyObject * PyExc_ConnectionAbortedError;
extern  PyObject * PyExc_ConnectionRefusedError;
extern  PyObject * PyExc_ConnectionResetError;
extern  PyObject * PyExc_FileExistsError;
extern  PyObject * PyExc_FileNotFoundError;
extern  PyObject * PyExc_InterruptedError;
extern  PyObject * PyExc_IsADirectoryError;
extern  PyObject * PyExc_NotADirectoryError;
extern  PyObject * PyExc_PermissionError;
extern  PyObject * PyExc_ProcessLookupError;
extern  PyObject * PyExc_TimeoutError;




extern  PyObject * PyExc_EnvironmentError;
extern  PyObject * PyExc_IOError;





extern  PyObject * PyExc_Warning;
extern  PyObject * PyExc_UserWarning;
extern  PyObject * PyExc_DeprecationWarning;
extern  PyObject * PyExc_PendingDeprecationWarning;
extern  PyObject * PyExc_SyntaxWarning;
extern  PyObject * PyExc_RuntimeWarning;
extern  PyObject * PyExc_FutureWarning;
extern  PyObject * PyExc_ImportWarning;
extern  PyObject * PyExc_UnicodeWarning;
extern  PyObject * PyExc_BytesWarning;
extern  PyObject * PyExc_EncodingWarning;
extern  PyObject * PyExc_ResourceWarning;




 int PyErr_BadArgument(void);
 PyObject * PyErr_NoMemory(void);
 PyObject * PyErr_SetFromErrno(PyObject *);
 PyObject * PyErr_SetFromErrnoWithFilenameObject(
    PyObject *, PyObject *);

 PyObject * PyErr_SetFromErrnoWithFilenameObjects(
    PyObject *, PyObject *, PyObject *);

 PyObject * PyErr_SetFromErrnoWithFilename(
    PyObject *exc,
    const char *filename
    );

 PyObject * PyErr_Format(
    PyObject *exception,
    const char *format,
    ...
    );

 PyObject * PyErr_FormatV(
    PyObject *exception,
    const char *format,
    va_list vargs);
 PyObject * PyErr_SetImportErrorSubclass(PyObject *, PyObject *,
    PyObject *, PyObject *);


 PyObject * PyErr_SetImportError(PyObject *, PyObject *,
    PyObject *);



 void PyErr_BadInternalCall(void);
 void _PyErr_BadInternalCall(const char *filename, int lineno);





 PyObject * PyErr_NewException(
    const char *name, PyObject *base, PyObject *dict);
 PyObject * PyErr_NewExceptionWithDoc(
    const char *name, const char *doc, PyObject *base, PyObject *dict);
 void PyErr_WriteUnraisable(PyObject *);



 int PyErr_CheckSignals(void);
 void PyErr_SetInterrupt(void);

 int PyErr_SetInterruptEx(int signum);



 void PyErr_SyntaxLocation(
    const char *filename,
    int lineno);
 void PyErr_SyntaxLocationEx(
    const char *filename,
    int lineno,
    int col_offset);
 PyObject * PyErr_ProgramText(
    const char *filename,
    int lineno);





 PyObject * PyUnicodeDecodeError_Create(
    const char *encoding,
    const char *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );


 PyObject * PyUnicodeEncodeError_GetEncoding(PyObject *);
 PyObject * PyUnicodeDecodeError_GetEncoding(PyObject *);


 PyObject * PyUnicodeEncodeError_GetObject(PyObject *);
 PyObject * PyUnicodeDecodeError_GetObject(PyObject *);
 PyObject * PyUnicodeTranslateError_GetObject(PyObject *);



 int PyUnicodeEncodeError_GetStart(PyObject *, Py_ssize_t *);
 int PyUnicodeDecodeError_GetStart(PyObject *, Py_ssize_t *);
 int PyUnicodeTranslateError_GetStart(PyObject *, Py_ssize_t *);



 int PyUnicodeEncodeError_SetStart(PyObject *, Py_ssize_t);
 int PyUnicodeDecodeError_SetStart(PyObject *, Py_ssize_t);
 int PyUnicodeTranslateError_SetStart(PyObject *, Py_ssize_t);



 int PyUnicodeEncodeError_GetEnd(PyObject *, Py_ssize_t *);
 int PyUnicodeDecodeError_GetEnd(PyObject *, Py_ssize_t *);
 int PyUnicodeTranslateError_GetEnd(PyObject *, Py_ssize_t *);



 int PyUnicodeEncodeError_SetEnd(PyObject *, Py_ssize_t);
 int PyUnicodeDecodeError_SetEnd(PyObject *, Py_ssize_t);
 int PyUnicodeTranslateError_SetEnd(PyObject *, Py_ssize_t);


 PyObject * PyUnicodeEncodeError_GetReason(PyObject *);
 PyObject * PyUnicodeDecodeError_GetReason(PyObject *);
 PyObject * PyUnicodeTranslateError_GetReason(PyObject *);



 int PyUnicodeEncodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
 int PyUnicodeDecodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
 int PyUnicodeTranslateError_SetReason(
    PyObject *exc,
    const char *reason
    );

 int PyOS_snprintf(char *str, size_t size, const char *format, ...)
                        ;
 int PyOS_vsnprintf(char *str, size_t size, const char *format, va_list va)
                        ;



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






 void _PyErr_SetKeyError(PyObject *);
 _PyErr_StackItem* _PyErr_GetTopmostException(PyThreadState *tstate);
 PyObject* _PyErr_GetHandledException(PyThreadState *);
 void _PyErr_SetHandledException(PyThreadState *, PyObject *);
 void _PyErr_GetExcInfo(PyThreadState *, PyObject **, PyObject **, PyObject **);



  void _PyErr_ChainExceptions(PyObject *, PyObject *, PyObject *);
 void _PyErr_ChainExceptions1(PyObject *);




 PyObject * _PyErr_FormatFromCause(
    PyObject *exception,
    const char *format,
    ...
    );



 int _PyException_AddNote(
     PyObject *exc,
     PyObject *note);

 PyObject* PyUnstable_Exc_PrepReraiseStar(
     PyObject *orig,
     PyObject *excs);



int PySignal_SetWakeupFd(int fd);
 int _PyErr_CheckSignals(void);



 void PyErr_SyntaxLocationObject(
    PyObject *filename,
    int lineno,
    int col_offset);

 void PyErr_RangedSyntaxLocationObject(
    PyObject *filename,
    int lineno,
    int col_offset,
    int end_lineno,
    int end_col_offset);

 PyObject * PyErr_ProgramTextObject(
    PyObject *filename,
    int lineno);

 PyObject * _PyErr_ProgramDecodedTextObject(
    PyObject *filename,
    int lineno,
    const char* encoding);

 PyObject * _PyUnicodeTranslateError_Create(
    PyObject *object,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );

 void _PyErr_WriteUnraisableMsg(
    const char *err_msg,
    PyObject *obj);

 void  _Py_FatalErrorFunc(
    const char *func,
    const char *message);

 void  _Py_FatalErrorFormat(
    const char *func,
    const char *format,
    ...);

extern PyObject *_PyErr_SetImportErrorWithNameFrom(
        PyObject *,
        PyObject *,
        PyObject *,
        PyObject *);
 PyObject * PyLong_FromLong(long);
 PyObject * PyLong_FromUnsignedLong(unsigned long);
 PyObject * PyLong_FromSize_t(size_t);
 PyObject * PyLong_FromSsize_t(Py_ssize_t);
 PyObject * PyLong_FromDouble(double);
 long PyLong_AsLong(PyObject *);
 long PyLong_AsLongAndOverflow(PyObject *, int *);
 Py_ssize_t PyLong_AsSsize_t(PyObject *);
 size_t PyLong_AsSize_t(PyObject *);
 unsigned long PyLong_AsUnsignedLong(PyObject *);
 unsigned long PyLong_AsUnsignedLongMask(PyObject *);
 PyObject * PyLong_GetInfo(void);
 double PyLong_AsDouble(PyObject *);
 PyObject * PyLong_FromVoidPtr(void *);
 void * PyLong_AsVoidPtr(PyObject *);

 PyObject * PyLong_FromLongLong(long long);
 PyObject * PyLong_FromUnsignedLongLong(unsigned long long);
 long long PyLong_AsLongLong(PyObject *);
 unsigned long long PyLong_AsUnsignedLongLong(PyObject *);
 unsigned long long PyLong_AsUnsignedLongLongMask(PyObject *);
 long long PyLong_AsLongLongAndOverflow(PyObject *, int *);

 PyObject * PyLong_FromString(const char *, char **, int);




 unsigned long PyOS_strtoul(const char *, char **, int);
 long PyOS_strtol(const char *, char **, int);







 int _PyLong_AsInt(PyObject *);

 int _PyLong_UnsignedShort_Converter(PyObject *, void *);
 int _PyLong_UnsignedInt_Converter(PyObject *, void *);
 int _PyLong_UnsignedLong_Converter(PyObject *, void *);
 int _PyLong_UnsignedLongLong_Converter(PyObject *, void *);
 int _PyLong_Size_t_Converter(PyObject *, void *);







 double _PyLong_Frexp(PyLongObject *a, Py_ssize_t *e);

 PyObject * PyLong_FromUnicodeObject(PyObject *u, int base);
 PyObject * _PyLong_FromBytes(const char *, Py_ssize_t, int);





 int _PyLong_Sign(PyObject *v);
 size_t _PyLong_NumBits(PyObject *v);







 PyObject * _PyLong_DivmodNear(PyObject *, PyObject *);
 PyObject * _PyLong_FromByteArray(
    const unsigned char* bytes, size_t n,
    int little_endian, int is_signed);
 int _PyLong_AsByteArray(PyLongObject* v,
    unsigned char* bytes, size_t n,
    int little_endian, int is_signed);



 PyObject * _PyLong_Format(PyObject *obj, int base);


 PyObject * _PyLong_GCD(PyObject *, PyObject *);

 PyObject * _PyLong_Rshift(PyObject *, size_t);
 PyObject * _PyLong_Lshift(PyObject *, size_t);


 int PyUnstable_Long_IsCompact(const PyLongObject* op);
 Py_ssize_t PyUnstable_Long_CompactValue(const PyLongObject* op);
typedef uint32_t digit;
typedef int32_t sdigit;
typedef uint64_t twodigits;
typedef int64_t stwodigits;
typedef struct _PyLongValue {
    uintptr_t lv_tag;
    digit ob_digit[1];
} _PyLongValue;

struct _longobject {
    PyObject ob_base;
    _PyLongValue long_value;
};

 PyLongObject * _PyLong_New(Py_ssize_t);


 PyObject * _PyLong_Copy(PyLongObject *src);

 PyLongObject *
_PyLong_FromDigits(int negative, Py_ssize_t digit_count, digit *digits);
static inline int
_PyLong_IsCompact(const PyLongObject* op) {
    
   (__builtin_expect(!(
   PyType_HasFeature((op)->ob_base.ob_type, (1UL << 24))
   ), 0) ? __assert_rtn(__func__, "longintrepr.h", 110, 
   "PyType_HasFeature((op)->ob_base.ob_type, Py_TPFLAGS_LONG_SUBCLASS)"
   ) : (void)0)
                                                                             ;
    return op->long_value.lv_tag < (2 << 3);
}



static inline Py_ssize_t
_PyLong_CompactValue(const PyLongObject *op)
{
    Py_ssize_t sign;
    
   (__builtin_expect(!(
   PyType_HasFeature((op)->ob_base.ob_type, (1UL << 24))
   ), 0) ? __assert_rtn(__func__, "longintrepr.h", 120, 
   "PyType_HasFeature((op)->ob_base.ob_type, Py_TPFLAGS_LONG_SUBCLASS)"
   ) : (void)0)
                                                                             ;
    
   (__builtin_expect(!(
   _PyLong_IsCompact(op)
   ), 0) ? __assert_rtn(__func__, "longintrepr.h", 121, 
   "PyUnstable_Long_IsCompact(op)"
   ) : (void)0)
                                        ;
    sign = 1 - (op->long_value.lv_tag & 3);
    return sign * (Py_ssize_t)op->long_value.ob_digit[0];
}
extern  PyLongObject _Py_FalseStruct;
extern  PyLongObject _Py_TrueStruct;






 int Py_IsTrue(PyObject *x);



 int Py_IsFalse(PyObject *x);







 PyObject * PyBool_FromLong(long);
extern  PyTypeObject PyFloat_Type;
 double PyFloat_GetMax(void);
 double PyFloat_GetMin(void);
 PyObject* PyFloat_GetInfo(void);


 PyObject* PyFloat_FromString(PyObject*);


 PyObject* PyFloat_FromDouble(double);



 double PyFloat_AsDouble(PyObject*);







typedef struct {
    PyObject ob_base;
    double ob_fval;
} PyFloatObject;






static inline double PyFloat_AS_DOUBLE(PyObject *op) {
    return (
          (__builtin_expect(!(
          PyObject_TypeCheck(((PyObject*)((op))), (&PyFloat_Type))
          ), 0) ? __assert_rtn(__func__, "floatobject.h", 16, 
          "PyFloat_Check(op)"
          ) : (void)0)
          , ((PyFloatObject*)(op)))->ob_fval;
}



 int PyFloat_Pack2(double x, char *p, int le);
 int PyFloat_Pack4(double x, char *p, int le);
 int PyFloat_Pack8(double x, char *p, int le);

 double PyFloat_Unpack2(const char *p, int le);
 double PyFloat_Unpack4(const char *p, int le);
 double PyFloat_Unpack8(const char *p, int le);
extern  PyTypeObject PyComplex_Type;




 PyObject * PyComplex_FromDoubles(double real, double imag);

 double PyComplex_RealAsDouble(PyObject *op);
 double PyComplex_ImagAsDouble(PyObject *op);







typedef struct {
    double real;
    double imag;
} Py_complex;



 Py_complex _Py_c_sum(Py_complex, Py_complex);
 Py_complex _Py_c_diff(Py_complex, Py_complex);
 Py_complex _Py_c_neg(Py_complex);
 Py_complex _Py_c_prod(Py_complex, Py_complex);
 Py_complex _Py_c_quot(Py_complex, Py_complex);
 Py_complex _Py_c_pow(Py_complex, Py_complex);
 double _Py_c_abs(Py_complex);







typedef struct {
    PyObject ob_base;
    Py_complex cval;
} PyComplexObject;

 PyObject * PyComplex_FromCComplex(Py_complex);

 Py_complex PyComplex_AsCComplex(PyObject *op);
extern  PyTypeObject PyRange_Type;
extern  PyTypeObject PyRangeIter_Type;
extern  PyTypeObject PyLongRangeIter_Type;
extern  PyTypeObject PyMemoryView_Type;



 PyObject * PyMemoryView_FromObject(PyObject *base);

 PyObject * PyMemoryView_FromMemory(char *mem, Py_ssize_t size,
                                               int flags);


 PyObject * PyMemoryView_FromBuffer(const Py_buffer *info);

 PyObject * PyMemoryView_GetContiguous(PyObject *base,
                                                  int buffertype,
                                                  char order);







extern  PyTypeObject _PyManagedBuffer_Type;







typedef struct {
    PyObject ob_base;
    int flags;
    Py_ssize_t exports;
    Py_buffer master;
} _PyManagedBufferObject;
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
extern  PyTypeObject PyTuple_Type;
extern  PyTypeObject PyTupleIter_Type;





 PyObject * PyTuple_New(Py_ssize_t size);
 Py_ssize_t PyTuple_Size(PyObject *);
 PyObject * PyTuple_GetItem(PyObject *, Py_ssize_t);
 int PyTuple_SetItem(PyObject *, Py_ssize_t, PyObject *);
 PyObject * PyTuple_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
 PyObject * PyTuple_Pack(Py_ssize_t, ...);







typedef struct {
    PyVarObject ob_base;



    PyObject *ob_item[1];
} PyTupleObject;

 int _PyTuple_Resize(PyObject **, Py_ssize_t);
 void _PyTuple_MaybeUntrack(PyObject *);







static inline Py_ssize_t PyTuple_GET_SIZE(PyObject *op) {
    PyTupleObject *tuple = (
                          (__builtin_expect(!(
                          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 26)))
                          ), 0) ? __assert_rtn(__func__, "tupleobject.h", 23, 
                          "PyTuple_Check(op)"
                          ) : (void)0)
                          , ((PyTupleObject*)((op))));
    return Py_SIZE(((PyObject*)((tuple))));
}





static inline void
PyTuple_SET_ITEM(PyObject *op, Py_ssize_t index, PyObject *value) {
    PyTupleObject *tuple = (
                          (__builtin_expect(!(
                          PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 26)))
                          ), 0) ? __assert_rtn(__func__, "tupleobject.h", 33, 
                          "PyTuple_Check(op)"
                          ) : (void)0)
                          , ((PyTupleObject*)((op))));
    tuple->ob_item[index] = value;
}



 void _PyTuple_DebugMallocStats(FILE *out);
extern  PyTypeObject PyList_Type;
extern  PyTypeObject PyListIter_Type;
extern  PyTypeObject PyListRevIter_Type;





 PyObject * PyList_New(Py_ssize_t size);
 Py_ssize_t PyList_Size(PyObject *);

 PyObject * PyList_GetItem(PyObject *, Py_ssize_t);
 int PyList_SetItem(PyObject *, Py_ssize_t, PyObject *);
 int PyList_Insert(PyObject *, Py_ssize_t, PyObject *);
 int PyList_Append(PyObject *, PyObject *);

 PyObject * PyList_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
 int PyList_SetSlice(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);

 int PyList_Sort(PyObject *);
 int PyList_Reverse(PyObject *);
 PyObject * PyList_AsTuple(PyObject *);







typedef struct {
    PyVarObject ob_base;

    PyObject **ob_item;
    Py_ssize_t allocated;
} PyListObject;

 PyObject * _PyList_Extend(PyListObject *, PyObject *);
 void _PyList_DebugMallocStats(FILE *out);







static inline Py_ssize_t PyList_GET_SIZE(PyObject *op) {
    PyListObject *list = (
                        (__builtin_expect(!(
                        PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 25)))
                        ), 0) ? __assert_rtn(__func__, "listobject.h", 34, 
                        "PyList_Check(op)"
                        ) : (void)0)
                        , ((PyListObject*)((op))));
    return Py_SIZE(((PyObject*)((list))));
}




static inline void
PyList_SET_ITEM(PyObject *op, Py_ssize_t index, PyObject *value) {
    PyListObject *list = (
                        (__builtin_expect(!(
                        PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 25)))
                        ), 0) ? __assert_rtn(__func__, "listobject.h", 43, 
                        "PyList_Check(op)"
                        ) : (void)0)
                        , ((PyListObject*)((op))));
    list->ob_item[index] = value;
}
extern  PyTypeObject PyDict_Type;





 PyObject * PyDict_New(void);
 PyObject * PyDict_GetItem(PyObject *mp, PyObject *key);
 PyObject * PyDict_GetItemWithError(PyObject *mp, PyObject *key);
 int PyDict_SetItem(PyObject *mp, PyObject *key, PyObject *item);
 int PyDict_DelItem(PyObject *mp, PyObject *key);
 void PyDict_Clear(PyObject *mp);
 int PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value);
 PyObject * PyDict_Keys(PyObject *mp);
 PyObject * PyDict_Values(PyObject *mp);
 PyObject * PyDict_Items(PyObject *mp);
 Py_ssize_t PyDict_Size(PyObject *mp);
 PyObject * PyDict_Copy(PyObject *mp);
 int PyDict_Contains(PyObject *mp, PyObject *key);


 int PyDict_Update(PyObject *mp, PyObject *other);






 int PyDict_Merge(PyObject *mp,
                             PyObject *other,
                             int override);






 int PyDict_MergeFromSeq2(PyObject *d,
                                     PyObject *seq2,
                                     int override);

 PyObject * PyDict_GetItemString(PyObject *dp, const char *key);
 int PyDict_SetItemString(PyObject *dp, const char *key, PyObject *item);
 int PyDict_DelItemString(PyObject *dp, const char *key);

 PyObject * PyObject_GenericGetDict(PyObject *, void *);




extern  PyTypeObject PyDictKeys_Type;
extern  PyTypeObject PyDictValues_Type;
extern  PyTypeObject PyDictItems_Type;
extern  PyTypeObject PyDictIterKey_Type;
extern  PyTypeObject PyDictIterValue_Type;
extern  PyTypeObject PyDictIterItem_Type;

extern  PyTypeObject PyDictRevIterKey_Type;
extern  PyTypeObject PyDictRevIterItem_Type;
extern  PyTypeObject PyDictRevIterValue_Type;








typedef struct _dictkeysobject PyDictKeysObject;
typedef struct _dictvalues PyDictValues;




typedef struct {
    PyObject ob_base;


    Py_ssize_t ma_used;






     uint64_t ma_version_tag;


    PyDictKeysObject *ma_keys;






    PyDictValues *ma_values;
} PyDictObject;

 PyObject * _PyDict_GetItem_KnownHash(PyObject *mp, PyObject *key,
                                       Py_hash_t hash);
 PyObject * _PyDict_GetItemWithError(PyObject *dp, PyObject *key);
 PyObject * _PyDict_GetItemIdWithError(PyObject *dp,
                                                  _Py_Identifier *key);
 PyObject * _PyDict_GetItemStringWithError(PyObject *, const char *);
 PyObject * PyDict_SetDefault(
    PyObject *mp, PyObject *key, PyObject *defaultobj);
 int _PyDict_SetItem_KnownHash(PyObject *mp, PyObject *key,
                                          PyObject *item, Py_hash_t hash);
 int _PyDict_DelItem_KnownHash(PyObject *mp, PyObject *key,
                                          Py_hash_t hash);
 int _PyDict_DelItemIf(PyObject *mp, PyObject *key,
                                  int (*predicate)(PyObject *value));
 int _PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, Py_hash_t *hash);


static inline Py_ssize_t PyDict_GET_SIZE(PyObject *op) {
    PyDictObject *mp;
    
   (__builtin_expect(!(
   PyType_HasFeature((Py_TYPE(((PyObject*)((op))))), ((1UL << 29)))
   ), 0) ? __assert_rtn(__func__, "dictobject.h", 55, 
   "PyDict_Check(op)"
   ) : (void)0)
                           ;
    mp = ((PyDictObject*)(op));
    return mp->ma_used;
}


 int _PyDict_Contains_KnownHash(PyObject *, PyObject *, Py_hash_t);
 int _PyDict_ContainsId(PyObject *, _Py_Identifier *);
 PyObject * _PyDict_NewPresized(Py_ssize_t minused);
 void _PyDict_MaybeUntrack(PyObject *mp);
 int _PyDict_HasOnlyStringKeys(PyObject *mp);
 Py_ssize_t _PyDict_SizeOf(PyDictObject *);
 PyObject * _PyDict_Pop(PyObject *, PyObject *, PyObject *);







 int _PyDict_MergeEx(PyObject *mp, PyObject *other, int override);
 int _PyDict_SetItemId(PyObject *dp, _Py_Identifier *key, PyObject *item);

 int _PyDict_DelItemId(PyObject *mp, _Py_Identifier *key);
 void _PyDict_DebugMallocStats(FILE *out);



typedef struct {
    PyObject ob_base;
    PyDictObject *dv_dict;
} _PyDictViewObject;

 PyObject * _PyDictView_New(PyObject *, PyTypeObject *);
 PyObject * _PyDictView_Intersect(PyObject* self, PyObject *other);
typedef enum {

    PyDict_EVENT_ADDED, PyDict_EVENT_MODIFIED, PyDict_EVENT_DELETED, PyDict_EVENT_CLONED, PyDict_EVENT_CLEARED, PyDict_EVENT_DEALLOCATED,

} PyDict_WatchEvent;




typedef int(*PyDict_WatchCallback)(PyDict_WatchEvent event, PyObject* dict, PyObject* key, PyObject* new_value);


 int PyDict_AddWatcher(PyDict_WatchCallback callback);
 int PyDict_ClearWatcher(int watcher_id);


 int PyDict_Watch(int watcher_id, PyObject* dict);
 int PyDict_Unwatch(int watcher_id, PyObject* dict);
typedef struct _odictobject PyODictObject;

extern  PyTypeObject PyODict_Type;
extern  PyTypeObject PyODictIter_Type;
extern  PyTypeObject PyODictKeys_Type;
extern  PyTypeObject PyODictItems_Type;
extern  PyTypeObject PyODictValues_Type;





 PyObject * PyODict_New(void);
 int PyODict_SetItem(PyObject *od, PyObject *key, PyObject *item);
 int PyODict_DelItem(PyObject *od, PyObject *key);
extern  PyTypeObject PyEnum_Type;
extern  PyTypeObject PyReversed_Type;
extern  PyTypeObject PySet_Type;
extern  PyTypeObject PyFrozenSet_Type;
extern  PyTypeObject PySetIter_Type;

 PyObject * PySet_New(PyObject *);
 PyObject * PyFrozenSet_New(PyObject *);

 int PySet_Add(PyObject *set, PyObject *key);
 int PySet_Clear(PyObject *set);
 int PySet_Contains(PyObject *anyset, PyObject *key);
 int PySet_Discard(PyObject *set, PyObject *key);
 PyObject * PySet_Pop(PyObject *set);
 Py_ssize_t PySet_Size(PyObject *anyset);
typedef struct {
    PyObject *key;
    Py_hash_t hash;
} setentry;
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
          (__builtin_expect(!(
          (Py_IS_TYPE(((PyObject*)(((so)))), (&PySet_Type)) || Py_IS_TYPE(((PyObject*)(((so)))), (&PyFrozenSet_Type)) || PyType_IsSubtype(Py_TYPE(((PyObject*)((so)))), &PySet_Type) || PyType_IsSubtype(Py_TYPE(((PyObject*)((so)))), &PyFrozenSet_Type))
          ), 0) ? __assert_rtn(__func__, "setobject.h", 65, 
          "PyAnySet_Check(so)"
          ) : (void)0)
          , ((PySetObject*)(so)))->used;
}


extern  PyObject * _PySet_Dummy;

 int _PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, Py_hash_t *hash);
 int _PySet_Update(PyObject *set, PyObject *iterable);
extern  PyTypeObject PyCFunction_Type;




typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*_PyCFunctionFast) (PyObject *, PyObject *const *, Py_ssize_t);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,
                                             PyObject *);
typedef PyObject *(*_PyCFunctionFastWithKeywords) (PyObject *,
                                                   PyObject *const *, Py_ssize_t,
                                                   PyObject *);
typedef PyObject *(*PyCMethod)(PyObject *, PyTypeObject *, PyObject *const *,
                               size_t, PyObject *);
 PyCFunction PyCFunction_GetFunction(PyObject *);
 PyObject * PyCFunction_GetSelf(PyObject *);
 int PyCFunction_GetFlags(PyObject *);

  PyObject * PyCFunction_Call(PyObject *, PyObject *, PyObject *);

struct PyMethodDef {
    const char *ml_name;
    PyCFunction ml_meth;
    int ml_flags;

    const char *ml_doc;
};




 PyObject * PyCFunction_New(PyMethodDef *, PyObject *);



 PyObject * PyCFunction_NewEx(PyMethodDef *, PyObject *,
                                         PyObject *);



 PyObject * PyCMethod_New(PyMethodDef *, PyObject *,
                                     PyObject *, PyTypeObject *);






typedef struct {
    PyObject ob_base;
    PyMethodDef *m_ml;
    PyObject *m_self;
    PyObject *m_module;
    PyObject *m_weakreflist;
    vectorcallfunc vectorcall;
} PyCFunctionObject;
typedef struct {
    PyCFunctionObject func;
    PyTypeObject *mm_class;
} PyCMethodObject;





extern  PyTypeObject PyCMethod_Type;







static inline PyCFunction PyCFunction_GET_FUNCTION(PyObject *func) {
    return (
          (__builtin_expect(!(
          PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCFunction_Type))
          ), 0) ? __assert_rtn(__func__, "methodobject.h", 41, 
          "PyCFunction_Check(func)"
          ) : (void)0)
          , ((PyCFunctionObject*)((func))))->m_ml->ml_meth;
}


static inline PyObject* PyCFunction_GET_SELF(PyObject *func_obj) {
    PyCFunctionObject *func = (
                             (__builtin_expect(!(
                             PyObject_TypeCheck(((PyObject*)(((func_obj)))), (&PyCFunction_Type))
                             ), 0) ? __assert_rtn(__func__, "methodobject.h", 46, 
                             "PyCFunction_Check(func_obj)"
                             ) : (void)0)
                             , ((PyCFunctionObject*)((func_obj))));
    if (func->m_ml->ml_flags & 0x0020) {
        return 
              ((void *)0)
                      ;
    }
    return func->m_self;
}


static inline int PyCFunction_GET_FLAGS(PyObject *func) {
    return (
          (__builtin_expect(!(
          PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCFunction_Type))
          ), 0) ? __assert_rtn(__func__, "methodobject.h", 55, 
          "PyCFunction_Check(func)"
          ) : (void)0)
          , ((PyCFunctionObject*)((func))))->m_ml->ml_flags;
}


static inline PyTypeObject* PyCFunction_GET_CLASS(PyObject *func_obj) {
    PyCFunctionObject *func = (
                             (__builtin_expect(!(
                             PyObject_TypeCheck(((PyObject*)(((func_obj)))), (&PyCFunction_Type))
                             ), 0) ? __assert_rtn(__func__, "methodobject.h", 60, 
                             "PyCFunction_Check(func_obj)"
                             ) : (void)0)
                             , ((PyCFunctionObject*)((func_obj))));
    if (func->m_ml->ml_flags & 0x0200) {
        return (
              (__builtin_expect(!(
              PyObject_TypeCheck(((PyObject*)(((func)))), (&PyCMethod_Type))
              ), 0) ? __assert_rtn(__func__, "methodobject.h", 62, 
              "PyCMethod_Check(func)"
              ) : (void)0)
              , ((PyCMethodObject*)((func))))->mm_class;
    }
    return 
          ((void *)0)
                  ;
}
extern  PyTypeObject PyModule_Type;





 PyObject * PyModule_NewObject(
    PyObject *name
    );

 PyObject * PyModule_New(
    const char *name
    );
 PyObject * PyModule_GetDict(PyObject *);

 PyObject * PyModule_GetNameObject(PyObject *);

 const char * PyModule_GetName(PyObject *);
  const char * PyModule_GetFilename(PyObject *);
 PyObject * PyModule_GetFilenameObject(PyObject *);

 void _PyModule_Clear(PyObject *);
 void _PyModule_ClearDict(PyObject *);
 int _PyModuleSpec_IsInitializing(PyObject *);

 PyModuleDef* PyModule_GetDef(PyObject*);
 void* PyModule_GetState(PyObject*);



 PyObject * PyModuleDef_Init(PyModuleDef*);
extern  PyTypeObject PyModuleDef_Type;


typedef struct PyModuleDef_Base {
  PyObject ob_base;






  PyObject* (*m_init)(void);




  Py_ssize_t m_index;




  PyObject* m_copy;
} PyModuleDef_Base;
struct PyModuleDef_Slot {
    int slot;
    void *value;
};
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
typedef struct {
    PyObject *fc_globals; PyObject *fc_builtins; PyObject *fc_name; PyObject *fc_qualname; PyObject *fc_code; PyObject *fc_defaults; PyObject *fc_kwdefaults; PyObject *fc_closure;
} PyFrameConstructor;
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
    uint32_t func_version;






} PyFunctionObject;



extern  PyTypeObject PyFunction_Type;



 PyObject * PyFunction_New(PyObject *, PyObject *);
 PyObject * PyFunction_NewWithQualName(PyObject *, PyObject *, PyObject *);
 PyObject * PyFunction_GetCode(PyObject *);
 PyObject * PyFunction_GetGlobals(PyObject *);
 PyObject * PyFunction_GetModule(PyObject *);
 PyObject * PyFunction_GetDefaults(PyObject *);
 int PyFunction_SetDefaults(PyObject *, PyObject *);
 void PyFunction_SetVectorcall(PyFunctionObject *, vectorcallfunc);
 PyObject * PyFunction_GetKwDefaults(PyObject *);
 int PyFunction_SetKwDefaults(PyObject *, PyObject *);
 PyObject * PyFunction_GetClosure(PyObject *);
 int PyFunction_SetClosure(PyObject *, PyObject *);
 PyObject * PyFunction_GetAnnotations(PyObject *);
 int PyFunction_SetAnnotations(PyObject *, PyObject *);

 PyObject * _PyFunction_Vectorcall(
    PyObject *func,
    PyObject *const *stack,
    size_t nargsf,
    PyObject *kwnames);






static inline PyObject* PyFunction_GET_CODE(PyObject *func) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 96, 
          "PyFunction_Check(func)"
          ) : (void)0)
          , ((PyFunctionObject*)(func)))->func_code;
}


static inline PyObject* PyFunction_GET_GLOBALS(PyObject *func) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 101, 
          "PyFunction_Check(func)"
          ) : (void)0)
          , ((PyFunctionObject*)(func)))->func_globals;
}


static inline PyObject* PyFunction_GET_MODULE(PyObject *func) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 106, 
          "PyFunction_Check(func)"
          ) : (void)0)
          , ((PyFunctionObject*)(func)))->func_module;
}


static inline PyObject* PyFunction_GET_DEFAULTS(PyObject *func) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 111, 
          "PyFunction_Check(func)"
          ) : (void)0)
          , ((PyFunctionObject*)(func)))->func_defaults;
}


static inline PyObject* PyFunction_GET_KW_DEFAULTS(PyObject *func) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 116, 
          "PyFunction_Check(func)"
          ) : (void)0)
          , ((PyFunctionObject*)(func)))->func_kwdefaults;
}


static inline PyObject* PyFunction_GET_CLOSURE(PyObject *func) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 121, 
          "PyFunction_Check(func)"
          ) : (void)0)
          , ((PyFunctionObject*)(func)))->func_closure;
}


static inline PyObject* PyFunction_GET_ANNOTATIONS(PyObject *func) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((func)))), (&PyFunction_Type))
          ), 0) ? __assert_rtn(__func__, "funcobject.h", 126, 
          "PyFunction_Check(func)"
          ) : (void)0)
          , ((PyFunctionObject*)(func)))->func_annotations;
}



extern  PyTypeObject PyClassMethod_Type;
extern  PyTypeObject PyStaticMethod_Type;

 PyObject * PyClassMethod_New(PyObject *);
 PyObject * PyStaticMethod_New(PyObject *);
typedef enum {

    PyFunction_EVENT_CREATE, PyFunction_EVENT_DESTROY, PyFunction_EVENT_MODIFY_CODE, PyFunction_EVENT_MODIFY_DEFAULTS, PyFunction_EVENT_MODIFY_KWDEFAULTS,

} PyFunction_WatchEvent;
typedef int (*PyFunction_WatchCallback)(
  PyFunction_WatchEvent event,
  PyFunctionObject *func,
  PyObject *new_value);
 int PyFunction_AddWatcher(PyFunction_WatchCallback callback);






 int PyFunction_ClearWatcher(int watcher_id);
typedef struct {
    PyObject ob_base;
    PyObject *im_func;
    PyObject *im_self;
    PyObject *im_weakreflist;
    vectorcallfunc vectorcall;
} PyMethodObject;

extern  PyTypeObject PyMethod_Type;



 PyObject * PyMethod_New(PyObject *, PyObject *);

 PyObject * PyMethod_Function(PyObject *);
 PyObject * PyMethod_Self(PyObject *);






static inline PyObject* PyMethod_GET_FUNCTION(PyObject *meth) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((meth)))), (&PyMethod_Type))
          ), 0) ? __assert_rtn(__func__, "classobject.h", 35, 
          "PyMethod_Check(meth)"
          ) : (void)0)
          , ((PyMethodObject*)(meth)))->im_func;
}


static inline PyObject* PyMethod_GET_SELF(PyObject *meth) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((meth)))), (&PyMethod_Type))
          ), 0) ? __assert_rtn(__func__, "classobject.h", 40, 
          "PyMethod_Check(meth)"
          ) : (void)0)
          , ((PyMethodObject*)(meth)))->im_self;
}


typedef struct {
    PyObject ob_base;
    PyObject *func;
} PyInstanceMethodObject;

extern  PyTypeObject PyInstanceMethod_Type;



 PyObject * PyInstanceMethod_New(PyObject *);
 PyObject * PyInstanceMethod_Function(PyObject *);







static inline PyObject* PyInstanceMethod_GET_FUNCTION(PyObject *meth) {
    return (
          (__builtin_expect(!(
          Py_IS_TYPE(((PyObject*)(((meth)))), (&PyInstanceMethod_Type))
          ), 0) ? __assert_rtn(__func__, "classobject.h", 63, 
          "PyInstanceMethod_Check(meth)"
          ) : (void)0)
          , ((PyInstanceMethodObject*)(meth)))->func;
}
 PyObject * PyFile_FromFd(int, const char *, const char *, int,
                                     const char *, const char *,
                                     const char *, int);
 PyObject * PyFile_GetLine(PyObject *, int);
 int PyFile_WriteObject(PyObject *, PyObject *, int);
 int PyFile_WriteString(const char *, PyObject *);
 int PyObject_AsFileDescriptor(PyObject *);




 extern  const char * Py_FileSystemDefaultEncoding;

 extern  const char * Py_FileSystemDefaultEncodeErrors;

 extern  int Py_HasFileSystemDefaultEncoding;


 extern  int Py_UTF8Mode;




 char * Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);
 char * _Py_UniversalNewlineFgetsWithSize(char *, int, FILE*, PyObject *, size_t*);



 PyObject * PyFile_NewStdPrinter(int);
extern  PyTypeObject PyStdPrinter_Type;

typedef PyObject * (*Py_OpenCodeHookFunction)(PyObject *, void *);

 PyObject * PyFile_OpenCode(const char *utf8path);
 PyObject * PyFile_OpenCodeObject(PyObject *path);
 int PyFile_SetOpenCodeHook(Py_OpenCodeHookFunction hook, void *userData);

 int _PyLong_FileDescriptor_Converter(PyObject *, void *);
extern  PyTypeObject PyCapsule_Type;

typedef void (*PyCapsule_Destructor)(PyObject *);




 PyObject * PyCapsule_New(
    void *pointer,
    const char *name,
    PyCapsule_Destructor destructor);

 void * PyCapsule_GetPointer(PyObject *capsule, const char *name);

 PyCapsule_Destructor PyCapsule_GetDestructor(PyObject *capsule);

 const char * PyCapsule_GetName(PyObject *capsule);

 void * PyCapsule_GetContext(PyObject *capsule);

 int PyCapsule_IsValid(PyObject *capsule, const char *name);

 int PyCapsule_SetPointer(PyObject *capsule, void *pointer);

 int PyCapsule_SetDestructor(PyObject *capsule, PyCapsule_Destructor destructor);

 int PyCapsule_SetName(PyObject *capsule, const char *name);

 int PyCapsule_SetContext(PyObject *capsule, void *context);

 void * PyCapsule_Import(
    const char *name,
    int no_block);
typedef struct _Py_LocalMonitors {

    uint8_t tools[15];
} _Py_LocalMonitors;

typedef struct _Py_GlobalMonitors {
    uint8_t tools[15];
} _Py_GlobalMonitors;
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
struct PyCodeObject { PyVarObject ob_base; PyObject *co_consts; PyObject *co_names; PyObject *co_exceptiontable; int co_flags; int co_argcount; int co_posonlyargcount; int co_kwonlyargcount; int co_stacksize; int co_firstlineno; int co_nlocalsplus; int co_framesize; int co_nlocals; int co_ncellvars; int co_nfreevars; uint32_t co_version; PyObject *co_localsplusnames; PyObject *co_localspluskinds; PyObject *co_filename; PyObject *co_name; PyObject *co_qualname; PyObject *co_linetable; PyObject *co_weakreflist; _PyCoCached *_co_cached; uint64_t _co_instrumentation_version; _PyCoMonitoringData *_co_monitoring; int _co_firsttraceable; void *co_extra; char co_code_adaptive[(1)]; };
extern  PyTypeObject PyCode_Type;



static inline Py_ssize_t PyCode_GetNumFree(PyCodeObject *op) {
    
   (__builtin_expect(!(
   Py_IS_TYPE(((PyObject*)(((op)))), (&PyCode_Type))
   ), 0) ? __assert_rtn(__func__, "code.h", 217, 
   "PyCode_Check(op)"
   ) : (void)0)
                           ;
    return op->co_nfreevars;
}

static inline int PyCode_GetFirstFree(PyCodeObject *op) {
    
   (__builtin_expect(!(
   Py_IS_TYPE(((PyObject*)(((op)))), (&PyCode_Type))
   ), 0) ? __assert_rtn(__func__, "code.h", 222, 
   "PyCode_Check(op)"
   ) : (void)0)
                           ;
    return op->co_nlocalsplus - op->co_nfreevars;
}





 PyCodeObject * PyUnstable_Code_New(
        int, int, int, int, int, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, int, PyObject *,
        PyObject *);

 PyCodeObject * PyUnstable_Code_NewWithPosOnlyArgs(
        int, int, int, int, int, int, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, int, PyObject *,
        PyObject *);


 static inline PyCodeObject *
PyCode_New(
        int a, int b, int c, int d, int e, PyObject *f, PyObject *g,
        PyObject *h, PyObject *i, PyObject *j, PyObject *k,
        PyObject *l, PyObject *m, PyObject *n, int o, PyObject *p,
        PyObject *q)
{
    return PyUnstable_Code_New(
        a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q);
}
 static inline PyCodeObject *
PyCode_NewWithPosOnlyArgs(
        int a, int poac, int b, int c, int d, int e, PyObject *f, PyObject *g,
        PyObject *h, PyObject *i, PyObject *j, PyObject *k,
        PyObject *l, PyObject *m, PyObject *n, int o, PyObject *p,
        PyObject *q)
{
    return PyUnstable_Code_NewWithPosOnlyArgs(
        a, poac, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q);
}


 PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno);




 int PyCode_Addr2Line(PyCodeObject *, int);

 int PyCode_Addr2Location(PyCodeObject *, int, int *, int *, int *, int *);





typedef enum {

    PY_CODE_EVENT_CREATE, PY_CODE_EVENT_DESTROY,

} PyCodeEvent;
typedef int (*PyCode_WatchCallback)(
  PyCodeEvent event,
  PyCodeObject* co);
 int PyCode_AddWatcher(PyCode_WatchCallback callback);






 int PyCode_ClearWatcher(int watcher_id);


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




 int _PyCode_CheckLineNumber(int lasti, PyCodeAddressRange *bounds);
 PyObject* _PyCode_ConstantKey(PyObject *obj);

 PyObject* PyCode_Optimize(PyObject *code, PyObject* consts,
                                      PyObject *names, PyObject *lnotab);

 int PyUnstable_Code_GetExtra(
    PyObject *code, Py_ssize_t index, void **extra);
 int PyUnstable_Code_SetExtra(
    PyObject *code, Py_ssize_t index, void *extra);

 static inline int
_PyCode_GetExtra(PyObject *code, Py_ssize_t index, void **extra)
{
    return PyUnstable_Code_GetExtra(code, index, extra);
}
 static inline int
_PyCode_SetExtra(PyObject *code, Py_ssize_t index, void *extra)
{
    return PyUnstable_Code_SetExtra(code, index, extra);
}



 PyObject * PyCode_GetCode(PyCodeObject *code);

 PyObject * PyCode_GetVarnames(PyCodeObject *code);

 PyObject * PyCode_GetCellvars(PyCodeObject *code);

 PyObject * PyCode_GetFreevars(PyCodeObject *code);

typedef enum _PyCodeLocationInfoKind {

    PY_CODE_LOCATION_INFO_SHORT0 = 0,

    PY_CODE_LOCATION_INFO_ONE_LINE0 = 10,
    PY_CODE_LOCATION_INFO_ONE_LINE1 = 11,
    PY_CODE_LOCATION_INFO_ONE_LINE2 = 12,

    PY_CODE_LOCATION_INFO_NO_COLUMNS = 13,
    PY_CODE_LOCATION_INFO_LONG = 14,
    PY_CODE_LOCATION_INFO_NONE = 15
} _PyCodeLocationInfoKind;
 int PyFrame_GetLineNumber(PyFrameObject *);

 PyCodeObject * PyFrame_GetCode(PyFrameObject *frame);







extern  PyTypeObject PyFrame_Type;



 PyFrameObject * PyFrame_GetBack(PyFrameObject *frame);
 PyObject * PyFrame_GetLocals(PyFrameObject *frame);

 PyObject * PyFrame_GetGlobals(PyFrameObject *frame);
 PyObject * PyFrame_GetBuiltins(PyFrameObject *frame);

 PyObject * PyFrame_GetGenerator(PyFrameObject *frame);
 int PyFrame_GetLasti(PyFrameObject *frame);
 PyObject* PyFrame_GetVar(PyFrameObject *frame, PyObject *name);
 PyObject* PyFrame_GetVarString(PyFrameObject *frame, const char *name);




struct _PyInterpreterFrame;



 PyObject * PyUnstable_InterpreterFrame_GetCode(struct _PyInterpreterFrame *frame);



 int PyUnstable_InterpreterFrame_GetLasti(struct _PyInterpreterFrame *frame);



 int PyUnstable_InterpreterFrame_GetLine(struct _PyInterpreterFrame *frame);
 int PyTraceBack_Here(PyFrameObject *);
 int PyTraceBack_Print(PyObject *, PyObject *);


extern  PyTypeObject PyTraceBack_Type;









typedef struct _traceback PyTracebackObject;

struct _traceback {
    PyObject ob_base;
    PyTracebackObject *tb_next;
    PyFrameObject *tb_frame;
    int tb_lasti;
    int tb_lineno;
};

 int _Py_DisplaySourceLine(PyObject *, PyObject *, int, int, int *, PyObject **);
 void _PyTraceback_Add(const char *, const char *, int);
extern  PyObject _Py_EllipsisObject;
typedef struct {
    PyObject ob_base;
    PyObject *start, *stop, *step;
} PySliceObject;


extern  PyTypeObject PySlice_Type;
extern  PyTypeObject PyEllipsis_Type;



 PyObject * PySlice_New(PyObject* start, PyObject* stop,
                                  PyObject* step);

 PyObject * _PySlice_FromIndices(Py_ssize_t start, Py_ssize_t stop);
 int _PySlice_GetLongIndices(PySliceObject *self, PyObject *length,
                                 PyObject **start_ptr, PyObject **stop_ptr,
                                 PyObject **step_ptr);

 int PySlice_GetIndices(PyObject *r, Py_ssize_t length,
                                  Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);

 int PySlice_GetIndicesEx(PyObject *r, Py_ssize_t length,
                                     Py_ssize_t *start, Py_ssize_t *stop,
                                     Py_ssize_t *step,
                                     Py_ssize_t *slicelength);







 int PySlice_Unpack(PyObject *slice,
                               Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
 Py_ssize_t PySlice_AdjustIndices(Py_ssize_t length,
                                             Py_ssize_t *start, Py_ssize_t *stop,
                                             Py_ssize_t step);
typedef struct {
    PyObject ob_base;

    PyObject *ob_ref;
} PyCellObject;

extern  PyTypeObject PyCell_Type;



 PyObject * PyCell_New(PyObject *);
 PyObject * PyCell_Get(PyObject *);
 int PyCell_Set(PyObject *, PyObject *);

static inline PyObject* PyCell_GET(PyObject *op) {
    PyCellObject *cell;
    
   (__builtin_expect(!(
   Py_IS_TYPE(((PyObject*)(((op)))), (&PyCell_Type))
   ), 0) ? __assert_rtn(__func__, "cellobject.h", 26, 
   "PyCell_Check(op)"
   ) : (void)0)
                           ;
    cell = ((PyCellObject*)(op));
    return cell->ob_ref;
}


static inline void PyCell_SET(PyObject *op, PyObject *value) {
    PyCellObject *cell;
    
   (__builtin_expect(!(
   Py_IS_TYPE(((PyObject*)(((op)))), (&PyCell_Type))
   ), 0) ? __assert_rtn(__func__, "cellobject.h", 34, 
   "PyCell_Check(op)"
   ) : (void)0)
                           ;
    cell = ((PyCellObject*)(op));
    cell->ob_ref = value;
}







extern  PyTypeObject PySeqIter_Type;
extern  PyTypeObject PyCallIter_Type;






 PyObject * PySeqIter_New(PyObject *);




 PyObject * PyCallIter_New(PyObject *, PyObject *);
typedef struct {

    PyObject ob_base; PyObject *gi_weakreflist; PyObject *gi_name; PyObject *gi_qualname; _PyErr_StackItem gi_exc_state; PyObject *gi_origin_or_finalizer; char gi_hooks_inited; char gi_closed; char gi_running_async; int8_t gi_frame_state; PyObject *gi_iframe[1];
} PyGenObject;

extern  PyTypeObject PyGen_Type;




 PyObject * PyGen_New(PyFrameObject *);
 PyObject * PyGen_NewWithQualName(PyFrameObject *,
    PyObject *name, PyObject *qualname);
 int _PyGen_SetStopIterationValue(PyObject *);
 int _PyGen_FetchStopIterationValue(PyObject **);
 void _PyGen_Finalize(PyObject *self);
 PyCodeObject * PyGen_GetCode(PyGenObject *gen);




typedef struct {
    PyObject ob_base; PyObject *cr_weakreflist; PyObject *cr_name; PyObject *cr_qualname; _PyErr_StackItem cr_exc_state; PyObject *cr_origin_or_finalizer; char cr_hooks_inited; char cr_closed; char cr_running_async; int8_t cr_frame_state; PyObject *cr_iframe[1];
} PyCoroObject;

extern  PyTypeObject PyCoro_Type;
extern  PyTypeObject _PyCoroWrapper_Type;


 PyObject * PyCoro_New(PyFrameObject *,
    PyObject *name, PyObject *qualname);




typedef struct {
    PyObject ob_base; PyObject *ag_weakreflist; PyObject *ag_name; PyObject *ag_qualname; _PyErr_StackItem ag_exc_state; PyObject *ag_origin_or_finalizer; char ag_hooks_inited; char ag_closed; char ag_running_async; int8_t ag_frame_state; PyObject *ag_iframe[1];
} PyAsyncGenObject;

extern  PyTypeObject PyAsyncGen_Type;
extern  PyTypeObject _PyAsyncGenASend_Type;
extern  PyTypeObject _PyAsyncGenWrappedValue_Type;
extern  PyTypeObject _PyAsyncGenAThrow_Type;

 PyObject * PyAsyncGen_New(PyFrameObject *,
    PyObject *name, PyObject *qualname);







typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);

struct PyGetSetDef {
    const char *name;
    getter get;
    setter set;
    const char *doc;
    void *closure;
};

extern  PyTypeObject PyClassMethodDescr_Type;
extern  PyTypeObject PyGetSetDescr_Type;
extern  PyTypeObject PyMemberDescr_Type;
extern  PyTypeObject PyMethodDescr_Type;
extern  PyTypeObject PyWrapperDescr_Type;
extern  PyTypeObject PyDictProxy_Type;
extern  PyTypeObject PyProperty_Type;

 PyObject * PyDescr_NewMethod(PyTypeObject *, PyMethodDef *);
 PyObject * PyDescr_NewClassMethod(PyTypeObject *, PyMethodDef *);
 PyObject * PyDescr_NewMember(PyTypeObject *, PyMemberDef *);
 PyObject * PyDescr_NewGetSet(PyTypeObject *, PyGetSetDef *);

 PyObject * PyDictProxy_New(PyObject *);
 PyObject * PyWrapper_New(PyObject *, PyObject *);







struct PyMemberDef {
    const char *name;
    int type;
    Py_ssize_t offset;
    int flags;
    const char *doc;
};
 PyObject * PyMember_GetOne(const char *, PyMemberDef *);
 int PyMember_SetOne(char *, PyMemberDef *, PyObject *);







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

extern  PyTypeObject _PyMethodWrapper_Type;

 PyObject * PyDescr_NewWrapper(PyTypeObject *,
                                                struct wrapperbase *, void *);
 int PyDescr_IsData(PyObject *);







 PyObject * Py_GenericAlias(PyObject *, PyObject *);
extern  PyTypeObject Py_GenericAliasType;






 int PyErr_WarnEx(
    PyObject *category,
    const char *message,
    Py_ssize_t stack_level);

 int PyErr_WarnFormat(
    PyObject *category,
    Py_ssize_t stack_level,
    const char *format,
    ...);



 int PyErr_ResourceWarning(
    PyObject *source,
    Py_ssize_t stack_level,
    const char *format,
    ...);


 int PyErr_WarnExplicit(
    PyObject *category,
    const char *message,
    const char *filename,
    int lineno,
    const char *module,
    PyObject *registry);







 int PyErr_WarnExplicitObject(
    PyObject *category,
    PyObject *message,
    PyObject *filename,
    int lineno,
    PyObject *module,
    PyObject *registry);

 int PyErr_WarnExplicitFormat(
    PyObject *category,
    const char *filename, int lineno,
    const char *module, PyObject *registry,
    const char *format, ...);
typedef struct _PyWeakReference PyWeakReference;

extern  PyTypeObject _PyWeakref_RefType;
extern  PyTypeObject _PyWeakref_ProxyType;
extern  PyTypeObject _PyWeakref_CallableProxyType;
 PyObject * PyWeakref_NewRef(PyObject *ob,
                                        PyObject *callback);
 PyObject * PyWeakref_NewProxy(PyObject *ob,
                                          PyObject *callback);
 PyObject * PyWeakref_GetObject(PyObject *ref);











struct _PyWeakReference {
    PyObject ob_base;





    PyObject *wr_object;


    PyObject *wr_callback;




    Py_hash_t hash;






    PyWeakReference *wr_prev;
    PyWeakReference *wr_next;
    vectorcallfunc vectorcall;
};

 Py_ssize_t _PyWeakref_GetWeakrefCount(PyWeakReference *head);

 void _PyWeakref_ClearRef(PyWeakReference *self);

static inline PyObject* PyWeakref_GET_OBJECT(PyObject *ref_obj) {
    PyWeakReference *ref;
    PyObject *obj;
    
   (__builtin_expect(!(
   (PyObject_TypeCheck(((PyObject*)(((ref_obj)))), (&_PyWeakref_RefType)) || (Py_IS_TYPE(((PyObject*)(((ref_obj)))), (&_PyWeakref_ProxyType)) || Py_IS_TYPE(((PyObject*)(((ref_obj)))), (&_PyWeakref_CallableProxyType))))
   ), 0) ? __assert_rtn(__func__, "weakrefobject.h", 42, 
   "PyWeakref_Check(ref_obj)"
   ) : (void)0)
                                   ;
    ref = ((PyWeakReference*)(ref_obj));
    obj = ref->wr_object;






    if (Py_REFCNT(((PyObject*)((obj)))) > 0) {
        return obj;
    }
    return (&_Py_NoneStruct);
}
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

extern  const char * const PyStructSequence_UnnamedField;


 void PyStructSequence_InitType(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);
 int PyStructSequence_InitType2(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);

 PyTypeObject* PyStructSequence_NewType(PyStructSequence_Desc *desc);

 PyObject * PyStructSequence_New(PyTypeObject* type);


typedef PyTupleObject PyStructSequence;







 void PyStructSequence_SetItem(PyObject*, Py_ssize_t, PyObject*);
 PyObject* PyStructSequence_GetItem(PyObject*, Py_ssize_t);
extern  PyTypeObject PyPickleBuffer_Type;




 PyObject * PyPickleBuffer_FromObject(PyObject *);



 const Py_buffer * PyPickleBuffer_GetBuffer(PyObject *);

 int PyPickleBuffer_Release(PyObject *);
typedef int64_t _PyTime_t;






typedef enum {


    _PyTime_ROUND_FLOOR=0,


    _PyTime_ROUND_CEILING=1,


    _PyTime_ROUND_HALF_EVEN=2,






    _PyTime_ROUND_UP=3,


    _PyTime_ROUND_TIMEOUT = _PyTime_ROUND_UP
} _PyTime_round_t;



 PyObject * _PyLong_FromTime_t(
    time_t sec);


 time_t _PyLong_AsTime_t(
    PyObject *obj);


 int _PyTime_ObjectToTime_t(
    PyObject *obj,
    time_t *sec,
    _PyTime_round_t);




 int _PyTime_ObjectToTimeval(
    PyObject *obj,
    time_t *sec,
    long *usec,
    _PyTime_round_t);




 int _PyTime_ObjectToTimespec(
    PyObject *obj,
    time_t *sec,
    long *nsec,
    _PyTime_round_t);



 _PyTime_t _PyTime_FromSeconds(int seconds);







 _PyTime_t _PyTime_FromNanoseconds(_PyTime_t ns);



 _PyTime_t _PyTime_FromMicrosecondsClamp(_PyTime_t us);


 int _PyTime_FromNanosecondsObject(_PyTime_t *t,
    PyObject *obj);



 int _PyTime_FromSecondsObject(_PyTime_t *t,
    PyObject *obj,
    _PyTime_round_t round);



 int _PyTime_FromMillisecondsObject(_PyTime_t *t,
    PyObject *obj,
    _PyTime_round_t round);


 double _PyTime_AsSecondsDouble(_PyTime_t t);


 _PyTime_t _PyTime_AsMilliseconds(_PyTime_t t,
    _PyTime_round_t round);


 _PyTime_t _PyTime_AsMicroseconds(_PyTime_t t,
    _PyTime_round_t round);


 _PyTime_t _PyTime_AsNanoseconds(_PyTime_t t);
 PyObject * _PyTime_AsNanosecondsObject(_PyTime_t t);




 int _PyTime_FromTimeval(_PyTime_t *tp, struct timeval *tv);






 int _PyTime_AsTimeval(_PyTime_t t,
    struct timeval *tv,
    _PyTime_round_t round);



 void _PyTime_AsTimeval_clamp(_PyTime_t t,
    struct timeval *tv,
    _PyTime_round_t round);







 int _PyTime_AsTimevalTime_t(
    _PyTime_t t,
    time_t *secs,
    int *us,
    _PyTime_round_t round);




 int _PyTime_FromTimespec(_PyTime_t *tp, struct timespec *ts);




 int _PyTime_AsTimespec(_PyTime_t t, struct timespec *ts);



 void _PyTime_AsTimespec_clamp(_PyTime_t t, struct timespec *ts);




 _PyTime_t _PyTime_Add(_PyTime_t t1, _PyTime_t t2);




 _PyTime_t _PyTime_MulDiv(_PyTime_t ticks,
    _PyTime_t mul,
    _PyTime_t div);


typedef struct {
    const char *implementation;
    int monotonic;
    int adjustable;
    double resolution;
} _Py_clock_info_t;
 _PyTime_t _PyTime_GetSystemClock(void);





 int _PyTime_GetSystemClockWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);
 _PyTime_t _PyTime_GetMonotonicClock(void);
 int _PyTime_GetMonotonicClockWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);




 int _PyTime_localtime(time_t t, struct tm *tm);



 int _PyTime_gmtime(time_t t, struct tm *tm);
 _PyTime_t _PyTime_GetPerfCounter(void);







 int _PyTime_GetPerfCounterWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);




 _PyTime_t _PyDeadline_Init(_PyTime_t timeout);



 _PyTime_t _PyDeadline_Get(_PyTime_t deadline);
 int PyCodec_Register(
       PyObject *search_function
       );





 int PyCodec_Unregister(
       PyObject *search_function
       );
 PyObject * _PyCodec_Lookup(
       const char *encoding
       );

 int _PyCodec_Forget(
       const char *encoding
       );
 int PyCodec_KnownEncoding(
       const char *encoding
       );
 PyObject * PyCodec_Encode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
 PyObject * PyCodec_Decode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
 PyObject * _PyCodec_LookupTextEncoding(
       const char *encoding,
       const char *alternate_command
       );

 PyObject * _PyCodec_EncodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );

 PyObject * _PyCodec_DecodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );




 PyObject * _PyCodecInfo_GetIncrementalDecoder(
       PyObject *codec_info,
       const char *errors
       );

 PyObject * _PyCodecInfo_GetIncrementalEncoder(
       PyObject *codec_info,
       const char *errors
       );
 PyObject * PyCodec_Encoder(
       const char *encoding
       );



 PyObject * PyCodec_Decoder(
       const char *encoding
       );



 PyObject * PyCodec_IncrementalEncoder(
       const char *encoding,
       const char *errors
       );



 PyObject * PyCodec_IncrementalDecoder(
       const char *encoding,
       const char *errors
       );



 PyObject * PyCodec_StreamReader(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );



 PyObject * PyCodec_StreamWriter(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );
 int PyCodec_RegisterError(const char *name, PyObject *error);




 PyObject * PyCodec_LookupError(const char *name);


 PyObject * PyCodec_StrictErrors(PyObject *exc);


 PyObject * PyCodec_IgnoreErrors(PyObject *exc);


 PyObject * PyCodec_ReplaceErrors(PyObject *exc);


 PyObject * PyCodec_XMLCharRefReplaceErrors(PyObject *exc);


 PyObject * PyCodec_BackslashReplaceErrors(PyObject *exc);



 PyObject * PyCodec_NameReplaceErrors(PyObject *exc);



extern  const char * Py_hexdigits;



typedef void *PyThread_type_lock;







typedef enum PyLockStatus {
    PY_LOCK_FAILURE = 0,
    PY_LOCK_ACQUIRED = 1,
    PY_LOCK_INTR
} PyLockStatus;

 void PyThread_init_thread(void);
 unsigned long PyThread_start_new_thread(void (*)(void *), void *);
 void  PyThread_exit_thread(void);
 unsigned long PyThread_get_thread_ident(void);





 unsigned long PyThread_get_thread_native_id(void);


 PyThread_type_lock PyThread_allocate_lock(void);
 void PyThread_free_lock(PyThread_type_lock);
 int PyThread_acquire_lock(PyThread_type_lock, int);
 PyLockStatus PyThread_acquire_lock_timed(PyThread_type_lock,
                                                     long long microseconds,
                                                     int intr_flag);

 void PyThread_release_lock(PyThread_type_lock);

 size_t PyThread_get_stacksize(void);
 int PyThread_set_stacksize(size_t);


 PyObject* PyThread_GetInfo(void);
  int PyThread_create_key(void);
  void PyThread_delete_key(int key);
  int PyThread_set_key_value(int key,
                                                          void *value);
  void * PyThread_get_key_value(int key);
  void PyThread_delete_key_value(int key);


  void PyThread_ReInitTLS(void);






typedef struct _Py_tss_t Py_tss_t;

 Py_tss_t * PyThread_tss_alloc(void);
 void PyThread_tss_free(Py_tss_t *key);


 int PyThread_tss_is_created(Py_tss_t *key);
 int PyThread_tss_create(Py_tss_t *key);
 void PyThread_tss_delete(Py_tss_t *key);
 int PyThread_tss_set(Py_tss_t *key, void *value);
 void * PyThread_tss_get(Py_tss_t *key);




 int _PyThread_at_fork_reinit(PyThread_type_lock *lock);











struct sched_param { int sched_priority; char __opaque[4]; };




extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);




typedef __darwin_pthread_cond_t pthread_cond_t;
typedef __darwin_pthread_condattr_t pthread_condattr_t;
typedef __darwin_pthread_key_t pthread_key_t;
typedef __darwin_pthread_mutex_t pthread_mutex_t;
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
typedef __darwin_pthread_once_t pthread_once_t;
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
typedef __darwin_pthread_t pthread_t;

enum { QOS_CLASS_USER_INTERACTIVE   = 0x21, QOS_CLASS_USER_INITIATED   = 0x19, QOS_CLASS_DEFAULT   = 0x15, QOS_CLASS_UTILITY   = 0x11, QOS_CLASS_BACKGROUND   = 0x09, QOS_CLASS_UNSPECIFIED   = 0x00, }; typedef unsigned int qos_class_t
 ;

 
qos_class_t
qos_class_self(void);
 
qos_class_t
qos_class_main(void);









 
int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
  qos_class_t __qos_class, int __relative_priority);
 
int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
 
int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
  int __relative_priority);
 
int
pthread_get_qos_class_np(pthread_t __pthread,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
typedef struct pthread_override_s* pthread_override_t;
 
pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
  qos_class_t __qos_class, int __relative_priority);
 
int
pthread_override_qos_class_end_np(pthread_override_t __override);





typedef __darwin_mach_port_t mach_port_t;

 
int pthread_atfork(void (* )(void), void (* )(void),
  void (* )(void));

 
int pthread_attr_destroy(pthread_attr_t *);

 
int pthread_attr_getdetachstate(const pthread_attr_t *, int *);

 
int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);

 
int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);

 
int pthread_attr_getschedparam(const pthread_attr_t * restrict,
  struct sched_param * restrict);

 
int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);

 
int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);

 
int pthread_attr_getstack(const pthread_attr_t * restrict,
  void * * restrict, size_t * restrict);

 
int pthread_attr_getstackaddr(const pthread_attr_t * restrict,
  void * * restrict);

 
int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);

 
int pthread_attr_init(pthread_attr_t *);

 
int pthread_attr_setdetachstate(pthread_attr_t *, int);

 
int pthread_attr_setguardsize(pthread_attr_t *, size_t);

 
int pthread_attr_setinheritsched(pthread_attr_t *, int);

 
int pthread_attr_setschedparam(pthread_attr_t * restrict,
  const struct sched_param * restrict);

 
int pthread_attr_setschedpolicy(pthread_attr_t *, int);

 
int pthread_attr_setscope(pthread_attr_t *, int);

 
int pthread_attr_setstack(pthread_attr_t *, void *, size_t);

 
int pthread_attr_setstackaddr(pthread_attr_t *, void *);

 
int pthread_attr_setstacksize(pthread_attr_t *, size_t);

 
int pthread_cancel(pthread_t) ;

 
int pthread_cond_broadcast(pthread_cond_t *);

 
int pthread_cond_destroy(pthread_cond_t *);

 
int pthread_cond_init(
  pthread_cond_t * restrict,
  const pthread_condattr_t * restrict)
  ;

 
int pthread_cond_signal(pthread_cond_t *);

 

int pthread_cond_timedwait(
  pthread_cond_t * restrict, pthread_mutex_t * restrict,
  const struct timespec * restrict)
  ;

 

int pthread_cond_wait(pthread_cond_t * restrict,
  pthread_mutex_t * restrict) ;

 
int pthread_condattr_destroy(pthread_condattr_t *);

 
int pthread_condattr_init(pthread_condattr_t *);

 
int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
  int * restrict);

 
int pthread_condattr_setpshared(pthread_condattr_t *, int);

 

int pthread_create(pthread_t * restrict,
  const pthread_attr_t * restrict,
  void * (* )(void * ),
  void * restrict);






 
int pthread_detach(pthread_t);

 
int pthread_equal(pthread_t , pthread_t );

 

void pthread_exit(void * ) ;

 
int pthread_getconcurrency(void);

 
int pthread_getschedparam(pthread_t , int * restrict,
  struct sched_param * restrict);


 
void* pthread_getspecific(pthread_key_t);

 

int pthread_join(pthread_t , void * * )
  ;

 
int pthread_key_create(pthread_key_t *, void (* )(void *));

 
int pthread_key_delete(pthread_key_t);

 
int pthread_mutex_destroy(pthread_mutex_t *);

 
int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
  int * restrict);

 
int pthread_mutex_init(pthread_mutex_t * restrict,
  const pthread_mutexattr_t * restrict);

 

int pthread_mutex_lock(pthread_mutex_t *);

 
int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
  int * restrict);

 

int pthread_mutex_trylock(pthread_mutex_t *);

 

int pthread_mutex_unlock(pthread_mutex_t *);

 
int pthread_mutexattr_destroy(pthread_mutexattr_t *) ;

 
int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
  int * restrict);

 
int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
  int * restrict);

 
int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
  int * restrict);

 
int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
  int * restrict);

   
int pthread_mutexattr_getpolicy_np(const pthread_mutexattr_t * restrict,
  int * restrict);

 
int pthread_mutexattr_init(pthread_mutexattr_t *);

 
int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);

 
int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);

 
int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);

 
int pthread_mutexattr_settype(pthread_mutexattr_t *, int);

 
int pthread_mutexattr_setpolicy_np(pthread_mutexattr_t *, int);


 
int pthread_once(pthread_once_t *, void (* )(void));

 
int pthread_rwlock_destroy(pthread_rwlock_t * ) ;

 
int pthread_rwlock_init(pthread_rwlock_t * restrict,
  const pthread_rwlockattr_t * restrict)
  ;

 

int pthread_rwlock_rdlock(pthread_rwlock_t *) ;

 

int pthread_rwlock_tryrdlock(pthread_rwlock_t *) ;

 

int pthread_rwlock_trywrlock(pthread_rwlock_t *) ;

 

int pthread_rwlock_wrlock(pthread_rwlock_t *) ;

 

int pthread_rwlock_unlock(pthread_rwlock_t *) ;

 
int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);

 
int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
  int * restrict);

 
int pthread_rwlockattr_init(pthread_rwlockattr_t *);

 
int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);

 
pthread_t pthread_self(void);

 

int pthread_setcancelstate(int , int * )
  ;

 

int pthread_setcanceltype(int , int * )
  ;

 
int pthread_setconcurrency(int);

 
int pthread_setschedparam(pthread_t, int, const struct sched_param *);

 

int pthread_setspecific(pthread_key_t , const void * );

 

void pthread_testcancel(void) ;




 
int pthread_is_threaded_np(void);

 
int pthread_threadid_np(pthread_t ,__uint64_t* );


 
int pthread_getname_np(pthread_t,char*,size_t);

 

int pthread_setname_np(const char*);


 
int pthread_main_np(void);


 
mach_port_t pthread_mach_thread_np(pthread_t);

 
size_t pthread_get_stacksize_np(pthread_t);

 
void* pthread_get_stackaddr_np(pthread_t);


 
int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t );


 

int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
  const struct timespec * );


 

int pthread_create_suspended_np(
  pthread_t * , const pthread_attr_t * ,
  void * (* )(void * ), void * );





 
int pthread_kill(pthread_t, int);

 
 pthread_t pthread_from_mach_thread_np(mach_port_t);

 
int pthread_sigmask(int, const sigset_t * , sigset_t * )
  ;

 

void pthread_yield_np(void);


   
void pthread_jit_write_protect_np(int enabled);

 
   
int pthread_jit_write_protect_supported_np(void);
typedef int (*pthread_jit_write_callback_t)(void * ctx);
 
   

int pthread_jit_write_with_callback_np(
  pthread_jit_write_callback_t callback, void * ctx);
 
   
void pthread_jit_write_freeze_callbacks_np(void);
   
int
pthread_cpu_number_np(size_t *cpu_number_out);




struct _Py_tss_t {
    int _is_initialized;
    pthread_key_t _key;
};







extern  PyTypeObject PyContext_Type;
typedef struct _pycontextobject PyContext;

extern  PyTypeObject PyContextVar_Type;
typedef struct _pycontextvarobject PyContextVar;

extern  PyTypeObject PyContextToken_Type;
typedef struct _pycontexttokenobject PyContextToken;







 PyObject * PyContext_New(void);
 PyObject * PyContext_Copy(PyObject *);
 PyObject * PyContext_CopyCurrent(void);

 int PyContext_Enter(PyObject *);
 int PyContext_Exit(PyObject *);






 PyObject * PyContextVar_New(
    const char *name, PyObject *default_value);
 int PyContextVar_Get(
    PyObject *var, PyObject *default_value, PyObject **value);





 PyObject * PyContextVar_Set(PyObject *var, PyObject *value);





 int PyContextVar_Reset(PyObject *var, PyObject *token);



 PyObject * _PyContext_NewHamtForTests(void);
 int PyArg_Parse(PyObject *, const char *, ...);
 int PyArg_ParseTuple(PyObject *, const char *, ...);
 int PyArg_ParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, ...);
 int PyArg_VaParse(PyObject *, const char *, va_list);
 int PyArg_VaParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, va_list);

 int PyArg_ValidateKeywordArguments(PyObject *);
 int PyArg_UnpackTuple(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...);
 PyObject * Py_BuildValue(const char *, ...);
 PyObject * _Py_BuildValue_SizeT(const char *, ...);


 PyObject * Py_VaBuildValue(const char *, va_list);





 int PyModule_AddObjectRef(PyObject *mod, const char *name, PyObject *value);




 int PyModule_AddObject(PyObject *mod, const char *, PyObject *value);

 int PyModule_AddIntConstant(PyObject *, const char *, long);
 int PyModule_AddStringConstant(PyObject *, const char *, const char *);



 int PyModule_AddType(PyObject *module, PyTypeObject *type);







 int PyModule_SetDocString(PyObject *, const char *);
 int PyModule_AddFunctions(PyObject *, PyMethodDef *);
 int PyModule_ExecDef(PyObject *module, PyModuleDef *def);
 PyObject * PyModule_Create2(PyModuleDef*, int apiver);
 PyObject * PyModule_FromDefAndSpec2(PyModuleDef *def,
                                                PyObject *spec,
                                                int module_api_version);
 PyObject * _Py_VaBuildValue_SizeT(const char *, va_list);
 PyObject ** _Py_VaBuildStack_SizeT(
    PyObject **small_stack,
    Py_ssize_t small_stack_len,
    const char *format,
    va_list va,
    Py_ssize_t *p_nargs);


 int _PyArg_UnpackStack(
    PyObject *const *args,
    Py_ssize_t nargs,
    const char *name,
    Py_ssize_t min,
    Py_ssize_t max,
    ...);

 int _PyArg_NoKeywords(const char *funcname, PyObject *kwargs);
 int _PyArg_NoKwnames(const char *funcname, PyObject *kwnames);
 int _PyArg_NoPositional(const char *funcname, PyObject *args);
 void _PyArg_BadArgument(const char *, const char *, const char *, PyObject *);
 int _PyArg_CheckPositional(const char *, Py_ssize_t,
                                       Py_ssize_t, Py_ssize_t);




 PyObject ** _Py_VaBuildStack(
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
 int _PyArg_ParseTupleAndKeywordsFast(PyObject *, PyObject *,
                                                 struct _PyArg_Parser *, ...);
 int _PyArg_ParseStack(
    PyObject *const *args,
    Py_ssize_t nargs,
    const char *format,
    ...);
 int _PyArg_ParseStackAndKeywords(
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwnames,
    struct _PyArg_Parser *,
    ...);
 int _PyArg_VaParseTupleAndKeywordsFast(PyObject *, PyObject *,
                                                   struct _PyArg_Parser *, va_list);
 PyObject * const * _PyArg_UnpackKeywords(
        PyObject *const *args, Py_ssize_t nargs,
        PyObject *kwargs, PyObject *kwnames,
        struct _PyArg_Parser *parser,
        int minpos, int maxpos, int minkw,
        PyObject **buf);

 PyObject * const * _PyArg_UnpackKeywordsWithVararg(
        PyObject *const *args, Py_ssize_t nargs,
        PyObject *kwargs, PyObject *kwnames,
        struct _PyArg_Parser *parser,
        int minpos, int maxpos, int minkw,
        int vararg, PyObject **buf);







 PyObject * _PyModule_CreateInitialized(PyModuleDef*, int apiver);
 int _PyModule_Add(PyObject *, const char *, PyObject *);
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
typedef struct {
    int ff_features;
    _PyCompilerSrcLocation ff_location;
} PyFutureFeatures;
 int PyCompile_OpcodeStackEffect(int opcode, int oparg);
 int PyCompile_OpcodeStackEffectWithJump(int opcode, int oparg, int jump);
 PyObject * Py_CompileString(const char *, const char *, int);

 void PyErr_Print(void);
 void PyErr_PrintEx(int);
 void PyErr_Display(PyObject *, PyObject *, PyObject *);


 void PyErr_DisplayException(PyObject *);




extern  int (*PyOS_InputHook)(void);




 int PyRun_SimpleStringFlags(const char *, PyCompilerFlags *);
 int _PyRun_SimpleFileObject(
    FILE *fp,
    PyObject *filename,
    int closeit,
    PyCompilerFlags *flags);
 int PyRun_AnyFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
 int _PyRun_AnyFileObject(
    FILE *fp,
    PyObject *filename,
    int closeit,
    PyCompilerFlags *flags);
 int PyRun_SimpleFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
 int PyRun_InteractiveOneFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
 int PyRun_InteractiveOneObject(
    FILE *fp,
    PyObject *filename,
    PyCompilerFlags *flags);
 int PyRun_InteractiveLoopFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
 int _PyRun_InteractiveLoopObject(
    FILE *fp,
    PyObject *filename,
    PyCompilerFlags *flags);


 PyObject * PyRun_StringFlags(const char *, int, PyObject *,
                                         PyObject *, PyCompilerFlags *);

 PyObject * PyRun_FileExFlags(
    FILE *fp,
    const char *filename,
    int start,
    PyObject *globals,
    PyObject *locals,
    int closeit,
    PyCompilerFlags *flags);


 PyObject * Py_CompileStringExFlags(
    const char *str,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    int optimize);
 PyObject * Py_CompileStringObject(
    const char *str,
    PyObject *filename, int start,
    PyCompilerFlags *flags,
    int optimize);





 const char * _Py_SourceAsString(
    PyObject *cmd,
    const char *funcname,
    const char *what,
    PyCompilerFlags *cf,
    PyObject **cmd_copy);






 PyObject * PyRun_String(const char *str, int s, PyObject *g, PyObject *l);
 int PyRun_AnyFile(FILE *fp, const char *name);
 int PyRun_AnyFileEx(FILE *fp, const char *name, int closeit);
 int PyRun_AnyFileFlags(FILE *, const char *, PyCompilerFlags *);
 int PyRun_SimpleString(const char *s);
 int PyRun_SimpleFile(FILE *f, const char *p);
 int PyRun_SimpleFileEx(FILE *f, const char *p, int c);
 int PyRun_InteractiveOne(FILE *f, const char *p);
 int PyRun_InteractiveLoop(FILE *f, const char *p);
 PyObject * PyRun_File(FILE *fp, const char *p, int s, PyObject *g, PyObject *l);
 PyObject * PyRun_FileEx(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, int c);
 PyObject * PyRun_FileFlags(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, PyCompilerFlags *flags);
 char * PyOS_Readline(FILE *, FILE *, const char *);
extern  PyThreadState* _PyOS_ReadlineTState;
extern  char *(*PyOS_ReadlineFunctionPointer)(FILE *, FILE *, const char *);
 void Py_Initialize(void);
 void Py_InitializeEx(int);
 void Py_Finalize(void);

 int Py_FinalizeEx(void);

 int Py_IsInitialized(void);


 PyThreadState * Py_NewInterpreter(void);
 void Py_EndInterpreter(PyThreadState *);





 int Py_AtExit(void (*func)(void));

 void  Py_Exit(int);


 int Py_Main(int argc, wchar_t **argv);
 int Py_BytesMain(int argc, char **argv);


  void Py_SetProgramName(const wchar_t *);
 wchar_t * Py_GetProgramName(void);

  void Py_SetPythonHome(const wchar_t *);
 wchar_t * Py_GetPythonHome(void);

 wchar_t * Py_GetProgramFullPath(void);

 wchar_t * Py_GetPrefix(void);
 wchar_t * Py_GetExecPrefix(void);
 wchar_t * Py_GetPath(void);
  void Py_SetPath(const wchar_t *);





 const char * Py_GetVersion(void);
 const char * Py_GetPlatform(void);
 const char * Py_GetCopyright(void);
 const char * Py_GetCompiler(void);
 const char * Py_GetBuildInfo(void);


typedef void (*PyOS_sighandler_t)(int);
 PyOS_sighandler_t PyOS_getsig(int);
 PyOS_sighandler_t PyOS_setsig(int, PyOS_sighandler_t);


extern  const unsigned long Py_Version;










 int Py_FrozenMain(int argc, char **argv);




  int Py_SetStandardStreamEncoding(
    const char *encoding,
    const char *errors);



 PyStatus Py_PreInitialize(
    const PyPreConfig *src_config);
 PyStatus Py_PreInitializeFromBytesArgs(
    const PyPreConfig *src_config,
    Py_ssize_t argc,
    char **argv);
 PyStatus Py_PreInitializeFromArgs(
    const PyPreConfig *src_config,
    Py_ssize_t argc,
    wchar_t **argv);

 int _Py_IsCoreInitialized(void);




 PyStatus Py_InitializeFromConfig(
    const PyConfig *config);
 PyStatus _Py_InitializeMain(void);

 int Py_RunMain(void);


 void  Py_ExitStatusException(PyStatus err);


 void _Py_RestoreSignals(void);

 int Py_FdIsInteractive(FILE *, const char *);
 int _Py_FdIsInteractive(FILE *fp, PyObject *filename);

  void _Py_SetProgramFullPath(const wchar_t *);

 const char * _Py_gitidentifier(void);
 const char * _Py_gitversion(void);

 int _Py_IsFinalizing(void);
 int _Py_IsInterpreterFinalizing(PyInterpreterState *interp);


 int _PyOS_URandom(void *buffer, Py_ssize_t size);
 int _PyOS_URandomNonblock(void *buffer, Py_ssize_t size);


 int _Py_CoerceLegacyLocale(int warn);
 int _Py_LegacyLocaleDetected(int warn);
 char * _Py_SetLocaleFromEnv(int category);







typedef struct {

    int use_main_obmalloc;
    int allow_fork;
    int allow_exec;
    int allow_threads;
    int allow_daemon_threads;
    int check_multi_interp_extensions;
    int gil;
} PyInterpreterConfig;
 PyStatus Py_NewInterpreterFromConfig(
    PyThreadState **tstate_p,
    const PyInterpreterConfig *config);

typedef void (*atexit_datacallbackfunc)(void *);
 int _Py_AtExit(
        PyInterpreterState *, atexit_datacallbackfunc, void *);
 PyObject * PyEval_EvalCode(PyObject *, PyObject *, PyObject *);

 PyObject * PyEval_EvalCodeEx(PyObject *co,
                                         PyObject *globals,
                                         PyObject *locals,
                                         PyObject *const *args, int argc,
                                         PyObject *const *kwds, int kwdc,
                                         PyObject *const *defs, int defc,
                                         PyObject *kwdefs, PyObject *closure);
  PyObject * PyEval_CallObjectWithKeywords(
    PyObject *callable,
    PyObject *args,
    PyObject *kwargs);





  PyObject * PyEval_CallFunction(
    PyObject *callable, const char *format, ...);
  PyObject * PyEval_CallMethod(
    PyObject *obj, const char *name, const char *format, ...);

 PyObject * PyEval_GetBuiltins(void);
 PyObject * PyEval_GetGlobals(void);
 PyObject * PyEval_GetLocals(void);
 PyFrameObject * PyEval_GetFrame(void);

 int Py_AddPendingCall(int (*func)(void *), void *arg);
 int Py_MakePendingCalls(void);
 void Py_SetRecursionLimit(int);
 int Py_GetRecursionLimit(void);

 int Py_EnterRecursiveCall(const char *where);
 void Py_LeaveRecursiveCall(void);

 const char * PyEval_GetFuncName(PyObject *);
 const char * PyEval_GetFuncDesc(PyObject *);

 PyObject * PyEval_EvalFrame(PyFrameObject *);
 PyObject * PyEval_EvalFrameEx(PyFrameObject *f, int exc);
 PyThreadState * PyEval_SaveThread(void);
 void PyEval_RestoreThread(PyThreadState *);

  int PyEval_ThreadsInitialized(void);
  void PyEval_InitThreads(void);




  void PyEval_AcquireLock(void);
  void PyEval_ReleaseLock(void);
 void PyEval_AcquireThread(PyThreadState *tstate);
 void PyEval_ReleaseThread(PyThreadState *tstate);




 void PyEval_SetProfile(Py_tracefunc, PyObject *);
 void PyEval_SetProfileAllThreads(Py_tracefunc, PyObject *);
extern  int _PyEval_SetProfile(PyThreadState *tstate, Py_tracefunc func, PyObject *arg);
 void PyEval_SetTrace(Py_tracefunc, PyObject *);
 void PyEval_SetTraceAllThreads(Py_tracefunc, PyObject *);
 int _PyEval_SetTrace(PyThreadState *tstate, Py_tracefunc func, PyObject *arg);


 PyObject * _PyEval_GetBuiltin(PyObject *);
 PyObject * _PyEval_GetBuiltinId(_Py_Identifier *);



 int PyEval_MergeCompilerFlags(PyCompilerFlags *cf);

 PyObject * _PyEval_EvalFrameDefault(PyThreadState *tstate, struct _PyInterpreterFrame *f, int exc);

 void _PyEval_SetSwitchInterval(unsigned long microseconds);
 unsigned long _PyEval_GetSwitchInterval(void);

 int _PyEval_MakePendingCalls(PyThreadState *);

 Py_ssize_t PyUnstable_Eval_RequestCodeExtraIndex(freefunc);

 static inline Py_ssize_t
_PyEval_RequestCodeExtraIndex(freefunc f) {
    return PyUnstable_Eval_RequestCodeExtraIndex(f);
}

 int _PyEval_SliceIndex(PyObject *, Py_ssize_t *);
 int _PyEval_SliceIndexNotNone(PyObject *, Py_ssize_t *);
 PyObject * PySys_GetObject(const char *);
 int PySys_SetObject(const char *, PyObject *);

  void PySys_SetArgv(int, wchar_t **);
  void PySys_SetArgvEx(int, wchar_t **, int);
  void PySys_SetPath(const wchar_t *);

 void PySys_WriteStdout(const char *format, ...)
                 ;
 void PySys_WriteStderr(const char *format, ...)
                 ;
 void PySys_FormatStdout(const char *format, ...);
 void PySys_FormatStderr(const char *format, ...);

 void PySys_ResetWarnOptions(void);
  void PySys_AddWarnOption(const wchar_t *);
  void PySys_AddWarnOptionUnicode(PyObject *);
  int PySys_HasWarnOptions(void);

  void PySys_AddXOption(const wchar_t *);
 PyObject * PySys_GetXOptions(void);


typedef struct {
    FILE* perf_map;
    PyThread_type_lock map_lock;
} PerfMapState;

 int PyUnstable_PerfMapState_Init(void);

 int PyUnstable_WritePerfMapEntry(const void *code_addr, unsigned int code_size, const char *entry_name);

 void PyUnstable_PerfMapState_Fini(void);








 PyObject * _PySys_GetAttr(PyThreadState *tstate,
                                      PyObject *name);

 size_t _PySys_GetSizeOf(PyObject *);

typedef int(*Py_AuditHookFunction)(const char *, PyObject *, void *);

 int PySys_Audit(
    const char *event,
    const char *argFormat,
    ...);
 int PySys_AddAuditHook(Py_AuditHookFunction, void*);
 PyObject * PyOS_FSPath(PyObject *path);






 int PyOS_InterruptOccurred(void);


 void PyOS_BeforeFork(void);
 void PyOS_AfterFork_Parent(void);
 void PyOS_AfterFork_Child(void);



  void PyOS_AfterFork(void);


 int _PyOS_IsMainThread(void);
 long PyImport_GetMagicNumber(void);
 const char * PyImport_GetMagicTag(void);
 PyObject * PyImport_ExecCodeModule(
    const char *name,
    PyObject *co
    );
 PyObject * PyImport_ExecCodeModuleEx(
    const char *name,
    PyObject *co,
    const char *pathname
    );
 PyObject * PyImport_ExecCodeModuleWithPathnames(
    const char *name,
    PyObject *co,
    const char *pathname,
    const char *cpathname
    );

 PyObject * PyImport_ExecCodeModuleObject(
    PyObject *name,
    PyObject *co,
    PyObject *pathname,
    PyObject *cpathname
    );

 PyObject * PyImport_GetModuleDict(void);

 PyObject * PyImport_GetModule(PyObject *name);


 PyObject * PyImport_AddModuleObject(
    PyObject *name
    );

 PyObject * PyImport_AddModule(
    const char *name
    );
 PyObject * PyImport_ImportModule(
    const char *name
    );
 PyObject * PyImport_ImportModuleNoBlock(
    const char *name
    );
 PyObject * PyImport_ImportModuleLevel(
    const char *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );

 PyObject * PyImport_ImportModuleLevelObject(
    PyObject *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );





 PyObject * PyImport_GetImporter(PyObject *path);
 PyObject * PyImport_Import(PyObject *name);
 PyObject * PyImport_ReloadModule(PyObject *m);

 int PyImport_ImportFrozenModuleObject(
    PyObject *name
    );

 int PyImport_ImportFrozenModule(
    const char *name
    );

 int PyImport_AppendInittab(
    const char *name,
    PyObject* (*initfunc)(void)
    );







 PyObject* PyInit__imp(void);

 int _PyImport_IsInitialized(PyInterpreterState *);

 PyObject * _PyImport_GetModuleId(_Py_Identifier *name);
 int _PyImport_SetModule(PyObject *name, PyObject *module);
 int _PyImport_SetModuleString(const char *name, PyObject* module);

 void _PyImport_AcquireLock(PyInterpreterState *interp);
 int _PyImport_ReleaseLock(PyInterpreterState *interp);

 int _PyImport_FixupBuiltin(
    PyObject *mod,
    const char *name,
    PyObject *modules
    );
 int _PyImport_FixupExtensionObject(PyObject*, PyObject *,
                                               PyObject *, PyObject *);

struct _inittab {
    const char *name;
    PyObject* (*initfunc)(void);
};

extern  struct _inittab * PyImport_Inittab;
 int PyImport_ExtendInittab(struct _inittab *newtab);

struct _frozen {
    const char *name;
    const unsigned char *code;
    int size;
    int is_package;
    PyObject *(*get_code)(void);
};




extern  const struct _frozen * PyImport_FrozenModules;

extern  PyObject * _PyImport_GetModuleAttr(PyObject *, PyObject *);
extern  PyObject * _PyImport_GetModuleAttrString(const char *, const char *);
 PyObject * PyObject_CallNoArgs(PyObject *func);
 PyObject * PyObject_Call(PyObject *callable,
                                     PyObject *args, PyObject *kwargs);
 PyObject * PyObject_CallObject(PyObject *callable,
                                           PyObject *args);
 PyObject * PyObject_CallFunction(PyObject *callable,
                                             const char *format, ...);
 PyObject * PyObject_CallMethod(PyObject *obj,
                                           const char *name,
                                           const char *format, ...);

 PyObject * _PyObject_CallFunction_SizeT(PyObject *callable,
                                                    const char *format,
                                                    ...);

 PyObject * _PyObject_CallMethod_SizeT(PyObject *obj,
                                                  const char *name,
                                                  const char *format,
                                                  ...);
 PyObject * PyObject_CallFunctionObjArgs(PyObject *callable,
                                                    ...);
 PyObject * PyObject_CallMethodObjArgs(
    PyObject *obj,
    PyObject *name,
    ...);





 Py_ssize_t PyVectorcall_NARGS(size_t nargsf);



 PyObject * PyVectorcall_Call(PyObject *callable, PyObject *tuple, PyObject *dict);






 PyObject * PyObject_Vectorcall(
    PyObject *callable,
    PyObject *const *args,
    size_t nargsf,
    PyObject *kwnames);


 PyObject * PyObject_VectorcallMethod(
    PyObject *name, PyObject *const *args,
    size_t nargsf, PyObject *kwnames);
 PyObject * PyObject_Type(PyObject *o);
 Py_ssize_t PyObject_Size(PyObject *o);




 Py_ssize_t PyObject_Length(PyObject *o);






 PyObject * PyObject_GetItem(PyObject *o, PyObject *key);







 int PyObject_SetItem(PyObject *o, PyObject *key, PyObject *v);





 int PyObject_DelItemString(PyObject *o, const char *key);





 int PyObject_DelItem(PyObject *o, PyObject *key);

 int PyObject_AsCharBuffer(PyObject *obj,
                                      const char **buffer,
                                      Py_ssize_t *buffer_len);





  int PyObject_CheckReadBuffer(PyObject *obj);








 int PyObject_AsReadBuffer(PyObject *obj,
                                      const void **buffer,
                                      Py_ssize_t *buffer_len);








 int PyObject_AsWriteBuffer(PyObject *obj,
                                       void **buffer,
                                       Py_ssize_t *buffer_len);






 PyObject * PyObject_Format(PyObject *obj,
                                       PyObject *format_spec);







 PyObject * PyObject_GetIter(PyObject *);




 PyObject * PyObject_GetAIter(PyObject *);




 int PyIter_Check(PyObject *);




 int PyAIter_Check(PyObject *);
 PyObject * PyIter_Next(PyObject *);
 PySendResult PyIter_Send(PyObject *, PyObject *, PyObject **);
 int PyNumber_Check(PyObject *o);




 PyObject * PyNumber_Add(PyObject *o1, PyObject *o2);




 PyObject * PyNumber_Subtract(PyObject *o1, PyObject *o2);




 PyObject * PyNumber_Multiply(PyObject *o1, PyObject *o2);



 PyObject * PyNumber_MatrixMultiply(PyObject *o1, PyObject *o2);






 PyObject * PyNumber_FloorDivide(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_TrueDivide(PyObject *o1, PyObject *o2);




 PyObject * PyNumber_Remainder(PyObject *o1, PyObject *o2);






 PyObject * PyNumber_Divmod(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_Power(PyObject *o1, PyObject *o2,
                                      PyObject *o3);




 PyObject * PyNumber_Negative(PyObject *o);




 PyObject * PyNumber_Positive(PyObject *o);




 PyObject * PyNumber_Absolute(PyObject *o);




 PyObject * PyNumber_Invert(PyObject *o);




 PyObject * PyNumber_Lshift(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_Rshift(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_And(PyObject *o1, PyObject *o2);




 PyObject * PyNumber_Xor(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_Or(PyObject *o1, PyObject *o2);



 int PyIndex_Check(PyObject *);



 PyObject * PyNumber_Index(PyObject *o);







 Py_ssize_t PyNumber_AsSsize_t(PyObject *o, PyObject *exc);





 PyObject * PyNumber_Long(PyObject *o);





 PyObject * PyNumber_Float(PyObject *o);
 PyObject * PyNumber_InPlaceAdd(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_InPlaceSubtract(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_InPlaceMultiply(PyObject *o1, PyObject *o2);



 PyObject * PyNumber_InPlaceMatrixMultiply(PyObject *o1, PyObject *o2);






 PyObject * PyNumber_InPlaceFloorDivide(PyObject *o1,
                                                   PyObject *o2);





 PyObject * PyNumber_InPlaceTrueDivide(PyObject *o1,
                                                  PyObject *o2);





 PyObject * PyNumber_InPlaceRemainder(PyObject *o1, PyObject *o2);






 PyObject * PyNumber_InPlacePower(PyObject *o1, PyObject *o2,
                                             PyObject *o3);





 PyObject * PyNumber_InPlaceLshift(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_InPlaceRshift(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_InPlaceAnd(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_InPlaceXor(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_InPlaceOr(PyObject *o1, PyObject *o2);





 PyObject * PyNumber_ToBase(PyObject *n, int base);
 int PySequence_Check(PyObject *o);


 Py_ssize_t PySequence_Size(PyObject *o);



 Py_ssize_t PySequence_Length(PyObject *o);






 PyObject * PySequence_Concat(PyObject *o1, PyObject *o2);





 PyObject * PySequence_Repeat(PyObject *o, Py_ssize_t count);




 PyObject * PySequence_GetItem(PyObject *o, Py_ssize_t i);




 PyObject * PySequence_GetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);





 int PySequence_SetItem(PyObject *o, Py_ssize_t i, PyObject *v);




 int PySequence_DelItem(PyObject *o, Py_ssize_t i);





 int PySequence_SetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2,
                                    PyObject *v);





 int PySequence_DelSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);




 PyObject * PySequence_Tuple(PyObject *o);



 PyObject * PySequence_List(PyObject *o);
 PyObject * PySequence_Fast(PyObject *o, const char* m);
 Py_ssize_t PySequence_Count(PyObject *o, PyObject *value);





 int PySequence_Contains(PyObject *seq, PyObject *ob);







 int PySequence_In(PyObject *o, PyObject *value);
 Py_ssize_t PySequence_Index(PyObject *o, PyObject *value);
 PyObject * PySequence_InPlaceConcat(PyObject *o1, PyObject *o2);





 PyObject * PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count);







 int PyMapping_Check(PyObject *o);



 Py_ssize_t PyMapping_Size(PyObject *o);



 Py_ssize_t PyMapping_Length(PyObject *o);
 int PyMapping_HasKeyString(PyObject *o, const char *key);






 int PyMapping_HasKey(PyObject *o, PyObject *key);



 PyObject * PyMapping_Keys(PyObject *o);



 PyObject * PyMapping_Values(PyObject *o);




 PyObject * PyMapping_Items(PyObject *o);




 PyObject * PyMapping_GetItemString(PyObject *o,
                                               const char *key);





 int PyMapping_SetItemString(PyObject *o, const char *key,
                                        PyObject *value);


 int PyObject_IsInstance(PyObject *object, PyObject *typeorclass);


 int PyObject_IsSubclass(PyObject *object, PyObject *typeorclass);



 PyObject * _PyStack_AsDict(
    PyObject *const *values,
    PyObject *kwnames);
 PyObject * _Py_CheckFunctionResult(
    PyThreadState *tstate,
    PyObject *callable,
    PyObject *result,
    const char *where);






 PyObject * _PyObject_MakeTpCall(
    PyThreadState *tstate,
    PyObject *callable,
    PyObject *const *args, Py_ssize_t nargs,
    PyObject *keywords);





static inline Py_ssize_t
_PyVectorcall_NARGS(size_t n)
{
    return n & ~(((size_t)(1)) << (8 * 8 - 1));
}

 vectorcallfunc PyVectorcall_Function(PyObject *callable);
 PyObject * PyObject_VectorcallDict(
    PyObject *callable,
    PyObject *const *args,
    size_t nargsf,
    PyObject *kwargs);


 PyObject * _PyObject_FastCall(
    PyObject *func,
    PyObject *const *args,
    Py_ssize_t nargs);

 PyObject * PyObject_CallOneArg(PyObject *func, PyObject *arg);

static inline PyObject *
PyObject_CallMethodNoArgs(PyObject *self, PyObject *name)
{
    size_t nargsf = 1 | (((size_t)(1)) << (8 * 8 - 1));
    return PyObject_VectorcallMethod(name, &self, nargsf, 
                                                         ((void *)0)
                                                                 );
}

static inline PyObject *
PyObject_CallMethodOneArg(PyObject *self, PyObject *name, PyObject *arg)
{
    PyObject *args[2] = {self, arg};
    size_t nargsf = 2 | (((size_t)(1)) << (8 * 8 - 1));
    
   (__builtin_expect(!(
   arg != 
   ((void *)0)), 0) ? __assert_rtn(__func__, "abstract.h", 102, 
   "arg != NULL"
   ) : (void)0)
                      ;
    return PyObject_VectorcallMethod(name, args, nargsf, 
                                                        ((void *)0)
                                                                );
}

 PyObject * _PyObject_CallMethod(PyObject *obj,
                                            PyObject *name,
                                            const char *format, ...);



 PyObject * _PyObject_CallMethodId(PyObject *obj,
                                              _Py_Identifier *name,
                                              const char *format, ...);

 PyObject * _PyObject_CallMethodId_SizeT(PyObject *obj,
                                                    _Py_Identifier *name,
                                                    const char *format,
                                                    ...);

 PyObject * _PyObject_CallMethodIdObjArgs(
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
              ((void *)0)
                      ;
    }
    return PyObject_VectorcallMethod(oname, args, nargsf, kwnames);
}

static inline PyObject *
_PyObject_CallMethodIdNoArgs(PyObject *self, _Py_Identifier *name)
{
    size_t nargsf = 1 | (((size_t)(1)) << (8 * 8 - 1));
    return _PyObject_VectorcallMethodId(name, &self, nargsf, 
                                                            ((void *)0)
                                                                    );
}

static inline PyObject *
_PyObject_CallMethodIdOneArg(PyObject *self, _Py_Identifier *name, PyObject *arg)
{
    PyObject *args[2] = {self, arg};
    size_t nargsf = 2 | (((size_t)(1)) << (8 * 8 - 1));
    
   (__builtin_expect(!(
   arg != 
   ((void *)0)), 0) ? __assert_rtn(__func__, "abstract.h", 150, 
   "arg != NULL"
   ) : (void)0)
                      ;
    return _PyObject_VectorcallMethodId(name, args, nargsf, 
                                                           ((void *)0)
                                                                   );
}

 int _PyObject_HasLen(PyObject *o);




 Py_ssize_t PyObject_LengthHint(PyObject *o, Py_ssize_t);
 Py_ssize_t _PySequence_IterSearch(PyObject *seq,
                                              PyObject *obj, int operation);



 int _PyObject_RealIsInstance(PyObject *inst, PyObject *cls);

 int _PyObject_RealIsSubclass(PyObject *derived, PyObject *cls);

 char *const * _PySequence_BytesToCharpArray(PyObject* self);

 void _Py_FreeCharPArray(char *const array[]);


 void _Py_add_one_to_index_F(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
 void _Py_add_one_to_index_C(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);


 int _Py_convert_optional_to_ssize_t(PyObject *, void *);


 PyObject * _PyNumber_Index(PyObject *o);






extern  PyTypeObject PyFilter_Type;
extern  PyTypeObject PyMap_Type;
extern  PyTypeObject PyZip_Type;
extern  const unsigned int _Py_ctype_table[256];
extern  const unsigned char _Py_ctype_tolower[256];
extern  const unsigned char _Py_ctype_toupper[256];
 double PyOS_string_to_double(const char *str,
                                         char **endptr,
                                         PyObject *overflow_exception);



 char * PyOS_double_to_string(double val,
                                         char format_code,
                                         int precision,
                                         int flags,
                                         int *type);


 PyObject * _Py_string_to_number_with_underscores(
    const char *str, Py_ssize_t len, const char *what, PyObject *obj, void *arg,
    PyObject *(*innerfunc)(const char *, Py_ssize_t, void *));

 double _Py_parse_inf_or_nan(const char *p, char **endptr);







 int PyOS_mystrnicmp(const char *, const char *, Py_ssize_t);
 int PyOS_mystricmp(const char *, const char *);







 wchar_t * Py_DecodeLocale(
    const char *arg,
    size_t *size);

 char* Py_EncodeLocale(
    const wchar_t *text,
    size_t *error_pos);









 FILE* _Py_fopen_obj(
    PyObject *path,
    const char *mode);
 int PyTraceMalloc_Track(
    unsigned int domain,
    uintptr_t ptr,
    size_t size);





 int PyTraceMalloc_Untrack(
    unsigned int domain,
    uintptr_t ptr);
 PyObject* _PyTraceMalloc_GetTraceback(
    unsigned int domain,
    uintptr_t ptr);


 int _PyTraceMalloc_IsTracing(void);


 void _PyTraceMalloc_ClearTraces(void);


 PyObject * _PyTraceMalloc_GetTraces(void);


 PyObject * _PyTraceMalloc_GetObjectTraceback(PyObject *obj);


 PyStatus _PyTraceMalloc_Init(void);


 int _PyTraceMalloc_Start(int max_nframe);


 void _PyTraceMalloc_Stop(void);


 int _PyTraceMalloc_GetTracebackLimit(void);


 size_t _PyTraceMalloc_GetMemory(void);


 PyObject * _PyTraceMalloc_GetTracedMemory(void);


 void _PyTraceMalloc_ResetPeak(void);
