/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceNpSnsFacebookDialogClose;
asm(".intel_syntax noprefix\n"
    ".global sceNpSnsFacebookDialogClose\n"
    ".type sceNpSnsFacebookDialogClose @function\n"
    "sceNpSnsFacebookDialogClose:\n"
    "jmp qword ptr [rip + __ptr_sceNpSnsFacebookDialogClose]\n");

static __attribute__ ((used)) void* __ptr_sceNpSnsFacebookDialogGetResult;
asm(".intel_syntax noprefix\n"
    ".global sceNpSnsFacebookDialogGetResult\n"
    ".type sceNpSnsFacebookDialogGetResult @function\n"
    "sceNpSnsFacebookDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceNpSnsFacebookDialogGetResult]\n");

static __attribute__ ((used)) void* __ptr_sceNpSnsFacebookDialogGetStatus;
asm(".intel_syntax noprefix\n"
    ".global sceNpSnsFacebookDialogGetStatus\n"
    ".type sceNpSnsFacebookDialogGetStatus @function\n"
    "sceNpSnsFacebookDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceNpSnsFacebookDialogGetStatus]\n");

static __attribute__ ((used)) void* __ptr_sceNpSnsFacebookDialogInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceNpSnsFacebookDialogInitialize\n"
    ".type sceNpSnsFacebookDialogInitialize @function\n"
    "sceNpSnsFacebookDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceNpSnsFacebookDialogInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceNpSnsFacebookDialogOpen;
asm(".intel_syntax noprefix\n"
    ".global sceNpSnsFacebookDialogOpen\n"
    ".type sceNpSnsFacebookDialogOpen @function\n"
    "sceNpSnsFacebookDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_sceNpSnsFacebookDialogOpen]\n");

static __attribute__ ((used)) void* __ptr_sceNpSnsFacebookDialogTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceNpSnsFacebookDialogTerminate\n"
    ".type sceNpSnsFacebookDialogTerminate @function\n"
    "sceNpSnsFacebookDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceNpSnsFacebookDialogTerminate]\n");

static __attribute__ ((used)) void* __ptr_sceNpSnsFacebookDialogUpdateStatus;
asm(".intel_syntax noprefix\n"
    ".global sceNpSnsFacebookDialogUpdateStatus\n"
    ".type sceNpSnsFacebookDialogUpdateStatus @function\n"
    "sceNpSnsFacebookDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_sceNpSnsFacebookDialogUpdateStatus]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceNpSnsFacebookDialog", &__handle)) return;
  if(sprx_dlsym(__handle, "YSUOhyK9Jd4", &__ptr_sceNpSnsFacebookDialogClose)) return;
  if(sprx_dlsym(__handle, "AifdcI1aKas", &__ptr_sceNpSnsFacebookDialogGetResult)) return;
  if(sprx_dlsym(__handle, "Rc0uh3lIoXQ", &__ptr_sceNpSnsFacebookDialogGetStatus)) return;
  if(sprx_dlsym(__handle, "tdQArULbNQk", &__ptr_sceNpSnsFacebookDialogInitialize)) return;
  if(sprx_dlsym(__handle, "Hi3onqHSN6M", &__ptr_sceNpSnsFacebookDialogOpen)) return;
  if(sprx_dlsym(__handle, "cdqOFyupRS4", &__ptr_sceNpSnsFacebookDialogTerminate)) return;
  if(sprx_dlsym(__handle, "fjV7C8H0Y8k", &__ptr_sceNpSnsFacebookDialogUpdateStatus)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}