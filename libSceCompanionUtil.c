/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceCompanionUtilGetEvent;
asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilGetEvent\n"
    ".type sceCompanionUtilGetEvent @function\n"
    "sceCompanionUtilGetEvent:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilGetEvent]\n");

static __attribute__ ((used)) void* __ptr_sceCompanionUtilGetRemoteOskEvent;
asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilGetRemoteOskEvent\n"
    ".type sceCompanionUtilGetRemoteOskEvent @function\n"
    "sceCompanionUtilGetRemoteOskEvent:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilGetRemoteOskEvent]\n");

static __attribute__ ((used)) void* __ptr_sceCompanionUtilInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilInitialize\n"
    ".type sceCompanionUtilInitialize @function\n"
    "sceCompanionUtilInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceCompanionUtilOptParamInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilOptParamInitialize\n"
    ".type sceCompanionUtilOptParamInitialize @function\n"
    "sceCompanionUtilOptParamInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilOptParamInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceCompanionUtilTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilTerminate\n"
    ".type sceCompanionUtilTerminate @function\n"
    "sceCompanionUtilTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilTerminate]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceCompanionUtil", &__handle)) return;
  if(sprx_dlsym(__handle, "cE5Msy11WhU", &__ptr_sceCompanionUtilGetEvent)) return;
  if(sprx_dlsym(__handle, "MaVrz79mT5o", &__ptr_sceCompanionUtilGetRemoteOskEvent)) return;
  if(sprx_dlsym(__handle, "xb1xlIhf0QY", &__ptr_sceCompanionUtilInitialize)) return;
  if(sprx_dlsym(__handle, "IPN-FRSrafk", &__ptr_sceCompanionUtilOptParamInitialize)) return;
  if(sprx_dlsym(__handle, "H1fYQd5lFAI", &__ptr_sceCompanionUtilTerminate)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}