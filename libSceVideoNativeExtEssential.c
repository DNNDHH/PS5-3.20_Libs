/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceVideoNativeExtEssential_CreateDecInstance;
asm(".intel_syntax noprefix\n"
    ".global sceVideoNativeExtEssential_CreateDecInstance\n"
    ".type sceVideoNativeExtEssential_CreateDecInstance @function\n"
    "sceVideoNativeExtEssential_CreateDecInstance:\n"
    "jmp qword ptr [rip + __ptr_sceVideoNativeExtEssential_CreateDecInstance]\n");

static __attribute__ ((used)) void* __ptr_sceVideoNativeExtEssential_DestroyDecInstance;
asm(".intel_syntax noprefix\n"
    ".global sceVideoNativeExtEssential_DestroyDecInstance\n"
    ".type sceVideoNativeExtEssential_DestroyDecInstance @function\n"
    "sceVideoNativeExtEssential_DestroyDecInstance:\n"
    "jmp qword ptr [rip + __ptr_sceVideoNativeExtEssential_DestroyDecInstance]\n");

static __attribute__ ((used)) void* __ptr_sceVideoNativeExtEssential_Finalize;
asm(".intel_syntax noprefix\n"
    ".global sceVideoNativeExtEssential_Finalize\n"
    ".type sceVideoNativeExtEssential_Finalize @function\n"
    "sceVideoNativeExtEssential_Finalize:\n"
    "jmp qword ptr [rip + __ptr_sceVideoNativeExtEssential_Finalize]\n");

static __attribute__ ((used)) void* __ptr_sceVideoNativeExtEssential_Initialize;
asm(".intel_syntax noprefix\n"
    ".global sceVideoNativeExtEssential_Initialize\n"
    ".type sceVideoNativeExtEssential_Initialize @function\n"
    "sceVideoNativeExtEssential_Initialize:\n"
    "jmp qword ptr [rip + __ptr_sceVideoNativeExtEssential_Initialize]\n");

static __attribute__ ((used)) void* __ptr_sceVideoNativeExtEssential_IsInit;
asm(".intel_syntax noprefix\n"
    ".global sceVideoNativeExtEssential_IsInit\n"
    ".type sceVideoNativeExtEssential_IsInit @function\n"
    "sceVideoNativeExtEssential_IsInit:\n"
    "jmp qword ptr [rip + __ptr_sceVideoNativeExtEssential_IsInit]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceVideoNativeExtEssential", &__handle)) return;
  if(sprx_dlsym(__handle, "GHib0Wf+ny0", &__ptr_sceVideoNativeExtEssential_CreateDecInstance)) return;
  if(sprx_dlsym(__handle, "NBK1rc2pqGg", &__ptr_sceVideoNativeExtEssential_DestroyDecInstance)) return;
  if(sprx_dlsym(__handle, "fbgiBYu6Q44", &__ptr_sceVideoNativeExtEssential_Finalize)) return;
  if(sprx_dlsym(__handle, "6Jy-q6ADWrg", &__ptr_sceVideoNativeExtEssential_Initialize)) return;
  if(sprx_dlsym(__handle, "4g9JiF+D2cE", &__ptr_sceVideoNativeExtEssential_IsInit)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
