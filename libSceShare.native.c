/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceShareCaptureScreenshot;
asm(".intel_syntax noprefix\n"
    ".global sceShareCaptureScreenshot\n"
    ".type sceShareCaptureScreenshot @function\n"
    "sceShareCaptureScreenshot:\n"
    "jmp qword ptr [rip + __ptr_sceShareCaptureScreenshot]\n");

static __attribute__ ((used)) void* __ptr_sceShareCaptureVideoClip;
asm(".intel_syntax noprefix\n"
    ".global sceShareCaptureVideoClip\n"
    ".type sceShareCaptureVideoClip @function\n"
    "sceShareCaptureVideoClip:\n"
    "jmp qword ptr [rip + __ptr_sceShareCaptureVideoClip]\n");

static __attribute__ ((used)) void* __ptr_sceShareFeaturePermit;
asm(".intel_syntax noprefix\n"
    ".global sceShareFeaturePermit\n"
    ".type sceShareFeaturePermit @function\n"
    "sceShareFeaturePermit:\n"
    "jmp qword ptr [rip + __ptr_sceShareFeaturePermit]\n");

static __attribute__ ((used)) void* __ptr_sceShareFeatureProhibit;
asm(".intel_syntax noprefix\n"
    ".global sceShareFeatureProhibit\n"
    ".type sceShareFeatureProhibit @function\n"
    "sceShareFeatureProhibit:\n"
    "jmp qword ptr [rip + __ptr_sceShareFeatureProhibit]\n");

static __attribute__ ((used)) void* __ptr_sceShareGetCurrentStatus;
asm(".intel_syntax noprefix\n"
    ".global sceShareGetCurrentStatus\n"
    ".type sceShareGetCurrentStatus @function\n"
    "sceShareGetCurrentStatus:\n"
    "jmp qword ptr [rip + __ptr_sceShareGetCurrentStatus]\n");

static __attribute__ ((used)) void* __ptr_sceShareInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceShareInitialize\n"
    ".type sceShareInitialize @function\n"
    "sceShareInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceShareInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceShareOpenMenuForContent;
asm(".intel_syntax noprefix\n"
    ".global sceShareOpenMenuForContent\n"
    ".type sceShareOpenMenuForContent @function\n"
    "sceShareOpenMenuForContent:\n"
    "jmp qword ptr [rip + __ptr_sceShareOpenMenuForContent]\n");

static __attribute__ ((used)) void* __ptr_sceShareRegisterContentEventCallback;
asm(".intel_syntax noprefix\n"
    ".global sceShareRegisterContentEventCallback\n"
    ".type sceShareRegisterContentEventCallback @function\n"
    "sceShareRegisterContentEventCallback:\n"
    "jmp qword ptr [rip + __ptr_sceShareRegisterContentEventCallback]\n");

static __attribute__ ((used)) void* __ptr_sceShareSetCaptureSource;
asm(".intel_syntax noprefix\n"
    ".global sceShareSetCaptureSource\n"
    ".type sceShareSetCaptureSource @function\n"
    "sceShareSetCaptureSource:\n"
    "jmp qword ptr [rip + __ptr_sceShareSetCaptureSource]\n");

static __attribute__ ((used)) void* __ptr_sceShareSetContentParam;
asm(".intel_syntax noprefix\n"
    ".global sceShareSetContentParam\n"
    ".type sceShareSetContentParam @function\n"
    "sceShareSetContentParam:\n"
    "jmp qword ptr [rip + __ptr_sceShareSetContentParam]\n");

static __attribute__ ((used)) void* __ptr_sceShareSetScreenshotOverlayImage;
asm(".intel_syntax noprefix\n"
    ".global sceShareSetScreenshotOverlayImage\n"
    ".type sceShareSetScreenshotOverlayImage @function\n"
    "sceShareSetScreenshotOverlayImage:\n"
    "jmp qword ptr [rip + __ptr_sceShareSetScreenshotOverlayImage]\n");

static __attribute__ ((used)) void* __ptr_sceShareTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceShareTerminate\n"
    ".type sceShareTerminate @function\n"
    "sceShareTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceShareTerminate]\n");

static __attribute__ ((used)) void* __ptr_sceShareUnregisterContentEventCallback;
asm(".intel_syntax noprefix\n"
    ".global sceShareUnregisterContentEventCallback\n"
    ".type sceShareUnregisterContentEventCallback @function\n"
    "sceShareUnregisterContentEventCallback:\n"
    "jmp qword ptr [rip + __ptr_sceShareUnregisterContentEventCallback]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceShare.native", &__handle)) return;
  if(sprx_dlsym(__handle, "ErH6tKS7fzE", &__ptr_sceShareCaptureScreenshot)) return;
  if(sprx_dlsym(__handle, "4jt8pMDudgk", &__ptr_sceShareCaptureVideoClip)) return;
  if(sprx_dlsym(__handle, "YBiIdcDPrxs", &__ptr_sceShareFeaturePermit)) return;
  if(sprx_dlsym(__handle, "5wjxESwX68I", &__ptr_sceShareFeatureProhibit)) return;
  if(sprx_dlsym(__handle, "QNop2YAtIDE", &__ptr_sceShareGetCurrentStatus)) return;
  if(sprx_dlsym(__handle, "nBDD66kiFW8", &__ptr_sceShareInitialize)) return;
  if(sprx_dlsym(__handle, "8qAJ0Jd58-Q", &__ptr_sceShareOpenMenuForContent)) return;
  if(sprx_dlsym(__handle, "Sygnk9dr5WQ", &__ptr_sceShareRegisterContentEventCallback)) return;
  if(sprx_dlsym(__handle, "kCurUZVFqcI", &__ptr_sceShareSetCaptureSource)) return;
  if(sprx_dlsym(__handle, "7QZtURYnXG4", &__ptr_sceShareSetContentParam)) return;
  if(sprx_dlsym(__handle, "T64o-315wbg", &__ptr_sceShareSetScreenshotOverlayImage)) return;
  if(sprx_dlsym(__handle, "0IL1keINExQ", &__ptr_sceShareTerminate)) return;
  if(sprx_dlsym(__handle, "KnsfHKmZqFA", &__ptr_sceShareUnregisterContentEventCallback)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
