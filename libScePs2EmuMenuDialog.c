/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_scePs2EmuMenuDialogClose;
asm(".intel_syntax noprefix\n"
    ".global scePs2EmuMenuDialogClose\n"
    ".type scePs2EmuMenuDialogClose @function\n"
    "scePs2EmuMenuDialogClose:\n"
    "jmp qword ptr [rip + __ptr_scePs2EmuMenuDialogClose]\n");

static __attribute__ ((used)) void* __ptr_scePs2EmuMenuDialogGetResult;
asm(".intel_syntax noprefix\n"
    ".global scePs2EmuMenuDialogGetResult\n"
    ".type scePs2EmuMenuDialogGetResult @function\n"
    "scePs2EmuMenuDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_scePs2EmuMenuDialogGetResult]\n");

static __attribute__ ((used)) void* __ptr_scePs2EmuMenuDialogGetStatus;
asm(".intel_syntax noprefix\n"
    ".global scePs2EmuMenuDialogGetStatus\n"
    ".type scePs2EmuMenuDialogGetStatus @function\n"
    "scePs2EmuMenuDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_scePs2EmuMenuDialogGetStatus]\n");

static __attribute__ ((used)) void* __ptr_scePs2EmuMenuDialogInitialize;
asm(".intel_syntax noprefix\n"
    ".global scePs2EmuMenuDialogInitialize\n"
    ".type scePs2EmuMenuDialogInitialize @function\n"
    "scePs2EmuMenuDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_scePs2EmuMenuDialogInitialize]\n");

static __attribute__ ((used)) void* __ptr_scePs2EmuMenuDialogOpen;
asm(".intel_syntax noprefix\n"
    ".global scePs2EmuMenuDialogOpen\n"
    ".type scePs2EmuMenuDialogOpen @function\n"
    "scePs2EmuMenuDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_scePs2EmuMenuDialogOpen]\n");

static __attribute__ ((used)) void* __ptr_scePs2EmuMenuDialogTerminate;
asm(".intel_syntax noprefix\n"
    ".global scePs2EmuMenuDialogTerminate\n"
    ".type scePs2EmuMenuDialogTerminate @function\n"
    "scePs2EmuMenuDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_scePs2EmuMenuDialogTerminate]\n");

static __attribute__ ((used)) void* __ptr_scePs2EmuMenuDialogUpdateStatus;
asm(".intel_syntax noprefix\n"
    ".global scePs2EmuMenuDialogUpdateStatus\n"
    ".type scePs2EmuMenuDialogUpdateStatus @function\n"
    "scePs2EmuMenuDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_scePs2EmuMenuDialogUpdateStatus]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libScePs2EmuMenuDialog", &__handle)) return;
  if(sprx_dlsym(__handle, "zTnim89xUWY", &__ptr_scePs2EmuMenuDialogClose)) return;
  if(sprx_dlsym(__handle, "eVkl4XZTS6M", &__ptr_scePs2EmuMenuDialogGetResult)) return;
  if(sprx_dlsym(__handle, "45M67FoqnUo", &__ptr_scePs2EmuMenuDialogGetStatus)) return;
  if(sprx_dlsym(__handle, "F70KBaPW924", &__ptr_scePs2EmuMenuDialogInitialize)) return;
  if(sprx_dlsym(__handle, "coiMIPkR+Ro", &__ptr_scePs2EmuMenuDialogOpen)) return;
  if(sprx_dlsym(__handle, "s1zGYYF-xC0", &__ptr_scePs2EmuMenuDialogTerminate)) return;
  if(sprx_dlsym(__handle, "KVDCpwJXoxw", &__ptr_scePs2EmuMenuDialogUpdateStatus)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}