from pystrector.base_datatypes import (UnsignedLongLong, UnsignedInt, LongLong, Void, Array, Pointer, Int, UnsignedByte, UnsignedShort, Float, Bool, Byte, Double, DataType, Func, Short)

class _mbstate_t(DataType, is_union=True):
    _mbstate8 = Byte[128]
    _mbstateL = LongLong()


class _darwin_pthread_handler_rec(DataType, is_union=False):
    _routine = Pointer(datatype=Func())
    _arg = Pointer(datatype=Void())
    _next = Pointer(datatype="_darwin_pthread_handler_rec")


class _opaque_pthread_attr_t(DataType, is_union=False):
    _sig = LongLong()
    _opaque = Byte[56]


class _opaque_pthread_cond_t(DataType, is_union=False):
    _sig = LongLong()
    _opaque = Byte[40]


class _opaque_pthread_condattr_t(DataType, is_union=False):
    _sig = LongLong()
    _opaque = Byte[8]


class _opaque_pthread_mutex_t(DataType, is_union=False):
    _sig = LongLong()
    _opaque = Byte[56]


class _opaque_pthread_mutexattr_t(DataType, is_union=False):
    _sig = LongLong()
    _opaque = Byte[8]


class _opaque_pthread_once_t(DataType, is_union=False):
    _sig = LongLong()
    _opaque = Byte[8]


class _opaque_pthread_rwlock_t(DataType, is_union=False):
    _sig = LongLong()
    _opaque = Byte[192]


class _opaque_pthread_rwlockattr_t(DataType, is_union=False):
    _sig = LongLong()
    _opaque = Byte[16]


class _opaque_pthread_t(DataType, is_union=False):
    _sig = LongLong()
    _cleanup_stack = Pointer(datatype=_darwin_pthread_handler_rec())
    _opaque = Byte[8176]


class _darwin_arm_exception_state(DataType, is_union=False):
    _exception = UnsignedInt()
    _fsr = UnsignedInt()
    _far = UnsignedInt()


class _darwin_arm_exception_state64(DataType, is_union=False):
    _far = UnsignedLongLong()
    _esr = UnsignedInt()
    _exception = UnsignedInt()


class _darwin_arm_thread_state(DataType, is_union=False):
    _r = UnsignedInt[13]
    _sp = UnsignedInt()
    _lr = UnsignedInt()
    _pc = UnsignedInt()
    _cpsr = UnsignedInt()


class _darwin_arm_thread_state64(DataType, is_union=False):
    _x = UnsignedLongLong[29]
    _fp = UnsignedLongLong()
    _lr = UnsignedLongLong()
    _sp = UnsignedLongLong()
    _pc = UnsignedLongLong()
    _cpsr = UnsignedInt()
    _pad = UnsignedInt()


class _darwin_arm_vfp_state(DataType, is_union=False):
    _r = UnsignedInt[64]
    _fpscr = UnsignedInt()


class _darwin_arm_neon_state64(DataType, is_union=False):
    _v = LongLong[32]
    _fpsr = UnsignedInt()
    _fpcr = UnsignedInt()


class _darwin_arm_neon_state(DataType, is_union=False):
    _v = LongLong[16]
    _fpsr = UnsignedInt()
    _fpcr = UnsignedInt()


class _arm_pagein_state(DataType, is_union=False):
    _pagein_error = Int()


class _arm_legacy_debug_state(DataType, is_union=False):
    _bvr = UnsignedInt[16]
    _bcr = UnsignedInt[16]
    _wvr = UnsignedInt[16]
    _wcr = UnsignedInt[16]


class _darwin_arm_debug_state32(DataType, is_union=False):
    _bvr = UnsignedInt[16]
    _bcr = UnsignedInt[16]
    _wvr = UnsignedInt[16]
    _wcr = UnsignedInt[16]
    _mdscr_el1 = UnsignedLongLong()


class _darwin_arm_debug_state64(DataType, is_union=False):
    _bvr = UnsignedLongLong[16]
    _bcr = UnsignedLongLong[16]
    _wvr = UnsignedLongLong[16]
    _wcr = UnsignedLongLong[16]
    _mdscr_el1 = UnsignedLongLong()


class _darwin_arm_cpmu_state64(DataType, is_union=False):
    _ctrs = UnsignedLongLong[16]


class _darwin_mcontext32(DataType, is_union=False):
    _es = _darwin_arm_exception_state()
    _ss = _darwin_arm_thread_state()
    _fs = _darwin_arm_vfp_state()


class _darwin_mcontext64(DataType, is_union=False):
    _es = _darwin_arm_exception_state64()
    _ss = _darwin_arm_thread_state64()
    _ns = _darwin_arm_neon_state64()


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
    _pad = UnsignedLongLong[7]


class _sigaction_u(DataType, is_union=True):
    _sa_handler = Pointer(datatype=Func())
    _sa_sigaction = Pointer(datatype=Func())


class _sigaction(DataType, is_union=False):
    _sigaction_u = _sigaction_u()
    sa_tramp = Pointer(datatype=Func())
    sa_mask = UnsignedInt()
    sa_flags = Int()


class sigaction(DataType, is_union=False):
    _sigaction_u = _sigaction_u()
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
    _val = UnsignedShort()


class _OSUnalignedU32(DataType, is_union=False):
    _val = UnsignedInt()


class _OSUnalignedU64(DataType, is_union=False):
    _val = UnsignedLongLong()


class wait_w_T(DataType, is_union=False):
    w_Termsig = UnsignedInt()
    w_Coredump = UnsignedInt()
    w_Retcode = UnsignedInt()
    w_Filler = UnsignedInt()


class wait_w_S(DataType, is_union=False):
    w_Stopval = UnsignedInt()
    w_Stopsig = UnsignedInt()
    w_Filler = UnsignedInt()


class wait(DataType, is_union=True):
    w_status = Int()
    w_T = wait_w_T()
    w_S = wait_w_S()


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
    _min = Int()
    _max = Int()
    _map = Int()
    _types = Pointer(datatype=UnsignedInt())


class _RuneRange(DataType, is_union=False):
    _nranges = Int()
    _ranges = Pointer(datatype=_RuneEntry())


class _RuneCharClass(DataType, is_union=False):
    _name = Byte[14]
    _mask = UnsignedInt()


class _RuneLocale(DataType, is_union=False):
    _magic = Byte[8]
    _encoding = Byte[32]
    _sgetrune = Pointer(datatype=Func())
    _sputrune = Pointer(datatype=Func())
    _invalid_rune = Int()
    _runetype = UnsignedInt[256]
    _maplower = Int[256]
    _mapupper = Int[256]
    _runetype_ext = _RuneRange()
    _maplower_ext = _RuneRange()
    _mapupper_ext = _RuneRange()
    _variable = Pointer(datatype=Void())
    _variable_len = Int()
    _ncharclasses = Int()
    _charclasses = Pointer(datatype=_RuneCharClass())


class imaxdiv_t(DataType, is_union=False):
    quot = LongLong()
    rem = LongLong()


class _float2(DataType, is_union=False):
    _sinval = Float()
    _cosval = Float()


class _double2(DataType, is_union=False):
    _sinval = Double()
    _cosval = Double()


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


class _Py_HashSecret_t_fnv(DataType, is_union=False):
    prefix = LongLong()
    suffix = LongLong()


class _Py_HashSecret_t_siphash(DataType, is_union=False):
    k0 = UnsignedLongLong()
    k1 = UnsignedLongLong()


class _Py_HashSecret_t_djbx33a(DataType, is_union=False):
    padding = UnsignedByte[16]
    suffix = LongLong()


class _Py_HashSecret_t_expat(DataType, is_union=False):
    padding = UnsignedByte[16]
    hashsalt = LongLong()


class _Py_HashSecret_t(DataType, is_union=True):
    uc = UnsignedByte[24]
    fnv = _Py_HashSecret_t_fnv()
    siphash = _Py_HashSecret_t_siphash()
    djbx33a = _Py_HashSecret_t_djbx33a()
    expat = _Py_HashSecret_t_expat()


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


class PyASCIIObject_state(DataType, is_union=False):
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
    state = PyASCIIObject_state()


class PyCompactUnicodeObject(DataType, is_union=False):
    _base = PyASCIIObject()
    utf8_length = LongLong()
    utf8 = Pointer(datatype=Byte())


class PyUnicodeObject_data(DataType, is_union=True):
    any = Pointer(datatype=Void())
    latin1 = Pointer(datatype=UnsignedByte())
    ucs2 = Pointer(datatype=UnsignedShort())
    ucs4 = Pointer(datatype=UnsignedInt())


class PyUnicodeObject(DataType, is_union=False):
    _base = PyCompactUnicodeObject()
    data = PyUnicodeObject_data()


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


class _ts_status(DataType, is_union=False):
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
    _status = _ts_status()
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


class _Py_CODEUNIT_op(DataType, is_union=False):
    code = UnsignedByte()
    arg = UnsignedByte()


class _Py_CODEUNIT(DataType, is_union=True):
    cache = UnsignedShort()
    op = _Py_CODEUNIT_op()


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
    _opaque = Byte[4]


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


class atomic_flag(DataType, is_union=False):
    _val = "_Bool"


class _Py_atomic_address(DataType, is_union=False):
    _value = LongLong()


class _Py_atomic_int(DataType, is_union=False):
    _value = Int()


class _getargs_runtime_state(DataType, is_union=False):
    mutex = Pointer(datatype=Void())
    static_parsers = Pointer(datatype=_PyArg_Parser())


class _gilstate_runtime_state(DataType, is_union=False):
    check_enabled = Int()
    autoInterpreterState = Pointer(datatype="_is")


class _Py_AuditHookEntry(DataType, is_union=False):
    next = Pointer(datatype="_Py_AuditHookEntry")
    hookCFunction = Pointer(datatype=Func())
    userData = Pointer(datatype=Void())


class pyinterpreters(DataType, is_union=False):
    mutex = Pointer(datatype=Void())
    head = Pointer(datatype="_is")
    main = Pointer(datatype="_is")
    next_id = LongLong()


class pyruntimestate_audit_hooks(DataType, is_union=False):
    mutex = Pointer(datatype=Void())
    head = Pointer(datatype=_Py_AuditHookEntry())


class pyruntimestate(DataType, is_union=False):
    _initialized = Int()
    preinitializing = Int()
    preinitialized = Int()
    core_initialized = Int()
    initialized = Int()
    _finalizing = _Py_atomic_address()
    interpreters = pyinterpreters()
    main_thread = UnsignedLongLong()
    xidregistry = "_xidregistry"
    allocators = "_pymem_allocators"
    obmalloc = "_obmalloc_global_state"
    pyhash_state = "pyhash_runtime_state"
    time = "_time_runtime_state"
    threads = "_pythread_runtime_state"
    signals = "_signals_runtime_state"
    autoTSSkey = _Py_tss_t()
    trashTSSkey = _Py_tss_t()
    orig_argv = PyWideStringList()
    parser = "_parser_runtime_state"
    atexit = "_atexit_runtime_state"
    imports = "_import_runtime_state"
    ceval = "_ceval_runtime_state"
    gilstate = _gilstate_runtime_state()
    getargs = _getargs_runtime_state()
    fileutils = "_fileutils_state"
    faulthandler = "_faulthandler_runtime_state"
    tracemalloc = "_tracemalloc_runtime_state"
    preconfig = PyPreConfig()
    open_code_hook = Pointer(datatype=Func())
    open_code_userdata = Pointer(datatype=Void())
    audit_hooks = pyruntimestate_audit_hooks()
    object_state = "_py_object_runtime_state"
    float_state = "_Py_float_runtime_state"
    unicode_state = "_Py_unicode_runtime_state"
    types = "_types_runtime_state"
    static_objects = "_Py_static_objects"
    cached_objects = "_Py_cached_objects"
    _finalizing_id = _Py_atomic_address()
    sys_path_0 = Pointer(datatype=Int())
    _main_interpreter = "_is"


class PyHamtNode(DataType, is_union=False):
    ob_base = _object()


class PyHamtObject(DataType, is_union=False):
    ob_base = _object()
    h_root = Pointer(datatype=PyHamtNode())
    h_weakreflist = Pointer(datatype=_object())
    h_count = LongLong()


class PyHamtNode_Bitmap(DataType, is_union=False):
    ob_base = PyVarObject()
    b_bitmap = UnsignedInt()
    b_array = Array(datatype=Pointer(datatype=_object()), length=1)


class PyHamtIteratorState(DataType, is_union=False):
    i_nodes = Array(datatype=Pointer(datatype=PyHamtNode()), length=8)
    i_pos = LongLong[8]
    i_level = Byte()


class PyHamtIterator(DataType, is_union=False):
    ob_base = _object()
    hi_obj = Pointer(datatype=PyHamtObject())
    hi_iter = PyHamtIteratorState()
    hi_yield = Pointer(datatype=Func())


class PyModuleObject(DataType, is_union=False):
    ob_base = _object()
    md_dict = Pointer(datatype=_object())
    md_def = Pointer(datatype=PyModuleDef())
    md_state = Pointer(datatype=Void())
    md_weaklist = Pointer(datatype=_object())
    md_name = Pointer(datatype=_object())


class _PyContextTokenMissing(DataType, is_union=False):
    ob_base = _object()


class _Py_context_state(DataType, is_union=False):
    freelist = Pointer(datatype="_pycontextobject")
    numfree = Int()


class _pycontextobject(DataType, is_union=False):
    ob_base = _object()
    ctx_prev = Pointer(datatype="_pycontextobject")
    ctx_vars = Pointer(datatype=PyHamtObject())
    ctx_weakreflist = Pointer(datatype=_object())
    ctx_entered = Int()


class _pycontextvarobject(DataType, is_union=False):
    ob_base = _object()
    var_name = Pointer(datatype=_object())
    var_default = Pointer(datatype=_object())
    var_cached = Pointer(datatype=_object())
    var_cached_tsid = UnsignedLongLong()
    var_cached_tsver = UnsignedLongLong()
    var_hash = LongLong()


class _pycontexttokenobject(DataType, is_union=False):
    ob_base = _object()
    tok_ctx = Pointer(datatype=_pycontextobject())
    tok_var = Pointer(datatype=_pycontextvarobject())
    tok_oldval = Pointer(datatype=_object())
    tok_used = Int()


class _pending_call(DataType, is_union=False):
    func = Pointer(datatype=Func())
    arg = Pointer(datatype=Void())


class _pending_calls(DataType, is_union=False):
    busy = Int()
    lock = Pointer(datatype=Void())
    calls_to_do = _Py_atomic_int()
    async_exc = Int()
    calls = _pending_call[32]
    first = Int()
    last = Int()


class _ceval_runtime_state_perf(DataType, is_union=False):
    _not_used = Int()


class _ceval_runtime_state(DataType, is_union=False):
    perf = _ceval_runtime_state_perf()
    signals_pending = _Py_atomic_int()
    pending_mainthread = _pending_calls()


class _ceval_state(DataType, is_union=False):
    eval_breaker = _Py_atomic_int()
    gil_drop_request = _Py_atomic_int()
    recursion_limit = Int()
    gil = Pointer(datatype="_gil_runtime_state")
    own_gil = Int()
    gc_scheduled = _Py_atomic_int()
    pending = _pending_calls()


class _warnings_runtime_state(DataType, is_union=False):
    filters = Pointer(datatype=_object())
    once_registry = Pointer(datatype=_object())
    default_action = Pointer(datatype=_object())
    filters_version = LongLong()


class _time_runtime_state(DataType, is_union=False):
    ticks_per_second_initialized = Int()
    ticks_per_second = LongLong()


class _Py_global_strings_literals_py_anon_dictcomp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_literals_py_anon_genexpr(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_literals_py_anon_lambda(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_literals_py_anon_listcomp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_literals_py_anon_module(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_literals_py_anon_setcomp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_literals_py_anon_string(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_literals_py_anon_unknown(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_literals_py_dbl_close_br(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_literals_py_dbl_open_br(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_literals_py_dbl_percent(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_literals_py_defaults(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_literals_py_dot_locals(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_literals_py_empty(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[0]


class _Py_global_strings_literals_py_generic_base(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_literals_py_json_decoder(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_literals_py_kwdefaults(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_literals_py_list_err(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[23]


class _Py_global_strings_literals_py_shim_name(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_literals_py_type_params(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_literals_py_utf_8(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_literals(DataType, is_union=False):
    _py_anon_dictcomp = _Py_global_strings_literals_py_anon_dictcomp()
    _py_anon_genexpr = _Py_global_strings_literals_py_anon_genexpr()
    _py_anon_lambda = _Py_global_strings_literals_py_anon_lambda()
    _py_anon_listcomp = _Py_global_strings_literals_py_anon_listcomp()
    _py_anon_module = _Py_global_strings_literals_py_anon_module()
    _py_anon_setcomp = _Py_global_strings_literals_py_anon_setcomp()
    _py_anon_string = _Py_global_strings_literals_py_anon_string()
    _py_anon_unknown = _Py_global_strings_literals_py_anon_unknown()
    _py_dbl_close_br = _Py_global_strings_literals_py_dbl_close_br()
    _py_dbl_open_br = _Py_global_strings_literals_py_dbl_open_br()
    _py_dbl_percent = _Py_global_strings_literals_py_dbl_percent()
    _py_defaults = _Py_global_strings_literals_py_defaults()
    _py_dot_locals = _Py_global_strings_literals_py_dot_locals()
    _py_empty = _Py_global_strings_literals_py_empty()
    _py_generic_base = _Py_global_strings_literals_py_generic_base()
    _py_json_decoder = _Py_global_strings_literals_py_json_decoder()
    _py_kwdefaults = _Py_global_strings_literals_py_kwdefaults()
    _py_list_err = _Py_global_strings_literals_py_list_err()
    _py_shim_name = _Py_global_strings_literals_py_shim_name()
    _py_type_params = _Py_global_strings_literals_py_type_params()
    _py_utf_8 = _Py_global_strings_literals_py_utf_8()


class _Py_global_strings_identifiers_py_CANCELLED(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_FINISHED(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_False(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_JSONDecodeError(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_PENDING(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_Py_Repr(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_TextIOWrapper(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_True(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_WarningMessage(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_WindowsConsoleIO(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py__IOBase_closed(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py__abc_tpflags_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py__abs_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__abstractmethods_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[19]


class _Py_global_strings_identifiers_py__add_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__aenter_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__aexit_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__aiter_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__all_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__and_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__anext_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__annotations_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py__args_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__asyncio_running_event_loop_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[30]


class _Py_global_strings_identifiers_py__await_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__bases_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__bool_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__buffer_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__build_class_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py__builtins_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__bytes_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__call_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__cantrace_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__class_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__class_getitem_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py__classcell_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py__classdict_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py__classdictcell_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py__complex_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__contains_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__copy_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__ctypes_from_outparam_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[24]


class _Py_global_strings_identifiers_py__del_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__delattr_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__delete_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__delitem_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__dict_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__dictoffset_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py__dir_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__divmod_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__doc_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__enter_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__eq_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py__exit_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__file_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__float_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__floordiv_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__format_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__fspath_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__ge_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py__get_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__getattr_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__getattribute_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py__getinitargs_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py__getitem_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__getnewargs_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py__getnewargs_ex_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py__getstate_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__gt_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py__hash_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__iadd_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__iand_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__ifloordiv_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py__ilshift_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__imatmul_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__imod_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__import_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__imul_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__index_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__init_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__init_subclass_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py__instancecheck_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py__int_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__invert_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__ior_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__ipow_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__irshift_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__isabstractmethod_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[20]


class _Py_global_strings_identifiers_py__isub_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__iter_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__itruediv_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__ixor_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__le_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py__len_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__length_hint_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py__lltrace_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__loader_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__lshift_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__lt_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py__main_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__matmul_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__missing_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__mod_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__module_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__mro_entries_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py__mul_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__name_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__ne_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py__neg_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__new_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__newobj_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__newobj_ex_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py__next_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__notes_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__or_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py__orig_class_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py__origin_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__package_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__parameters_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py__path_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__pos_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__pow_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__prepare_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__qualname_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__radd_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__rand_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__rdivmod_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__reduce_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__reduce_ex_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py__release_buffer_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[18]


class _Py_global_strings_identifiers_py__repr_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__reversed_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__rfloordiv_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py__rlshift_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__rmatmul_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__rmod_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__rmul_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__ror_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__round_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__rpow_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__rrshift_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__rshift_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__rsub_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__rtruediv_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__rxor_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__set_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__set_name_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__setattr_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__setitem_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__setstate_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py__sizeof_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py__slotnames_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py__slots_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__spec_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py__str_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__sub_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py__subclasscheck_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py__subclasshook_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py__truediv_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__trunc_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py__type_params_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py__typing_is_unpacked_typevartuple_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[35]


class _Py_global_strings_identifiers_py__typing_prepare_subst_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[24]


class _Py_global_strings_identifiers_py__typing_subst_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py__typing_unpacked_tuple_args_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[30]


class _Py_global_strings_identifiers_py__warningregistry_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[19]


class _Py_global_strings_identifiers_py__weaklistoffset_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[18]


class _Py_global_strings_identifiers_py__weakref_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py__xor_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_abc_impl(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_abstract_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_active(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_annotation(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_anonymous_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_argtypes_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_as_parameter_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_asyncio_future_blocking(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[24]


class _Py_global_strings_identifiers_py_blksize(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_bootstrap(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_check_retval_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_dealloc_warn(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_feature_version(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py_fields_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_finalizing(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_find_and_load(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_fix_up_module(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_flags_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_get_sourcefile(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_handle_fromlist(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py_initializing(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_io(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_is_text_encoding(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py_length_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_limbo(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_lock_unlock_module(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[19]


class _Py_global_strings_identifiers_py_loop(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_needs_com_addref_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[18]


class _Py_global_strings_identifiers_py_only_immortal(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_pack_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_restype_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_showwarnmsg(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_shutdown(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_slotnames(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_strptime_datetime(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[18]


class _Py_global_strings_identifiers_py_swappedbytes_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_type_(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_uninitialized_submodules(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[25]


class _Py_global_strings_identifiers_py_warn_unawaited_coroutine(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[25]


class _Py_global_strings_identifiers_py_xoptions(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_abs_tol(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_access(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_add(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_add_done_callback(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py_after_in_child(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_after_in_parent(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_aggregate_class(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_alias(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_append(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_arg(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_argdefs(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_args(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_arguments(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_argv(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_as_integer_ratio(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py_ast(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_attribute(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_authorizer_callback(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[19]


class _Py_global_strings_identifiers_py_autocommit(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_backtick(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_base(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_before(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_big(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_binary_form(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_block(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_bound(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_buffer(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_buffer_callback(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_buffer_size(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_buffering(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_buffers(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_bufsize(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_builtins(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_byteorder(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_bytes(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_bytes_per_sep(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_c_call(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_c_exception(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_c_return(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_cached_statements(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py_cadata(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_cafile(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_call(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_call_exception_handler(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[22]


class _Py_global_strings_identifiers_py_call_soon(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_cancel(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_capath(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_category(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_cb_type(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_certfile(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_check_same_thread(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py_clear(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_close(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_closed(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_closefd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_closure(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_co_argcount(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_co_cellvars(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_co_code(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_co_consts(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_co_exceptiontable(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py_co_filename(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_co_firstlineno(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_co_flags(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_co_freevars(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_co_kwonlyargcount(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py_co_linetable(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_co_name(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_co_names(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_co_nlocals(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_co_posonlyargcount(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[18]


class _Py_global_strings_identifiers_py_co_qualname(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_co_stacksize(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_co_varnames(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_code(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_command(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_comment_factory(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_compile_mode(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_consts(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_context(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_contravariant(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_cookie(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_copy(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_copyreg(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_coro(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_count(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_covariant(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_cwd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_data(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_database(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_decode(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_decoder(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_default(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_defaultaction(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_delete(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_depth(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_detect_types(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_deterministic(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_device(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_dict(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_dictcomp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_difference_update(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py_digest(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_digest_size(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_digestmod(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_dir_fd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_discard(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_dispatch_table(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_displayhook(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_dklen(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_doc(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_dont_inherit(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_dst(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_dst_dir_fd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_duration(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_eager_start(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_effective_ids(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_element_factory(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_encode(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_encoding(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_end(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_end_lineno(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_end_offset(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_endpos(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_entrypoint(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_env(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_errors(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_event(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_eventmask(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_exc_type(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_exc_value(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_excepthook(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_exception(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_existing_file_name(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[18]


class _Py_global_strings_identifiers_py_exp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_extend(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_extra_tokens(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_facility(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_factory(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_false(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_family(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_fanout(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_fd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_identifiers_py_fd2(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_fdel(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_fget(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_file(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_file_actions(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_filename(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_fileno(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_filepath(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_fillvalue(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_filters(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_final(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_find_class(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_fix_imports(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_flags(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_flush(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_follow_symlinks(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_format(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_frequency(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_from_param(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_fromlist(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_fromtimestamp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_fromutc(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_fset(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_func(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_future(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_generation(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_genexpr(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_get(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_get_debug(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_get_event_loop(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_get_loop(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_get_source(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_getattr(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_getstate(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_gid(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_globals(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_groupindex(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_groups(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_handle(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_hash_name(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_header(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_headers(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_hi(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_identifiers_py_hook(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_id(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_identifiers_py_ident(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_ignore(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_imag(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_importlib(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_in_fd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_incoming(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_indexgroup(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_inf(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_infer_variance(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_inheritable(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_initial(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_initial_bytes(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_initial_value(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_initval(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_inner_size(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_input(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_insert_comments(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_insert_pis(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_instructions(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_intern(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_intersection(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_is_running(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_isatty(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_isinstance(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_isoformat(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_isolation_level(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_istext(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_item(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_items(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_iter(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_iterable(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_iterations(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_join(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_jump(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_keepends(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_key(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_keyfile(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_keys(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_kind(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_kw(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_identifiers_py_kw1(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_kw2(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_lambda(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_last(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_last_exc(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_last_node(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_last_traceback(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_last_type(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_last_value(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_latin1(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_leaf_size(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_len(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_length(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_level(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_limit(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_line(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_line_buffering(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_lineno(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_listcomp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_little(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_lo(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_identifiers_py_locale(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_locals(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_logoption(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_loop(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_mapping(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_match(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_max_length(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_maxdigits(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_maxevents(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_maxmem(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_maxsplit(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_maxvalue(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_memLevel(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_memlimit(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_message(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_metaclass(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_metadata(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_method(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_mod(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_mode(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_module(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_module_globals(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_modules(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_mro(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_msg(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_mycmp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_n_arg(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_n_fields(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_n_sequence_fields(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[17]


class _Py_global_strings_identifiers_py_n_unnamed_fields(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py_name(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_name_from(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_namespace_separator(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[19]


class _Py_global_strings_identifiers_py_namespaces(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_narg(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_ndigits(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_new_file_name(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_new_limit(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_newline(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_newlines(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_next(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_nlocals(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_node_depth(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_node_offset(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_ns(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_identifiers_py_nstype(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_nt(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_identifiers_py_null(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_number(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_obj(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_object(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_offset(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_offset_dst(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_offset_src(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_on_type_read(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_onceregistry(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[12]


class _Py_global_strings_identifiers_py_only_keys(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_oparg(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_opcode(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_open(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_opener(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_operation(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_optimize(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_options(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_order(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_origin(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_out_fd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_outgoing(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_overlapped(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_owner(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_pages(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_parent(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_password(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_path(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_pattern(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_peek(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_persistent_id(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_persistent_load(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_person(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_pi_factory(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_pid(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_policy(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_pos(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_pos1(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_pos2(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_posix(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_print_file_and_line(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[19]


class _Py_global_strings_identifiers_py_priority(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_progress(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_progress_handler(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py_progress_routine(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py_proto(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_protocol(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_ps1(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_ps2(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_query(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_quotetabs(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_raw(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_read(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_read1(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_readable(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_readall(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_readinto(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_readinto1(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_readline(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_readonly(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_real(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_reducer_override(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py_registry(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_rel_tol(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_release(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_reload(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_repl(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_replace(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_reserved(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_reset(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_resetids(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_return(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_reverse(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_reversed(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_salt(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_sched_priority(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_scheduler(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_seek(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_seekable(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_selectors(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_self(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_send(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_sep(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_sequence(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_server_hostname(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_server_side(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_session(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_setcomp(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_setpgroup(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_setsid(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_setsigdef(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_setsigmask(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_setstate(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_shape(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_show_cmd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_signed(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_size(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_sizehint(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_skip_file_prefixes(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[18]


class _Py_global_strings_identifiers_py_sleep(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_sock(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_sort(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_sound(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_source(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_source_traceback(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[16]


class _Py_global_strings_identifiers_py_spam(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_src(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_src_dir_fd(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_stacklevel(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_start(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_statement(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_status(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_stderr(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_stdin(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_stdout(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_step(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_steps(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_store_name(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[10]


class _Py_global_strings_identifiers_py_strategy(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_strftime(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_strict(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_strict_mode(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_string(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_sub_key(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_symmetric_difference_update(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[27]


class _Py_global_strings_identifiers_py_tabsize(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_tag(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_target(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_target_is_directory(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[19]


class _Py_global_strings_identifiers_py_task(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_tb_frame(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_tb_lasti(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_tb_lineno(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_tb_next(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_tell(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_template(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_term(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_text(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_threading(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_throw(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_timeout(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_times(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_timetuple(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_top(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_trace_callback(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_traceback(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_trailers(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_translate(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[9]


class _Py_global_strings_identifiers_py_true(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_truncate(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_twice(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_txt(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_type(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_type_params(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_tz(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_identifiers_py_tzname(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_uid(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_unlink(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_unraisablehook(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[14]


class _Py_global_strings_identifiers_py_uri(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_usedforsecurity(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[15]


class _Py_global_strings_identifiers_py_value(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_values(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_version(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_volume(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[6]


class _Py_global_strings_identifiers_py_warnings(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_warnoptions(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[11]


class _Py_global_strings_identifiers_py_wbits(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_week(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_weekday(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[7]


class _Py_global_strings_identifiers_py_which(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_who(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[3]


class _Py_global_strings_identifiers_py_withdata(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_writable(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[8]


class _Py_global_strings_identifiers_py_write(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers_py_write_through(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[13]


class _Py_global_strings_identifiers_py_year(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[4]


class _Py_global_strings_identifiers_py_zdict(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[5]


class _Py_global_strings_identifiers(DataType, is_union=False):
    _py_CANCELLED = _Py_global_strings_identifiers_py_CANCELLED()
    _py_FINISHED = _Py_global_strings_identifiers_py_FINISHED()
    _py_False = _Py_global_strings_identifiers_py_False()
    _py_JSONDecodeError = _Py_global_strings_identifiers_py_JSONDecodeError()
    _py_PENDING = _Py_global_strings_identifiers_py_PENDING()
    _py_Py_Repr = _Py_global_strings_identifiers_py_Py_Repr()
    _py_TextIOWrapper = _Py_global_strings_identifiers_py_TextIOWrapper()
    _py_True = _Py_global_strings_identifiers_py_True()
    _py_WarningMessage = _Py_global_strings_identifiers_py_WarningMessage()
    _py_WindowsConsoleIO = _Py_global_strings_identifiers_py_WindowsConsoleIO()
    _py__IOBase_closed = "_Py_global_strings_identifiers_py_IOBase_closed"
    _py__abc_tpflags_ = "_Py_global_strings_identifiers_py_abc_tpflags_"
    _py__abs_ = "_Py_global_strings_identifiers_py_abs_"
    _py__abstractmethods_ = "_Py_global_strings_identifiers_py_abstractmethods_"
    _py__add_ = "_Py_global_strings_identifiers_py_add_"
    _py__aenter_ = "_Py_global_strings_identifiers_py_aenter_"
    _py__aexit_ = "_Py_global_strings_identifiers_py_aexit_"
    _py__aiter_ = "_Py_global_strings_identifiers_py_aiter_"
    _py__all_ = "_Py_global_strings_identifiers_py_all_"
    _py__and_ = "_Py_global_strings_identifiers_py_and_"
    _py__anext_ = "_Py_global_strings_identifiers_py_anext_"
    _py__annotations_ = "_Py_global_strings_identifiers_py_annotations_"
    _py__args_ = "_Py_global_strings_identifiers_py_args_"
    _py__asyncio_running_event_loop_ = "_Py_global_strings_identifiers_py_asyncio_running_event_loop_"
    _py__await_ = "_Py_global_strings_identifiers_py_await_"
    _py__bases_ = "_Py_global_strings_identifiers_py_bases_"
    _py__bool_ = "_Py_global_strings_identifiers_py_bool_"
    _py__buffer_ = "_Py_global_strings_identifiers_py_buffer_"
    _py__build_class_ = "_Py_global_strings_identifiers_py_build_class_"
    _py__builtins_ = "_Py_global_strings_identifiers_py_builtins_"
    _py__bytes_ = "_Py_global_strings_identifiers_py_bytes_"
    _py__call_ = "_Py_global_strings_identifiers_py_call_"
    _py__cantrace_ = "_Py_global_strings_identifiers_py_cantrace_"
    _py__class_ = "_Py_global_strings_identifiers_py_class_"
    _py__class_getitem_ = "_Py_global_strings_identifiers_py_class_getitem_"
    _py__classcell_ = "_Py_global_strings_identifiers_py_classcell_"
    _py__classdict_ = "_Py_global_strings_identifiers_py_classdict_"
    _py__classdictcell_ = "_Py_global_strings_identifiers_py_classdictcell_"
    _py__complex_ = "_Py_global_strings_identifiers_py_complex_"
    _py__contains_ = "_Py_global_strings_identifiers_py_contains_"
    _py__copy_ = "_Py_global_strings_identifiers_py_copy_"
    _py__ctypes_from_outparam_ = "_Py_global_strings_identifiers_py_ctypes_from_outparam_"
    _py__del_ = "_Py_global_strings_identifiers_py_del_"
    _py__delattr_ = "_Py_global_strings_identifiers_py_delattr_"
    _py__delete_ = "_Py_global_strings_identifiers_py_delete_"
    _py__delitem_ = "_Py_global_strings_identifiers_py_delitem_"
    _py__dict_ = "_Py_global_strings_identifiers_py_dict_"
    _py__dictoffset_ = "_Py_global_strings_identifiers_py_dictoffset_"
    _py__dir_ = "_Py_global_strings_identifiers_py_dir_"
    _py__divmod_ = "_Py_global_strings_identifiers_py_divmod_"
    _py__doc_ = "_Py_global_strings_identifiers_py_doc_"
    _py__enter_ = "_Py_global_strings_identifiers_py_enter_"
    _py__eq_ = "_Py_global_strings_identifiers_py_eq_"
    _py__exit_ = "_Py_global_strings_identifiers_py_exit_"
    _py__file_ = "_Py_global_strings_identifiers_py_file_"
    _py__float_ = "_Py_global_strings_identifiers_py_float_"
    _py__floordiv_ = "_Py_global_strings_identifiers_py_floordiv_"
    _py__format_ = "_Py_global_strings_identifiers_py_format_"
    _py__fspath_ = "_Py_global_strings_identifiers_py_fspath_"
    _py__ge_ = "_Py_global_strings_identifiers_py_ge_"
    _py__get_ = "_Py_global_strings_identifiers_py_get_"
    _py__getattr_ = "_Py_global_strings_identifiers_py_getattr_"
    _py__getattribute_ = "_Py_global_strings_identifiers_py_getattribute_"
    _py__getinitargs_ = "_Py_global_strings_identifiers_py_getinitargs_"
    _py__getitem_ = "_Py_global_strings_identifiers_py_getitem_"
    _py__getnewargs_ = "_Py_global_strings_identifiers_py_getnewargs_"
    _py__getnewargs_ex_ = "_Py_global_strings_identifiers_py_getnewargs_ex_"
    _py__getstate_ = "_Py_global_strings_identifiers_py_getstate_"
    _py__gt_ = "_Py_global_strings_identifiers_py_gt_"
    _py__hash_ = "_Py_global_strings_identifiers_py_hash_"
    _py__iadd_ = "_Py_global_strings_identifiers_py_iadd_"
    _py__iand_ = "_Py_global_strings_identifiers_py_iand_"
    _py__ifloordiv_ = "_Py_global_strings_identifiers_py_ifloordiv_"
    _py__ilshift_ = "_Py_global_strings_identifiers_py_ilshift_"
    _py__imatmul_ = "_Py_global_strings_identifiers_py_imatmul_"
    _py__imod_ = "_Py_global_strings_identifiers_py_imod_"
    _py__import_ = "_Py_global_strings_identifiers_py_import_"
    _py__imul_ = "_Py_global_strings_identifiers_py_imul_"
    _py__index_ = "_Py_global_strings_identifiers_py_index_"
    _py__init_ = "_Py_global_strings_identifiers_py_init_"
    _py__init_subclass_ = "_Py_global_strings_identifiers_py_init_subclass_"
    _py__instancecheck_ = "_Py_global_strings_identifiers_py_instancecheck_"
    _py__int_ = "_Py_global_strings_identifiers_py_int_"
    _py__invert_ = "_Py_global_strings_identifiers_py_invert_"
    _py__ior_ = "_Py_global_strings_identifiers_py_ior_"
    _py__ipow_ = "_Py_global_strings_identifiers_py_ipow_"
    _py__irshift_ = "_Py_global_strings_identifiers_py_irshift_"
    _py__isabstractmethod_ = "_Py_global_strings_identifiers_py_isabstractmethod_"
    _py__isub_ = "_Py_global_strings_identifiers_py_isub_"
    _py__iter_ = "_Py_global_strings_identifiers_py_iter_"
    _py__itruediv_ = "_Py_global_strings_identifiers_py_itruediv_"
    _py__ixor_ = "_Py_global_strings_identifiers_py_ixor_"
    _py__le_ = "_Py_global_strings_identifiers_py_le_"
    _py__len_ = "_Py_global_strings_identifiers_py_len_"
    _py__length_hint_ = "_Py_global_strings_identifiers_py_length_hint_"
    _py__lltrace_ = "_Py_global_strings_identifiers_py_lltrace_"
    _py__loader_ = "_Py_global_strings_identifiers_py_loader_"
    _py__lshift_ = "_Py_global_strings_identifiers_py_lshift_"
    _py__lt_ = "_Py_global_strings_identifiers_py_lt_"
    _py__main_ = "_Py_global_strings_identifiers_py_main_"
    _py__matmul_ = "_Py_global_strings_identifiers_py_matmul_"
    _py__missing_ = "_Py_global_strings_identifiers_py_missing_"
    _py__mod_ = "_Py_global_strings_identifiers_py_mod_"
    _py__module_ = "_Py_global_strings_identifiers_py_module_"
    _py__mro_entries_ = "_Py_global_strings_identifiers_py_mro_entries_"
    _py__mul_ = "_Py_global_strings_identifiers_py_mul_"
    _py__name_ = "_Py_global_strings_identifiers_py_name_"
    _py__ne_ = "_Py_global_strings_identifiers_py_ne_"
    _py__neg_ = "_Py_global_strings_identifiers_py_neg_"
    _py__new_ = "_Py_global_strings_identifiers_py_new_"
    _py__newobj_ = "_Py_global_strings_identifiers_py_newobj_"
    _py__newobj_ex_ = "_Py_global_strings_identifiers_py_newobj_ex_"
    _py__next_ = "_Py_global_strings_identifiers_py_next_"
    _py__notes_ = "_Py_global_strings_identifiers_py_notes_"
    _py__or_ = "_Py_global_strings_identifiers_py_or_"
    _py__orig_class_ = "_Py_global_strings_identifiers_py_orig_class_"
    _py__origin_ = "_Py_global_strings_identifiers_py_origin_"
    _py__package_ = "_Py_global_strings_identifiers_py_package_"
    _py__parameters_ = "_Py_global_strings_identifiers_py_parameters_"
    _py__path_ = "_Py_global_strings_identifiers_py_path_"
    _py__pos_ = "_Py_global_strings_identifiers_py_pos_"
    _py__pow_ = "_Py_global_strings_identifiers_py_pow_"
    _py__prepare_ = "_Py_global_strings_identifiers_py_prepare_"
    _py__qualname_ = "_Py_global_strings_identifiers_py_qualname_"
    _py__radd_ = "_Py_global_strings_identifiers_py_radd_"
    _py__rand_ = "_Py_global_strings_identifiers_py_rand_"
    _py__rdivmod_ = "_Py_global_strings_identifiers_py_rdivmod_"
    _py__reduce_ = "_Py_global_strings_identifiers_py_reduce_"
    _py__reduce_ex_ = "_Py_global_strings_identifiers_py_reduce_ex_"
    _py__release_buffer_ = "_Py_global_strings_identifiers_py_release_buffer_"
    _py__repr_ = "_Py_global_strings_identifiers_py_repr_"
    _py__reversed_ = "_Py_global_strings_identifiers_py_reversed_"
    _py__rfloordiv_ = "_Py_global_strings_identifiers_py_rfloordiv_"
    _py__rlshift_ = "_Py_global_strings_identifiers_py_rlshift_"
    _py__rmatmul_ = "_Py_global_strings_identifiers_py_rmatmul_"
    _py__rmod_ = "_Py_global_strings_identifiers_py_rmod_"
    _py__rmul_ = "_Py_global_strings_identifiers_py_rmul_"
    _py__ror_ = "_Py_global_strings_identifiers_py_ror_"
    _py__round_ = "_Py_global_strings_identifiers_py_round_"
    _py__rpow_ = "_Py_global_strings_identifiers_py_rpow_"
    _py__rrshift_ = "_Py_global_strings_identifiers_py_rrshift_"
    _py__rshift_ = "_Py_global_strings_identifiers_py_rshift_"
    _py__rsub_ = "_Py_global_strings_identifiers_py_rsub_"
    _py__rtruediv_ = "_Py_global_strings_identifiers_py_rtruediv_"
    _py__rxor_ = "_Py_global_strings_identifiers_py_rxor_"
    _py__set_ = "_Py_global_strings_identifiers_py_set_"
    _py__set_name_ = "_Py_global_strings_identifiers_py_set_name_"
    _py__setattr_ = "_Py_global_strings_identifiers_py_setattr_"
    _py__setitem_ = "_Py_global_strings_identifiers_py_setitem_"
    _py__setstate_ = "_Py_global_strings_identifiers_py_setstate_"
    _py__sizeof_ = "_Py_global_strings_identifiers_py_sizeof_"
    _py__slotnames_ = "_Py_global_strings_identifiers_py_slotnames_"
    _py__slots_ = "_Py_global_strings_identifiers_py_slots_"
    _py__spec_ = "_Py_global_strings_identifiers_py_spec_"
    _py__str_ = "_Py_global_strings_identifiers_py_str_"
    _py__sub_ = "_Py_global_strings_identifiers_py_sub_"
    _py__subclasscheck_ = "_Py_global_strings_identifiers_py_subclasscheck_"
    _py__subclasshook_ = "_Py_global_strings_identifiers_py_subclasshook_"
    _py__truediv_ = "_Py_global_strings_identifiers_py_truediv_"
    _py__trunc_ = "_Py_global_strings_identifiers_py_trunc_"
    _py__type_params_ = "_Py_global_strings_identifiers_py_type_params_"
    _py__typing_is_unpacked_typevartuple_ = "_Py_global_strings_identifiers_py_typing_is_unpacked_typevartuple_"
    _py__typing_prepare_subst_ = "_Py_global_strings_identifiers_py_typing_prepare_subst_"
    _py__typing_subst_ = "_Py_global_strings_identifiers_py_typing_subst_"
    _py__typing_unpacked_tuple_args_ = "_Py_global_strings_identifiers_py_typing_unpacked_tuple_args_"
    _py__warningregistry_ = "_Py_global_strings_identifiers_py_warningregistry_"
    _py__weaklistoffset_ = "_Py_global_strings_identifiers_py_weaklistoffset_"
    _py__weakref_ = "_Py_global_strings_identifiers_py_weakref_"
    _py__xor_ = "_Py_global_strings_identifiers_py_xor_"
    _py_abc_impl = _Py_global_strings_identifiers_py_abc_impl()
    _py_abstract_ = _Py_global_strings_identifiers_py_abstract_()
    _py_active = _Py_global_strings_identifiers_py_active()
    _py_annotation = _Py_global_strings_identifiers_py_annotation()
    _py_anonymous_ = _Py_global_strings_identifiers_py_anonymous_()
    _py_argtypes_ = _Py_global_strings_identifiers_py_argtypes_()
    _py_as_parameter_ = _Py_global_strings_identifiers_py_as_parameter_()
    _py_asyncio_future_blocking = _Py_global_strings_identifiers_py_asyncio_future_blocking()
    _py_blksize = _Py_global_strings_identifiers_py_blksize()
    _py_bootstrap = _Py_global_strings_identifiers_py_bootstrap()
    _py_check_retval_ = _Py_global_strings_identifiers_py_check_retval_()
    _py_dealloc_warn = _Py_global_strings_identifiers_py_dealloc_warn()
    _py_feature_version = _Py_global_strings_identifiers_py_feature_version()
    _py_fields_ = _Py_global_strings_identifiers_py_fields_()
    _py_finalizing = _Py_global_strings_identifiers_py_finalizing()
    _py_find_and_load = _Py_global_strings_identifiers_py_find_and_load()
    _py_fix_up_module = _Py_global_strings_identifiers_py_fix_up_module()
    _py_flags_ = _Py_global_strings_identifiers_py_flags_()
    _py_get_sourcefile = _Py_global_strings_identifiers_py_get_sourcefile()
    _py_handle_fromlist = _Py_global_strings_identifiers_py_handle_fromlist()
    _py_initializing = _Py_global_strings_identifiers_py_initializing()
    _py_io = _Py_global_strings_identifiers_py_io()
    _py_is_text_encoding = _Py_global_strings_identifiers_py_is_text_encoding()
    _py_length_ = _Py_global_strings_identifiers_py_length_()
    _py_limbo = _Py_global_strings_identifiers_py_limbo()
    _py_lock_unlock_module = _Py_global_strings_identifiers_py_lock_unlock_module()
    _py_loop = _Py_global_strings_identifiers_py_loop()
    _py_needs_com_addref_ = _Py_global_strings_identifiers_py_needs_com_addref_()
    _py_only_immortal = _Py_global_strings_identifiers_py_only_immortal()
    _py_pack_ = _Py_global_strings_identifiers_py_pack_()
    _py_restype_ = _Py_global_strings_identifiers_py_restype_()
    _py_showwarnmsg = _Py_global_strings_identifiers_py_showwarnmsg()
    _py_shutdown = _Py_global_strings_identifiers_py_shutdown()
    _py_slotnames = _Py_global_strings_identifiers_py_slotnames()
    _py_strptime_datetime = _Py_global_strings_identifiers_py_strptime_datetime()
    _py_swappedbytes_ = _Py_global_strings_identifiers_py_swappedbytes_()
    _py_type_ = _Py_global_strings_identifiers_py_type_()
    _py_uninitialized_submodules = _Py_global_strings_identifiers_py_uninitialized_submodules()
    _py_warn_unawaited_coroutine = _Py_global_strings_identifiers_py_warn_unawaited_coroutine()
    _py_xoptions = _Py_global_strings_identifiers_py_xoptions()
    _py_abs_tol = _Py_global_strings_identifiers_py_abs_tol()
    _py_access = _Py_global_strings_identifiers_py_access()
    _py_add = _Py_global_strings_identifiers_py_add()
    _py_add_done_callback = _Py_global_strings_identifiers_py_add_done_callback()
    _py_after_in_child = _Py_global_strings_identifiers_py_after_in_child()
    _py_after_in_parent = _Py_global_strings_identifiers_py_after_in_parent()
    _py_aggregate_class = _Py_global_strings_identifiers_py_aggregate_class()
    _py_alias = _Py_global_strings_identifiers_py_alias()
    _py_append = _Py_global_strings_identifiers_py_append()
    _py_arg = _Py_global_strings_identifiers_py_arg()
    _py_argdefs = _Py_global_strings_identifiers_py_argdefs()
    _py_args = _Py_global_strings_identifiers_py_args()
    _py_arguments = _Py_global_strings_identifiers_py_arguments()
    _py_argv = _Py_global_strings_identifiers_py_argv()
    _py_as_integer_ratio = _Py_global_strings_identifiers_py_as_integer_ratio()
    _py_ast = _Py_global_strings_identifiers_py_ast()
    _py_attribute = _Py_global_strings_identifiers_py_attribute()
    _py_authorizer_callback = _Py_global_strings_identifiers_py_authorizer_callback()
    _py_autocommit = _Py_global_strings_identifiers_py_autocommit()
    _py_backtick = _Py_global_strings_identifiers_py_backtick()
    _py_base = _Py_global_strings_identifiers_py_base()
    _py_before = _Py_global_strings_identifiers_py_before()
    _py_big = _Py_global_strings_identifiers_py_big()
    _py_binary_form = _Py_global_strings_identifiers_py_binary_form()
    _py_block = _Py_global_strings_identifiers_py_block()
    _py_bound = _Py_global_strings_identifiers_py_bound()
    _py_buffer = _Py_global_strings_identifiers_py_buffer()
    _py_buffer_callback = _Py_global_strings_identifiers_py_buffer_callback()
    _py_buffer_size = _Py_global_strings_identifiers_py_buffer_size()
    _py_buffering = _Py_global_strings_identifiers_py_buffering()
    _py_buffers = _Py_global_strings_identifiers_py_buffers()
    _py_bufsize = _Py_global_strings_identifiers_py_bufsize()
    _py_builtins = _Py_global_strings_identifiers_py_builtins()
    _py_byteorder = _Py_global_strings_identifiers_py_byteorder()
    _py_bytes = _Py_global_strings_identifiers_py_bytes()
    _py_bytes_per_sep = _Py_global_strings_identifiers_py_bytes_per_sep()
    _py_c_call = _Py_global_strings_identifiers_py_c_call()
    _py_c_exception = _Py_global_strings_identifiers_py_c_exception()
    _py_c_return = _Py_global_strings_identifiers_py_c_return()
    _py_cached_statements = _Py_global_strings_identifiers_py_cached_statements()
    _py_cadata = _Py_global_strings_identifiers_py_cadata()
    _py_cafile = _Py_global_strings_identifiers_py_cafile()
    _py_call = _Py_global_strings_identifiers_py_call()
    _py_call_exception_handler = _Py_global_strings_identifiers_py_call_exception_handler()
    _py_call_soon = _Py_global_strings_identifiers_py_call_soon()
    _py_cancel = _Py_global_strings_identifiers_py_cancel()
    _py_capath = _Py_global_strings_identifiers_py_capath()
    _py_category = _Py_global_strings_identifiers_py_category()
    _py_cb_type = _Py_global_strings_identifiers_py_cb_type()
    _py_certfile = _Py_global_strings_identifiers_py_certfile()
    _py_check_same_thread = _Py_global_strings_identifiers_py_check_same_thread()
    _py_clear = _Py_global_strings_identifiers_py_clear()
    _py_close = _Py_global_strings_identifiers_py_close()
    _py_closed = _Py_global_strings_identifiers_py_closed()
    _py_closefd = _Py_global_strings_identifiers_py_closefd()
    _py_closure = _Py_global_strings_identifiers_py_closure()
    _py_co_argcount = _Py_global_strings_identifiers_py_co_argcount()
    _py_co_cellvars = _Py_global_strings_identifiers_py_co_cellvars()
    _py_co_code = _Py_global_strings_identifiers_py_co_code()
    _py_co_consts = _Py_global_strings_identifiers_py_co_consts()
    _py_co_exceptiontable = _Py_global_strings_identifiers_py_co_exceptiontable()
    _py_co_filename = _Py_global_strings_identifiers_py_co_filename()
    _py_co_firstlineno = _Py_global_strings_identifiers_py_co_firstlineno()
    _py_co_flags = _Py_global_strings_identifiers_py_co_flags()
    _py_co_freevars = _Py_global_strings_identifiers_py_co_freevars()
    _py_co_kwonlyargcount = _Py_global_strings_identifiers_py_co_kwonlyargcount()
    _py_co_linetable = _Py_global_strings_identifiers_py_co_linetable()
    _py_co_name = _Py_global_strings_identifiers_py_co_name()
    _py_co_names = _Py_global_strings_identifiers_py_co_names()
    _py_co_nlocals = _Py_global_strings_identifiers_py_co_nlocals()
    _py_co_posonlyargcount = _Py_global_strings_identifiers_py_co_posonlyargcount()
    _py_co_qualname = _Py_global_strings_identifiers_py_co_qualname()
    _py_co_stacksize = _Py_global_strings_identifiers_py_co_stacksize()
    _py_co_varnames = _Py_global_strings_identifiers_py_co_varnames()
    _py_code = _Py_global_strings_identifiers_py_code()
    _py_command = _Py_global_strings_identifiers_py_command()
    _py_comment_factory = _Py_global_strings_identifiers_py_comment_factory()
    _py_compile_mode = _Py_global_strings_identifiers_py_compile_mode()
    _py_consts = _Py_global_strings_identifiers_py_consts()
    _py_context = _Py_global_strings_identifiers_py_context()
    _py_contravariant = _Py_global_strings_identifiers_py_contravariant()
    _py_cookie = _Py_global_strings_identifiers_py_cookie()
    _py_copy = _Py_global_strings_identifiers_py_copy()
    _py_copyreg = _Py_global_strings_identifiers_py_copyreg()
    _py_coro = _Py_global_strings_identifiers_py_coro()
    _py_count = _Py_global_strings_identifiers_py_count()
    _py_covariant = _Py_global_strings_identifiers_py_covariant()
    _py_cwd = _Py_global_strings_identifiers_py_cwd()
    _py_data = _Py_global_strings_identifiers_py_data()
    _py_database = _Py_global_strings_identifiers_py_database()
    _py_decode = _Py_global_strings_identifiers_py_decode()
    _py_decoder = _Py_global_strings_identifiers_py_decoder()
    _py_default = _Py_global_strings_identifiers_py_default()
    _py_defaultaction = _Py_global_strings_identifiers_py_defaultaction()
    _py_delete = _Py_global_strings_identifiers_py_delete()
    _py_depth = _Py_global_strings_identifiers_py_depth()
    _py_detect_types = _Py_global_strings_identifiers_py_detect_types()
    _py_deterministic = _Py_global_strings_identifiers_py_deterministic()
    _py_device = _Py_global_strings_identifiers_py_device()
    _py_dict = _Py_global_strings_identifiers_py_dict()
    _py_dictcomp = _Py_global_strings_identifiers_py_dictcomp()
    _py_difference_update = _Py_global_strings_identifiers_py_difference_update()
    _py_digest = _Py_global_strings_identifiers_py_digest()
    _py_digest_size = _Py_global_strings_identifiers_py_digest_size()
    _py_digestmod = _Py_global_strings_identifiers_py_digestmod()
    _py_dir_fd = _Py_global_strings_identifiers_py_dir_fd()
    _py_discard = _Py_global_strings_identifiers_py_discard()
    _py_dispatch_table = _Py_global_strings_identifiers_py_dispatch_table()
    _py_displayhook = _Py_global_strings_identifiers_py_displayhook()
    _py_dklen = _Py_global_strings_identifiers_py_dklen()
    _py_doc = _Py_global_strings_identifiers_py_doc()
    _py_dont_inherit = _Py_global_strings_identifiers_py_dont_inherit()
    _py_dst = _Py_global_strings_identifiers_py_dst()
    _py_dst_dir_fd = _Py_global_strings_identifiers_py_dst_dir_fd()
    _py_duration = _Py_global_strings_identifiers_py_duration()
    _py_eager_start = _Py_global_strings_identifiers_py_eager_start()
    _py_effective_ids = _Py_global_strings_identifiers_py_effective_ids()
    _py_element_factory = _Py_global_strings_identifiers_py_element_factory()
    _py_encode = _Py_global_strings_identifiers_py_encode()
    _py_encoding = _Py_global_strings_identifiers_py_encoding()
    _py_end = _Py_global_strings_identifiers_py_end()
    _py_end_lineno = _Py_global_strings_identifiers_py_end_lineno()
    _py_end_offset = _Py_global_strings_identifiers_py_end_offset()
    _py_endpos = _Py_global_strings_identifiers_py_endpos()
    _py_entrypoint = _Py_global_strings_identifiers_py_entrypoint()
    _py_env = _Py_global_strings_identifiers_py_env()
    _py_errors = _Py_global_strings_identifiers_py_errors()
    _py_event = _Py_global_strings_identifiers_py_event()
    _py_eventmask = _Py_global_strings_identifiers_py_eventmask()
    _py_exc_type = _Py_global_strings_identifiers_py_exc_type()
    _py_exc_value = _Py_global_strings_identifiers_py_exc_value()
    _py_excepthook = _Py_global_strings_identifiers_py_excepthook()
    _py_exception = _Py_global_strings_identifiers_py_exception()
    _py_existing_file_name = _Py_global_strings_identifiers_py_existing_file_name()
    _py_exp = _Py_global_strings_identifiers_py_exp()
    _py_extend = _Py_global_strings_identifiers_py_extend()
    _py_extra_tokens = _Py_global_strings_identifiers_py_extra_tokens()
    _py_facility = _Py_global_strings_identifiers_py_facility()
    _py_factory = _Py_global_strings_identifiers_py_factory()
    _py_false = _Py_global_strings_identifiers_py_false()
    _py_family = _Py_global_strings_identifiers_py_family()
    _py_fanout = _Py_global_strings_identifiers_py_fanout()
    _py_fd = _Py_global_strings_identifiers_py_fd()
    _py_fd2 = _Py_global_strings_identifiers_py_fd2()
    _py_fdel = _Py_global_strings_identifiers_py_fdel()
    _py_fget = _Py_global_strings_identifiers_py_fget()
    _py_file = _Py_global_strings_identifiers_py_file()
    _py_file_actions = _Py_global_strings_identifiers_py_file_actions()
    _py_filename = _Py_global_strings_identifiers_py_filename()
    _py_fileno = _Py_global_strings_identifiers_py_fileno()
    _py_filepath = _Py_global_strings_identifiers_py_filepath()
    _py_fillvalue = _Py_global_strings_identifiers_py_fillvalue()
    _py_filters = _Py_global_strings_identifiers_py_filters()
    _py_final = _Py_global_strings_identifiers_py_final()
    _py_find_class = _Py_global_strings_identifiers_py_find_class()
    _py_fix_imports = _Py_global_strings_identifiers_py_fix_imports()
    _py_flags = _Py_global_strings_identifiers_py_flags()
    _py_flush = _Py_global_strings_identifiers_py_flush()
    _py_follow_symlinks = _Py_global_strings_identifiers_py_follow_symlinks()
    _py_format = _Py_global_strings_identifiers_py_format()
    _py_frequency = _Py_global_strings_identifiers_py_frequency()
    _py_from_param = _Py_global_strings_identifiers_py_from_param()
    _py_fromlist = _Py_global_strings_identifiers_py_fromlist()
    _py_fromtimestamp = _Py_global_strings_identifiers_py_fromtimestamp()
    _py_fromutc = _Py_global_strings_identifiers_py_fromutc()
    _py_fset = _Py_global_strings_identifiers_py_fset()
    _py_func = _Py_global_strings_identifiers_py_func()
    _py_future = _Py_global_strings_identifiers_py_future()
    _py_generation = _Py_global_strings_identifiers_py_generation()
    _py_genexpr = _Py_global_strings_identifiers_py_genexpr()
    _py_get = _Py_global_strings_identifiers_py_get()
    _py_get_debug = _Py_global_strings_identifiers_py_get_debug()
    _py_get_event_loop = _Py_global_strings_identifiers_py_get_event_loop()
    _py_get_loop = _Py_global_strings_identifiers_py_get_loop()
    _py_get_source = _Py_global_strings_identifiers_py_get_source()
    _py_getattr = _Py_global_strings_identifiers_py_getattr()
    _py_getstate = _Py_global_strings_identifiers_py_getstate()
    _py_gid = _Py_global_strings_identifiers_py_gid()
    _py_globals = _Py_global_strings_identifiers_py_globals()
    _py_groupindex = _Py_global_strings_identifiers_py_groupindex()
    _py_groups = _Py_global_strings_identifiers_py_groups()
    _py_handle = _Py_global_strings_identifiers_py_handle()
    _py_hash_name = _Py_global_strings_identifiers_py_hash_name()
    _py_header = _Py_global_strings_identifiers_py_header()
    _py_headers = _Py_global_strings_identifiers_py_headers()
    _py_hi = _Py_global_strings_identifiers_py_hi()
    _py_hook = _Py_global_strings_identifiers_py_hook()
    _py_id = _Py_global_strings_identifiers_py_id()
    _py_ident = _Py_global_strings_identifiers_py_ident()
    _py_ignore = _Py_global_strings_identifiers_py_ignore()
    _py_imag = _Py_global_strings_identifiers_py_imag()
    _py_importlib = _Py_global_strings_identifiers_py_importlib()
    _py_in_fd = _Py_global_strings_identifiers_py_in_fd()
    _py_incoming = _Py_global_strings_identifiers_py_incoming()
    _py_indexgroup = _Py_global_strings_identifiers_py_indexgroup()
    _py_inf = _Py_global_strings_identifiers_py_inf()
    _py_infer_variance = _Py_global_strings_identifiers_py_infer_variance()
    _py_inheritable = _Py_global_strings_identifiers_py_inheritable()
    _py_initial = _Py_global_strings_identifiers_py_initial()
    _py_initial_bytes = _Py_global_strings_identifiers_py_initial_bytes()
    _py_initial_value = _Py_global_strings_identifiers_py_initial_value()
    _py_initval = _Py_global_strings_identifiers_py_initval()
    _py_inner_size = _Py_global_strings_identifiers_py_inner_size()
    _py_input = _Py_global_strings_identifiers_py_input()
    _py_insert_comments = _Py_global_strings_identifiers_py_insert_comments()
    _py_insert_pis = _Py_global_strings_identifiers_py_insert_pis()
    _py_instructions = _Py_global_strings_identifiers_py_instructions()
    _py_intern = _Py_global_strings_identifiers_py_intern()
    _py_intersection = _Py_global_strings_identifiers_py_intersection()
    _py_is_running = _Py_global_strings_identifiers_py_is_running()
    _py_isatty = _Py_global_strings_identifiers_py_isatty()
    _py_isinstance = _Py_global_strings_identifiers_py_isinstance()
    _py_isoformat = _Py_global_strings_identifiers_py_isoformat()
    _py_isolation_level = _Py_global_strings_identifiers_py_isolation_level()
    _py_istext = _Py_global_strings_identifiers_py_istext()
    _py_item = _Py_global_strings_identifiers_py_item()
    _py_items = _Py_global_strings_identifiers_py_items()
    _py_iter = _Py_global_strings_identifiers_py_iter()
    _py_iterable = _Py_global_strings_identifiers_py_iterable()
    _py_iterations = _Py_global_strings_identifiers_py_iterations()
    _py_join = _Py_global_strings_identifiers_py_join()
    _py_jump = _Py_global_strings_identifiers_py_jump()
    _py_keepends = _Py_global_strings_identifiers_py_keepends()
    _py_key = _Py_global_strings_identifiers_py_key()
    _py_keyfile = _Py_global_strings_identifiers_py_keyfile()
    _py_keys = _Py_global_strings_identifiers_py_keys()
    _py_kind = _Py_global_strings_identifiers_py_kind()
    _py_kw = _Py_global_strings_identifiers_py_kw()
    _py_kw1 = _Py_global_strings_identifiers_py_kw1()
    _py_kw2 = _Py_global_strings_identifiers_py_kw2()
    _py_lambda = _Py_global_strings_identifiers_py_lambda()
    _py_last = _Py_global_strings_identifiers_py_last()
    _py_last_exc = _Py_global_strings_identifiers_py_last_exc()
    _py_last_node = _Py_global_strings_identifiers_py_last_node()
    _py_last_traceback = _Py_global_strings_identifiers_py_last_traceback()
    _py_last_type = _Py_global_strings_identifiers_py_last_type()
    _py_last_value = _Py_global_strings_identifiers_py_last_value()
    _py_latin1 = _Py_global_strings_identifiers_py_latin1()
    _py_leaf_size = _Py_global_strings_identifiers_py_leaf_size()
    _py_len = _Py_global_strings_identifiers_py_len()
    _py_length = _Py_global_strings_identifiers_py_length()
    _py_level = _Py_global_strings_identifiers_py_level()
    _py_limit = _Py_global_strings_identifiers_py_limit()
    _py_line = _Py_global_strings_identifiers_py_line()
    _py_line_buffering = _Py_global_strings_identifiers_py_line_buffering()
    _py_lineno = _Py_global_strings_identifiers_py_lineno()
    _py_listcomp = _Py_global_strings_identifiers_py_listcomp()
    _py_little = _Py_global_strings_identifiers_py_little()
    _py_lo = _Py_global_strings_identifiers_py_lo()
    _py_locale = _Py_global_strings_identifiers_py_locale()
    _py_locals = _Py_global_strings_identifiers_py_locals()
    _py_logoption = _Py_global_strings_identifiers_py_logoption()
    _py_loop = _Py_global_strings_identifiers_py_loop()
    _py_mapping = _Py_global_strings_identifiers_py_mapping()
    _py_match = _Py_global_strings_identifiers_py_match()
    _py_max_length = _Py_global_strings_identifiers_py_max_length()
    _py_maxdigits = _Py_global_strings_identifiers_py_maxdigits()
    _py_maxevents = _Py_global_strings_identifiers_py_maxevents()
    _py_maxmem = _Py_global_strings_identifiers_py_maxmem()
    _py_maxsplit = _Py_global_strings_identifiers_py_maxsplit()
    _py_maxvalue = _Py_global_strings_identifiers_py_maxvalue()
    _py_memLevel = _Py_global_strings_identifiers_py_memLevel()
    _py_memlimit = _Py_global_strings_identifiers_py_memlimit()
    _py_message = _Py_global_strings_identifiers_py_message()
    _py_metaclass = _Py_global_strings_identifiers_py_metaclass()
    _py_metadata = _Py_global_strings_identifiers_py_metadata()
    _py_method = _Py_global_strings_identifiers_py_method()
    _py_mod = _Py_global_strings_identifiers_py_mod()
    _py_mode = _Py_global_strings_identifiers_py_mode()
    _py_module = _Py_global_strings_identifiers_py_module()
    _py_module_globals = _Py_global_strings_identifiers_py_module_globals()
    _py_modules = _Py_global_strings_identifiers_py_modules()
    _py_mro = _Py_global_strings_identifiers_py_mro()
    _py_msg = _Py_global_strings_identifiers_py_msg()
    _py_mycmp = _Py_global_strings_identifiers_py_mycmp()
    _py_n_arg = _Py_global_strings_identifiers_py_n_arg()
    _py_n_fields = _Py_global_strings_identifiers_py_n_fields()
    _py_n_sequence_fields = _Py_global_strings_identifiers_py_n_sequence_fields()
    _py_n_unnamed_fields = _Py_global_strings_identifiers_py_n_unnamed_fields()
    _py_name = _Py_global_strings_identifiers_py_name()
    _py_name_from = _Py_global_strings_identifiers_py_name_from()
    _py_namespace_separator = _Py_global_strings_identifiers_py_namespace_separator()
    _py_namespaces = _Py_global_strings_identifiers_py_namespaces()
    _py_narg = _Py_global_strings_identifiers_py_narg()
    _py_ndigits = _Py_global_strings_identifiers_py_ndigits()
    _py_new_file_name = _Py_global_strings_identifiers_py_new_file_name()
    _py_new_limit = _Py_global_strings_identifiers_py_new_limit()
    _py_newline = _Py_global_strings_identifiers_py_newline()
    _py_newlines = _Py_global_strings_identifiers_py_newlines()
    _py_next = _Py_global_strings_identifiers_py_next()
    _py_nlocals = _Py_global_strings_identifiers_py_nlocals()
    _py_node_depth = _Py_global_strings_identifiers_py_node_depth()
    _py_node_offset = _Py_global_strings_identifiers_py_node_offset()
    _py_ns = _Py_global_strings_identifiers_py_ns()
    _py_nstype = _Py_global_strings_identifiers_py_nstype()
    _py_nt = _Py_global_strings_identifiers_py_nt()
    _py_null = _Py_global_strings_identifiers_py_null()
    _py_number = _Py_global_strings_identifiers_py_number()
    _py_obj = _Py_global_strings_identifiers_py_obj()
    _py_object = _Py_global_strings_identifiers_py_object()
    _py_offset = _Py_global_strings_identifiers_py_offset()
    _py_offset_dst = _Py_global_strings_identifiers_py_offset_dst()
    _py_offset_src = _Py_global_strings_identifiers_py_offset_src()
    _py_on_type_read = _Py_global_strings_identifiers_py_on_type_read()
    _py_onceregistry = _Py_global_strings_identifiers_py_onceregistry()
    _py_only_keys = _Py_global_strings_identifiers_py_only_keys()
    _py_oparg = _Py_global_strings_identifiers_py_oparg()
    _py_opcode = _Py_global_strings_identifiers_py_opcode()
    _py_open = _Py_global_strings_identifiers_py_open()
    _py_opener = _Py_global_strings_identifiers_py_opener()
    _py_operation = _Py_global_strings_identifiers_py_operation()
    _py_optimize = _Py_global_strings_identifiers_py_optimize()
    _py_options = _Py_global_strings_identifiers_py_options()
    _py_order = _Py_global_strings_identifiers_py_order()
    _py_origin = _Py_global_strings_identifiers_py_origin()
    _py_out_fd = _Py_global_strings_identifiers_py_out_fd()
    _py_outgoing = _Py_global_strings_identifiers_py_outgoing()
    _py_overlapped = _Py_global_strings_identifiers_py_overlapped()
    _py_owner = _Py_global_strings_identifiers_py_owner()
    _py_pages = _Py_global_strings_identifiers_py_pages()
    _py_parent = _Py_global_strings_identifiers_py_parent()
    _py_password = _Py_global_strings_identifiers_py_password()
    _py_path = _Py_global_strings_identifiers_py_path()
    _py_pattern = _Py_global_strings_identifiers_py_pattern()
    _py_peek = _Py_global_strings_identifiers_py_peek()
    _py_persistent_id = _Py_global_strings_identifiers_py_persistent_id()
    _py_persistent_load = _Py_global_strings_identifiers_py_persistent_load()
    _py_person = _Py_global_strings_identifiers_py_person()
    _py_pi_factory = _Py_global_strings_identifiers_py_pi_factory()
    _py_pid = _Py_global_strings_identifiers_py_pid()
    _py_policy = _Py_global_strings_identifiers_py_policy()
    _py_pos = _Py_global_strings_identifiers_py_pos()
    _py_pos1 = _Py_global_strings_identifiers_py_pos1()
    _py_pos2 = _Py_global_strings_identifiers_py_pos2()
    _py_posix = _Py_global_strings_identifiers_py_posix()
    _py_print_file_and_line = _Py_global_strings_identifiers_py_print_file_and_line()
    _py_priority = _Py_global_strings_identifiers_py_priority()
    _py_progress = _Py_global_strings_identifiers_py_progress()
    _py_progress_handler = _Py_global_strings_identifiers_py_progress_handler()
    _py_progress_routine = _Py_global_strings_identifiers_py_progress_routine()
    _py_proto = _Py_global_strings_identifiers_py_proto()
    _py_protocol = _Py_global_strings_identifiers_py_protocol()
    _py_ps1 = _Py_global_strings_identifiers_py_ps1()
    _py_ps2 = _Py_global_strings_identifiers_py_ps2()
    _py_query = _Py_global_strings_identifiers_py_query()
    _py_quotetabs = _Py_global_strings_identifiers_py_quotetabs()
    _py_raw = _Py_global_strings_identifiers_py_raw()
    _py_read = _Py_global_strings_identifiers_py_read()
    _py_read1 = _Py_global_strings_identifiers_py_read1()
    _py_readable = _Py_global_strings_identifiers_py_readable()
    _py_readall = _Py_global_strings_identifiers_py_readall()
    _py_readinto = _Py_global_strings_identifiers_py_readinto()
    _py_readinto1 = _Py_global_strings_identifiers_py_readinto1()
    _py_readline = _Py_global_strings_identifiers_py_readline()
    _py_readonly = _Py_global_strings_identifiers_py_readonly()
    _py_real = _Py_global_strings_identifiers_py_real()
    _py_reducer_override = _Py_global_strings_identifiers_py_reducer_override()
    _py_registry = _Py_global_strings_identifiers_py_registry()
    _py_rel_tol = _Py_global_strings_identifiers_py_rel_tol()
    _py_release = _Py_global_strings_identifiers_py_release()
    _py_reload = _Py_global_strings_identifiers_py_reload()
    _py_repl = _Py_global_strings_identifiers_py_repl()
    _py_replace = _Py_global_strings_identifiers_py_replace()
    _py_reserved = _Py_global_strings_identifiers_py_reserved()
    _py_reset = _Py_global_strings_identifiers_py_reset()
    _py_resetids = _Py_global_strings_identifiers_py_resetids()
    _py_return = _Py_global_strings_identifiers_py_return()
    _py_reverse = _Py_global_strings_identifiers_py_reverse()
    _py_reversed = _Py_global_strings_identifiers_py_reversed()
    _py_salt = _Py_global_strings_identifiers_py_salt()
    _py_sched_priority = _Py_global_strings_identifiers_py_sched_priority()
    _py_scheduler = _Py_global_strings_identifiers_py_scheduler()
    _py_seek = _Py_global_strings_identifiers_py_seek()
    _py_seekable = _Py_global_strings_identifiers_py_seekable()
    _py_selectors = _Py_global_strings_identifiers_py_selectors()
    _py_self = _Py_global_strings_identifiers_py_self()
    _py_send = _Py_global_strings_identifiers_py_send()
    _py_sep = _Py_global_strings_identifiers_py_sep()
    _py_sequence = _Py_global_strings_identifiers_py_sequence()
    _py_server_hostname = _Py_global_strings_identifiers_py_server_hostname()
    _py_server_side = _Py_global_strings_identifiers_py_server_side()
    _py_session = _Py_global_strings_identifiers_py_session()
    _py_setcomp = _Py_global_strings_identifiers_py_setcomp()
    _py_setpgroup = _Py_global_strings_identifiers_py_setpgroup()
    _py_setsid = _Py_global_strings_identifiers_py_setsid()
    _py_setsigdef = _Py_global_strings_identifiers_py_setsigdef()
    _py_setsigmask = _Py_global_strings_identifiers_py_setsigmask()
    _py_setstate = _Py_global_strings_identifiers_py_setstate()
    _py_shape = _Py_global_strings_identifiers_py_shape()
    _py_show_cmd = _Py_global_strings_identifiers_py_show_cmd()
    _py_signed = _Py_global_strings_identifiers_py_signed()
    _py_size = _Py_global_strings_identifiers_py_size()
    _py_sizehint = _Py_global_strings_identifiers_py_sizehint()
    _py_skip_file_prefixes = _Py_global_strings_identifiers_py_skip_file_prefixes()
    _py_sleep = _Py_global_strings_identifiers_py_sleep()
    _py_sock = _Py_global_strings_identifiers_py_sock()
    _py_sort = _Py_global_strings_identifiers_py_sort()
    _py_sound = _Py_global_strings_identifiers_py_sound()
    _py_source = _Py_global_strings_identifiers_py_source()
    _py_source_traceback = _Py_global_strings_identifiers_py_source_traceback()
    _py_spam = _Py_global_strings_identifiers_py_spam()
    _py_src = _Py_global_strings_identifiers_py_src()
    _py_src_dir_fd = _Py_global_strings_identifiers_py_src_dir_fd()
    _py_stacklevel = _Py_global_strings_identifiers_py_stacklevel()
    _py_start = _Py_global_strings_identifiers_py_start()
    _py_statement = _Py_global_strings_identifiers_py_statement()
    _py_status = _Py_global_strings_identifiers_py_status()
    _py_stderr = _Py_global_strings_identifiers_py_stderr()
    _py_stdin = _Py_global_strings_identifiers_py_stdin()
    _py_stdout = _Py_global_strings_identifiers_py_stdout()
    _py_step = _Py_global_strings_identifiers_py_step()
    _py_steps = _Py_global_strings_identifiers_py_steps()
    _py_store_name = _Py_global_strings_identifiers_py_store_name()
    _py_strategy = _Py_global_strings_identifiers_py_strategy()
    _py_strftime = _Py_global_strings_identifiers_py_strftime()
    _py_strict = _Py_global_strings_identifiers_py_strict()
    _py_strict_mode = _Py_global_strings_identifiers_py_strict_mode()
    _py_string = _Py_global_strings_identifiers_py_string()
    _py_sub_key = _Py_global_strings_identifiers_py_sub_key()
    _py_symmetric_difference_update = _Py_global_strings_identifiers_py_symmetric_difference_update()
    _py_tabsize = _Py_global_strings_identifiers_py_tabsize()
    _py_tag = _Py_global_strings_identifiers_py_tag()
    _py_target = _Py_global_strings_identifiers_py_target()
    _py_target_is_directory = _Py_global_strings_identifiers_py_target_is_directory()
    _py_task = _Py_global_strings_identifiers_py_task()
    _py_tb_frame = _Py_global_strings_identifiers_py_tb_frame()
    _py_tb_lasti = _Py_global_strings_identifiers_py_tb_lasti()
    _py_tb_lineno = _Py_global_strings_identifiers_py_tb_lineno()
    _py_tb_next = _Py_global_strings_identifiers_py_tb_next()
    _py_tell = _Py_global_strings_identifiers_py_tell()
    _py_template = _Py_global_strings_identifiers_py_template()
    _py_term = _Py_global_strings_identifiers_py_term()
    _py_text = _Py_global_strings_identifiers_py_text()
    _py_threading = _Py_global_strings_identifiers_py_threading()
    _py_throw = _Py_global_strings_identifiers_py_throw()
    _py_timeout = _Py_global_strings_identifiers_py_timeout()
    _py_times = _Py_global_strings_identifiers_py_times()
    _py_timetuple = _Py_global_strings_identifiers_py_timetuple()
    _py_top = _Py_global_strings_identifiers_py_top()
    _py_trace_callback = _Py_global_strings_identifiers_py_trace_callback()
    _py_traceback = _Py_global_strings_identifiers_py_traceback()
    _py_trailers = _Py_global_strings_identifiers_py_trailers()
    _py_translate = _Py_global_strings_identifiers_py_translate()
    _py_true = _Py_global_strings_identifiers_py_true()
    _py_truncate = _Py_global_strings_identifiers_py_truncate()
    _py_twice = _Py_global_strings_identifiers_py_twice()
    _py_txt = _Py_global_strings_identifiers_py_txt()
    _py_type = _Py_global_strings_identifiers_py_type()
    _py_type_params = _Py_global_strings_identifiers_py_type_params()
    _py_tz = _Py_global_strings_identifiers_py_tz()
    _py_tzname = _Py_global_strings_identifiers_py_tzname()
    _py_uid = _Py_global_strings_identifiers_py_uid()
    _py_unlink = _Py_global_strings_identifiers_py_unlink()
    _py_unraisablehook = _Py_global_strings_identifiers_py_unraisablehook()
    _py_uri = _Py_global_strings_identifiers_py_uri()
    _py_usedforsecurity = _Py_global_strings_identifiers_py_usedforsecurity()
    _py_value = _Py_global_strings_identifiers_py_value()
    _py_values = _Py_global_strings_identifiers_py_values()
    _py_version = _Py_global_strings_identifiers_py_version()
    _py_volume = _Py_global_strings_identifiers_py_volume()
    _py_warnings = _Py_global_strings_identifiers_py_warnings()
    _py_warnoptions = _Py_global_strings_identifiers_py_warnoptions()
    _py_wbits = _Py_global_strings_identifiers_py_wbits()
    _py_week = _Py_global_strings_identifiers_py_week()
    _py_weekday = _Py_global_strings_identifiers_py_weekday()
    _py_which = _Py_global_strings_identifiers_py_which()
    _py_who = _Py_global_strings_identifiers_py_who()
    _py_withdata = _Py_global_strings_identifiers_py_withdata()
    _py_writable = _Py_global_strings_identifiers_py_writable()
    _py_write = _Py_global_strings_identifiers_py_write()
    _py_write_through = _Py_global_strings_identifiers_py_write_through()
    _py_year = _Py_global_strings_identifiers_py_year()
    _py_zdict = _Py_global_strings_identifiers_py_zdict()


class _Py_global_strings_ascii(DataType, is_union=False):
    _ascii = PyASCIIObject()
    _data = UnsignedByte[2]


class _Py_global_strings_latin1(DataType, is_union=False):
    _latin1 = PyCompactUnicodeObject()
    _data = UnsignedByte[2]


class _Py_global_strings(DataType, is_union=False):
    literals = _Py_global_strings_literals()
    identifiers = _Py_global_strings_identifiers()
    ascii = _Py_global_strings_ascii[128]
    latin1 = _Py_global_strings_latin1[128]


class asdl_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))


class asdl_generic_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype=Void()), length=1)


class asdl_identifier_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype=_object()), length=1)


class asdl_int_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Int[1]


class _PyOS_LongOption(DataType, is_union=False):
    name = Pointer(datatype=Int())
    has_arg = Int()
    val = Int()


class _parser_runtime_state(DataType, is_union=False):
    _not_used = Int()
    dummy_name = "_expr"


class _Py_async_gen_state(DataType, is_union=False):
    value_freelist = Array(datatype=Pointer(datatype="_PyAsyncGenWrappedValue"), length=80)
    value_numfree = Int()
    asend_freelist = Array(datatype=Pointer(datatype="PyAsyncGenASend"), length=80)
    asend_numfree = Int()


class _gil_runtime_state(DataType, is_union=False):
    interval = UnsignedLongLong()
    last_holder = _Py_atomic_address()
    locked = _Py_atomic_int()
    switch_number = UnsignedLongLong()
    cond = _opaque_pthread_cond_t()
    mutex = _opaque_pthread_mutex_t()
    switch_cond = _opaque_pthread_cond_t()
    switch_mutex = _opaque_pthread_mutex_t()


class _Py_exc_state(DataType, is_union=False):
    errnomap = Pointer(datatype=_object())
    memerrors_freelist = Pointer(datatype=PyBaseExceptionObject())
    memerrors_numfree = Int()
    PyExc_ExceptionGroup = Pointer(datatype=_object())


class _PyASTOptimizeState(DataType, is_union=False):
    optimize = Int()
    ff_features = Int()
    recursion_depth = Int()
    recursion_limit = Int()


class _PyCompile_ExceptHandlerInfo(DataType, is_union=False):
    h_offset = Int()
    h_startdepth = Int()
    h_preserve_lasti = Int()


class _PyCompile_Instruction(DataType, is_union=False):
    i_opcode = Int()
    i_oparg = Int()
    i_loc = _PyCompilerSrcLocation()
    i_except_handler_info = _PyCompile_ExceptHandlerInfo()


class _PyCompile_InstructionSequence(DataType, is_union=False):
    s_instrs = Pointer(datatype=_PyCompile_Instruction())
    s_allocated = Int()
    s_used = Int()
    s_labelmap = Pointer(datatype=Int())
    s_labelmap_size = Int()
    s_next_free_label = Int()


class _PyCompile_CodeUnitMetadata(DataType, is_union=False):
    u_name = Pointer(datatype=_object())
    u_qualname = Pointer(datatype=_object())
    u_consts = Pointer(datatype=_object())
    u_names = Pointer(datatype=_object())
    u_varnames = Pointer(datatype=_object())
    u_cellvars = Pointer(datatype=_object())
    u_freevars = Pointer(datatype=_object())
    u_fasthidden = Pointer(datatype=_object())
    u_argcount = LongLong()
    u_posonlyargcount = LongLong()
    u_kwonlyargcount = LongLong()
    u_firstlineno = Int()


class _atexit_runtime_state(DataType, is_union=False):
    mutex = Pointer(datatype=Void())
    callbacks = Array(datatype=Pointer(datatype=Func()), length=32)
    ncallbacks = Int()


class atexit_callback(DataType, is_union=False):
    func = Pointer(datatype=Func())
    data = Pointer(datatype=Void())
    next = Pointer(datatype="atexit_callback")


class atexit_py_callback(DataType, is_union=False):
    func = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    kwargs = Pointer(datatype=_object())


class atexit_state(DataType, is_union=False):
    ll_callbacks = Pointer(datatype=atexit_callback())
    last_ll_callback = Pointer(datatype=atexit_callback())
    callbacks = Pointer(datatype=Pointer(datatype=atexit_py_callback()))
    ncallbacks = Int()
    callback_len = Int()


class _signals_runtime_state_handlers(DataType, is_union=False):
    tripped = _Py_atomic_int()
    func = _Py_atomic_address()


class _signals_runtime_state_wakeup(DataType, is_union=False):
    fd = Int()
    warn_on_full_buffer = Int()


class _signals_runtime_state(DataType, is_union=False):
    handlers = _signals_runtime_state_handlers[32]
    wakeup = _signals_runtime_state_wakeup()
    is_tripped = _Py_atomic_int()
    default_handler = Pointer(datatype=_object())
    ignore_handler = Pointer(datatype=_object())
    unhandled_keyboard_interrupt = Int()


class _py_object_runtime_state(DataType, is_union=False):
    _not_used = Int()


class _py_object_state(DataType, is_union=False):
    _not_used = Int()


class _PyLoadGlobalCache(DataType, is_union=False):
    counter = UnsignedShort()
    index = UnsignedShort()
    module_keys_version = UnsignedShort()
    builtin_keys_version = UnsignedShort()


class _PyBinaryOpCache(DataType, is_union=False):
    counter = UnsignedShort()


class _PyUnpackSequenceCache(DataType, is_union=False):
    counter = UnsignedShort()


class _PyCompareOpCache(DataType, is_union=False):
    counter = UnsignedShort()


class _PyBinarySubscrCache(DataType, is_union=False):
    counter = UnsignedShort()


class _PySuperAttrCache(DataType, is_union=False):
    counter = UnsignedShort()


class _PyAttrCache(DataType, is_union=False):
    counter = UnsignedShort()
    version = UnsignedShort[2]
    index = UnsignedShort()


class _PyLoadMethodCache(DataType, is_union=False):
    counter = UnsignedShort()
    type_version = UnsignedShort[2]
    keys_version = UnsignedShort[2]
    descr = UnsignedShort[4]


class _PyCallCache(DataType, is_union=False):
    counter = UnsignedShort()
    func_version = UnsignedShort[2]


class _PyStoreSubscrCache(DataType, is_union=False):
    counter = UnsignedShort()


class _PyForIterCache(DataType, is_union=False):
    counter = UnsignedShort()


class _PySendCache(DataType, is_union=False):
    counter = UnsignedShort()


class callable_cache(DataType, is_union=False):
    isinstance = Pointer(datatype=_object())
    len = Pointer(datatype=_object())
    list_append = Pointer(datatype=_object())
    object_getattribute_ = Pointer(datatype=_object())


class _PyCodeConstructor(DataType, is_union=False):
    filename = Pointer(datatype=_object())
    name = Pointer(datatype=_object())
    qualname = Pointer(datatype=_object())
    flags = Int()
    code = Pointer(datatype=_object())
    firstlineno = Int()
    linetable = Pointer(datatype=_object())
    consts = Pointer(datatype=_object())
    names = Pointer(datatype=_object())
    localsplusnames = Pointer(datatype=_object())
    localspluskinds = Pointer(datatype=_object())
    argcount = Int()
    posonlyargcount = Int()
    kwonlyargcount = Int()
    stacksize = Int()
    exceptiontable = Pointer(datatype=_object())


class _PyShimCodeDef(DataType, is_union=False):
    code = Pointer(datatype=UnsignedByte())
    codelen = Int()
    stacksize = Int()
    cname = Pointer(datatype=Byte())


class pyhash_runtime_state_urandom_cache(DataType, is_union=False):
    fd = Int()
    st_dev = Int()
    st_ino = UnsignedLongLong()


class pyhash_runtime_state(DataType, is_union=False):
    urandom_cache = pyhash_runtime_state_urandom_cache()


class _Py_tuple_state(DataType, is_union=False):
    free_list = Array(datatype=Pointer(datatype=PyTupleObject()), length=20)
    numfree = Int[20]


class _PyTupleIterObject(DataType, is_union=False):
    ob_base = _object()
    it_index = LongLong()
    it_seq = Pointer(datatype=PyTupleObject())


class faulthandler_user_signal(DataType, is_union=False):
    enabled = Int()
    file = Pointer(datatype=_object())
    fd = Int()
    all_threads = Int()
    chain = Int()
    previous = sigaction()
    interp = Pointer(datatype="_is")


class _faulthandler_runtime_state_fatal_error(DataType, is_union=False):
    enabled = Int()
    file = Pointer(datatype=_object())
    fd = Int()
    all_threads = Int()
    interp = Pointer(datatype="_is")


class _faulthandler_runtime_state_thread(DataType, is_union=False):
    file = Pointer(datatype=_object())
    fd = Int()
    timeout_us = LongLong()
    repeat = Int()
    interp = Pointer(datatype="_is")
    exit = Int()
    header = Pointer(datatype=Byte())
    header_len = LongLong()
    cancel_event = Pointer(datatype=Void())
    running = Pointer(datatype=Void())


class _faulthandler_runtime_state(DataType, is_union=False):
    fatal_error = _faulthandler_runtime_state_fatal_error()
    thread = _faulthandler_runtime_state_thread()
    user_signals = Pointer(datatype=faulthandler_user_signal())
    stack = _darwin_sigaltstack()
    old_stack = _darwin_sigaltstack()


class _PyUnicode_Name_CAPI(DataType, is_union=False):
    getname = Pointer(datatype=Func())
    getcode = Pointer(datatype=Func())


class _fileutils_state(DataType, is_union=False):
    force_ascii = Int()


class _Py_float_runtime_state(DataType, is_union=False):
    float_format = Int()
    double_format = Int()


class _Py_float_state(DataType, is_union=False):
    numfree = Int()
    free_list = Pointer(datatype=PyFloatObject())


class _Py_slist_item_s(DataType, is_union=False):
    next = Pointer(datatype="_Py_slist_item_s")


class _Py_slist_t(DataType, is_union=False):
    head = Pointer(datatype=_Py_slist_item_s())


class _Py_hashtable_entry_t(DataType, is_union=False):
    _Py_slist_item = _Py_slist_item_s()
    key_hash = LongLong()
    key = Pointer(datatype=Void())
    value = Pointer(datatype=Void())


class _Py_hashtable_allocator_t(DataType, is_union=False):
    malloc = Pointer(datatype=Func())
    free = Pointer(datatype=Func())


class _Py_hashtable_t(DataType, is_union=False):
    nentries = LongLong()
    nbuckets = LongLong()
    buckets = Pointer(datatype=_Py_slist_t())
    get_entry_func = Pointer(datatype=Func())
    hash_func = Pointer(datatype=Func())
    compare_func = Pointer(datatype=Func())
    key_destroy_func = Pointer(datatype=Func())
    value_destroy_func = Pointer(datatype=Func())
    alloc = _Py_hashtable_allocator_t()


class _Py_list_state(DataType, is_union=False):
    free_list = Array(datatype=Pointer(datatype=PyListObject()), length=80)
    numfree = Int()


class _PyListIterObject(DataType, is_union=False):
    ob_base = _object()
    it_index = LongLong()
    it_seq = Pointer(datatype=PyListObject())


class debug_alloc_api_t(DataType, is_union=False):
    api_id = Byte()
    alloc = PyMemAllocatorEx()


class _pymem_allocators_standard(DataType, is_union=False):
    raw = PyMemAllocatorEx()
    mem = PyMemAllocatorEx()
    obj = PyMemAllocatorEx()


class _pymem_allocators_debug(DataType, is_union=False):
    raw = debug_alloc_api_t()
    mem = debug_alloc_api_t()
    obj = debug_alloc_api_t()


class _pymem_allocators(DataType, is_union=False):
    mutex = Pointer(datatype=Void())
    standard = _pymem_allocators_standard()
    debug = _pymem_allocators_debug()
    obj_arena = PyObjectArenaAllocator()


class PyGC_Head(DataType, is_union=False):
    _gc_next = UnsignedLongLong()
    _gc_prev = UnsignedLongLong()


class gc_generation(DataType, is_union=False):
    head = PyGC_Head()
    threshold = Int()
    count = Int()


class gc_generation_stats(DataType, is_union=False):
    collections = LongLong()
    collected = LongLong()
    uncollectable = LongLong()


class _gc_runtime_state(DataType, is_union=False):
    trash_delete_later = Pointer(datatype=_object())
    trash_delete_nesting = Int()
    enabled = Int()
    debug = Int()
    generations = gc_generation[3]
    generation0 = Pointer(datatype=PyGC_Head())
    permanent_generation = gc_generation()
    generation_stats = gc_generation_stats[3]
    collecting = Int()
    garbage = Pointer(datatype=_object())
    callbacks = Pointer(datatype=_object())
    long_lived_total = LongLong()
    long_lived_pending = LongLong()


class PyDictKeyEntry(DataType, is_union=False):
    me_hash = LongLong()
    me_key = Pointer(datatype=_object())
    me_value = Pointer(datatype=_object())


class PyDictUnicodeEntry(DataType, is_union=False):
    me_key = Pointer(datatype=_object())
    me_value = Pointer(datatype=_object())


class _dictkeysobject(DataType, is_union=False):
    dk_refcnt = LongLong()
    dk_log2_size = UnsignedByte()
    dk_log2_index_bytes = UnsignedByte()
    dk_kind = UnsignedByte()
    dk_version = UnsignedInt()
    dk_usable = LongLong()
    dk_nentries = LongLong()
    dk_indices = Byte[0]


class _dictvalues(DataType, is_union=False):
    values = Array(datatype=Pointer(datatype=_object()), length=1)


class propertyobject(DataType, is_union=False):
    ob_base = _object()
    prop_get = Pointer(datatype=_object())
    prop_set = Pointer(datatype=_object())
    prop_del = Pointer(datatype=_object())
    prop_doc = Pointer(datatype=_object())
    prop_name = Pointer(datatype=_object())
    getter_doc = Int()


class _import_runtime_state_extensions(DataType, is_union=False):
    mutex = Pointer(datatype=Void())
    hashtable = Pointer(datatype=_Py_hashtable_t())


class _import_runtime_state(DataType, is_union=False):
    inittab = Pointer(datatype=_inittab())
    last_module_index = LongLong()
    extensions = _import_runtime_state_extensions()
    pkgcontext = Pointer(datatype=Byte())


class _import_state_lock(DataType, is_union=False):
    mutex = Pointer(datatype=Void())
    thread = UnsignedLongLong()
    level = Int()


class _import_state_find_and_load(DataType, is_union=False):
    import_level = Int()
    accumulated = LongLong()
    header = Int()


class _import_state(DataType, is_union=False):
    modules = Pointer(datatype=_object())
    modules_by_index = Pointer(datatype=_object())
    importlib = Pointer(datatype=_object())
    override_frozen_modules = Int()
    override_multi_interp_extensions_check = Int()
    dlopenflags = Int()
    import_func = Pointer(datatype=_object())
    lock = _import_state_lock()
    find_and_load = _import_state_find_and_load()


class dl_info(DataType, is_union=False):
    dli_fname = Pointer(datatype=Byte())
    dli_fbase = Pointer(datatype=Void())
    dli_sname = Pointer(datatype=Byte())
    dli_saddr = Pointer(datatype=Void())


class _module_alias(DataType, is_union=False):
    name = Pointer(datatype=Byte())
    orig = Pointer(datatype=Byte())


class symtable(DataType, is_union=False):
    st_filename = Pointer(datatype=_object())
    st_cur = Pointer(datatype="_symtable_entry")
    st_top = Pointer(datatype="_symtable_entry")
    st_blocks = Pointer(datatype=_object())
    st_stack = Pointer(datatype=_object())
    st_global = Pointer(datatype=_object())
    st_nblocks = Int()
    st_private = Pointer(datatype=_object())
    st_future = Pointer(datatype=PyFutureFeatures())
    recursion_depth = Int()
    recursion_limit = Int()


class _symtable_entry(DataType, is_union=False):
    ob_base = _object()
    ste_id = Pointer(datatype=_object())
    ste_symbols = Pointer(datatype=_object())
    ste_name = Pointer(datatype=_object())
    ste_varnames = Pointer(datatype=_object())
    ste_children = Pointer(datatype=_object())
    ste_directives = Pointer(datatype=_object())
    ste_type = Int()
    ste_nested = Int()
    ste_free = UnsignedInt()
    ste_child_free = UnsignedInt()
    ste_generator = UnsignedInt()
    ste_coroutine = UnsignedInt()
    ste_comprehension = Int()
    ste_varargs = UnsignedInt()
    ste_varkeywords = UnsignedInt()
    ste_returns_value = UnsignedInt()
    ste_needs_class_closure = UnsignedInt()
    ste_needs_classdict = UnsignedInt()
    ste_comp_inlined = UnsignedInt()
    ste_comp_iter_target = UnsignedInt()
    ste_can_see_class_scope = UnsignedInt()
    ste_comp_iter_expr = Int()
    ste_lineno = Int()
    ste_col_offset = Int()
    ste_end_lineno = Int()
    ste_end_col_offset = Int()
    ste_opt_lineno = Int()
    ste_opt_col_offset = Int()
    ste_table = Pointer(datatype=symtable())
    ste_mangled_names = Pointer(datatype=_object())


class ast_state(DataType, is_union=False):
    initialized = Int()
    unused_recursion_depth = Int()
    unused_recursion_limit = Int()
    AST_type = Pointer(datatype=_object())
    Add_singleton = Pointer(datatype=_object())
    Add_type = Pointer(datatype=_object())
    And_singleton = Pointer(datatype=_object())
    And_type = Pointer(datatype=_object())
    AnnAssign_type = Pointer(datatype=_object())
    Assert_type = Pointer(datatype=_object())
    Assign_type = Pointer(datatype=_object())
    AsyncFor_type = Pointer(datatype=_object())
    AsyncFunctionDef_type = Pointer(datatype=_object())
    AsyncWith_type = Pointer(datatype=_object())
    Attribute_type = Pointer(datatype=_object())
    AugAssign_type = Pointer(datatype=_object())
    Await_type = Pointer(datatype=_object())
    BinOp_type = Pointer(datatype=_object())
    BitAnd_singleton = Pointer(datatype=_object())
    BitAnd_type = Pointer(datatype=_object())
    BitOr_singleton = Pointer(datatype=_object())
    BitOr_type = Pointer(datatype=_object())
    BitXor_singleton = Pointer(datatype=_object())
    BitXor_type = Pointer(datatype=_object())
    BoolOp_type = Pointer(datatype=_object())
    Break_type = Pointer(datatype=_object())
    Call_type = Pointer(datatype=_object())
    ClassDef_type = Pointer(datatype=_object())
    Compare_type = Pointer(datatype=_object())
    Constant_type = Pointer(datatype=_object())
    Continue_type = Pointer(datatype=_object())
    Del_singleton = Pointer(datatype=_object())
    Del_type = Pointer(datatype=_object())
    Delete_type = Pointer(datatype=_object())
    DictComp_type = Pointer(datatype=_object())
    Dict_type = Pointer(datatype=_object())
    Div_singleton = Pointer(datatype=_object())
    Div_type = Pointer(datatype=_object())
    Eq_singleton = Pointer(datatype=_object())
    Eq_type = Pointer(datatype=_object())
    ExceptHandler_type = Pointer(datatype=_object())
    Expr_type = Pointer(datatype=_object())
    Expression_type = Pointer(datatype=_object())
    FloorDiv_singleton = Pointer(datatype=_object())
    FloorDiv_type = Pointer(datatype=_object())
    For_type = Pointer(datatype=_object())
    FormattedValue_type = Pointer(datatype=_object())
    FunctionDef_type = Pointer(datatype=_object())
    FunctionType_type = Pointer(datatype=_object())
    GeneratorExp_type = Pointer(datatype=_object())
    Global_type = Pointer(datatype=_object())
    GtE_singleton = Pointer(datatype=_object())
    GtE_type = Pointer(datatype=_object())
    Gt_singleton = Pointer(datatype=_object())
    Gt_type = Pointer(datatype=_object())
    IfExp_type = Pointer(datatype=_object())
    If_type = Pointer(datatype=_object())
    ImportFrom_type = Pointer(datatype=_object())
    Import_type = Pointer(datatype=_object())
    In_singleton = Pointer(datatype=_object())
    In_type = Pointer(datatype=_object())
    Interactive_type = Pointer(datatype=_object())
    Invert_singleton = Pointer(datatype=_object())
    Invert_type = Pointer(datatype=_object())
    IsNot_singleton = Pointer(datatype=_object())
    IsNot_type = Pointer(datatype=_object())
    Is_singleton = Pointer(datatype=_object())
    Is_type = Pointer(datatype=_object())
    JoinedStr_type = Pointer(datatype=_object())
    LShift_singleton = Pointer(datatype=_object())
    LShift_type = Pointer(datatype=_object())
    Lambda_type = Pointer(datatype=_object())
    ListComp_type = Pointer(datatype=_object())
    List_type = Pointer(datatype=_object())
    Load_singleton = Pointer(datatype=_object())
    Load_type = Pointer(datatype=_object())
    LtE_singleton = Pointer(datatype=_object())
    LtE_type = Pointer(datatype=_object())
    Lt_singleton = Pointer(datatype=_object())
    Lt_type = Pointer(datatype=_object())
    MatMult_singleton = Pointer(datatype=_object())
    MatMult_type = Pointer(datatype=_object())
    MatchAs_type = Pointer(datatype=_object())
    MatchClass_type = Pointer(datatype=_object())
    MatchMapping_type = Pointer(datatype=_object())
    MatchOr_type = Pointer(datatype=_object())
    MatchSequence_type = Pointer(datatype=_object())
    MatchSingleton_type = Pointer(datatype=_object())
    MatchStar_type = Pointer(datatype=_object())
    MatchValue_type = Pointer(datatype=_object())
    Match_type = Pointer(datatype=_object())
    Mod_singleton = Pointer(datatype=_object())
    Mod_type = Pointer(datatype=_object())
    Module_type = Pointer(datatype=_object())
    Mult_singleton = Pointer(datatype=_object())
    Mult_type = Pointer(datatype=_object())
    Name_type = Pointer(datatype=_object())
    NamedExpr_type = Pointer(datatype=_object())
    Nonlocal_type = Pointer(datatype=_object())
    NotEq_singleton = Pointer(datatype=_object())
    NotEq_type = Pointer(datatype=_object())
    NotIn_singleton = Pointer(datatype=_object())
    NotIn_type = Pointer(datatype=_object())
    Not_singleton = Pointer(datatype=_object())
    Not_type = Pointer(datatype=_object())
    Or_singleton = Pointer(datatype=_object())
    Or_type = Pointer(datatype=_object())
    ParamSpec_type = Pointer(datatype=_object())
    Pass_type = Pointer(datatype=_object())
    Pow_singleton = Pointer(datatype=_object())
    Pow_type = Pointer(datatype=_object())
    RShift_singleton = Pointer(datatype=_object())
    RShift_type = Pointer(datatype=_object())
    Raise_type = Pointer(datatype=_object())
    Return_type = Pointer(datatype=_object())
    SetComp_type = Pointer(datatype=_object())
    Set_type = Pointer(datatype=_object())
    Slice_type = Pointer(datatype=_object())
    Starred_type = Pointer(datatype=_object())
    Store_singleton = Pointer(datatype=_object())
    Store_type = Pointer(datatype=_object())
    Sub_singleton = Pointer(datatype=_object())
    Sub_type = Pointer(datatype=_object())
    Subscript_type = Pointer(datatype=_object())
    TryStar_type = Pointer(datatype=_object())
    Try_type = Pointer(datatype=_object())
    Tuple_type = Pointer(datatype=_object())
    TypeAlias_type = Pointer(datatype=_object())
    TypeIgnore_type = Pointer(datatype=_object())
    TypeVarTuple_type = Pointer(datatype=_object())
    TypeVar_type = Pointer(datatype=_object())
    UAdd_singleton = Pointer(datatype=_object())
    UAdd_type = Pointer(datatype=_object())
    USub_singleton = Pointer(datatype=_object())
    USub_type = Pointer(datatype=_object())
    UnaryOp_type = Pointer(datatype=_object())
    While_type = Pointer(datatype=_object())
    With_type = Pointer(datatype=_object())
    YieldFrom_type = Pointer(datatype=_object())
    Yield_type = Pointer(datatype=_object())
    _dict_ = Pointer(datatype=_object())
    _doc_ = Pointer(datatype=_object())
    _match_args_ = Pointer(datatype=_object())
    _module_ = Pointer(datatype=_object())
    _attributes = Pointer(datatype=_object())
    _fields = Pointer(datatype=_object())
    alias_type = Pointer(datatype=_object())
    annotation = Pointer(datatype=_object())
    arg = Pointer(datatype=_object())
    arg_type = Pointer(datatype=_object())
    args = Pointer(datatype=_object())
    argtypes = Pointer(datatype=_object())
    arguments_type = Pointer(datatype=_object())
    asname = Pointer(datatype=_object())
    ast = Pointer(datatype=_object())
    attr = Pointer(datatype=_object())
    bases = Pointer(datatype=_object())
    body = Pointer(datatype=_object())
    boolop_type = Pointer(datatype=_object())
    bound = Pointer(datatype=_object())
    cases = Pointer(datatype=_object())
    cause = Pointer(datatype=_object())
    cls = Pointer(datatype=_object())
    cmpop_type = Pointer(datatype=_object())
    col_offset = Pointer(datatype=_object())
    comparators = Pointer(datatype=_object())
    comprehension_type = Pointer(datatype=_object())
    context_expr = Pointer(datatype=_object())
    conversion = Pointer(datatype=_object())
    ctx = Pointer(datatype=_object())
    decorator_list = Pointer(datatype=_object())
    defaults = Pointer(datatype=_object())
    elt = Pointer(datatype=_object())
    elts = Pointer(datatype=_object())
    end_col_offset = Pointer(datatype=_object())
    end_lineno = Pointer(datatype=_object())
    exc = Pointer(datatype=_object())
    excepthandler_type = Pointer(datatype=_object())
    expr_context_type = Pointer(datatype=_object())
    expr_type = Pointer(datatype=_object())
    finalbody = Pointer(datatype=_object())
    format_spec = Pointer(datatype=_object())
    func = Pointer(datatype=_object())
    generators = Pointer(datatype=_object())
    guard = Pointer(datatype=_object())
    handlers = Pointer(datatype=_object())
    id = Pointer(datatype=_object())
    ifs = Pointer(datatype=_object())
    is_async = Pointer(datatype=_object())
    items = Pointer(datatype=_object())
    iter = Pointer(datatype=_object())
    key = Pointer(datatype=_object())
    keys = Pointer(datatype=_object())
    keyword_type = Pointer(datatype=_object())
    keywords = Pointer(datatype=_object())
    kind = Pointer(datatype=_object())
    kw_defaults = Pointer(datatype=_object())
    kwarg = Pointer(datatype=_object())
    kwd_attrs = Pointer(datatype=_object())
    kwd_patterns = Pointer(datatype=_object())
    kwonlyargs = Pointer(datatype=_object())
    left = Pointer(datatype=_object())
    level = Pointer(datatype=_object())
    lineno = Pointer(datatype=_object())
    lower = Pointer(datatype=_object())
    match_case_type = Pointer(datatype=_object())
    mod_type = Pointer(datatype=_object())
    module = Pointer(datatype=_object())
    msg = Pointer(datatype=_object())
    name = Pointer(datatype=_object())
    names = Pointer(datatype=_object())
    op = Pointer(datatype=_object())
    operand = Pointer(datatype=_object())
    operator_type = Pointer(datatype=_object())
    ops = Pointer(datatype=_object())
    optional_vars = Pointer(datatype=_object())
    orelse = Pointer(datatype=_object())
    pattern = Pointer(datatype=_object())
    pattern_type = Pointer(datatype=_object())
    patterns = Pointer(datatype=_object())
    posonlyargs = Pointer(datatype=_object())
    rest = Pointer(datatype=_object())
    returns = Pointer(datatype=_object())
    right = Pointer(datatype=_object())
    simple = Pointer(datatype=_object())
    slice = Pointer(datatype=_object())
    step = Pointer(datatype=_object())
    stmt_type = Pointer(datatype=_object())
    subject = Pointer(datatype=_object())
    tag = Pointer(datatype=_object())
    target = Pointer(datatype=_object())
    targets = Pointer(datatype=_object())
    test = Pointer(datatype=_object())
    type = Pointer(datatype=_object())
    type_comment = Pointer(datatype=_object())
    type_ignore_type = Pointer(datatype=_object())
    type_ignores = Pointer(datatype=_object())
    type_param_type = Pointer(datatype=_object())
    type_params = Pointer(datatype=_object())
    unaryop_type = Pointer(datatype=_object())
    upper = Pointer(datatype=_object())
    value = Pointer(datatype=_object())
    values = Pointer(datatype=_object())
    vararg = Pointer(datatype=_object())
    withitem_type = Pointer(datatype=_object())


class _PyArgv(DataType, is_union=False):
    argc = LongLong()
    use_bytes_argv = Int()
    bytes_argv = Pointer(datatype=Pointer(datatype=Byte()))
    wchar_argv = Pointer(datatype=Pointer(datatype=Int()))


class _PyPreCmdline(DataType, is_union=False):
    argv = PyWideStringList()
    xoptions = PyWideStringList()
    isolated = Int()
    use_environment = Int()
    dev_mode = Int()
    warn_default_encoding = Int()


class _frame(DataType, is_union=False):
    ob_base = _object()
    f_back = Pointer(datatype="_frame")
    f_frame = Pointer(datatype="_PyInterpreterFrame")
    f_trace = Pointer(datatype=_object())
    f_lineno = Int()
    f_trace_lines = Byte()
    f_trace_opcodes = Byte()
    f_fast_as_locals = Byte()
    _f_frame_data = Array(datatype=Pointer(datatype=_object()), length=1)


class _PyInterpreterFrame(DataType, is_union=False):
    f_code = Pointer(datatype=PyCodeObject())
    previous = Pointer(datatype="_PyInterpreterFrame")
    f_funcobj = Pointer(datatype=_object())
    f_globals = Pointer(datatype=_object())
    f_builtins = Pointer(datatype=_object())
    f_locals = Pointer(datatype=_object())
    frame_obj = Pointer(datatype=_frame())
    prev_instr = Pointer(datatype=_Py_CODEUNIT())
    stacktop = Int()
    return_offset = UnsignedShort()
    owner = Byte()
    localsplus = Array(datatype=Pointer(datatype=_object()), length=1)


class _Py_long_state(DataType, is_union=False):
    max_str_digits = Int()


class _xidregitem(DataType, is_union=False):
    prev = Pointer(datatype="_xidregitem")
    next = Pointer(datatype="_xidregitem")
    cls = Pointer(datatype=_typeobject())
    weakref = Pointer(datatype=_object())
    refcount = LongLong()
    getdata = Pointer(datatype=Func())


class _xidregistry(DataType, is_union=False):
    mutex = Pointer(datatype=Void())
    head = Pointer(datatype=_xidregitem())


class pythreads(DataType, is_union=False):
    next_unique_id = UnsignedLongLong()
    head = Pointer(datatype=_ts())
    count = LongLong()
    stacksize = LongLong()


class _is(DataType, is_union=False):
    next = Pointer(datatype="_is")
    id = LongLong()
    id_refcount = LongLong()
    requires_idref = Int()
    id_mutex = Pointer(datatype=Void())
    _initialized = Int()
    finalizing = Int()
    monitoring_version = UnsignedLongLong()
    last_restart_version = UnsignedLongLong()
    threads = pythreads()
    runtime = Pointer(datatype=pyruntimestate())
    _finalizing = _Py_atomic_address()
    gc = _gc_runtime_state()
    sysdict = Pointer(datatype=_object())
    builtins = Pointer(datatype=_object())
    ceval = _ceval_state()
    imports = _import_state()
    _gil = _gil_runtime_state()
    codec_search_path = Pointer(datatype=_object())
    codec_search_cache = Pointer(datatype=_object())
    codec_error_registry = Pointer(datatype=_object())
    codecs_initialized = Int()
    config = PyConfig()
    feature_flags = UnsignedLongLong()
    dict = Pointer(datatype=_object())
    sysdict_copy = Pointer(datatype=_object())
    builtins_copy = Pointer(datatype=_object())
    eval_frame = Pointer(datatype=Func())
    func_watchers = Array(datatype=Pointer(datatype=Func()), length=0)
    active_func_watchers = UnsignedByte()
    co_extra_user_count = LongLong()
    co_extra_freefuncs = Array(datatype=Pointer(datatype=Func()), length=255)
    before_forkers = Pointer(datatype=_object())
    after_forkers_parent = Pointer(datatype=_object())
    after_forkers_child = Pointer(datatype=_object())
    warnings = _warnings_runtime_state()
    atexit = atexit_state()
    obmalloc = "_obmalloc_state"
    audit_hooks = Pointer(datatype=_object())
    type_watchers = Array(datatype=Pointer(datatype=Func()), length=8)
    code_watchers = Array(datatype=Pointer(datatype=Func()), length=8)
    active_code_watchers = UnsignedByte()
    object_state = _py_object_state()
    unicode = "_Py_unicode_state"
    float_state = _Py_float_state()
    long_state = _Py_long_state()
    dtoa = "_dtoa_state"
    func_state = "_py_func_state"
    slice_cache = Pointer(datatype=PySliceObject())
    tuple = _Py_tuple_state()
    list = _Py_list_state()
    dict_state = "_Py_dict_state"
    async_gen = _Py_async_gen_state()
    context = _Py_context_state()
    exc_state = _Py_exc_state()
    ast = ast_state()
    types = "types_state"
    callable_cache = callable_cache()
    interpreter_trampoline = Pointer(datatype=PyCodeObject())
    monitors = _Py_GlobalMonitors()
    f_opcode_trace_set = Byte()
    sys_profile_initialized = Byte()
    sys_trace_initialized = Byte()
    sys_profiling_threads = LongLong()
    sys_tracing_threads = LongLong()
    monitoring_callables = Array(datatype=Pointer(datatype=_object()), length=17)[0]
    monitoring_tool_names = Array(datatype=Pointer(datatype=_object()), length=0)
    cached_objects = "_Py_interp_cached_objects"
    static_objects = "_Py_interp_static_objects"
    xidregistry = _xidregistry()
    threads_main = Pointer(datatype=_ts())
    _finalizing_id = _Py_atomic_address()
    _initial_thread = _ts()


class Bigint(DataType, is_union=False):
    next = Pointer(datatype="Bigint")
    k = Int()
    maxwds = Int()
    sign = Int()
    wds = Int()
    x = UnsignedInt[1]


class _dtoa_state(DataType, is_union=False):
    p5s = Pointer(datatype=Bigint())
    freelist = Array(datatype=Pointer(datatype=Bigint()), length=8)
    preallocated = Double[288]
    preallocated_next = Pointer(datatype=Double())


class _py_func_state(DataType, is_union=False):
    next_version = UnsignedInt()


class _PyCfgInstruction(DataType, is_union=False):
    i_opcode = Int()
    i_oparg = Int()
    i_loc = _PyCompilerSrcLocation()
    i_target = Pointer(datatype="_PyCfgBasicblock_")
    i_except = Pointer(datatype="_PyCfgBasicblock_")


class _PyCfgJumpTargetLabel(DataType, is_union=False):
    id = Int()


class _PyCfgExceptStack(DataType, is_union=False):
    handlers = Array(datatype=Pointer(datatype="_PyCfgBasicblock_"), length=23)
    depth = Int()


class _PyCfgBasicblock_(DataType, is_union=False):
    b_list = Pointer(datatype="_PyCfgBasicblock_")
    b_label = _PyCfgJumpTargetLabel()
    b_exceptstack = Pointer(datatype=_PyCfgExceptStack())
    b_instr = Pointer(datatype=_PyCfgInstruction())
    b_next = Pointer(datatype="_PyCfgBasicblock_")
    b_iused = Int()
    b_ialloc = Int()
    b_unsafe_locals_mask = UnsignedLongLong()
    b_predecessors = Int()
    b_startdepth = Int()
    b_offset = Int()
    b_preserve_lasti = UnsignedInt()
    b_visited = UnsignedInt()
    b_except_handler = UnsignedInt()
    b_cold = UnsignedInt()
    b_warm = UnsignedInt()


class cfg_builder_(DataType, is_union=False):
    g_entryblock = Pointer(datatype=_PyCfgBasicblock_())
    g_block_list = Pointer(datatype=_PyCfgBasicblock_())
    g_curblock = Pointer(datatype=_PyCfgBasicblock_())
    g_current_label = _PyCfgJumpTargetLabel()


class _Py_dict_state(DataType, is_union=False):
    global_version = UnsignedLongLong()
    next_keys_version = UnsignedInt()
    free_list = Array(datatype=Pointer(datatype=PyDictObject()), length=80)
    keys_free_list = Array(datatype=Pointer(datatype=_dictkeysobject()), length=80)
    numfree = Int()
    keys_numfree = Int()
    watchers = Array(datatype=Pointer(datatype=Func()), length=8)


class _types_runtime_state(DataType, is_union=False):
    next_version_tag = UnsignedInt()


class type_cache_entry(DataType, is_union=False):
    version = UnsignedInt()
    name = Pointer(datatype=_object())
    value = Pointer(datatype=_object())


class type_cache(DataType, is_union=False):
    hashtable = type_cache_entry[4096]


class static_builtin_state(DataType, is_union=False):
    type = Pointer(datatype=_typeobject())
    readying = Int()
    ready = Int()
    tp_dict = Pointer(datatype=_object())
    tp_subclasses = Pointer(datatype=_object())
    tp_weaklist = Pointer(datatype=_object())


class types_state(DataType, is_union=False):
    next_version_tag = UnsignedInt()
    type_cache = type_cache()
    num_builtins_initialized = LongLong()
    builtins = static_builtin_state[200]


class _PyTraceMalloc_Config(DataType, is_union=False):
    initialized = Int()
    tracing = Int()
    max_nframe = Int()


class tracemalloc_frame(DataType, is_union=False):
    filename = Pointer(datatype=_object())
    lineno = UnsignedInt()


class tracemalloc_traceback(DataType, is_union=False):
    hash = LongLong()
    nframe = UnsignedShort()
    total_nframe = UnsignedShort()
    frames = tracemalloc_frame[1]


class _tracemalloc_runtime_state_allocators(DataType, is_union=False):
    mem = PyMemAllocatorEx()
    raw = PyMemAllocatorEx()
    obj = PyMemAllocatorEx()


class _tracemalloc_runtime_state(DataType, is_union=False):
    config = _PyTraceMalloc_Config()
    allocators = _tracemalloc_runtime_state_allocators()
    tables_lock = Pointer(datatype=Void())
    traced_memory = LongLong()
    peak_traced_memory = LongLong()
    filenames = Pointer(datatype=_Py_hashtable_t())
    traceback = Pointer(datatype=tracemalloc_traceback())
    tracebacks = Pointer(datatype=_Py_hashtable_t())
    traces = Pointer(datatype=_Py_hashtable_t())
    domains = Pointer(datatype=_Py_hashtable_t())
    empty_traceback = tracemalloc_traceback()
    reentrant_key = _Py_tss_t()


class PyDictOrValues(DataType, is_union=True):
    dict = Pointer(datatype=_object())
    values = Pointer(datatype=Byte())


class _PyPerf_Callbacks(DataType, is_union=False):
    init_state = Pointer(datatype=Func())
    write_state = Pointer(datatype=Func())
    free_state = Pointer(datatype=Func())


class _Py_cached_objects(DataType, is_union=False):
    interned_strings = Pointer(datatype=_Py_hashtable_t())


class _Py_static_objects_singletons_bytes_characters(DataType, is_union=False):
    ob = PyBytesObject()
    eos = Byte()


class _Py_static_objects_singletons(DataType, is_union=False):
    small_ints = _longobject[262]
    bytes_empty = PyBytesObject()
    bytes_characters = _Py_static_objects_singletons_bytes_characters[256]
    strings = _Py_global_strings()
    _tuple_empty_gc_not_used = PyGC_Head()
    tuple_empty = PyTupleObject()
    _hamt_bitmap_node_empty_gc_not_used = PyGC_Head()
    hamt_bitmap_node_empty = PyHamtNode_Bitmap()
    context_token_missing = _PyContextTokenMissing()


class _Py_static_objects(DataType, is_union=False):
    singletons = _Py_static_objects_singletons()


class _Py_interp_cached_objects(DataType, is_union=False):
    interned_strings = Pointer(datatype=_object())
    str_replace_inf = Pointer(datatype=_object())
    objreduce = Pointer(datatype=_object())
    type_slots_pname = Pointer(datatype=_object())
    type_slots_ptrs = Array(datatype=Pointer(datatype=wrapperbase()), length=10)
    generic_type = Pointer(datatype=_typeobject())
    typevar_type = Pointer(datatype=_typeobject())
    typevartuple_type = Pointer(datatype=_typeobject())
    paramspec_type = Pointer(datatype=_typeobject())
    paramspecargs_type = Pointer(datatype=_typeobject())
    paramspeckwargs_type = Pointer(datatype=_typeobject())


class _Py_interp_static_objects_singletons(DataType, is_union=False):
    _not_used = Int()
    _hamt_empty_gc_not_used = PyGC_Head()
    hamt_empty = PyHamtObject()
    last_resort_memory_error = PyBaseExceptionObject()


class _Py_interp_static_objects(DataType, is_union=False):
    singletons = _Py_interp_static_objects_singletons()


class _Py_unicode_runtime_ids(DataType, is_union=False):
    lock = Pointer(datatype=Void())
    next_index = LongLong()


class _Py_unicode_runtime_state(DataType, is_union=False):
    ids = _Py_unicode_runtime_ids()


class _Py_unicode_fs_codec(DataType, is_union=False):
    encoding = Pointer(datatype=Byte())
    utf8 = Int()
    errors = Pointer(datatype=Byte())
    error_handler = Int()


class _Py_unicode_ids(DataType, is_union=False):
    size = LongLong()
    array = Pointer(datatype=Pointer(datatype=_object()))


class _Py_unicode_state(DataType, is_union=False):
    fs_codec = _Py_unicode_fs_codec()
    ucnhash_capi = Pointer(datatype=_PyUnicode_Name_CAPI())
    ids = _Py_unicode_ids()


class _PyRangeIterObject(DataType, is_union=False):
    ob_base = _object()
    start = LongLong()
    step = LongLong()
    len = LongLong()


class _pythread_runtime_state_condattr_monotonic(DataType, is_union=False):
    ptr = Pointer(datatype=_opaque_pthread_condattr_t())


class _pythread_runtime_state(DataType, is_union=False):
    initialized = Int()
    _condattr_monotonic = _pythread_runtime_state_condattr_monotonic()


class _BlocksOutputBuffer(DataType, is_union=False):
    list = Pointer(datatype=_object())
    allocated = LongLong()
    max_length = LongLong()


class pool_header_ref(DataType, is_union=True):
    _padding = Pointer(datatype=UnsignedByte())
    count = UnsignedInt()


class pool_header(DataType, is_union=False):
    ref = pool_header_ref()
    freeblock = Pointer(datatype=UnsignedByte())
    nextpool = Pointer(datatype="pool_header")
    prevpool = Pointer(datatype="pool_header")
    arenaindex = UnsignedInt()
    szidx = UnsignedInt()
    nextoffset = UnsignedInt()
    maxnextoffset = UnsignedInt()


class arena_object(DataType, is_union=False):
    address = UnsignedLongLong()
    pool_address = Pointer(datatype=UnsignedByte())
    nfreepools = UnsignedInt()
    ntotalpools = UnsignedInt()
    freepools = Pointer(datatype=pool_header())
    nextarena = Pointer(datatype="arena_object")
    prevarena = Pointer(datatype="arena_object")


class _obmalloc_pools(DataType, is_union=False):
    used = Array(datatype=Pointer(datatype=pool_header()), length=64)


class _obmalloc_mgmt(DataType, is_union=False):
    arenas = Pointer(datatype=arena_object())
    maxarenas = UnsignedInt()
    unused_arena_objects = Pointer(datatype=arena_object())
    usable_arenas = Pointer(datatype=arena_object())
    nfp2lasta = Array(datatype=Pointer(datatype=arena_object()), length=65)
    narenas_currently_allocated = LongLong()
    ntimes_arena_allocated = LongLong()
    narenas_highwater = LongLong()
    raw_allocated_blocks = LongLong()


class arena_coverage_t(DataType, is_union=False):
    tail_hi = Int()
    tail_lo = Int()


class arena_map_bot(DataType, is_union=False):
    arenas = arena_coverage_t[16384]


class arena_map_mid(DataType, is_union=False):
    ptrs = Array(datatype=Pointer(datatype=arena_map_bot()), length=32768)


class arena_map_top(DataType, is_union=False):
    ptrs = Array(datatype=Pointer(datatype=arena_map_mid()), length=32768)


class _obmalloc_usage(DataType, is_union=False):
    arena_map_root = arena_map_top()
    arena_map_mid_count = Int()
    arena_map_bot_count = Int()


class _obmalloc_global_state(DataType, is_union=False):
    dump_debug_stats = Int()
    interpreter_leaks = LongLong()


class _obmalloc_state(DataType, is_union=False):
    pools = _obmalloc_pools()
    mgmt = _obmalloc_mgmt()
    usage = _obmalloc_usage()


class asdl_mod_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_mod"), length=1)


class asdl_stmt_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_stmt"), length=1)


class asdl_expr_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_expr"), length=1)


class asdl_comprehension_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_comprehension"), length=1)


class asdl_excepthandler_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_excepthandler"), length=1)


class asdl_arguments_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_arguments"), length=1)


class asdl_arg_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_arg"), length=1)


class asdl_keyword_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_keyword"), length=1)


class asdl_alias_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_alias"), length=1)


class asdl_withitem_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_withitem"), length=1)


class asdl_match_case_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_match_case"), length=1)


class asdl_pattern_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_pattern"), length=1)


class asdl_type_ignore_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_type_ignore"), length=1)


class asdl_type_param_seq(DataType, is_union=False):
    size = LongLong()
    elements = Pointer(datatype=Pointer(datatype=Void()))
    typed_elements = Array(datatype=Pointer(datatype="_type_param"), length=1)


class _mod_v_Module(DataType, is_union=False):
    body = Pointer(datatype=asdl_stmt_seq())
    type_ignores = Pointer(datatype=asdl_type_ignore_seq())


class _mod_v_Interactive(DataType, is_union=False):
    body = Pointer(datatype=asdl_stmt_seq())


class _mod_v_Expression(DataType, is_union=False):
    body = Pointer(datatype="_expr")


class _mod_v_FunctionType(DataType, is_union=False):
    argtypes = Pointer(datatype=asdl_expr_seq())
    returns = Pointer(datatype="_expr")


class _mod_v(DataType, is_union=True):
    Module = _mod_v_Module()
    Interactive = _mod_v_Interactive()
    Expression = _mod_v_Expression()
    FunctionType = _mod_v_FunctionType()


class _mod(DataType, is_union=False):
    kind = Int()
    v = _mod_v()


class _stmt_v_FunctionDef(DataType, is_union=False):
    name = Pointer(datatype=_object())
    args = Pointer(datatype="_arguments")
    body = Pointer(datatype=asdl_stmt_seq())
    decorator_list = Pointer(datatype=asdl_expr_seq())
    returns = Pointer(datatype="_expr")
    type_comment = Pointer(datatype=_object())
    type_params = Pointer(datatype=asdl_type_param_seq())


class _stmt_v_AsyncFunctionDef(DataType, is_union=False):
    name = Pointer(datatype=_object())
    args = Pointer(datatype="_arguments")
    body = Pointer(datatype=asdl_stmt_seq())
    decorator_list = Pointer(datatype=asdl_expr_seq())
    returns = Pointer(datatype="_expr")
    type_comment = Pointer(datatype=_object())
    type_params = Pointer(datatype=asdl_type_param_seq())


class _stmt_v_ClassDef(DataType, is_union=False):
    name = Pointer(datatype=_object())
    bases = Pointer(datatype=asdl_expr_seq())
    keywords = Pointer(datatype=asdl_keyword_seq())
    body = Pointer(datatype=asdl_stmt_seq())
    decorator_list = Pointer(datatype=asdl_expr_seq())
    type_params = Pointer(datatype=asdl_type_param_seq())


class _stmt_v_Return(DataType, is_union=False):
    value = Pointer(datatype="_expr")


class _stmt_v_Delete(DataType, is_union=False):
    targets = Pointer(datatype=asdl_expr_seq())


class _stmt_v_Assign(DataType, is_union=False):
    targets = Pointer(datatype=asdl_expr_seq())
    value = Pointer(datatype="_expr")
    type_comment = Pointer(datatype=_object())


class _stmt_v_TypeAlias(DataType, is_union=False):
    name = Pointer(datatype="_expr")
    type_params = Pointer(datatype=asdl_type_param_seq())
    value = Pointer(datatype="_expr")


class _stmt_v_AugAssign(DataType, is_union=False):
    target = Pointer(datatype="_expr")
    op = Int()
    value = Pointer(datatype="_expr")


class _stmt_v_AnnAssign(DataType, is_union=False):
    target = Pointer(datatype="_expr")
    annotation = Pointer(datatype="_expr")
    value = Pointer(datatype="_expr")
    simple = Int()


class _stmt_v_For(DataType, is_union=False):
    target = Pointer(datatype="_expr")
    iter = Pointer(datatype="_expr")
    body = Pointer(datatype=asdl_stmt_seq())
    orelse = Pointer(datatype=asdl_stmt_seq())
    type_comment = Pointer(datatype=_object())


class _stmt_v_AsyncFor(DataType, is_union=False):
    target = Pointer(datatype="_expr")
    iter = Pointer(datatype="_expr")
    body = Pointer(datatype=asdl_stmt_seq())
    orelse = Pointer(datatype=asdl_stmt_seq())
    type_comment = Pointer(datatype=_object())


class _stmt_v_While(DataType, is_union=False):
    test = Pointer(datatype="_expr")
    body = Pointer(datatype=asdl_stmt_seq())
    orelse = Pointer(datatype=asdl_stmt_seq())


class _stmt_v_If(DataType, is_union=False):
    test = Pointer(datatype="_expr")
    body = Pointer(datatype=asdl_stmt_seq())
    orelse = Pointer(datatype=asdl_stmt_seq())


class _stmt_v_With(DataType, is_union=False):
    items = Pointer(datatype=asdl_withitem_seq())
    body = Pointer(datatype=asdl_stmt_seq())
    type_comment = Pointer(datatype=_object())


class _stmt_v_AsyncWith(DataType, is_union=False):
    items = Pointer(datatype=asdl_withitem_seq())
    body = Pointer(datatype=asdl_stmt_seq())
    type_comment = Pointer(datatype=_object())


class _stmt_v_Match(DataType, is_union=False):
    subject = Pointer(datatype="_expr")
    cases = Pointer(datatype=asdl_match_case_seq())


class _stmt_v_Raise(DataType, is_union=False):
    exc = Pointer(datatype="_expr")
    cause = Pointer(datatype="_expr")


class _stmt_v_Try(DataType, is_union=False):
    body = Pointer(datatype=asdl_stmt_seq())
    handlers = Pointer(datatype=asdl_excepthandler_seq())
    orelse = Pointer(datatype=asdl_stmt_seq())
    finalbody = Pointer(datatype=asdl_stmt_seq())


class _stmt_v_TryStar(DataType, is_union=False):
    body = Pointer(datatype=asdl_stmt_seq())
    handlers = Pointer(datatype=asdl_excepthandler_seq())
    orelse = Pointer(datatype=asdl_stmt_seq())
    finalbody = Pointer(datatype=asdl_stmt_seq())


class _stmt_v_Assert(DataType, is_union=False):
    test = Pointer(datatype="_expr")
    msg = Pointer(datatype="_expr")


class _stmt_v_Import(DataType, is_union=False):
    names = Pointer(datatype=asdl_alias_seq())


class _stmt_v_ImportFrom(DataType, is_union=False):
    module = Pointer(datatype=_object())
    names = Pointer(datatype=asdl_alias_seq())
    level = Int()


class _stmt_v_Global(DataType, is_union=False):
    names = Pointer(datatype=asdl_identifier_seq())


class _stmt_v_Nonlocal(DataType, is_union=False):
    names = Pointer(datatype=asdl_identifier_seq())


class _stmt_v_Expr(DataType, is_union=False):
    value = Pointer(datatype="_expr")


class _stmt_v(DataType, is_union=True):
    FunctionDef = _stmt_v_FunctionDef()
    AsyncFunctionDef = _stmt_v_AsyncFunctionDef()
    ClassDef = _stmt_v_ClassDef()
    Return = _stmt_v_Return()
    Delete = _stmt_v_Delete()
    Assign = _stmt_v_Assign()
    TypeAlias = _stmt_v_TypeAlias()
    AugAssign = _stmt_v_AugAssign()
    AnnAssign = _stmt_v_AnnAssign()
    For = _stmt_v_For()
    AsyncFor = _stmt_v_AsyncFor()
    While = _stmt_v_While()
    If = _stmt_v_If()
    With = _stmt_v_With()
    AsyncWith = _stmt_v_AsyncWith()
    Match = _stmt_v_Match()
    Raise = _stmt_v_Raise()
    Try = _stmt_v_Try()
    TryStar = _stmt_v_TryStar()
    Assert = _stmt_v_Assert()
    Import = _stmt_v_Import()
    ImportFrom = _stmt_v_ImportFrom()
    Global = _stmt_v_Global()
    Nonlocal = _stmt_v_Nonlocal()
    Expr = _stmt_v_Expr()


class _stmt(DataType, is_union=False):
    kind = Int()
    v = _stmt_v()
    lineno = Int()
    col_offset = Int()
    end_lineno = Int()
    end_col_offset = Int()


class _expr_v_BoolOp(DataType, is_union=False):
    op = Int()
    values = Pointer(datatype=asdl_expr_seq())


class _expr_v_NamedExpr(DataType, is_union=False):
    target = Pointer(datatype="_expr")
    value = Pointer(datatype="_expr")


class _expr_v_BinOp(DataType, is_union=False):
    left = Pointer(datatype="_expr")
    op = Int()
    right = Pointer(datatype="_expr")


class _expr_v_UnaryOp(DataType, is_union=False):
    op = Int()
    operand = Pointer(datatype="_expr")


class _expr_v_Lambda(DataType, is_union=False):
    args = Pointer(datatype="_arguments")
    body = Pointer(datatype="_expr")


class _expr_v_IfExp(DataType, is_union=False):
    test = Pointer(datatype="_expr")
    body = Pointer(datatype="_expr")
    orelse = Pointer(datatype="_expr")


class _expr_v_Dict(DataType, is_union=False):
    keys = Pointer(datatype=asdl_expr_seq())
    values = Pointer(datatype=asdl_expr_seq())


class _expr_v_Set(DataType, is_union=False):
    elts = Pointer(datatype=asdl_expr_seq())


class _expr_v_ListComp(DataType, is_union=False):
    elt = Pointer(datatype="_expr")
    generators = Pointer(datatype=asdl_comprehension_seq())


class _expr_v_SetComp(DataType, is_union=False):
    elt = Pointer(datatype="_expr")
    generators = Pointer(datatype=asdl_comprehension_seq())


class _expr_v_DictComp(DataType, is_union=False):
    key = Pointer(datatype="_expr")
    value = Pointer(datatype="_expr")
    generators = Pointer(datatype=asdl_comprehension_seq())


class _expr_v_GeneratorExp(DataType, is_union=False):
    elt = Pointer(datatype="_expr")
    generators = Pointer(datatype=asdl_comprehension_seq())


class _expr_v_Await(DataType, is_union=False):
    value = Pointer(datatype="_expr")


class _expr_v_Yield(DataType, is_union=False):
    value = Pointer(datatype="_expr")


class _expr_v_YieldFrom(DataType, is_union=False):
    value = Pointer(datatype="_expr")


class _expr_v_Compare(DataType, is_union=False):
    left = Pointer(datatype="_expr")
    ops = Pointer(datatype=asdl_int_seq())
    comparators = Pointer(datatype=asdl_expr_seq())


class _expr_v_Call(DataType, is_union=False):
    func = Pointer(datatype="_expr")
    args = Pointer(datatype=asdl_expr_seq())
    keywords = Pointer(datatype=asdl_keyword_seq())


class _expr_v_FormattedValue(DataType, is_union=False):
    value = Pointer(datatype="_expr")
    conversion = Int()
    format_spec = Pointer(datatype="_expr")


class _expr_v_JoinedStr(DataType, is_union=False):
    values = Pointer(datatype=asdl_expr_seq())


class _expr_v_Constant(DataType, is_union=False):
    value = Pointer(datatype=_object())
    kind = Pointer(datatype=_object())


class _expr_v_Attribute(DataType, is_union=False):
    value = Pointer(datatype="_expr")
    attr = Pointer(datatype=_object())
    ctx = Int()


class _expr_v_Subscript(DataType, is_union=False):
    value = Pointer(datatype="_expr")
    slice = Pointer(datatype="_expr")
    ctx = Int()


class _expr_v_Starred(DataType, is_union=False):
    value = Pointer(datatype="_expr")
    ctx = Int()


class _expr_v_Name(DataType, is_union=False):
    id = Pointer(datatype=_object())
    ctx = Int()


class _expr_v_List(DataType, is_union=False):
    elts = Pointer(datatype=asdl_expr_seq())
    ctx = Int()


class _expr_v_Tuple(DataType, is_union=False):
    elts = Pointer(datatype=asdl_expr_seq())
    ctx = Int()


class _expr_v_Slice(DataType, is_union=False):
    lower = Pointer(datatype="_expr")
    upper = Pointer(datatype="_expr")
    step = Pointer(datatype="_expr")


class _expr_v(DataType, is_union=True):
    BoolOp = _expr_v_BoolOp()
    NamedExpr = _expr_v_NamedExpr()
    BinOp = _expr_v_BinOp()
    UnaryOp = _expr_v_UnaryOp()
    Lambda = _expr_v_Lambda()
    IfExp = _expr_v_IfExp()
    Dict = _expr_v_Dict()
    Set = _expr_v_Set()
    ListComp = _expr_v_ListComp()
    SetComp = _expr_v_SetComp()
    DictComp = _expr_v_DictComp()
    GeneratorExp = _expr_v_GeneratorExp()
    Await = _expr_v_Await()
    Yield = _expr_v_Yield()
    YieldFrom = _expr_v_YieldFrom()
    Compare = _expr_v_Compare()
    Call = _expr_v_Call()
    FormattedValue = _expr_v_FormattedValue()
    JoinedStr = _expr_v_JoinedStr()
    Constant = _expr_v_Constant()
    Attribute = _expr_v_Attribute()
    Subscript = _expr_v_Subscript()
    Starred = _expr_v_Starred()
    Name = _expr_v_Name()
    List = _expr_v_List()
    Tuple = _expr_v_Tuple()
    Slice = _expr_v_Slice()


class _expr(DataType, is_union=False):
    kind = Int()
    v = _expr_v()
    lineno = Int()
    col_offset = Int()
    end_lineno = Int()
    end_col_offset = Int()


class _comprehension(DataType, is_union=False):
    target = Pointer(datatype=_expr())
    iter = Pointer(datatype=_expr())
    ifs = Pointer(datatype=asdl_expr_seq())
    is_async = Int()


class _excepthandler_v_ExceptHandler(DataType, is_union=False):
    type = Pointer(datatype=_expr())
    name = Pointer(datatype=_object())
    body = Pointer(datatype=asdl_stmt_seq())


class _excepthandler_v(DataType, is_union=True):
    ExceptHandler = _excepthandler_v_ExceptHandler()


class _excepthandler(DataType, is_union=False):
    kind = Int()
    v = _excepthandler_v()
    lineno = Int()
    col_offset = Int()
    end_lineno = Int()
    end_col_offset = Int()


class _arguments(DataType, is_union=False):
    posonlyargs = Pointer(datatype=asdl_arg_seq())
    args = Pointer(datatype=asdl_arg_seq())
    vararg = Pointer(datatype="_arg")
    kwonlyargs = Pointer(datatype=asdl_arg_seq())
    kw_defaults = Pointer(datatype=asdl_expr_seq())
    kwarg = Pointer(datatype="_arg")
    defaults = Pointer(datatype=asdl_expr_seq())


class _arg(DataType, is_union=False):
    arg = Pointer(datatype=_object())
    annotation = Pointer(datatype=_expr())
    type_comment = Pointer(datatype=_object())
    lineno = Int()
    col_offset = Int()
    end_lineno = Int()
    end_col_offset = Int()


class _keyword(DataType, is_union=False):
    arg = Pointer(datatype=_object())
    value = Pointer(datatype=_expr())
    lineno = Int()
    col_offset = Int()
    end_lineno = Int()
    end_col_offset = Int()


class _alias(DataType, is_union=False):
    name = Pointer(datatype=_object())
    asname = Pointer(datatype=_object())
    lineno = Int()
    col_offset = Int()
    end_lineno = Int()
    end_col_offset = Int()


class _withitem(DataType, is_union=False):
    context_expr = Pointer(datatype=_expr())
    optional_vars = Pointer(datatype=_expr())


class _match_case(DataType, is_union=False):
    pattern = Pointer(datatype="_pattern")
    guard = Pointer(datatype=_expr())
    body = Pointer(datatype=asdl_stmt_seq())


class _pattern_v_MatchValue(DataType, is_union=False):
    value = Pointer(datatype=_expr())


class _pattern_v_MatchSingleton(DataType, is_union=False):
    value = Pointer(datatype=_object())


class _pattern_v_MatchSequence(DataType, is_union=False):
    patterns = Pointer(datatype=asdl_pattern_seq())


class _pattern_v_MatchMapping(DataType, is_union=False):
    keys = Pointer(datatype=asdl_expr_seq())
    patterns = Pointer(datatype=asdl_pattern_seq())
    rest = Pointer(datatype=_object())


class _pattern_v_MatchClass(DataType, is_union=False):
    cls = Pointer(datatype=_expr())
    patterns = Pointer(datatype=asdl_pattern_seq())
    kwd_attrs = Pointer(datatype=asdl_identifier_seq())
    kwd_patterns = Pointer(datatype=asdl_pattern_seq())


class _pattern_v_MatchStar(DataType, is_union=False):
    name = Pointer(datatype=_object())


class _pattern_v_MatchAs(DataType, is_union=False):
    pattern = Pointer(datatype="_pattern")
    name = Pointer(datatype=_object())


class _pattern_v_MatchOr(DataType, is_union=False):
    patterns = Pointer(datatype=asdl_pattern_seq())


class _pattern_v(DataType, is_union=True):
    MatchValue = _pattern_v_MatchValue()
    MatchSingleton = _pattern_v_MatchSingleton()
    MatchSequence = _pattern_v_MatchSequence()
    MatchMapping = _pattern_v_MatchMapping()
    MatchClass = _pattern_v_MatchClass()
    MatchStar = _pattern_v_MatchStar()
    MatchAs = _pattern_v_MatchAs()
    MatchOr = _pattern_v_MatchOr()


class _pattern(DataType, is_union=False):
    kind = Int()
    v = _pattern_v()
    lineno = Int()
    col_offset = Int()
    end_lineno = Int()
    end_col_offset = Int()


class _type_ignore_v_TypeIgnore(DataType, is_union=False):
    lineno = Int()
    tag = Pointer(datatype=_object())


class _type_ignore_v(DataType, is_union=True):
    TypeIgnore = _type_ignore_v_TypeIgnore()


class _type_ignore(DataType, is_union=False):
    kind = Int()
    v = _type_ignore_v()


class _type_param_v_TypeVar(DataType, is_union=False):
    name = Pointer(datatype=_object())
    bound = Pointer(datatype=_expr())


class _type_param_v_ParamSpec(DataType, is_union=False):
    name = Pointer(datatype=_object())


class _type_param_v_TypeVarTuple(DataType, is_union=False):
    name = Pointer(datatype=_object())


class _type_param_v(DataType, is_union=True):
    TypeVar = _type_param_v_TypeVar()
    ParamSpec = _type_param_v_ParamSpec()
    TypeVarTuple = _type_param_v_TypeVarTuple()


class _type_param(DataType, is_union=False):
    kind = Int()
    v = _type_param_v()
    lineno = Int()
    col_offset = Int()
    end_lineno = Int()
    end_col_offset = Int()
