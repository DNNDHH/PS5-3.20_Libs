/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceS3daClose;
asm(".intel_syntax noprefix\n"
    ".global sceS3daClose\n"
    ".type sceS3daClose @function\n"
    "sceS3daClose:\n"
    "jmp qword ptr [rip + __ptr_sceS3daClose]\n");

static __attribute__ ((used)) void* __ptr_sceS3daGetInfo;
asm(".intel_syntax noprefix\n"
    ".global sceS3daGetInfo\n"
    ".type sceS3daGetInfo @function\n"
    "sceS3daGetInfo:\n"
    "jmp qword ptr [rip + __ptr_sceS3daGetInfo]\n");

static __attribute__ ((used)) void* __ptr_sceS3daOpen;
asm(".intel_syntax noprefix\n"
    ".global sceS3daOpen\n"
    ".type sceS3daOpen @function\n"
    "sceS3daOpen:\n"
    "jmp qword ptr [rip + __ptr_sceS3daOpen]\n");

static __attribute__ ((used)) void* __ptr_sceS3daSendData;
asm(".intel_syntax noprefix\n"
    ".global sceS3daSendData\n"
    ".type sceS3daSendData @function\n"
    "sceS3daSendData:\n"
    "jmp qword ptr [rip + __ptr_sceS3daSendData]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceS3da", &__handle)) return;
  if(sprx_dlsym(__handle, "W0SsxHQUhGs", &__ptr_sceS3daClose)) return;
  if(sprx_dlsym(__handle, "2vcPzfCr49Q", &__ptr_sceS3daGetInfo)) return;
  if(sprx_dlsym(__handle, "lE4k3hlQbZk", &__ptr_sceS3daOpen)) return;
  if(sprx_dlsym(__handle, "ViGl7v+BjKc", &__ptr_sceS3daSendData)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}