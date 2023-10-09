/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceOpusDecCancel;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecCancel\n"
    ".type sceOpusDecCancel @function\n"
    "sceOpusDecCancel:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecCancel]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecCreate;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecCreate\n"
    ".type sceOpusDecCreate @function\n"
    "sceOpusDecCreate:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecCreate]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecCreateEx;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecCreateEx\n"
    ".type sceOpusDecCreateEx @function\n"
    "sceOpusDecCreateEx:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecCreateEx]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecCtl;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecCtl\n"
    ".type sceOpusDecCtl @function\n"
    "sceOpusDecCtl:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecCtl]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecDecode;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecDecode\n"
    ".type sceOpusDecDecode @function\n"
    "sceOpusDecDecode:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecDecode]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecDecodeFloat;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecDecodeFloat\n"
    ".type sceOpusDecDecodeFloat @function\n"
    "sceOpusDecDecodeFloat:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecDecodeFloat]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecDecodeFloatWithPriority;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecDecodeFloatWithPriority\n"
    ".type sceOpusDecDecodeFloatWithPriority @function\n"
    "sceOpusDecDecodeFloatWithPriority:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecDecodeFloatWithPriority]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecDecodeFloatWithPriorityAndTimeout;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecDecodeFloatWithPriorityAndTimeout\n"
    ".type sceOpusDecDecodeFloatWithPriorityAndTimeout @function\n"
    "sceOpusDecDecodeFloatWithPriorityAndTimeout:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecDecodeFloatWithPriorityAndTimeout]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecDecodeWithPriority;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecDecodeWithPriority\n"
    ".type sceOpusDecDecodeWithPriority @function\n"
    "sceOpusDecDecodeWithPriority:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecDecodeWithPriority]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecDecodeWithPriorityAndTimeout;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecDecodeWithPriorityAndTimeout\n"
    ".type sceOpusDecDecodeWithPriorityAndTimeout @function\n"
    "sceOpusDecDecodeWithPriorityAndTimeout:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecDecodeWithPriorityAndTimeout]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecDestroy;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecDestroy\n"
    ".type sceOpusDecDestroy @function\n"
    "sceOpusDecDestroy:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecDestroy]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecGetSize;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecGetSize\n"
    ".type sceOpusDecGetSize @function\n"
    "sceOpusDecGetSize:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecGetSize]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecInitialize\n"
    ".type sceOpusDecInitialize @function\n"
    "sceOpusDecInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceOpusDecTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceOpusDecTerminate\n"
    ".type sceOpusDecTerminate @function\n"
    "sceOpusDecTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceOpusDecTerminate]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceOpusDec", &__handle)) return;
  if(sprx_dlsym(__handle, "RQFEW7ZfQJc", &__ptr_sceOpusDecCancel)) return;
  if(sprx_dlsym(__handle, "a5zvjYkJu0s", &__ptr_sceOpusDecCreate)) return;
  if(sprx_dlsym(__handle, "KAIGiqYrtI4", &__ptr_sceOpusDecCreateEx)) return;
  if(sprx_dlsym(__handle, "m4ohLv1Fdes", &__ptr_sceOpusDecCtl)) return;
  if(sprx_dlsym(__handle, "+CSUx-budSk", &__ptr_sceOpusDecDecode)) return;
  if(sprx_dlsym(__handle, "2U9KB5G-W2w", &__ptr_sceOpusDecDecodeFloat)) return;
  if(sprx_dlsym(__handle, "DjibZOK00TU", &__ptr_sceOpusDecDecodeFloatWithPriority)) return;
  if(sprx_dlsym(__handle, "x2nJkPwKx04", &__ptr_sceOpusDecDecodeFloatWithPriorityAndTimeout)) return;
  if(sprx_dlsym(__handle, "vkBmwJuOKgY", &__ptr_sceOpusDecDecodeWithPriority)) return;
  if(sprx_dlsym(__handle, "eFhsGSf+Hbw", &__ptr_sceOpusDecDecodeWithPriorityAndTimeout)) return;
  if(sprx_dlsym(__handle, "290AWkA-lck", &__ptr_sceOpusDecDestroy)) return;
  if(sprx_dlsym(__handle, "knmEFpLg-Rk", &__ptr_sceOpusDecGetSize)) return;
  if(sprx_dlsym(__handle, "2dA75YfXNrQ", &__ptr_sceOpusDecInitialize)) return;
  if(sprx_dlsym(__handle, "qOpZPAFEvIs", &__ptr_sceOpusDecTerminate)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
