/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceAutoMounterClientGetUsbDeviceInfo;
asm(".intel_syntax noprefix\n"
    ".global sceAutoMounterClientGetUsbDeviceInfo\n"
    ".type sceAutoMounterClientGetUsbDeviceInfo @function\n"
    "sceAutoMounterClientGetUsbDeviceInfo:\n"
    "jmp qword ptr [rip + __ptr_sceAutoMounterClientGetUsbDeviceInfo]\n");

static __attribute__ ((used)) void* __ptr_sceAutoMounterClientGetUsbDeviceList;
asm(".intel_syntax noprefix\n"
    ".global sceAutoMounterClientGetUsbDeviceList\n"
    ".type sceAutoMounterClientGetUsbDeviceList @function\n"
    "sceAutoMounterClientGetUsbDeviceList:\n"
    "jmp qword ptr [rip + __ptr_sceAutoMounterClientGetUsbDeviceList]\n");

static __attribute__ ((used)) void* __ptr_sceAutoMounterClientInit;
asm(".intel_syntax noprefix\n"
    ".global sceAutoMounterClientInit\n"
    ".type sceAutoMounterClientInit @function\n"
    "sceAutoMounterClientInit:\n"
    "jmp qword ptr [rip + __ptr_sceAutoMounterClientInit]\n");

static __attribute__ ((used)) void* __ptr_sceAutoMounterClientRegisterCallback;
asm(".intel_syntax noprefix\n"
    ".global sceAutoMounterClientRegisterCallback\n"
    ".type sceAutoMounterClientRegisterCallback @function\n"
    "sceAutoMounterClientRegisterCallback:\n"
    "jmp qword ptr [rip + __ptr_sceAutoMounterClientRegisterCallback]\n");

static __attribute__ ((used)) void* __ptr_sceAutoMounterClientTerm;
asm(".intel_syntax noprefix\n"
    ".global sceAutoMounterClientTerm\n"
    ".type sceAutoMounterClientTerm @function\n"
    "sceAutoMounterClientTerm:\n"
    "jmp qword ptr [rip + __ptr_sceAutoMounterClientTerm]\n");

static __attribute__ ((used)) void* __ptr_sceAutoMounterClientUnregisterCallback;
asm(".intel_syntax noprefix\n"
    ".global sceAutoMounterClientUnregisterCallback\n"
    ".type sceAutoMounterClientUnregisterCallback @function\n"
    "sceAutoMounterClientUnregisterCallback:\n"
    "jmp qword ptr [rip + __ptr_sceAutoMounterClientUnregisterCallback]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceAutoMounterClient", &__handle)) return;
  if(sprx_dlsym(__handle, "8mrBeLW0Zk0", &__ptr_sceAutoMounterClientGetUsbDeviceInfo)) return;
  if(sprx_dlsym(__handle, "YReND3Ewgj0", &__ptr_sceAutoMounterClientGetUsbDeviceList)) return;
  if(sprx_dlsym(__handle, "jgpc-w4H7FU", &__ptr_sceAutoMounterClientInit)) return;
  if(sprx_dlsym(__handle, "bGtl04R9oiY", &__ptr_sceAutoMounterClientRegisterCallback)) return;
  if(sprx_dlsym(__handle, "iEXIEzTjNtI", &__ptr_sceAutoMounterClientTerm)) return;
  if(sprx_dlsym(__handle, "ik0kGUB7Ukw", &__ptr_sceAutoMounterClientUnregisterCallback)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}