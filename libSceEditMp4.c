/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceEditMp4Abort;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4Abort\n"
    ".type sceEditMp4Abort @function\n"
    "sceEditMp4Abort:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4Abort]\n");

static __attribute__ ((used)) void* __ptr_sceEditMp4Edit;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4Edit\n"
    ".type sceEditMp4Edit @function\n"
    "sceEditMp4Edit:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4Edit]\n");

static __attribute__ ((used)) void* __ptr_sceEditMp4GetStatus;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4GetStatus\n"
    ".type sceEditMp4GetStatus @function\n"
    "sceEditMp4GetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4GetStatus]\n");

static __attribute__ ((used)) void* __ptr_sceEditMp4Initialize;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4Initialize\n"
    ".type sceEditMp4Initialize @function\n"
    "sceEditMp4Initialize:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4Initialize]\n");

static __attribute__ ((used)) void* __ptr_sceEditMp4InitializeParam;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4InitializeParam\n"
    ".type sceEditMp4InitializeParam @function\n"
    "sceEditMp4InitializeParam:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4InitializeParam]\n");

static __attribute__ ((used)) void* __ptr_sceEditMp4QueryMemSize;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4QueryMemSize\n"
    ".type sceEditMp4QueryMemSize @function\n"
    "sceEditMp4QueryMemSize:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4QueryMemSize]\n");

static __attribute__ ((used)) void* __ptr_sceEditMp4SetFinishCallback;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4SetFinishCallback\n"
    ".type sceEditMp4SetFinishCallback @function\n"
    "sceEditMp4SetFinishCallback:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4SetFinishCallback]\n");

static __attribute__ ((used)) void* __ptr_sceEditMp4Terminate;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4Terminate\n"
    ".type sceEditMp4Terminate @function\n"
    "sceEditMp4Terminate:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4Terminate]\n");

static __attribute__ ((used)) void* __ptr_sceEditMp4Unite;
asm(".intel_syntax noprefix\n"
    ".global sceEditMp4Unite\n"
    ".type sceEditMp4Unite @function\n"
    "sceEditMp4Unite:\n"
    "jmp qword ptr [rip + __ptr_sceEditMp4Unite]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceEditMp4", &__handle)) return;
  if(sprx_dlsym(__handle, "rWapdQmQQRQ", &__ptr_sceEditMp4Abort)) return;
  if(sprx_dlsym(__handle, "fXODRwVnRe4", &__ptr_sceEditMp4Edit)) return;
  if(sprx_dlsym(__handle, "W5iJUafU8r4", &__ptr_sceEditMp4GetStatus)) return;
  if(sprx_dlsym(__handle, "TzoWJFBjBW8", &__ptr_sceEditMp4Initialize)) return;
  if(sprx_dlsym(__handle, "WVBXdDlF1TE", &__ptr_sceEditMp4InitializeParam)) return;
  if(sprx_dlsym(__handle, "g8urym+l4UU", &__ptr_sceEditMp4QueryMemSize)) return;
  if(sprx_dlsym(__handle, "74PbyKbRv-I", &__ptr_sceEditMp4SetFinishCallback)) return;
  if(sprx_dlsym(__handle, "F0Sos4cB8Zg", &__ptr_sceEditMp4Terminate)) return;
  if(sprx_dlsym(__handle, "P9v+xD9gBQU", &__ptr_sceEditMp4Unite)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
