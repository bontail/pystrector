from pystrector.base_datatypes import (Short, Void, DataType, Bool,
                                       UnsignedInt, UnsignedLongLong, Int,
                                       LongLong, Float, Array, Double,
                                       UnsignedByte, Pointer, Byte, Func,
                                       UnsignedShort)


class _mbstate_t(DataType, is_union=True):
    __mbstate8 = Byte[128]
    _mbstateL = LongLong()


class _darwin_pthread_handler_rec(DataType, is_union=False):
    __routine = Pointer(datatype=Func())
    __arg = Pointer(datatype=Void())
    __next = Pointer(datatype="_darwin_pthread_handler_rec")


class _opaque_pthread_attr_t(DataType, is_union=False):
    __sig = LongLong()
    __opaque = Byte[56]


class _opaque_pthread_cond_t(DataType, is_union=False):
    __sig = LongLong()
    __opaque = Byte[40]


class _opaque_pthread_condattr_t(DataType, is_union=False):
    __sig = LongLong()
    __opaque = Byte[8]


class _opaque_pthread_mutex_t(DataType, is_union=False):
    __sig = LongLong()
    __opaque = Byte[56]


class _opaque_pthread_mutexattr_t(DataType, is_union=False):
    __sig = LongLong()
    __opaque = Byte[8]


class _opaque_pthread_once_t(DataType, is_union=False):
    __sig = LongLong()
    __opaque = Byte[8]


class _opaque_pthread_rwlock_t(DataType, is_union=False):
    __sig = LongLong()
    __opaque = Byte[192]


class _opaque_pthread_rwlockattr_t(DataType, is_union=False):
    __sig = LongLong()
    __opaque = Byte[16]


class _opaque_pthread_t(DataType, is_union=False):
    __sig = LongLong()
    __cleanup_stack = Pointer(datatype=_darwin_pthread_handler_rec())
    __opaque = Byte[8176]


class _darwin_arm_exception_state(DataType, is_union=False):
    __exception = UnsignedInt()
    __fsr = UnsignedInt()
    __far = UnsignedInt()


class _darwin_arm_exception_state64(DataType, is_union=False):
    __far = UnsignedLongLong()
    __esr = UnsignedInt()
    __exception = UnsignedInt()


class _darwin_arm_thread_state(DataType, is_union=False):
    __r = UnsignedInt[13]
    __sp = UnsignedInt()
    __lr = UnsignedInt()
    __pc = UnsignedInt()
    __cpsr = UnsignedInt()


class _darwin_arm_thread_state64(DataType, is_union=False):
    __x = UnsignedLongLong[29]
    __fp = UnsignedLongLong()
    __lr = UnsignedLongLong()
    __sp = UnsignedLongLong()
    __pc = UnsignedLongLong()
    __cpsr = UnsignedInt()
    __pad = UnsignedInt()


class _darwin_arm_vfp_state(DataType, is_union=False):
    __r = UnsignedInt[64]
    __fpscr = UnsignedInt()


class _darwin_arm_neon_state64(DataType, is_union=False):
    __v = LongLong[32]
    __fpsr = UnsignedInt()
    __fpcr = UnsignedInt()


class _darwin_arm_neon_state(DataType, is_union=False):
    __v = LongLong[16]
    __fpsr = UnsignedInt()
    __fpcr = UnsignedInt()


class _arm_pagein_state(DataType, is_union=False):
    __pagein_error = Int()


class _arm_legacy_debug_state(DataType, is_union=False):
    __bvr = UnsignedInt[16]
    __bcr = UnsignedInt[16]
    __wvr = UnsignedInt[16]
    __wcr = UnsignedInt[16]


class _darwin_arm_debug_state32(DataType, is_union=False):
    __bvr = UnsignedInt[16]
    __bcr = UnsignedInt[16]
    __wvr = UnsignedInt[16]
    __wcr = UnsignedInt[16]
    __mdscr_el1 = UnsignedLongLong()


class _darwin_arm_debug_state64(DataType, is_union=False):
    __bvr = UnsignedLongLong[16]
    __bcr = UnsignedLongLong[16]
    __wvr = UnsignedLongLong[16]
    __wcr = UnsignedLongLong[16]
    __mdscr_el1 = UnsignedLongLong()


class _darwin_arm_cpmu_state64(DataType, is_union=False):
    __ctrs = UnsignedLongLong[16]


class _darwin_mcontext32(DataType, is_union=False):
    __es = _darwin_arm_exception_state()
    __ss = _darwin_arm_thread_state()
    __fs = _darwin_arm_vfp_state()


class _darwin_mcontext64(DataType, is_union=False):
    __es = _darwin_arm_exception_state64()
    __ss = _darwin_arm_thread_state64()
    __ns = _darwin_arm_neon_state64()


class _darwin_sigaltstack(DataType, is_union=False):
    ss_sp = Pointer(datatype=Void())
    ss_size = LongLong()
    ss_flags = Int()


class _darwin_ucontext(DataType, is_union=False):
    uc_onstack = Int()
    uc_sigmask = UnsignedInt()
    uc_stack = _darwin_sigaltstack()
    uc_link = Pointer(datatype="_darwin_ucontext")
    uc_mcsize = LongLong()
    uc_mcontext = Pointer(datatype=_darwin_mcontext64())


class sigval(DataType, is_union=True):
    sival_int = Int()
    sival_ptr = Pointer(datatype=Void())


class sigevent(DataType, is_union=False):
    sigev_notify = Int()
    sigev_signo = Int()
    sigev_value = sigval()
    sigev_notify_function = Pointer(datatype=Func())
    sigev_notify_attributes = Pointer(datatype=_opaque_pthread_attr_t())


class _siginfo(DataType, is_union=False):
    si_signo = Int()
    si_errno = Int()
    si_code = Int()
    si_pid = Int()
    si_uid = UnsignedInt()
    si_status = Int()
    si_addr = Pointer(datatype=Void())
    si_value = sigval()
    si_band = LongLong()
    __pad = UnsignedLongLong[7]


class _sigaction_u(DataType, is_union=True):
    __sa_handler = Pointer(datatype=Func())
    __sa_sigaction = Pointer(datatype=Func())


class _sigaction(DataType, is_union=False):
    __sigaction_u = _sigaction_u()
    sa_tramp = Pointer(datatype=Func())
    sa_mask = UnsignedInt()
    sa_flags = Int()


class sigaction(DataType, is_union=False):
    __sigaction_u = _sigaction_u()
    sa_mask = UnsignedInt()
    sa_flags = Int()


class sigvec(DataType, is_union=False):
    sv_handler = Pointer(datatype=Func())
    sv_mask = Int()
    sv_flags = Int()


class sigstack(DataType, is_union=False):
    ss_sp = Pointer(datatype=Byte())
    ss_onstack = Int()


class timeval(DataType, is_union=False):
    tv_sec = LongLong()
    tv_usec = Int()


class rusage(DataType, is_union=False):
    ru_utime = timeval()
    ru_stime = timeval()
    ru_maxrss = LongLong()
    ru_ixrss = LongLong()
    ru_idrss = LongLong()
    ru_isrss = LongLong()
    ru_minflt = LongLong()
    ru_majflt = LongLong()
    ru_nswap = LongLong()
    ru_inblock = LongLong()
    ru_oublock = LongLong()
    ru_msgsnd = LongLong()
    ru_msgrcv = LongLong()
    ru_nsignals = LongLong()
    ru_nvcsw = LongLong()
    ru_nivcsw = LongLong()


class rusage_info_v0(DataType, is_union=False):
    ri_uuid = UnsignedByte[16]
    ri_user_time = UnsignedLongLong()
    ri_system_time = UnsignedLongLong()
    ri_pkg_idle_wkups = UnsignedLongLong()
    ri_interrupt_wkups = UnsignedLongLong()
    ri_pageins = UnsignedLongLong()
    ri_wired_size = UnsignedLongLong()
    ri_resident_size = UnsignedLongLong()
    ri_phys_footprint = UnsignedLongLong()
    ri_proc_start_abstime = UnsignedLongLong()
    ri_proc_exit_abstime = UnsignedLongLong()


class rusage_info_v1(DataType, is_union=False):
    ri_uuid = UnsignedByte[16]
    ri_user_time = UnsignedLongLong()
    ri_system_time = UnsignedLongLong()
    ri_pkg_idle_wkups = UnsignedLongLong()
    ri_interrupt_wkups = UnsignedLongLong()
    ri_pageins = UnsignedLongLong()
    ri_wired_size = UnsignedLongLong()
    ri_resident_size = UnsignedLongLong()
    ri_phys_footprint = UnsignedLongLong()
    ri_proc_start_abstime = UnsignedLongLong()
    ri_proc_exit_abstime = UnsignedLongLong()
    ri_child_user_time = UnsignedLongLong()
    ri_child_system_time = UnsignedLongLong()
    ri_child_pkg_idle_wkups = UnsignedLongLong()
    ri_child_interrupt_wkups = UnsignedLongLong()
    ri_child_pageins = UnsignedLongLong()
    ri_child_elapsed_abstime = UnsignedLongLong()


class rusage_info_v2(DataType, is_union=False):
    ri_uuid = UnsignedByte[16]
    ri_user_time = UnsignedLongLong()
    ri_system_time = UnsignedLongLong()
    ri_pkg_idle_wkups = UnsignedLongLong()
    ri_interrupt_wkups = UnsignedLongLong()
    ri_pageins = UnsignedLongLong()
    ri_wired_size = UnsignedLongLong()
    ri_resident_size = UnsignedLongLong()
    ri_phys_footprint = UnsignedLongLong()
    ri_proc_start_abstime = UnsignedLongLong()
    ri_proc_exit_abstime = UnsignedLongLong()
    ri_child_user_time = UnsignedLongLong()
    ri_child_system_time = UnsignedLongLong()
    ri_child_pkg_idle_wkups = UnsignedLongLong()
    ri_child_interrupt_wkups = UnsignedLongLong()
    ri_child_pageins = UnsignedLongLong()
    ri_child_elapsed_abstime = UnsignedLongLong()
    ri_diskio_bytesread = UnsignedLongLong()
    ri_diskio_byteswritten = UnsignedLongLong()


class rusage_info_v3(DataType, is_union=False):
    ri_uuid = UnsignedByte[16]
    ri_user_time = UnsignedLongLong()
    ri_system_time = UnsignedLongLong()
    ri_pkg_idle_wkups = UnsignedLongLong()
    ri_interrupt_wkups = UnsignedLongLong()
    ri_pageins = UnsignedLongLong()
    ri_wired_size = UnsignedLongLong()
    ri_resident_size = UnsignedLongLong()
    ri_phys_footprint = UnsignedLongLong()
    ri_proc_start_abstime = UnsignedLongLong()
    ri_proc_exit_abstime = UnsignedLongLong()
    ri_child_user_time = UnsignedLongLong()
    ri_child_system_time = UnsignedLongLong()
    ri_child_pkg_idle_wkups = UnsignedLongLong()
    ri_child_interrupt_wkups = UnsignedLongLong()
    ri_child_pageins = UnsignedLongLong()
    ri_child_elapsed_abstime = UnsignedLongLong()
    ri_diskio_bytesread = UnsignedLongLong()
    ri_diskio_byteswritten = UnsignedLongLong()
    ri_cpu_time_qos_default = UnsignedLongLong()
    ri_cpu_time_qos_maintenance = UnsignedLongLong()
    ri_cpu_time_qos_background = UnsignedLongLong()
    ri_cpu_time_qos_utility = UnsignedLongLong()
    ri_cpu_time_qos_legacy = UnsignedLongLong()
    ri_cpu_time_qos_user_initiated = UnsignedLongLong()
    ri_cpu_time_qos_user_interactive = UnsignedLongLong()
    ri_billed_system_time = UnsignedLongLong()
    ri_serviced_system_time = UnsignedLongLong()


class rusage_info_v4(DataType, is_union=False):
    ri_uuid = UnsignedByte[16]
    ri_user_time = UnsignedLongLong()
    ri_system_time = UnsignedLongLong()
    ri_pkg_idle_wkups = UnsignedLongLong()
    ri_interrupt_wkups = UnsignedLongLong()
    ri_pageins = UnsignedLongLong()
    ri_wired_size = UnsignedLongLong()
    ri_resident_size = UnsignedLongLong()
    ri_phys_footprint = UnsignedLongLong()
    ri_proc_start_abstime = UnsignedLongLong()
    ri_proc_exit_abstime = UnsignedLongLong()
    ri_child_user_time = UnsignedLongLong()
    ri_child_system_time = UnsignedLongLong()
    ri_child_pkg_idle_wkups = UnsignedLongLong()
    ri_child_interrupt_wkups = UnsignedLongLong()
    ri_child_pageins = UnsignedLongLong()
    ri_child_elapsed_abstime = UnsignedLongLong()
    ri_diskio_bytesread = UnsignedLongLong()
    ri_diskio_byteswritten = UnsignedLongLong()
    ri_cpu_time_qos_default = UnsignedLongLong()
    ri_cpu_time_qos_maintenance = UnsignedLongLong()
    ri_cpu_time_qos_background = UnsignedLongLong()
    ri_cpu_time_qos_utility = UnsignedLongLong()
    ri_cpu_time_qos_legacy = UnsignedLongLong()
    ri_cpu_time_qos_user_initiated = UnsignedLongLong()
    ri_cpu_time_qos_user_interactive = UnsignedLongLong()
    ri_billed_system_time = UnsignedLongLong()
    ri_serviced_system_time = UnsignedLongLong()
    ri_logical_writes = UnsignedLongLong()
    ri_lifetime_max_phys_footprint = UnsignedLongLong()
    ri_instructions = UnsignedLongLong()
    ri_cycles = UnsignedLongLong()
    ri_billed_energy = UnsignedLongLong()
    ri_serviced_energy = UnsignedLongLong()
    ri_interval_max_phys_footprint = UnsignedLongLong()
    ri_runnable_time = UnsignedLongLong()


class rusage_info_v5(DataType, is_union=False):
    ri_uuid = UnsignedByte[16]
    ri_user_time = UnsignedLongLong()
    ri_system_time = UnsignedLongLong()
    ri_pkg_idle_wkups = UnsignedLongLong()
    ri_interrupt_wkups = UnsignedLongLong()
    ri_pageins = UnsignedLongLong()
    ri_wired_size = UnsignedLongLong()
    ri_resident_size = UnsignedLongLong()
    ri_phys_footprint = UnsignedLongLong()
    ri_proc_start_abstime = UnsignedLongLong()
    ri_proc_exit_abstime = UnsignedLongLong()
    ri_child_user_time = UnsignedLongLong()
    ri_child_system_time = UnsignedLongLong()
    ri_child_pkg_idle_wkups = UnsignedLongLong()
    ri_child_interrupt_wkups = UnsignedLongLong()
    ri_child_pageins = UnsignedLongLong()
    ri_child_elapsed_abstime = UnsignedLongLong()
    ri_diskio_bytesread = UnsignedLongLong()
    ri_diskio_byteswritten = UnsignedLongLong()
    ri_cpu_time_qos_default = UnsignedLongLong()
    ri_cpu_time_qos_maintenance = UnsignedLongLong()
    ri_cpu_time_qos_background = UnsignedLongLong()
    ri_cpu_time_qos_utility = UnsignedLongLong()
    ri_cpu_time_qos_legacy = UnsignedLongLong()
    ri_cpu_time_qos_user_initiated = UnsignedLongLong()
    ri_cpu_time_qos_user_interactive = UnsignedLongLong()
    ri_billed_system_time = UnsignedLongLong()
    ri_serviced_system_time = UnsignedLongLong()
    ri_logical_writes = UnsignedLongLong()
    ri_lifetime_max_phys_footprint = UnsignedLongLong()
    ri_instructions = UnsignedLongLong()
    ri_cycles = UnsignedLongLong()
    ri_billed_energy = UnsignedLongLong()
    ri_serviced_energy = UnsignedLongLong()
    ri_interval_max_phys_footprint = UnsignedLongLong()
    ri_runnable_time = UnsignedLongLong()
    ri_flags = UnsignedLongLong()


class rusage_info_v6(DataType, is_union=False):
    ri_uuid = UnsignedByte[16]
    ri_user_time = UnsignedLongLong()
    ri_system_time = UnsignedLongLong()
    ri_pkg_idle_wkups = UnsignedLongLong()
    ri_interrupt_wkups = UnsignedLongLong()
    ri_pageins = UnsignedLongLong()
    ri_wired_size = UnsignedLongLong()
    ri_resident_size = UnsignedLongLong()
    ri_phys_footprint = UnsignedLongLong()
    ri_proc_start_abstime = UnsignedLongLong()
    ri_proc_exit_abstime = UnsignedLongLong()
    ri_child_user_time = UnsignedLongLong()
    ri_child_system_time = UnsignedLongLong()
    ri_child_pkg_idle_wkups = UnsignedLongLong()
    ri_child_interrupt_wkups = UnsignedLongLong()
    ri_child_pageins = UnsignedLongLong()
    ri_child_elapsed_abstime = UnsignedLongLong()
    ri_diskio_bytesread = UnsignedLongLong()
    ri_diskio_byteswritten = UnsignedLongLong()
    ri_cpu_time_qos_default = UnsignedLongLong()
    ri_cpu_time_qos_maintenance = UnsignedLongLong()
    ri_cpu_time_qos_background = UnsignedLongLong()
    ri_cpu_time_qos_utility = UnsignedLongLong()
    ri_cpu_time_qos_legacy = UnsignedLongLong()
    ri_cpu_time_qos_user_initiated = UnsignedLongLong()
    ri_cpu_time_qos_user_interactive = UnsignedLongLong()
    ri_billed_system_time = UnsignedLongLong()
    ri_serviced_system_time = UnsignedLongLong()
    ri_logical_writes = UnsignedLongLong()
    ri_lifetime_max_phys_footprint = UnsignedLongLong()
    ri_instructions = UnsignedLongLong()
    ri_cycles = UnsignedLongLong()
    ri_billed_energy = UnsignedLongLong()
    ri_serviced_energy = UnsignedLongLong()
    ri_interval_max_phys_footprint = UnsignedLongLong()
    ri_runnable_time = UnsignedLongLong()
    ri_flags = UnsignedLongLong()
    ri_user_ptime = UnsignedLongLong()
    ri_system_ptime = UnsignedLongLong()
    ri_pinstructions = UnsignedLongLong()
    ri_pcycles = UnsignedLongLong()
    ri_energy_nj = UnsignedLongLong()
    ri_penergy_nj = UnsignedLongLong()
    ri_secure_time_in_system = UnsignedLongLong()
    ri_secure_ptime_in_system = UnsignedLongLong()
    ri_reserved = UnsignedLongLong[12]


class rlimit(DataType, is_union=False):
    rlim_cur = UnsignedLongLong()
    rlim_max = UnsignedLongLong()


class proc_rlimit_control_wakeupmon(DataType, is_union=False):
    wm_flags = UnsignedInt()
    wm_rate = Int()


class _OSUnalignedU16(DataType, is_union=False):
    __val = UnsignedShort()


class _OSUnalignedU32(DataType, is_union=False):
    __val = UnsignedInt()


class _OSUnalignedU64(DataType, is_union=False):
    __val = UnsignedLongLong()


class w_T(DataType, is_union=False):
    w_Termsig = UnsignedInt()
    w_Coredump = UnsignedInt()
    w_Retcode = UnsignedInt()
    w_Filler = UnsignedInt()


class w_S(DataType, is_union=False):
    w_Stopval = UnsignedInt()
    w_Stopsig = UnsignedInt()
    w_Filler = UnsignedInt()


class wait(DataType, is_union=True):
    w_status = Int()
    w_T = w_T()
    w_S = w_S()


class div_t(DataType, is_union=False):
    quot = Int()
    rem = Int()


class ldiv_t(DataType, is_union=False):
    quot = LongLong()
    rem = LongLong()


class lldiv_t(DataType, is_union=False):
    quot = LongLong()
    rem = LongLong()


class _sbuf(DataType, is_union=False):
    _base = Pointer(datatype=UnsignedByte())
    _size = Int()


class _sFILE(DataType, is_union=False):
    _p = Pointer(datatype=UnsignedByte())
    _r = Int()
    _w = Int()
    _flags = Short()
    _file = Short()
    _bf = _sbuf()
    _lbfsize = Int()
    _cookie = Pointer(datatype=Void())
    _close = Pointer(datatype=Func())
    _read = Pointer(datatype=Func())
    _seek = Pointer(datatype=Func())
    _write = Pointer(datatype=Func())
    _ub = _sbuf()
    _extra = Pointer(datatype="_sFILEX")
    _ur = Int()
    _ubuf = UnsignedByte[3]
    _nbuf = UnsignedByte[1]
    _lb = _sbuf()
    _blksize = Int()
    _offset = LongLong()


class accessx_descriptor(DataType, is_union=False):
    ad_name_offset = UnsignedInt()
    ad_flags = Int()
    ad_pad = Int[2]


class fd_set(DataType, is_union=False):
    fds_bits = Int[32]


class timespec(DataType, is_union=False):
    tv_sec = LongLong()
    tv_nsec = LongLong()


class tm(DataType, is_union=False):
    tm_sec = Int()
    tm_min = Int()
    tm_hour = Int()
    tm_mday = Int()
    tm_mon = Int()
    tm_year = Int()
    tm_wday = Int()
    tm_yday = Int()
    tm_isdst = Int()
    tm_gmtoff = LongLong()
    tm_zone = Pointer(datatype=Byte())


class _RuneEntry(DataType, is_union=False):
    __min = Int()
    __max = Int()
    __map = Int()
    __types = Pointer(datatype=UnsignedInt())


class _RuneRange(DataType, is_union=False):
    __nranges = Int()
    __ranges = Pointer(datatype=_RuneEntry())


class _RuneCharClass(DataType, is_union=False):
    __name = Byte[14]
    __mask = UnsignedInt()


class _RuneLocale(DataType, is_union=False):
    __magic = Byte[8]
    __encoding = Byte[32]
    __sgetrune = Pointer(datatype=Func())
    __sputrune = Pointer(datatype=Func())
    __invalid_rune = Int()
    __runetype = UnsignedInt[256]
    __maplower = Int[256]
    __mapupper = Int[256]
    __runetype_ext = _RuneRange()
    __maplower_ext = _RuneRange()
    __mapupper_ext = _RuneRange()
    __variable = Pointer(datatype=Void())
    __variable_len = Int()
    __ncharclasses = Int()
    __charclasses = Pointer(datatype=_RuneCharClass())


class imaxdiv_t(DataType, is_union=False):
    quot = LongLong()
    rem = LongLong()


class _float2(DataType, is_union=False):
    __sinval = Float()
    __cosval = Float()


class _double2(DataType, is_union=False):
    __sinval = Double()
    __cosval = Double()


class exception(DataType, is_union=False):
    type = Int()
    name = Pointer(datatype=Byte())
    arg1 = Double()
    arg2 = Double()
    retval = Double()


class timeval64(DataType, is_union=False):
    tv_sec = LongLong()
    tv_usec = LongLong()


class itimerval(DataType, is_union=False):
    it_interval = timeval()
    it_value = timeval()


class timezone(DataType, is_union=False):
    tz_minuteswest = Int()
    tz_dsttime = Int()


class clockinfo(DataType, is_union=False):
    hz = Int()
    tick = Int()
    tickadj = Int()
    stathz = Int()
    profhz = Int()


class ostat(DataType, is_union=False):
    st_dev = UnsignedShort()
    st_ino = UnsignedLongLong()
    st_mode = UnsignedShort()
    st_nlink = UnsignedShort()
    st_uid = UnsignedShort()
    st_gid = UnsignedShort()
    st_rdev = UnsignedShort()
    st_size = Int()
    st_atimespec = timespec()
    st_mtimespec = timespec()
    st_ctimespec = timespec()
    st_blksize = Int()
    st_blocks = Int()
    st_flags = UnsignedInt()
    st_gen = UnsignedInt()


class stat(DataType, is_union=False):
    st_dev = Int()
    st_mode = UnsignedShort()
    st_nlink = UnsignedShort()
    st_ino = UnsignedLongLong()
    st_uid = UnsignedInt()
    st_gid = UnsignedInt()
    st_rdev = Int()
    st_atimespec = timespec()
    st_mtimespec = timespec()
    st_ctimespec = timespec()
    st_birthtimespec = timespec()
    st_size = LongLong()
    st_blocks = LongLong()
    st_blksize = Int()
    st_flags = UnsignedInt()
    st_gen = UnsignedInt()
    st_lspare = Int()
    st_qspare = LongLong[2]


class PyMemAllocatorEx(DataType, is_union=False):
    ctx = Pointer(datatype=Void())
    malloc = Pointer(datatype=Func())
    calloc = Pointer(datatype=Func())
    realloc = Pointer(datatype=Func())
    free = Pointer(datatype=Func())


class Py_buffer(DataType, is_union=False):
    buf = Pointer(datatype=Void())
    obj = Pointer(datatype="_object")
    len = LongLong()
    itemsize = LongLong()
    readonly = Int()
    ndim = Int()
    format = Pointer(datatype=Byte())
    shape = Pointer(datatype=LongLong())
    strides = Pointer(datatype=LongLong())
    suboffsets = Pointer(datatype=LongLong())
    internal = Pointer(datatype=Void())


class anonymous_1(DataType, is_union=True):
    ob_refcnt = LongLong()
    ob_refcnt_split = UnsignedInt[2]


class _object(DataType, is_union=False):
    anonymous_var_1 = anonymous_1()
    ob_type = Pointer(datatype="_typeobject")


class PyVarObject(DataType, is_union=False):
    ob_base = _object()
    ob_size = LongLong()


class PyType_Slot(DataType, is_union=False):
    slot = Int()
    pfunc = Pointer(datatype=Void())


class PyType_Spec(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    basicsize = Int()
    itemsize = Int()
    flags = UnsignedInt()
    slots = Pointer(datatype=PyType_Slot())


class _Py_Identifier(DataType, is_union=False):
    string = Pointer(datatype=Byte())
    index = LongLong()


class PyNumberMethods(DataType, is_union=False):
    nb_add = Pointer(datatype=Func())
    nb_subtract = Pointer(datatype=Func())
    nb_multiply = Pointer(datatype=Func())
    nb_remainder = Pointer(datatype=Func())
    nb_divmod = Pointer(datatype=Func())
    nb_power = Pointer(datatype=Func())
    nb_negative = Pointer(datatype=Func())
    nb_positive = Pointer(datatype=Func())
    nb_absolute = Pointer(datatype=Func())
    nb_bool = Pointer(datatype=Func())
    nb_invert = Pointer(datatype=Func())
    nb_lshift = Pointer(datatype=Func())
    nb_rshift = Pointer(datatype=Func())
    nb_and = Pointer(datatype=Func())
    nb_xor = Pointer(datatype=Func())
    nb_or = Pointer(datatype=Func())
    nb_int = Pointer(datatype=Func())
    nb_reserved = Pointer(datatype=Void())
    nb_float = Pointer(datatype=Func())
    nb_inplace_add = Pointer(datatype=Func())
    nb_inplace_subtract = Pointer(datatype=Func())
    nb_inplace_multiply = Pointer(datatype=Func())
    nb_inplace_remainder = Pointer(datatype=Func())
    nb_inplace_power = Pointer(datatype=Func())
    nb_inplace_lshift = Pointer(datatype=Func())
    nb_inplace_rshift = Pointer(datatype=Func())
    nb_inplace_and = Pointer(datatype=Func())
    nb_inplace_xor = Pointer(datatype=Func())
    nb_inplace_or = Pointer(datatype=Func())
    nb_floor_divide = Pointer(datatype=Func())
    nb_true_divide = Pointer(datatype=Func())
    nb_inplace_floor_divide = Pointer(datatype=Func())
    nb_inplace_true_divide = Pointer(datatype=Func())
    nb_index = Pointer(datatype=Func())
    nb_matrix_multiply = Pointer(datatype=Func())
    nb_inplace_matrix_multiply = Pointer(datatype=Func())


class PySequenceMethods(DataType, is_union=False):
    sq_length = Pointer(datatype=Func())
    sq_concat = Pointer(datatype=Func())
    sq_repeat = Pointer(datatype=Func())
    sq_item = Pointer(datatype=Func())
    was_sq_slice = Pointer(datatype=Void())
    sq_ass_item = Pointer(datatype=Func())
    was_sq_ass_slice = Pointer(datatype=Void())
    sq_contains = Pointer(datatype=Func())
    sq_inplace_concat = Pointer(datatype=Func())
    sq_inplace_repeat = Pointer(datatype=Func())


class PyMappingMethods(DataType, is_union=False):
    mp_length = Pointer(datatype=Func())
    mp_subscript = Pointer(datatype=Func())
    mp_ass_subscript = Pointer(datatype=Func())


class PyAsyncMethods(DataType, is_union=False):
    am_await = Pointer(datatype=Func())
    am_aiter = Pointer(datatype=Func())
    am_anext = Pointer(datatype=Func())
    am_send = Pointer(datatype=Func())


class PyBufferProcs(DataType, is_union=False):
    bf_getbuffer = Pointer(datatype=Func())
    bf_releasebuffer = Pointer(datatype=Func())


class _typeobject(DataType, is_union=False):
    ob_base = PyVarObject()
    tp_name = Pointer(datatype=Byte())
    tp_basicsize = LongLong()
    tp_itemsize = LongLong()
    tp_dealloc = Pointer(datatype=Func())
    tp_vectorcall_offset = LongLong()
    tp_getattr = Pointer(datatype=Func())
    tp_setattr = Pointer(datatype=Func())
    tp_as_async = Pointer(datatype=PyAsyncMethods())
    tp_repr = Pointer(datatype=Func())
    tp_as_number = Pointer(datatype=PyNumberMethods())
    tp_as_sequence = Pointer(datatype=PySequenceMethods())
    tp_as_mapping = Pointer(datatype=PyMappingMethods())
    tp_hash = Pointer(datatype=Func())
    tp_call = Pointer(datatype=Func())
    tp_str = Pointer(datatype=Func())
    tp_getattro = Pointer(datatype=Func())
    tp_setattro = Pointer(datatype=Func())
    tp_as_buffer = Pointer(datatype=PyBufferProcs())
    tp_flags = UnsignedLongLong()
    tp_doc = Pointer(datatype=Byte())
    tp_traverse = Pointer(datatype=Func())
    tp_clear = Pointer(datatype=Func())
    tp_richcompare = Pointer(datatype=Func())
    tp_weaklistoffset = LongLong()
    tp_iter = Pointer(datatype=Func())
    tp_iternext = Pointer(datatype=Func())
    tp_methods = Pointer(datatype="PyMethodDef")
    tp_members = Pointer(datatype="PyMemberDef")
    tp_getset = Pointer(datatype="PyGetSetDef")
    tp_base = Pointer(datatype="_typeobject")
    tp_dict = Pointer(datatype=_object())
    tp_descr_get = Pointer(datatype=Func())
    tp_descr_set = Pointer(datatype=Func())
    tp_dictoffset = LongLong()
    tp_init = Pointer(datatype=Func())
    tp_alloc = Pointer(datatype=Func())
    tp_new = Pointer(datatype=Func())
    tp_free = Pointer(datatype=Func())
    tp_is_gc = Pointer(datatype=Func())
    tp_bases = Pointer(datatype=_object())
    tp_mro = Pointer(datatype=_object())
    tp_cache = Pointer(datatype=_object())
    tp_subclasses = Pointer(datatype=Void())
    tp_weaklist = Pointer(datatype=_object())
    tp_del = Pointer(datatype=Func())
    tp_version_tag = UnsignedInt()
    tp_finalize = Pointer(datatype=Func())
    tp_vectorcall = Pointer(datatype=Func())
    tp_watched = UnsignedByte()


class _specialization_cache(DataType, is_union=False):
    getitem = Pointer(datatype=_object())
    getitem_version = UnsignedInt()


class _heaptypeobject(DataType, is_union=False):
    ht_type = _typeobject()
    as_async = PyAsyncMethods()
    as_number = PyNumberMethods()
    as_mapping = PyMappingMethods()
    as_sequence = PySequenceMethods()
    as_buffer = PyBufferProcs()
    ht_name = Pointer(datatype=_object())
    ht_slots = Pointer(datatype=_object())
    ht_qualname = Pointer(datatype=_object())
    ht_cached_keys = Pointer(datatype="_dictkeysobject")
    ht_module = Pointer(datatype=_object())
    _ht_tpname = Pointer(datatype=Byte())
    _spec_cache = _specialization_cache()


class PyObjectArenaAllocator(DataType, is_union=False):
    ctx = Pointer(datatype=Void())
    alloc = Pointer(datatype=Func())
    free = Pointer(datatype=Func())


class fnv(DataType, is_union=False):
    prefix = LongLong()
    suffix = LongLong()


class siphash(DataType, is_union=False):
    k0 = UnsignedLongLong()
    k1 = UnsignedLongLong()


class djbx33a(DataType, is_union=False):
    padding = UnsignedByte[16]
    suffix = LongLong()


class expat(DataType, is_union=False):
    padding = UnsignedByte[16]
    hashsalt = LongLong()


class _Py_HashSecret_t(DataType, is_union=True):
    uc = UnsignedByte[24]
    fnv = fnv()
    siphash = siphash()
    djbx33a = djbx33a()
    expat = expat()


class PyHash_FuncDef(DataType, is_union=False):
    hash = Pointer(datatype=Func())
    name = Pointer(datatype=Byte())
    hash_bits = Int()
    seed_bits = Int()


class PyByteArrayObject(DataType, is_union=False):
    ob_base = PyVarObject()
    ob_alloc = LongLong()
    ob_bytes = Pointer(datatype=Byte())
    ob_start = Pointer(datatype=Byte())
    ob_exports = LongLong()


class PyBytesObject(DataType, is_union=False):
    ob_base = PyVarObject()
    ob_shash = LongLong()
    ob_sval = Byte[1]


class _PyBytesWriter(DataType, is_union=False):
    buffer = Pointer(datatype=_object())
    allocated = LongLong()
    min_size = LongLong()
    use_bytearray = Int()
    overallocate = Int()
    use_small_buffer = Int()
    small_buffer = Byte[512]


class state(DataType, is_union=False):
    interned = UnsignedInt()
    kind = UnsignedInt()
    compact = UnsignedInt()
    ascii = UnsignedInt()
    statically_allocated = UnsignedInt()
    anonymous_var_2 = UnsignedInt()


class PyASCIIObject(DataType, is_union=False):
    ob_base = _object()
    length = LongLong()
    hash = LongLong()
    state = state()


class PyCompactUnicodeObject(DataType, is_union=False):
    _base = PyASCIIObject()
    utf8_length = LongLong()
    utf8 = Pointer(datatype=Byte())


class data(DataType, is_union=True):
    any = Pointer(datatype=Void())
    latin1 = Pointer(datatype=UnsignedByte())
    ucs2 = Pointer(datatype=UnsignedShort())
    ucs4 = Pointer(datatype=UnsignedInt())


class PyUnicodeObject(DataType, is_union=False):
    _base = PyCompactUnicodeObject()
    data = data()


class _PyUnicodeWriter(DataType, is_union=False):
    buffer = Pointer(datatype=_object())
    data = Pointer(datatype=Void())
    kind = Int()
    maxchar = UnsignedInt()
    size = LongLong()
    pos = LongLong()
    min_length = LongLong()
    min_char = UnsignedInt()
    overallocate = UnsignedByte()
    readonly = UnsignedByte()


class PyStatus(DataType, is_union=False):
    _type = Int()
    func = Pointer(datatype=Byte())
    err_msg = Pointer(datatype=Byte())
    exitcode = Int()


class PyWideStringList(DataType, is_union=False):
    length = LongLong()
    items = Pointer(datatype=Pointer(datatype=Int()))


class PyPreConfig(DataType, is_union=False):
    _config_init = Int()
    parse_argv = Int()
    isolated = Int()
    use_environment = Int()
    configure_locale = Int()
    coerce_c_locale = Int()
    coerce_c_locale_warn = Int()
    utf8_mode = Int()
    dev_mode = Int()
    allocator = Int()


class PyConfig(DataType, is_union=False):
    _config_init = Int()
    isolated = Int()
    use_environment = Int()
    dev_mode = Int()
    install_signal_handlers = Int()
    use_hash_seed = Int()
    hash_seed = UnsignedLongLong()
    faulthandler = Int()
    tracemalloc = Int()
    perf_profiling = Int()
    import_time = Int()
    code_debug_ranges = Int()
    show_ref_count = Int()
    dump_refs = Int()
    dump_refs_file = Pointer(datatype=Int())
    malloc_stats = Int()
    filesystem_encoding = Pointer(datatype=Int())
    filesystem_errors = Pointer(datatype=Int())
    pycache_prefix = Pointer(datatype=Int())
    parse_argv = Int()
    orig_argv = PyWideStringList()
    argv = PyWideStringList()
    xoptions = PyWideStringList()
    warnoptions = PyWideStringList()
    site_import = Int()
    bytes_warning = Int()
    warn_default_encoding = Int()
    inspect = Int()
    interactive = Int()
    optimization_level = Int()
    parser_debug = Int()
    write_bytecode = Int()
    verbose = Int()
    quiet = Int()
    user_site_directory = Int()
    configure_c_stdio = Int()
    buffered_stdio = Int()
    stdio_encoding = Pointer(datatype=Int())
    stdio_errors = Pointer(datatype=Int())
    check_hash_pycs_mode = Pointer(datatype=Int())
    use_frozen_modules = Int()
    safe_path = Int()
    int_max_str_digits = Int()
    pathconfig_warnings = Int()
    program_name = Pointer(datatype=Int())
    pythonpath_env = Pointer(datatype=Int())
    home = Pointer(datatype=Int())
    platlibdir = Pointer(datatype=Int())
    module_search_paths_set = Int()
    module_search_paths = PyWideStringList()
    stdlib_dir = Pointer(datatype=Int())
    executable = Pointer(datatype=Int())
    base_executable = Pointer(datatype=Int())
    prefix = Pointer(datatype=Int())
    base_prefix = Pointer(datatype=Int())
    exec_prefix = Pointer(datatype=Int())
    base_exec_prefix = Pointer(datatype=Int())
    skip_source_first_line = Int()
    run_command = Pointer(datatype=Int())
    run_module = Pointer(datatype=Int())
    run_filename = Pointer(datatype=Int())
    _install_importlib = Int()
    _init_main = Int()
    _is_python_build = Int()


class _PyCFrame(DataType, is_union=False):
    current_frame = Pointer(datatype="_PyInterpreterFrame")
    previous = Pointer(datatype="_PyCFrame")


class _err_stackitem(DataType, is_union=False):
    exc_value = Pointer(datatype=_object())
    previous_item = Pointer(datatype="_err_stackitem")


class _stack_chunk(DataType, is_union=False):
    previous = Pointer(datatype="_stack_chunk")
    size = LongLong()
    top = LongLong()
    data = Array(datatype=Pointer(datatype=_object()), length=1)


class _py_trashcan(DataType, is_union=False):
    delete_nesting = Int()
    delete_later = Pointer(datatype=_object())


class _status(DataType, is_union=False):
    initialized = UnsignedInt()
    bound = UnsignedInt()
    unbound = UnsignedInt()
    bound_gilstate = UnsignedInt()
    active = UnsignedInt()
    finalizing = UnsignedInt()
    cleared = UnsignedInt()
    finalized = UnsignedInt()
    anonymous_var_3 = UnsignedInt()


class _ts(DataType, is_union=False):
    prev = Pointer(datatype="_ts")
    next = Pointer(datatype="_ts")
    interp = Pointer(datatype="_is")
    _status = _status()
    py_recursion_remaining = Int()
    py_recursion_limit = Int()
    c_recursion_remaining = Int()
    recursion_headroom = Int()
    tracing = Int()
    what_event = Int()
    cframe = Pointer(datatype=_PyCFrame())
    c_profilefunc = Pointer(datatype=Func())
    c_tracefunc = Pointer(datatype=Func())
    c_profileobj = Pointer(datatype=_object())
    c_traceobj = Pointer(datatype=_object())
    current_exception = Pointer(datatype=_object())
    exc_info = Pointer(datatype=_err_stackitem())
    dict = Pointer(datatype=_object())
    gilstate_counter = Int()
    async_exc = Pointer(datatype=_object())
    thread_id = UnsignedLongLong()
    native_thread_id = UnsignedLongLong()
    trash = _py_trashcan()
    on_delete = Pointer(datatype=Func())
    on_delete_data = Pointer(datatype=Void())
    coroutine_origin_tracking_depth = Int()
    async_gen_firstiter = Pointer(datatype=_object())
    async_gen_finalizer = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    context_ver = UnsignedLongLong()
    id = UnsignedLongLong()
    datastack_chunk = Pointer(datatype=_stack_chunk())
    datastack_top = Pointer(datatype=Pointer(datatype=_object()))
    datastack_limit = Pointer(datatype=Pointer(datatype=_object()))
    exc_state = _err_stackitem()
    root_cframe = _PyCFrame()


class _xid(DataType, is_union=False):
    data = Pointer(datatype=Void())
    obj = Pointer(datatype=_object())
    interp = LongLong()
    new_object = Pointer(datatype=Func())
    free = Pointer(datatype=Func())


class PyBaseExceptionObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()


class PyBaseExceptionGroupObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    msg = Pointer(datatype=_object())
    excs = Pointer(datatype=_object())


class PySyntaxErrorObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    msg = Pointer(datatype=_object())
    filename = Pointer(datatype=_object())
    lineno = Pointer(datatype=_object())
    offset = Pointer(datatype=_object())
    end_lineno = Pointer(datatype=_object())
    end_offset = Pointer(datatype=_object())
    text = Pointer(datatype=_object())
    print_file_and_line = Pointer(datatype=_object())


class PyImportErrorObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    msg = Pointer(datatype=_object())
    name = Pointer(datatype=_object())
    path = Pointer(datatype=_object())
    name_from = Pointer(datatype=_object())


class PyUnicodeErrorObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    encoding = Pointer(datatype=_object())
    object = Pointer(datatype=_object())
    start = LongLong()
    end = LongLong()
    reason = Pointer(datatype=_object())


class PySystemExitObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    code = Pointer(datatype=_object())


class PyOSErrorObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    myerrno = Pointer(datatype=_object())
    strerror = Pointer(datatype=_object())
    filename = Pointer(datatype=_object())
    filename2 = Pointer(datatype=_object())
    written = LongLong()


class PyStopIterationObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    value = Pointer(datatype=_object())


class PyNameErrorObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    name = Pointer(datatype=_object())


class PyAttributeErrorObject(DataType, is_union=False):
    ob_base = _object()
    dict = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    notes = Pointer(datatype=_object())
    traceback = Pointer(datatype=_object())
    context = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    suppress_context = Byte()
    obj = Pointer(datatype=_object())
    name = Pointer(datatype=_object())


class _PyLongValue(DataType, is_union=False):
    lv_tag = UnsignedLongLong()
    ob_digit = UnsignedInt[1]


class _longobject(DataType, is_union=False):
    ob_base = _object()
    long_value = _PyLongValue()


class PyFloatObject(DataType, is_union=False):
    ob_base = _object()
    ob_fval = Double()


class Py_complex(DataType, is_union=False):
    real = Double()
    imag = Double()


class PyComplexObject(DataType, is_union=False):
    ob_base = _object()
    cval = Py_complex()


class _PyManagedBufferObject(DataType, is_union=False):
    ob_base = _object()
    flags = Int()
    exports = LongLong()
    master = Py_buffer()


class PyMemoryViewObject(DataType, is_union=False):
    ob_base = PyVarObject()
    mbuf = Pointer(datatype=_PyManagedBufferObject())
    hash = LongLong()
    flags = Int()
    exports = LongLong()
    view = Py_buffer()
    weakreflist = Pointer(datatype=_object())
    ob_array = LongLong[1]


class PyTupleObject(DataType, is_union=False):
    ob_base = PyVarObject()
    ob_item = Array(datatype=Pointer(datatype=_object()), length=1)


class PyListObject(DataType, is_union=False):
    ob_base = PyVarObject()
    ob_item = Pointer(datatype=Pointer(datatype=_object()))
    allocated = LongLong()


class PyDictObject(DataType, is_union=False):
    ob_base = _object()
    ma_used = LongLong()
    ma_version_tag = UnsignedLongLong()
    ma_keys = Pointer(datatype="_dictkeysobject")
    ma_values = Pointer(datatype="_dictvalues")


class _PyDictViewObject(DataType, is_union=False):
    ob_base = _object()
    dv_dict = Pointer(datatype=PyDictObject())


class setentry(DataType, is_union=False):
    key = Pointer(datatype=_object())
    hash = LongLong()


class PySetObject(DataType, is_union=False):
    ob_base = _object()
    fill = LongLong()
    used = LongLong()
    mask = LongLong()
    table = Pointer(datatype=setentry())
    hash = LongLong()
    finger = LongLong()
    smalltable = setentry[8]
    weakreflist = Pointer(datatype=_object())


class PyMethodDef(DataType, is_union=False):
    ml_name = Pointer(datatype=Byte())
    ml_meth = Pointer(datatype=Func())
    ml_flags = Int()
    ml_doc = Pointer(datatype=Byte())


class PyCFunctionObject(DataType, is_union=False):
    ob_base = _object()
    m_ml = Pointer(datatype=PyMethodDef())
    m_self = Pointer(datatype=_object())
    m_module = Pointer(datatype=_object())
    m_weakreflist = Pointer(datatype=_object())
    vectorcall = Pointer(datatype=Func())


class PyCMethodObject(DataType, is_union=False):
    func = PyCFunctionObject()
    mm_class = Pointer(datatype=_typeobject())


class PyModuleDef_Base(DataType, is_union=False):
    ob_base = _object()
    m_init = Pointer(datatype=Func())
    m_index = LongLong()
    m_copy = Pointer(datatype=_object())


class PyModuleDef_Slot(DataType, is_union=False):
    slot = Int()
    value = Pointer(datatype=Void())


class PyModuleDef(DataType, is_union=False):
    m_base = PyModuleDef_Base()
    m_name = Pointer(datatype=Byte())
    m_doc = Pointer(datatype=Byte())
    m_size = LongLong()
    m_methods = Pointer(datatype=PyMethodDef())
    m_slots = Pointer(datatype=PyModuleDef_Slot())
    m_traverse = Pointer(datatype=Func())
    m_clear = Pointer(datatype=Func())
    m_free = Pointer(datatype=Func())


class PyFrameConstructor(DataType, is_union=False):
    fc_globals = Pointer(datatype=_object())
    fc_builtins = Pointer(datatype=_object())
    fc_name = Pointer(datatype=_object())
    fc_qualname = Pointer(datatype=_object())
    fc_code = Pointer(datatype=_object())
    fc_defaults = Pointer(datatype=_object())
    fc_kwdefaults = Pointer(datatype=_object())
    fc_closure = Pointer(datatype=_object())


class PyFunctionObject(DataType, is_union=False):
    ob_base = _object()
    func_globals = Pointer(datatype=_object())
    func_builtins = Pointer(datatype=_object())
    func_name = Pointer(datatype=_object())
    func_qualname = Pointer(datatype=_object())
    func_code = Pointer(datatype=_object())
    func_defaults = Pointer(datatype=_object())
    func_kwdefaults = Pointer(datatype=_object())
    func_closure = Pointer(datatype=_object())
    func_doc = Pointer(datatype=_object())
    func_dict = Pointer(datatype=_object())
    func_weakreflist = Pointer(datatype=_object())
    func_module = Pointer(datatype=_object())
    func_annotations = Pointer(datatype=_object())
    func_typeparams = Pointer(datatype=_object())
    vectorcall = Pointer(datatype=Func())
    func_version = UnsignedInt()


class PyMethodObject(DataType, is_union=False):
    ob_base = _object()
    im_func = Pointer(datatype=_object())
    im_self = Pointer(datatype=_object())
    im_weakreflist = Pointer(datatype=_object())
    vectorcall = Pointer(datatype=Func())


class PyInstanceMethodObject(DataType, is_union=False):
    ob_base = _object()
    func = Pointer(datatype=_object())


class _Py_LocalMonitors(DataType, is_union=False):
    tools = UnsignedByte[15]


class _Py_GlobalMonitors(DataType, is_union=False):
    tools = UnsignedByte[15]


class op(DataType, is_union=False):
    code = UnsignedByte()
    arg = UnsignedByte()


class _Py_CODEUNIT(DataType, is_union=True):
    cache = UnsignedShort()
    op = op()


class _PyCoCached(DataType, is_union=False):
    _co_code = Pointer(datatype=_object())
    _co_varnames = Pointer(datatype=_object())
    _co_cellvars = Pointer(datatype=_object())
    _co_freevars = Pointer(datatype=_object())


class _PyCoLineInstrumentationData(DataType, is_union=False):
    original_opcode = UnsignedByte()
    line_delta = Byte()


class _PyCoMonitoringData(DataType, is_union=False):
    local_monitors = _Py_LocalMonitors()
    active_monitors = _Py_LocalMonitors()
    tools = Pointer(datatype=UnsignedByte())
    lines = Pointer(datatype=_PyCoLineInstrumentationData())
    line_tools = Pointer(datatype=UnsignedByte())
    per_instruction_opcodes = Pointer(datatype=UnsignedByte())
    per_instruction_tools = Pointer(datatype=UnsignedByte())


class PyCodeObject(DataType, is_union=False):
    ob_base = PyVarObject()
    co_consts = Pointer(datatype=_object())
    co_names = Pointer(datatype=_object())
    co_exceptiontable = Pointer(datatype=_object())
    co_flags = Int()
    co_argcount = Int()
    co_posonlyargcount = Int()
    co_kwonlyargcount = Int()
    co_stacksize = Int()
    co_firstlineno = Int()
    co_nlocalsplus = Int()
    co_framesize = Int()
    co_nlocals = Int()
    co_ncellvars = Int()
    co_nfreevars = Int()
    co_version = UnsignedInt()
    co_localsplusnames = Pointer(datatype=_object())
    co_localspluskinds = Pointer(datatype=_object())
    co_filename = Pointer(datatype=_object())
    co_name = Pointer(datatype=_object())
    co_qualname = Pointer(datatype=_object())
    co_linetable = Pointer(datatype=_object())
    co_weakreflist = Pointer(datatype=_object())
    _co_cached = Pointer(datatype=_PyCoCached())
    _co_instrumentation_version = UnsignedLongLong()
    _co_monitoring = Pointer(datatype=_PyCoMonitoringData())
    _co_firsttraceable = Int()
    co_extra = Pointer(datatype=Void())
    co_code_adaptive = Byte[1]


class _opaque(DataType, is_union=False):
    computed_line = Int()
    lo_next = Pointer(datatype=UnsignedByte())
    limit = Pointer(datatype=UnsignedByte())


class _line_offsets(DataType, is_union=False):
    ar_start = Int()
    ar_end = Int()
    ar_line = Int()
    opaque = _opaque()


class _traceback(DataType, is_union=False):
    ob_base = _object()
    tb_next = Pointer(datatype="_traceback")
    tb_frame = Pointer(datatype="_frame")
    tb_lasti = Int()
    tb_lineno = Int()


class PySliceObject(DataType, is_union=False):
    ob_base = _object()
    start = Pointer(datatype=_object())
    stop = Pointer(datatype=_object())
    step = Pointer(datatype=_object())


class PyCellObject(DataType, is_union=False):
    ob_base = _object()
    ob_ref = Pointer(datatype=_object())


class PyGenObject(DataType, is_union=False):
    ob_base = _object()
    gi_weakreflist = Pointer(datatype=_object())
    gi_name = Pointer(datatype=_object())
    gi_qualname = Pointer(datatype=_object())
    gi_exc_state = _err_stackitem()
    gi_origin_or_finalizer = Pointer(datatype=_object())
    gi_hooks_inited = Byte()
    gi_closed = Byte()
    gi_running_async = Byte()
    gi_frame_state = Byte()
    gi_iframe = Array(datatype=Pointer(datatype=_object()), length=1)


class PyCoroObject(DataType, is_union=False):
    ob_base = _object()
    cr_weakreflist = Pointer(datatype=_object())
    cr_name = Pointer(datatype=_object())
    cr_qualname = Pointer(datatype=_object())
    cr_exc_state = _err_stackitem()
    cr_origin_or_finalizer = Pointer(datatype=_object())
    cr_hooks_inited = Byte()
    cr_closed = Byte()
    cr_running_async = Byte()
    cr_frame_state = Byte()
    cr_iframe = Array(datatype=Pointer(datatype=_object()), length=1)


class PyAsyncGenObject(DataType, is_union=False):
    ob_base = _object()
    ag_weakreflist = Pointer(datatype=_object())
    ag_name = Pointer(datatype=_object())
    ag_qualname = Pointer(datatype=_object())
    ag_exc_state = _err_stackitem()
    ag_origin_or_finalizer = Pointer(datatype=_object())
    ag_hooks_inited = Byte()
    ag_closed = Byte()
    ag_running_async = Byte()
    ag_frame_state = Byte()
    ag_iframe = Array(datatype=Pointer(datatype=_object()), length=1)


class PyGetSetDef(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    get = Pointer(datatype=Func())
    set = Pointer(datatype=Func())
    doc = Pointer(datatype=Byte())
    closure = Pointer(datatype=Void())


class PyMemberDef(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    type = Int()
    offset = LongLong()
    flags = Int()
    doc = Pointer(datatype=Byte())


class wrapperbase(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    offset = Int()
    function = Pointer(datatype=Void())
    wrapper = Pointer(datatype=Func())
    doc = Pointer(datatype=Byte())
    flags = Int()
    name_strobj = Pointer(datatype=_object())


class PyDescrObject(DataType, is_union=False):
    ob_base = _object()
    d_type = Pointer(datatype=_typeobject())
    d_name = Pointer(datatype=_object())
    d_qualname = Pointer(datatype=_object())


class PyMethodDescrObject(DataType, is_union=False):
    d_common = PyDescrObject()
    d_method = Pointer(datatype=PyMethodDef())
    vectorcall = Pointer(datatype=Func())


class PyMemberDescrObject(DataType, is_union=False):
    d_common = PyDescrObject()
    d_member = Pointer(datatype=PyMemberDef())


class PyGetSetDescrObject(DataType, is_union=False):
    d_common = PyDescrObject()
    d_getset = Pointer(datatype=PyGetSetDef())


class PyWrapperDescrObject(DataType, is_union=False):
    d_common = PyDescrObject()
    d_base = Pointer(datatype=wrapperbase())
    d_wrapped = Pointer(datatype=Void())


class _PyWeakReference(DataType, is_union=False):
    ob_base = _object()
    wr_object = Pointer(datatype=_object())
    wr_callback = Pointer(datatype=_object())
    hash = LongLong()
    wr_prev = Pointer(datatype="_PyWeakReference")
    wr_next = Pointer(datatype="_PyWeakReference")
    vectorcall = Pointer(datatype=Func())


class PyStructSequence_Field(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    doc = Pointer(datatype=Byte())


class PyStructSequence_Desc(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    doc = Pointer(datatype=Byte())
    fields = Pointer(datatype=PyStructSequence_Field())
    n_in_sequence = Int()


class _Py_clock_info_t(DataType, is_union=False):
    implementation = Pointer(datatype=Byte())
    monotonic = Int()
    adjustable = Int()
    resolution = Double()


class sched_param(DataType, is_union=False):
    sched_priority = Int()
    __opaque = Byte[4]


class _Py_tss_t(DataType, is_union=False):
    _is_initialized = Int()
    _key = UnsignedLongLong()


class _PyArg_Parser(DataType, is_union=False):
    initialized = Int()
    format = Pointer(datatype=Byte())
    keywords = Pointer(datatype=Pointer(datatype=Byte()))
    fname = Pointer(datatype=Byte())
    custom_msg = Pointer(datatype=Byte())
    pos = Int()
    min = Int()
    max = Int()
    kwtuple = Pointer(datatype=_object())
    next = Pointer(datatype="_PyArg_Parser")


class PyCompilerFlags(DataType, is_union=False):
    cf_flags = Int()
    cf_feature_version = Int()


class _PyCompilerSrcLocation(DataType, is_union=False):
    lineno = Int()
    end_lineno = Int()
    col_offset = Int()
    end_col_offset = Int()


class PyFutureFeatures(DataType, is_union=False):
    ff_features = Int()
    ff_location = _PyCompilerSrcLocation()


class PyInterpreterConfig(DataType, is_union=False):
    use_main_obmalloc = Int()
    allow_fork = Int()
    allow_exec = Int()
    allow_threads = Int()
    allow_daemon_threads = Int()
    check_multi_interp_extensions = Int()
    gil = Int()


class PerfMapState(DataType, is_union=False):
    perf_map = Pointer(datatype=_sFILE())
    map_lock = Pointer(datatype=Void())


class _inittab(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    initfunc = Pointer(datatype=Func())


class _frozen(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    code = Pointer(datatype=UnsignedByte())
    size = Int()
    is_package = Int()
    get_code = Pointer(datatype=Func())
