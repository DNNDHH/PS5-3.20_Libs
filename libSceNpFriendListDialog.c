/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogClose;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogClose\n"
    ".type sceNpFriendListDialogClose @function\n"
    "sceNpFriendListDialogClose:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogClose]\n");

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogGetResult;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogGetResult\n"
    ".type sceNpFriendListDialogGetResult @function\n"
    "sceNpFriendListDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogGetResult]\n");

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogGetResultA;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogGetResultA\n"
    ".type sceNpFriendListDialogGetResultA @function\n"
    "sceNpFriendListDialogGetResultA:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogGetResultA]\n");

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogGetStatus;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogGetStatus\n"
    ".type sceNpFriendListDialogGetStatus @function\n"
    "sceNpFriendListDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogGetStatus]\n");

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogInitialize\n"
    ".type sceNpFriendListDialogInitialize @function\n"
    "sceNpFriendListDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogOpen;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogOpen\n"
    ".type sceNpFriendListDialogOpen @function\n"
    "sceNpFriendListDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogOpen]\n");

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogOpenA;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogOpenA\n"
    ".type sceNpFriendListDialogOpenA @function\n"
    "sceNpFriendListDialogOpenA:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogOpenA]\n");

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogTerminate\n"
    ".type sceNpFriendListDialogTerminate @function\n"
    "sceNpFriendListDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogTerminate]\n");

static __attribute__ ((used)) void* __ptr_sceNpFriendListDialogUpdateStatus;
asm(".intel_syntax noprefix\n"
    ".global sceNpFriendListDialogUpdateStatus\n"
    ".type sceNpFriendListDialogUpdateStatus @function\n"
    "sceNpFriendListDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_sceNpFriendListDialogUpdateStatus]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceNpFriendListDialog", &__handle)) return;
  if(sprx_dlsym(__handle, "+Y1acHGomGQ", &__ptr_sceNpFriendListDialogClose)) return;
  if(sprx_dlsym(__handle, "Z4JJhXCnIvY", &__ptr_sceNpFriendListDialogGetResult)) return;
  if(sprx_dlsym(__handle, "hK0CCljzJmY", &__ptr_sceNpFriendListDialogGetResultA)) return;
  if(sprx_dlsym(__handle, "8BVP56JIZuA", &__ptr_sceNpFriendListDialogGetStatus)) return;
  if(sprx_dlsym(__handle, "2L-W-ZYn2Qo", &__ptr_sceNpFriendListDialogInitialize)) return;
  if(sprx_dlsym(__handle, "zUM-RG5Hmyc", &__ptr_sceNpFriendListDialogOpen)) return;
  if(sprx_dlsym(__handle, "vN9sTP63WT8", &__ptr_sceNpFriendListDialogOpenA)) return;
  if(sprx_dlsym(__handle, "ECEzk+K9L2k", &__ptr_sceNpFriendListDialogTerminate)) return;
  if(sprx_dlsym(__handle, "frwz3eyuA6w", &__ptr_sceNpFriendListDialogUpdateStatus)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}