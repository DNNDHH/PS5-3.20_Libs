/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceSrcUtilityFinalize;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilityFinalize\n"
    ".type sceSrcUtilityFinalize @function\n"
    "sceSrcUtilityFinalize:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilityFinalize]\n");

static __attribute__ ((used)) void* __ptr_sceSrcUtilityFlush;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilityFlush\n"
    ".type sceSrcUtilityFlush @function\n"
    "sceSrcUtilityFlush:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilityFlush]\n");

static __attribute__ ((used)) void* __ptr_sceSrcUtilityGetDelaySamples;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilityGetDelaySamples\n"
    ".type sceSrcUtilityGetDelaySamples @function\n"
    "sceSrcUtilityGetDelaySamples:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilityGetDelaySamples]\n");

static __attribute__ ((used)) void* __ptr_sceSrcUtilityGetHandleSize;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilityGetHandleSize\n"
    ".type sceSrcUtilityGetHandleSize @function\n"
    "sceSrcUtilityGetHandleSize:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilityGetHandleSize]\n");

static __attribute__ ((used)) void* __ptr_sceSrcUtilityGetPriority;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilityGetPriority\n"
    ".type sceSrcUtilityGetPriority @function\n"
    "sceSrcUtilityGetPriority:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilityGetPriority]\n");

static __attribute__ ((used)) void* __ptr_sceSrcUtilityInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilityInitialize\n"
    ".type sceSrcUtilityInitialize @function\n"
    "sceSrcUtilityInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilityInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceSrcUtilityInitializeEx;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilityInitializeEx\n"
    ".type sceSrcUtilityInitializeEx @function\n"
    "sceSrcUtilityInitializeEx:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilityInitializeEx]\n");

static __attribute__ ((used)) void* __ptr_sceSrcUtilityResample;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilityResample\n"
    ".type sceSrcUtilityResample @function\n"
    "sceSrcUtilityResample:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilityResample]\n");

static __attribute__ ((used)) void* __ptr_sceSrcUtilitySetPriority;
asm(".intel_syntax noprefix\n"
    ".global sceSrcUtilitySetPriority\n"
    ".type sceSrcUtilitySetPriority @function\n"
    "sceSrcUtilitySetPriority:\n"
    "jmp qword ptr [rip + __ptr_sceSrcUtilitySetPriority]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceSrcUtl", &__handle)) return;
  if(sprx_dlsym(__handle, "uM3tl64pJNU", &__ptr_sceSrcUtilityFinalize)) return;
  if(sprx_dlsym(__handle, "qCL0KDAv1Os", &__ptr_sceSrcUtilityFlush)) return;
  if(sprx_dlsym(__handle, "Lw8wfmCaxlQ", &__ptr_sceSrcUtilityGetDelaySamples)) return;
  if(sprx_dlsym(__handle, "wTO4cMkVNaM", &__ptr_sceSrcUtilityGetHandleSize)) return;
  if(sprx_dlsym(__handle, "UFLN-KNhzX0", &__ptr_sceSrcUtilityGetPriority)) return;
  if(sprx_dlsym(__handle, "Y0LiSp+hb38", &__ptr_sceSrcUtilityInitialize)) return;
  if(sprx_dlsym(__handle, "gf9WnZyyHwE", &__ptr_sceSrcUtilityInitializeEx)) return;
  if(sprx_dlsym(__handle, "M9Zur3ydU6g", &__ptr_sceSrcUtilityResample)) return;
  if(sprx_dlsym(__handle, "scvqkMgVNz8", &__ptr_sceSrcUtilitySetPriority)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}