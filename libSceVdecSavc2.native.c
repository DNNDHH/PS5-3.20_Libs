/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceSdecCreateSw2;
asm(".intel_syntax noprefix\n"
    ".global sceSdecCreateSw2\n"
    ".type sceSdecCreateSw2 @function\n"
    "sceSdecCreateSw2:\n"
    "jmp qword ptr [rip + __ptr_sceSdecCreateSw2]\n");

static __attribute__ ((used)) void* __ptr_sceSdecDestroySw2;
asm(".intel_syntax noprefix\n"
    ".global sceSdecDestroySw2\n"
    ".type sceSdecDestroySw2 @function\n"
    "sceSdecDestroySw2:\n"
    "jmp qword ptr [rip + __ptr_sceSdecDestroySw2]\n");

static __attribute__ ((used)) void* __ptr_sceSdecGetVersionSw2;
asm(".intel_syntax noprefix\n"
    ".global sceSdecGetVersionSw2\n"
    ".type sceSdecGetVersionSw2 @function\n"
    "sceSdecGetVersionSw2:\n"
    "jmp qword ptr [rip + __ptr_sceSdecGetVersionSw2]\n");

static __attribute__ ((used)) void* __ptr_sceSdecQueryMemorySw2;
asm(".intel_syntax noprefix\n"
    ".global sceSdecQueryMemorySw2\n"
    ".type sceSdecQueryMemorySw2 @function\n"
    "sceSdecQueryMemorySw2:\n"
    "jmp qword ptr [rip + __ptr_sceSdecQueryMemorySw2]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceVdecSavc2.native", &__handle)) return;
  if(sprx_dlsym(__handle, "NNDEWeeM7yM", &__ptr_sceSdecCreateSw2)) return;
  if(sprx_dlsym(__handle, "MKcYQKdqZFg", &__ptr_sceSdecDestroySw2)) return;
  if(sprx_dlsym(__handle, "4NQp4ipWbxA", &__ptr_sceSdecGetVersionSw2)) return;
  if(sprx_dlsym(__handle, "DtvB12rj81E", &__ptr_sceSdecQueryMemorySw2)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
