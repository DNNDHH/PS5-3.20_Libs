/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceVideoDecoderArbitrationAcceptEvent;
asm(".intel_syntax noprefix\n"
    ".global sceVideoDecoderArbitrationAcceptEvent\n"
    ".type sceVideoDecoderArbitrationAcceptEvent @function\n"
    "sceVideoDecoderArbitrationAcceptEvent:\n"
    "jmp qword ptr [rip + __ptr_sceVideoDecoderArbitrationAcceptEvent]\n");

static __attribute__ ((used)) void* __ptr_sceVideoDecoderArbitrationEnable;
asm(".intel_syntax noprefix\n"
    ".global sceVideoDecoderArbitrationEnable\n"
    ".type sceVideoDecoderArbitrationEnable @function\n"
    "sceVideoDecoderArbitrationEnable:\n"
    "jmp qword ptr [rip + __ptr_sceVideoDecoderArbitrationEnable]\n");

static __attribute__ ((used)) void* __ptr_sceVideoDecoderArbitrationEnableSuspendMode;
asm(".intel_syntax noprefix\n"
    ".global sceVideoDecoderArbitrationEnableSuspendMode\n"
    ".type sceVideoDecoderArbitrationEnableSuspendMode @function\n"
    "sceVideoDecoderArbitrationEnableSuspendMode:\n"
    "jmp qword ptr [rip + __ptr_sceVideoDecoderArbitrationEnableSuspendMode]\n");

static __attribute__ ((used)) void* __ptr_sceVideoDecoderArbitrationInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceVideoDecoderArbitrationInitialize\n"
    ".type sceVideoDecoderArbitrationInitialize @function\n"
    "sceVideoDecoderArbitrationInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceVideoDecoderArbitrationInitialize]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceVideoDecoderArbitration", &__handle)) return;
  if(sprx_dlsym(__handle, "XEUrIeCJiVs", &__ptr_sceVideoDecoderArbitrationAcceptEvent)) return;
  if(sprx_dlsym(__handle, "jnvPWZ140Sw", &__ptr_sceVideoDecoderArbitrationEnable)) return;
  if(sprx_dlsym(__handle, "lV5XniySQD8", &__ptr_sceVideoDecoderArbitrationEnableSuspendMode)) return;
  if(sprx_dlsym(__handle, "PO9tOKyviYI", &__ptr_sceVideoDecoderArbitrationInitialize)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
