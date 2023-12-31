/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceAudiodecCpuClearContext;
asm(".intel_syntax noprefix\n"
    ".global sceAudiodecCpuClearContext\n"
    ".type sceAudiodecCpuClearContext @function\n"
    "sceAudiodecCpuClearContext:\n"
    "jmp qword ptr [rip + __ptr_sceAudiodecCpuClearContext]\n");

static __attribute__ ((used)) void* __ptr_sceAudiodecCpuDecode;
asm(".intel_syntax noprefix\n"
    ".global sceAudiodecCpuDecode\n"
    ".type sceAudiodecCpuDecode @function\n"
    "sceAudiodecCpuDecode:\n"
    "jmp qword ptr [rip + __ptr_sceAudiodecCpuDecode]\n");

static __attribute__ ((used)) void* __ptr_sceAudiodecCpuInitDecoder;
asm(".intel_syntax noprefix\n"
    ".global sceAudiodecCpuInitDecoder\n"
    ".type sceAudiodecCpuInitDecoder @function\n"
    "sceAudiodecCpuInitDecoder:\n"
    "jmp qword ptr [rip + __ptr_sceAudiodecCpuInitDecoder]\n");

static __attribute__ ((used)) void* __ptr_sceAudiodecCpuInternalClearContext;
asm(".intel_syntax noprefix\n"
    ".global sceAudiodecCpuInternalClearContext\n"
    ".type sceAudiodecCpuInternalClearContext @function\n"
    "sceAudiodecCpuInternalClearContext:\n"
    "jmp qword ptr [rip + __ptr_sceAudiodecCpuInternalClearContext]\n");

static __attribute__ ((used)) void* __ptr_sceAudiodecCpuInternalDecode;
asm(".intel_syntax noprefix\n"
    ".global sceAudiodecCpuInternalDecode\n"
    ".type sceAudiodecCpuInternalDecode @function\n"
    "sceAudiodecCpuInternalDecode:\n"
    "jmp qword ptr [rip + __ptr_sceAudiodecCpuInternalDecode]\n");

static __attribute__ ((used)) void* __ptr_sceAudiodecCpuInternalInitDecoder;
asm(".intel_syntax noprefix\n"
    ".global sceAudiodecCpuInternalInitDecoder\n"
    ".type sceAudiodecCpuInternalInitDecoder @function\n"
    "sceAudiodecCpuInternalInitDecoder:\n"
    "jmp qword ptr [rip + __ptr_sceAudiodecCpuInternalInitDecoder]\n");

static __attribute__ ((used)) void* __ptr_sceAudiodecCpuInternalQueryMemSize;
asm(".intel_syntax noprefix\n"
    ".global sceAudiodecCpuInternalQueryMemSize\n"
    ".type sceAudiodecCpuInternalQueryMemSize @function\n"
    "sceAudiodecCpuInternalQueryMemSize:\n"
    "jmp qword ptr [rip + __ptr_sceAudiodecCpuInternalQueryMemSize]\n");

static __attribute__ ((used)) void* __ptr_sceAudiodecCpuQueryMemSize;
asm(".intel_syntax noprefix\n"
    ".global sceAudiodecCpuQueryMemSize\n"
    ".type sceAudiodecCpuQueryMemSize @function\n"
    "sceAudiodecCpuQueryMemSize:\n"
    "jmp qword ptr [rip + __ptr_sceAudiodecCpuQueryMemSize]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceAudiodecCpu", &__handle)) return;
  if(sprx_dlsym(__handle, "hAS5WH6hxrE", &__ptr_sceAudiodecCpuClearContext)) return;
  if(sprx_dlsym(__handle, "lSVTiWV5wLc", &__ptr_sceAudiodecCpuDecode)) return;
  if(sprx_dlsym(__handle, "hdFsxo3MFu8", &__ptr_sceAudiodecCpuInitDecoder)) return;
  if(sprx_dlsym(__handle, "CnY1NGmdi7I", &__ptr_sceAudiodecCpuInternalClearContext)) return;
  if(sprx_dlsym(__handle, "-0jDlM2hG5k", &__ptr_sceAudiodecCpuInternalDecode)) return;
  if(sprx_dlsym(__handle, "KkhdeVCyo6Y", &__ptr_sceAudiodecCpuInternalInitDecoder)) return;
  if(sprx_dlsym(__handle, "R8v5kdZ55mY", &__ptr_sceAudiodecCpuInternalQueryMemSize)) return;
  if(sprx_dlsym(__handle, "ktD2w3D4G2U", &__ptr_sceAudiodecCpuQueryMemSize)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
