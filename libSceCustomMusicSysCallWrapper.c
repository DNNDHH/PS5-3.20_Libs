/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceCustomMusicSelect;
asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicSelect\n"
    ".type sceCustomMusicSelect @function\n"
    "sceCustomMusicSelect:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicSelect]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceCustomMusicSysCallWrapper", &__handle)) return;
  if(sprx_dlsym(__handle, "KKaarkWGxWI", &__ptr_sceCustomMusicSelect)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
