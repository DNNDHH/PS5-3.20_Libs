/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceDiscIdGet;
asm(".intel_syntax noprefix\n"
    ".global sceDiscIdGet\n"
    ".type sceDiscIdGet @function\n"
    "sceDiscIdGet:\n"
    "jmp qword ptr [rip + __ptr_sceDiscIdGet]\n");

static __attribute__ ((used)) void* __ptr_sceDiscIdGet2;
asm(".intel_syntax noprefix\n"
    ".global sceDiscIdGet2\n"
    ".type sceDiscIdGet2 @function\n"
    "sceDiscIdGet2:\n"
    "jmp qword ptr [rip + __ptr_sceDiscIdGet2]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceDiscId", &__handle)) return;
  if(sprx_dlsym(__handle, "3xULm-emJqE", &__ptr_sceDiscIdGet)) return;
  if(sprx_dlsym(__handle, "JxM80qv+BxU", &__ptr_sceDiscIdGet2)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
