/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceSysmoduleGetModuleHandleInternal;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleGetModuleHandleInternal\n"
    ".type sceSysmoduleGetModuleHandleInternal @function\n"
    "sceSysmoduleGetModuleHandleInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleGetModuleHandleInternal]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleGetModuleInfoForUnwind;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleGetModuleInfoForUnwind\n"
    ".type sceSysmoduleGetModuleInfoForUnwind @function\n"
    "sceSysmoduleGetModuleInfoForUnwind:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleGetModuleInfoForUnwind]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleIsCalledFromSysModule;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleIsCalledFromSysModule\n"
    ".type sceSysmoduleIsCalledFromSysModule @function\n"
    "sceSysmoduleIsCalledFromSysModule:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsCalledFromSysModule]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleIsCameraPreloaded;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleIsCameraPreloaded\n"
    ".type sceSysmoduleIsCameraPreloaded @function\n"
    "sceSysmoduleIsCameraPreloaded:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsCameraPreloaded]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleIsLoaded;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleIsLoaded\n"
    ".type sceSysmoduleIsLoaded @function\n"
    "sceSysmoduleIsLoaded:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsLoaded]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleIsLoadedInternal;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleIsLoadedInternal\n"
    ".type sceSysmoduleIsLoadedInternal @function\n"
    "sceSysmoduleIsLoadedInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsLoadedInternal]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleLoadModule;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleLoadModule\n"
    ".type sceSysmoduleLoadModule @function\n"
    "sceSysmoduleLoadModule:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModule]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleLoadModuleByNameInternal;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleLoadModuleByNameInternal\n"
    ".type sceSysmoduleLoadModuleByNameInternal @function\n"
    "sceSysmoduleLoadModuleByNameInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleByNameInternal]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleLoadModuleInternal;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleLoadModuleInternal\n"
    ".type sceSysmoduleLoadModuleInternal @function\n"
    "sceSysmoduleLoadModuleInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleInternal]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleLoadModuleInternalWithArg;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleLoadModuleInternalWithArg\n"
    ".type sceSysmoduleLoadModuleInternalWithArg @function\n"
    "sceSysmoduleLoadModuleInternalWithArg:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleInternalWithArg]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleMapLibcForLibkernel;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleMapLibcForLibkernel\n"
    ".type sceSysmoduleMapLibcForLibkernel @function\n"
    "sceSysmoduleMapLibcForLibkernel:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleMapLibcForLibkernel]\n");

static __attribute__ ((used)) void* __ptr_sceSysmodulePreloadModuleForLibkernel;
asm(".intel_syntax noprefix\n"
    ".global sceSysmodulePreloadModuleForLibkernel\n"
    ".type sceSysmodulePreloadModuleForLibkernel @function\n"
    "sceSysmodulePreloadModuleForLibkernel:\n"
    "jmp qword ptr [rip + __ptr_sceSysmodulePreloadModuleForLibkernel]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleUnloadModule;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleUnloadModule\n"
    ".type sceSysmoduleUnloadModule @function\n"
    "sceSysmoduleUnloadModule:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModule]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleUnloadModuleByNameInternal;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleUnloadModuleByNameInternal\n"
    ".type sceSysmoduleUnloadModuleByNameInternal @function\n"
    "sceSysmoduleUnloadModuleByNameInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleByNameInternal]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleUnloadModuleInternal;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleUnloadModuleInternal\n"
    ".type sceSysmoduleUnloadModuleInternal @function\n"
    "sceSysmoduleUnloadModuleInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleInternal]\n");

static __attribute__ ((used)) void* __ptr_sceSysmoduleUnloadModuleInternalWithArg;
asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleUnloadModuleInternalWithArg\n"
    ".type sceSysmoduleUnloadModuleInternalWithArg @function\n"
    "sceSysmoduleUnloadModuleInternalWithArg:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleInternalWithArg]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceSysmodule", &__handle)) return;
  if(sprx_dlsym(__handle, "D8cuU4d72xM", &__ptr_sceSysmoduleGetModuleHandleInternal)) return;
  if(sprx_dlsym(__handle, "4fU5yvOkVG4", &__ptr_sceSysmoduleGetModuleInfoForUnwind)) return;
  if(sprx_dlsym(__handle, "ctfO7dQ7geg", &__ptr_sceSysmoduleIsCalledFromSysModule)) return;
  if(sprx_dlsym(__handle, "no6T3EfiS3E", &__ptr_sceSysmoduleIsCameraPreloaded)) return;
  if(sprx_dlsym(__handle, "fMP5NHUOaMk", &__ptr_sceSysmoduleIsLoaded)) return;
  if(sprx_dlsym(__handle, "ynFKQ5bfGks", &__ptr_sceSysmoduleIsLoadedInternal)) return;
  if(sprx_dlsym(__handle, "g8cM39EUZ6o", &__ptr_sceSysmoduleLoadModule)) return;
  if(sprx_dlsym(__handle, "CU8m+Qs+HN4", &__ptr_sceSysmoduleLoadModuleByNameInternal)) return;
  if(sprx_dlsym(__handle, "39iV5E1HoCk", &__ptr_sceSysmoduleLoadModuleInternal)) return;
  if(sprx_dlsym(__handle, "hHrGoGoNf+s", &__ptr_sceSysmoduleLoadModuleInternalWithArg)) return;
  if(sprx_dlsym(__handle, "lZ6RvVl0vo0", &__ptr_sceSysmoduleMapLibcForLibkernel)) return;
  if(sprx_dlsym(__handle, "DOO+zuW1lrE", &__ptr_sceSysmodulePreloadModuleForLibkernel)) return;
  if(sprx_dlsym(__handle, "eR2bZFAAU0Q", &__ptr_sceSysmoduleUnloadModule)) return;
  if(sprx_dlsym(__handle, "vpTHmA6Knvg", &__ptr_sceSysmoduleUnloadModuleByNameInternal)) return;
  if(sprx_dlsym(__handle, "vXZhrtJxkGc", &__ptr_sceSysmoduleUnloadModuleInternal)) return;
  if(sprx_dlsym(__handle, "aKa6YfBKZs4", &__ptr_sceSysmoduleUnloadModuleInternalWithArg)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
