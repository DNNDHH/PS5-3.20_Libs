/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr__Z5dummyv;
asm(".intel_syntax noprefix\n"
    ".global _Z5dummyv\n"
    ".type _Z5dummyv @function\n"
    "_Z5dummyv:\n"
    "jmp qword ptr [rip + __ptr__Z5dummyv]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceNpPartner001", &__handle)) return;
  if(sprx_dlsym(__handle, "AS45QoYHjc4", &__ptr__Z5dummyv)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
