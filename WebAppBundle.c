/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_WKBundleInitialize;
asm(".intel_syntax noprefix\n"
    ".global WKBundleInitialize\n"
    ".type WKBundleInitialize @function\n"
    "WKBundleInitialize:\n"
    "jmp qword ptr [rip + __ptr_WKBundleInitialize]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("WebAppBundle", &__handle)) return;
  if(sprx_dlsym(__handle, "es-hzEqlzr0", &__ptr_WKBundleInitialize)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
