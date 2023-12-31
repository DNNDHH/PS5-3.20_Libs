/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceSystemTtsCancel;
asm(".intel_syntax noprefix\n"
    ".global sceSystemTtsCancel\n"
    ".type sceSystemTtsCancel @function\n"
    "sceSystemTtsCancel:\n"
    "jmp qword ptr [rip + __ptr_sceSystemTtsCancel]\n");

static __attribute__ ((used)) void* __ptr_sceSystemTtsIsAccessibilityAvailable;
asm(".intel_syntax noprefix\n"
    ".global sceSystemTtsIsAccessibilityAvailable\n"
    ".type sceSystemTtsIsAccessibilityAvailable @function\n"
    "sceSystemTtsIsAccessibilityAvailable:\n"
    "jmp qword ptr [rip + __ptr_sceSystemTtsIsAccessibilityAvailable]\n");

static __attribute__ ((used)) void* __ptr_sceSystemTtsRegisterCallback;
asm(".intel_syntax noprefix\n"
    ".global sceSystemTtsRegisterCallback\n"
    ".type sceSystemTtsRegisterCallback @function\n"
    "sceSystemTtsRegisterCallback:\n"
    "jmp qword ptr [rip + __ptr_sceSystemTtsRegisterCallback]\n");

static __attribute__ ((used)) void* __ptr_sceSystemTtsSpeakRequest;
asm(".intel_syntax noprefix\n"
    ".global sceSystemTtsSpeakRequest\n"
    ".type sceSystemTtsSpeakRequest @function\n"
    "sceSystemTtsSpeakRequest:\n"
    "jmp qword ptr [rip + __ptr_sceSystemTtsSpeakRequest]\n");

static __attribute__ ((used)) void* __ptr_sceSystemTtsUnregisterCallback;
asm(".intel_syntax noprefix\n"
    ".global sceSystemTtsUnregisterCallback\n"
    ".type sceSystemTtsUnregisterCallback @function\n"
    "sceSystemTtsUnregisterCallback:\n"
    "jmp qword ptr [rip + __ptr_sceSystemTtsUnregisterCallback]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceSystemTts", &__handle)) return;
  if(sprx_dlsym(__handle, "ptEq8HFfa58", &__ptr_sceSystemTtsCancel)) return;
  if(sprx_dlsym(__handle, "COqIT6fJpzc", &__ptr_sceSystemTtsIsAccessibilityAvailable)) return;
  if(sprx_dlsym(__handle, "up9Z19akYXM", &__ptr_sceSystemTtsRegisterCallback)) return;
  if(sprx_dlsym(__handle, "GecDKH8ag3M", &__ptr_sceSystemTtsSpeakRequest)) return;
  if(sprx_dlsym(__handle, "a05rlp573ow", &__ptr_sceSystemTtsUnregisterCallback)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
