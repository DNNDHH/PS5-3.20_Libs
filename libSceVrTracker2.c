/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceVrTracker2Finalize;
asm(".intel_syntax noprefix\n"
    ".global sceVrTracker2Finalize\n"
    ".type sceVrTracker2Finalize @function\n"
    "sceVrTracker2Finalize:\n"
    "jmp qword ptr [rip + __ptr_sceVrTracker2Finalize]\n");

static __attribute__ ((used)) void* __ptr_sceVrTracker2GetControllerImage;
asm(".intel_syntax noprefix\n"
    ".global sceVrTracker2GetControllerImage\n"
    ".type sceVrTracker2GetControllerImage @function\n"
    "sceVrTracker2GetControllerImage:\n"
    "jmp qword ptr [rip + __ptr_sceVrTracker2GetControllerImage]\n");

static __attribute__ ((used)) void* __ptr_sceVrTracker2IrGetDebugRawImage;
asm(".intel_syntax noprefix\n"
    ".global sceVrTracker2IrGetDebugRawImage\n"
    ".type sceVrTracker2IrGetDebugRawImage @function\n"
    "sceVrTracker2IrGetDebugRawImage:\n"
    "jmp qword ptr [rip + __ptr_sceVrTracker2IrGetDebugRawImage]\n");

static __attribute__ ((used)) void* __ptr_sceVrTracker2UnregisterDevice;
asm(".intel_syntax noprefix\n"
    ".global sceVrTracker2UnregisterDevice\n"
    ".type sceVrTracker2UnregisterDevice @function\n"
    "sceVrTracker2UnregisterDevice:\n"
    "jmp qword ptr [rip + __ptr_sceVrTracker2UnregisterDevice]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceVrTracker2", &__handle)) return;
  if(sprx_dlsym(__handle, "IQ3UD6SZbXo", &__ptr_sceVrTracker2Finalize)) return;
  if(sprx_dlsym(__handle, "sYBNLrMxjAM", &__ptr_sceVrTracker2GetControllerImage)) return;
  if(sprx_dlsym(__handle, "3gQncidodmw", &__ptr_sceVrTracker2IrGetDebugRawImage)) return;
  if(sprx_dlsym(__handle, "kFt4MB3SUEk", &__ptr_sceVrTracker2UnregisterDevice)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
