/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceConvertKeycodeGetCharacter;
asm(".intel_syntax noprefix\n"
    ".global sceConvertKeycodeGetCharacter\n"
    ".type sceConvertKeycodeGetCharacter @function\n"
    "sceConvertKeycodeGetCharacter:\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetCharacter]\n");

static __attribute__ ((used)) void* __ptr_sceConvertKeycodeGetCharacterFromKeyboardData;
asm(".intel_syntax noprefix\n"
    ".global sceConvertKeycodeGetCharacterFromKeyboardData\n"
    ".type sceConvertKeycodeGetCharacterFromKeyboardData @function\n"
    "sceConvertKeycodeGetCharacterFromKeyboardData:\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetCharacterFromKeyboardData]\n");

static __attribute__ ((used)) void* __ptr_sceConvertKeycodeGetImeKeyboardType;
asm(".intel_syntax noprefix\n"
    ".global sceConvertKeycodeGetImeKeyboardType\n"
    ".type sceConvertKeycodeGetImeKeyboardType @function\n"
    "sceConvertKeycodeGetImeKeyboardType:\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetImeKeyboardType]\n");

static __attribute__ ((used)) void* __ptr_sceConvertKeycodeGetVirtualKeycode;
asm(".intel_syntax noprefix\n"
    ".global sceConvertKeycodeGetVirtualKeycode\n"
    ".type sceConvertKeycodeGetVirtualKeycode @function\n"
    "sceConvertKeycodeGetVirtualKeycode:\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetVirtualKeycode]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceConvertKeycode", &__handle)) return;
  if(sprx_dlsym(__handle, "QjGCaJbRib4", &__ptr_sceConvertKeycodeGetCharacter)) return;
  if(sprx_dlsym(__handle, "S-Gni2KIJRY", &__ptr_sceConvertKeycodeGetCharacterFromKeyboardData)) return;
  if(sprx_dlsym(__handle, "mUuUOWI-C+0", &__ptr_sceConvertKeycodeGetImeKeyboardType)) return;
  if(sprx_dlsym(__handle, "vIsoJsLvvlM", &__ptr_sceConvertKeycodeGetVirtualKeycode)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}