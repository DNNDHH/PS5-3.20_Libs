/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogClose;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogClose\n"
    ".type sceGameCustomDataDialogClose @function\n"
    "sceGameCustomDataDialogClose:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogClose]\n");

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogGetResult;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogGetResult\n"
    ".type sceGameCustomDataDialogGetResult @function\n"
    "sceGameCustomDataDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetResult]\n");

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogGetResultA;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogGetResultA\n"
    ".type sceGameCustomDataDialogGetResultA @function\n"
    "sceGameCustomDataDialogGetResultA:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetResultA]\n");

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogGetStatus;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogGetStatus\n"
    ".type sceGameCustomDataDialogGetStatus @function\n"
    "sceGameCustomDataDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetStatus]\n");

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogInitialize\n"
    ".type sceGameCustomDataDialogInitialize @function\n"
    "sceGameCustomDataDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogOpen;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogOpen\n"
    ".type sceGameCustomDataDialogOpen @function\n"
    "sceGameCustomDataDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogOpen]\n");

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogOpenA;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogOpenA\n"
    ".type sceGameCustomDataDialogOpenA @function\n"
    "sceGameCustomDataDialogOpenA:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogOpenA]\n");

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogTerminate\n"
    ".type sceGameCustomDataDialogTerminate @function\n"
    "sceGameCustomDataDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogTerminate]\n");

static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogUpdateStatus;
asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogUpdateStatus\n"
    ".type sceGameCustomDataDialogUpdateStatus @function\n"
    "sceGameCustomDataDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogUpdateStatus]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceGameCustomDataDialog", &__handle)) return;
  if(sprx_dlsym(__handle, "3vyRmRU3CL8", &__ptr_sceGameCustomDataDialogClose)) return;
  if(sprx_dlsym(__handle, "sJptZwvs1is", &__ptr_sceGameCustomDataDialogGetResult)) return;
  if(sprx_dlsym(__handle, "TWi-wZVp5Pc", &__ptr_sceGameCustomDataDialogGetResultA)) return;
  if(sprx_dlsym(__handle, "tcm8nRXZwNU", &__ptr_sceGameCustomDataDialogGetStatus)) return;
  if(sprx_dlsym(__handle, "xtbb-2f703A", &__ptr_sceGameCustomDataDialogInitialize)) return;
  if(sprx_dlsym(__handle, "5TvttyRuU84", &__ptr_sceGameCustomDataDialogOpen)) return;
  if(sprx_dlsym(__handle, "QHFJB2F0p3k", &__ptr_sceGameCustomDataDialogOpenA)) return;
  if(sprx_dlsym(__handle, "HwEtHFCpU5U", &__ptr_sceGameCustomDataDialogTerminate)) return;
  if(sprx_dlsym(__handle, "PkdLsRA4ON0", &__ptr_sceGameCustomDataDialogUpdateStatus)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
