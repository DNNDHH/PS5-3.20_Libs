/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncCancel;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncCancel\n"
    ".type sceOpusSilkEncCancel @function\n"
    "sceOpusSilkEncCancel:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncCancel]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncCreate;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncCreate\n"
    ".type sceOpusSilkEncCreate @function\n"
    "sceOpusSilkEncCreate:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncCreate]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncCreateEx;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncCreateEx\n"
    ".type sceOpusSilkEncCreateEx @function\n"
    "sceOpusSilkEncCreateEx:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncCreateEx]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncCtl;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncCtl\n"
    ".type sceOpusSilkEncCtl @function\n"
    "sceOpusSilkEncCtl:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncCtl]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncDestroy;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncDestroy\n"
    ".type sceOpusSilkEncDestroy @function\n"
    "sceOpusSilkEncDestroy:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncDestroy]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncEncode;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncEncode\n"
    ".type sceOpusSilkEncEncode @function\n"
    "sceOpusSilkEncEncode:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncEncode]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncEncodeFloat;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncEncodeFloat\n"
    ".type sceOpusSilkEncEncodeFloat @function\n"
    "sceOpusSilkEncEncodeFloat:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncEncodeFloat]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncEncodeFloatWithPriority;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncEncodeFloatWithPriority\n"
    ".type sceOpusSilkEncEncodeFloatWithPriority @function\n"
    "sceOpusSilkEncEncodeFloatWithPriority:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncEncodeFloatWithPriority]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncEncodeFloatWithPriorityAndTimeout;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncEncodeFloatWithPriorityAndTimeout\n"
    ".type sceOpusSilkEncEncodeFloatWithPriorityAndTimeout @function\n"
    "sceOpusSilkEncEncodeFloatWithPriorityAndTimeout:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncEncodeFloatWithPriorityAndTimeout]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncEncodeWithPriority;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncEncodeWithPriority\n"
    ".type sceOpusSilkEncEncodeWithPriority @function\n"
    "sceOpusSilkEncEncodeWithPriority:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncEncodeWithPriority]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncEncodeWithPriorityAndTimeout;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncEncodeWithPriorityAndTimeout\n"
    ".type sceOpusSilkEncEncodeWithPriorityAndTimeout @function\n"
    "sceOpusSilkEncEncodeWithPriorityAndTimeout:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncEncodeWithPriorityAndTimeout]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncGetSize;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncGetSize\n"
    ".type sceOpusSilkEncGetSize @function\n"
    "sceOpusSilkEncGetSize:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncGetSize]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncInitialize\n"
    ".type sceOpusSilkEncInitialize @function\n"
    "sceOpusSilkEncInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceOpusSilkEncTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceOpusSilkEncTerminate\n"
    ".type sceOpusSilkEncTerminate @function\n"
    "sceOpusSilkEncTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceOpusSilkEncTerminate]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceOpusSilkEnc", &__handle)) return;
  if(sprx_dlsym(__handle, "S2yTg8ZqUtw", &__ptr_sceOpusSilkEncCancel)) return;
  if(sprx_dlsym(__handle, "du4P08Wq144", &__ptr_sceOpusSilkEncCreate)) return;
  if(sprx_dlsym(__handle, "RTRzcT0eBrY", &__ptr_sceOpusSilkEncCreateEx)) return;
  if(sprx_dlsym(__handle, "5nl86m-O6zg", &__ptr_sceOpusSilkEncCtl)) return;
  if(sprx_dlsym(__handle, "Vq8Y0nLGy74", &__ptr_sceOpusSilkEncDestroy)) return;
  if(sprx_dlsym(__handle, "ukkAU3uqfqc", &__ptr_sceOpusSilkEncEncode)) return;
  if(sprx_dlsym(__handle, "DsPrCZ82v3g", &__ptr_sceOpusSilkEncEncodeFloat)) return;
  if(sprx_dlsym(__handle, "hFTzgblpaSg", &__ptr_sceOpusSilkEncEncodeFloatWithPriority)) return;
  if(sprx_dlsym(__handle, "emNQgrM1-M8", &__ptr_sceOpusSilkEncEncodeFloatWithPriorityAndTimeout)) return;
  if(sprx_dlsym(__handle, "36SxclBwsFs", &__ptr_sceOpusSilkEncEncodeWithPriority)) return;
  if(sprx_dlsym(__handle, "vytOYzDyTq0", &__ptr_sceOpusSilkEncEncodeWithPriorityAndTimeout)) return;
  if(sprx_dlsym(__handle, "gpdlKz0w448", &__ptr_sceOpusSilkEncGetSize)) return;
  if(sprx_dlsym(__handle, "uBN2pO1YkOM", &__ptr_sceOpusSilkEncInitialize)) return;
  if(sprx_dlsym(__handle, "q-89AuIWC3s", &__ptr_sceOpusSilkEncTerminate)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
