/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_PKFree;
asm(".intel_syntax noprefix\n"
    ".global PKFree\n"
    ".type PKFree @function\n"
    "PKFree:\n"
    "jmp qword ptr [rip + __ptr_PKFree]\n");

static __attribute__ ((used)) void* __ptr_PixelFormatLookup;
asm(".intel_syntax noprefix\n"
    ".global PixelFormatLookup\n"
    ".type PixelFormatLookup @function\n"
    "PixelFormatLookup:\n"
    "jmp qword ptr [rip + __ptr_PixelFormatLookup]\n");

static __attribute__ ((used)) void* __ptr_readIS;
asm(".intel_syntax noprefix\n"
    ".global readIS\n"
    ".type readIS @function\n"
    "readIS:\n"
    "jmp qword ptr [rip + __ptr_readIS]\n");

static __attribute__ ((used)) void* __ptr_writeIS;
asm(".intel_syntax noprefix\n"
    ".global writeIS\n"
    ".type writeIS @function\n"
    "writeIS:\n"
    "jmp qword ptr [rip + __ptr_writeIS]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceJxr", &__handle)) return;
  if(sprx_dlsym(__handle, "GvKs80R+Ung", &__ptr_PKFree)) return;
  if(sprx_dlsym(__handle, "5Gjz1nLOKvo", &__ptr_PixelFormatLookup)) return;
  if(sprx_dlsym(__handle, "YS70c-3wL18", &__ptr_readIS)) return;
  if(sprx_dlsym(__handle, "v-PBDOPDf5I", &__ptr_writeIS)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
