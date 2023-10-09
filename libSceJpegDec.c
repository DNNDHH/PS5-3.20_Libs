/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceJpegDecCreate;
asm(".intel_syntax noprefix\n"
    ".global sceJpegDecCreate\n"
    ".type sceJpegDecCreate @function\n"
    "sceJpegDecCreate:\n"
    "jmp qword ptr [rip + __ptr_sceJpegDecCreate]\n");

static __attribute__ ((used)) void* __ptr_sceJpegDecDecode;
asm(".intel_syntax noprefix\n"
    ".global sceJpegDecDecode\n"
    ".type sceJpegDecDecode @function\n"
    "sceJpegDecDecode:\n"
    "jmp qword ptr [rip + __ptr_sceJpegDecDecode]\n");

static __attribute__ ((used)) void* __ptr_sceJpegDecDecodeWithInputControl;
asm(".intel_syntax noprefix\n"
    ".global sceJpegDecDecodeWithInputControl\n"
    ".type sceJpegDecDecodeWithInputControl @function\n"
    "sceJpegDecDecodeWithInputControl:\n"
    "jmp qword ptr [rip + __ptr_sceJpegDecDecodeWithInputControl]\n");

static __attribute__ ((used)) void* __ptr_sceJpegDecDelete;
asm(".intel_syntax noprefix\n"
    ".global sceJpegDecDelete\n"
    ".type sceJpegDecDelete @function\n"
    "sceJpegDecDelete:\n"
    "jmp qword ptr [rip + __ptr_sceJpegDecDelete]\n");

static __attribute__ ((used)) void* __ptr_sceJpegDecParseHeader;
asm(".intel_syntax noprefix\n"
    ".global sceJpegDecParseHeader\n"
    ".type sceJpegDecParseHeader @function\n"
    "sceJpegDecParseHeader:\n"
    "jmp qword ptr [rip + __ptr_sceJpegDecParseHeader]\n");

static __attribute__ ((used)) void* __ptr_sceJpegDecQueryMemorySize;
asm(".intel_syntax noprefix\n"
    ".global sceJpegDecQueryMemorySize\n"
    ".type sceJpegDecQueryMemorySize @function\n"
    "sceJpegDecQueryMemorySize:\n"
    "jmp qword ptr [rip + __ptr_sceJpegDecQueryMemorySize]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceJpegDec", &__handle)) return;
  if(sprx_dlsym(__handle, "JPh3Zgg0Zwc", &__ptr_sceJpegDecCreate)) return;
  if(sprx_dlsym(__handle, "1kzQRoWEgSA", &__ptr_sceJpegDecDecode)) return;
  if(sprx_dlsym(__handle, "919MhccOiII", &__ptr_sceJpegDecDecodeWithInputControl)) return;
  if(sprx_dlsym(__handle, "Hwh11+m5KoI", &__ptr_sceJpegDecDelete)) return;
  if(sprx_dlsym(__handle, "LSinoSQH790", &__ptr_sceJpegDecParseHeader)) return;
  if(sprx_dlsym(__handle, "uNAUmANZMEw", &__ptr_sceJpegDecQueryMemorySize)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
