/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceContentDeleteById;
asm(".intel_syntax noprefix\n"
    ".global sceContentDeleteById\n"
    ".type sceContentDeleteById @function\n"
    "sceContentDeleteById:\n"
    "jmp qword ptr [rip + __ptr_sceContentDeleteById]\n");

static __attribute__ ((used)) void* __ptr_sceContentDeleteByPath;
asm(".intel_syntax noprefix\n"
    ".global sceContentDeleteByPath\n"
    ".type sceContentDeleteByPath @function\n"
    "sceContentDeleteByPath:\n"
    "jmp qword ptr [rip + __ptr_sceContentDeleteByPath]\n");

static __attribute__ ((used)) void* __ptr_sceContentDeleteInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceContentDeleteInitialize\n"
    ".type sceContentDeleteInitialize @function\n"
    "sceContentDeleteInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceContentDeleteInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceContentDeleteTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceContentDeleteTerminate\n"
    ".type sceContentDeleteTerminate @function\n"
    "sceContentDeleteTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceContentDeleteTerminate]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceContentDelete", &__handle)) return;
  if(sprx_dlsym(__handle, "pXJh3aVk8Ks", &__ptr_sceContentDeleteById)) return;
  if(sprx_dlsym(__handle, "qC3QW+AltHs", &__ptr_sceContentDeleteByPath)) return;
  if(sprx_dlsym(__handle, "zoxb0wEChEM", &__ptr_sceContentDeleteInitialize)) return;
  if(sprx_dlsym(__handle, "5XLSih32qHA", &__ptr_sceContentDeleteTerminate)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
