/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_mono_profiler_startup;
asm(".intel_syntax noprefix\n"
    ".global mono_profiler_startup\n"
    ".type mono_profiler_startup @function\n"
    "mono_profiler_startup:\n"
    "jmp qword ptr [rip + __ptr_mono_profiler_startup]\n");

static __attribute__ ((used)) void* __ptr_mono_profiler_startup_log;
asm(".intel_syntax noprefix\n"
    ".global mono_profiler_startup_log\n"
    ".type mono_profiler_startup_log @function\n"
    "mono_profiler_startup_log:\n"
    "jmp qword ptr [rip + __ptr_mono_profiler_startup_log]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libmono-profiler-log", &__handle)) return;
  if(sprx_dlsym(__handle, "IL7SZSnxsK8", &__ptr_mono_profiler_startup)) return;
  if(sprx_dlsym(__handle, "C8r9P9yL7-A", &__ptr_mono_profiler_startup_log)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}