/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_scePngDecCreate;
asm(".intel_syntax noprefix\n"
    ".global scePngDecCreate\n"
    ".type scePngDecCreate @function\n"
    "scePngDecCreate:\n"
    "jmp qword ptr [rip + __ptr_scePngDecCreate]\n");

static __attribute__ ((used)) void* __ptr_scePngDecDecode;
asm(".intel_syntax noprefix\n"
    ".global scePngDecDecode\n"
    ".type scePngDecDecode @function\n"
    "scePngDecDecode:\n"
    "jmp qword ptr [rip + __ptr_scePngDecDecode]\n");

static __attribute__ ((used)) void* __ptr_scePngDecDecodeWithInputControl;
asm(".intel_syntax noprefix\n"
    ".global scePngDecDecodeWithInputControl\n"
    ".type scePngDecDecodeWithInputControl @function\n"
    "scePngDecDecodeWithInputControl:\n"
    "jmp qword ptr [rip + __ptr_scePngDecDecodeWithInputControl]\n");

static __attribute__ ((used)) void* __ptr_scePngDecDelete;
asm(".intel_syntax noprefix\n"
    ".global scePngDecDelete\n"
    ".type scePngDecDelete @function\n"
    "scePngDecDelete:\n"
    "jmp qword ptr [rip + __ptr_scePngDecDelete]\n");

static __attribute__ ((used)) void* __ptr_scePngDecParseHeader;
asm(".intel_syntax noprefix\n"
    ".global scePngDecParseHeader\n"
    ".type scePngDecParseHeader @function\n"
    "scePngDecParseHeader:\n"
    "jmp qword ptr [rip + __ptr_scePngDecParseHeader]\n");

static __attribute__ ((used)) void* __ptr_scePngDecQueryMemorySize;
asm(".intel_syntax noprefix\n"
    ".global scePngDecQueryMemorySize\n"
    ".type scePngDecQueryMemorySize @function\n"
    "scePngDecQueryMemorySize:\n"
    "jmp qword ptr [rip + __ptr_scePngDecQueryMemorySize]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libScePngDec", &__handle)) return;
  if(sprx_dlsym(__handle, "m0uW+8pFyaw", &__ptr_scePngDecCreate)) return;
  if(sprx_dlsym(__handle, "WC216DD3El4", &__ptr_scePngDecDecode)) return;
  if(sprx_dlsym(__handle, "cJ--1xAbj-I", &__ptr_scePngDecDecodeWithInputControl)) return;
  if(sprx_dlsym(__handle, "QbD+eENEwo8", &__ptr_scePngDecDelete)) return;
  if(sprx_dlsym(__handle, "U6h4e5JRPaQ", &__ptr_scePngDecParseHeader)) return;
  if(sprx_dlsym(__handle, "-6srIGbLTIU", &__ptr_scePngDecQueryMemorySize)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
