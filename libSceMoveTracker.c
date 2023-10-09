/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceMoveTrackerCalibrateReset;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCalibrateReset\n"
    ".type sceMoveTrackerCalibrateReset @function\n"
    "sceMoveTrackerCalibrateReset:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCalibrateReset]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerCalibrateYaw;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCalibrateYaw\n"
    ".type sceMoveTrackerCalibrateYaw @function\n"
    "sceMoveTrackerCalibrateYaw:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCalibrateYaw]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerCameraUpdate;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCameraUpdate\n"
    ".type sceMoveTrackerCameraUpdate @function\n"
    "sceMoveTrackerCameraUpdate:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCameraUpdate]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerCaptureInit;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCaptureInit\n"
    ".type sceMoveTrackerCaptureInit @function\n"
    "sceMoveTrackerCaptureInit:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCaptureInit]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerCaptureTerm;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCaptureTerm\n"
    ".type sceMoveTrackerCaptureTerm @function\n"
    "sceMoveTrackerCaptureTerm:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCaptureTerm]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerControllersUpdate;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerControllersUpdate\n"
    ".type sceMoveTrackerControllersUpdate @function\n"
    "sceMoveTrackerControllersUpdate:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerControllersUpdate]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerGetState;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerGetState\n"
    ".type sceMoveTrackerGetState @function\n"
    "sceMoveTrackerGetState:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetState]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerGetVersion;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerGetVersion\n"
    ".type sceMoveTrackerGetVersion @function\n"
    "sceMoveTrackerGetVersion:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetVersion]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerGetWorkingMemorySize;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerGetWorkingMemorySize\n"
    ".type sceMoveTrackerGetWorkingMemorySize @function\n"
    "sceMoveTrackerGetWorkingMemorySize:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetWorkingMemorySize]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerInit;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerInit\n"
    ".type sceMoveTrackerInit @function\n"
    "sceMoveTrackerInit:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerInit]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerPlayGetImages;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerPlayGetImages\n"
    ".type sceMoveTrackerPlayGetImages @function\n"
    "sceMoveTrackerPlayGetImages:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayGetImages]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerPlayGetStates;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerPlayGetStates\n"
    ".type sceMoveTrackerPlayGetStates @function\n"
    "sceMoveTrackerPlayGetStates:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayGetStates]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerPlayStart;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerPlayStart\n"
    ".type sceMoveTrackerPlayStart @function\n"
    "sceMoveTrackerPlayStart:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayStart]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerPlayStep;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerPlayStep\n"
    ".type sceMoveTrackerPlayStep @function\n"
    "sceMoveTrackerPlayStep:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayStep]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerRecordSave;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerRecordSave\n"
    ".type sceMoveTrackerRecordSave @function\n"
    "sceMoveTrackerRecordSave:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordSave]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerRecordStart;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerRecordStart\n"
    ".type sceMoveTrackerRecordStart @function\n"
    "sceMoveTrackerRecordStart:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordStart]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerRecordStop;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerRecordStop\n"
    ".type sceMoveTrackerRecordStop @function\n"
    "sceMoveTrackerRecordStop:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordStop]\n");

static __attribute__ ((used)) void* __ptr_sceMoveTrackerTerm;
asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerTerm\n"
    ".type sceMoveTrackerTerm @function\n"
    "sceMoveTrackerTerm:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerTerm]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceMoveTracker", &__handle)) return;
  if(sprx_dlsym(__handle, "IpEZSWzuMGg", &__ptr_sceMoveTrackerCalibrateReset)) return;
  if(sprx_dlsym(__handle, "YJYjBoMFRXY", &__ptr_sceMoveTrackerCalibrateYaw)) return;
  if(sprx_dlsym(__handle, "BjsreFAfJzo", &__ptr_sceMoveTrackerCameraUpdate)) return;
  if(sprx_dlsym(__handle, "GdMXy2ocZ48", &__ptr_sceMoveTrackerCaptureInit)) return;
  if(sprx_dlsym(__handle, "Hyg37zqntzY", &__ptr_sceMoveTrackerCaptureTerm)) return;
  if(sprx_dlsym(__handle, "-Y8hlMgBsr4", &__ptr_sceMoveTrackerControllersUpdate)) return;
  if(sprx_dlsym(__handle, "YV2CtE7qX8M", &__ptr_sceMoveTrackerGetState)) return;
  if(sprx_dlsym(__handle, "16efS+mFGGc", &__ptr_sceMoveTrackerGetVersion)) return;
  if(sprx_dlsym(__handle, "gg1d4KsyVVs", &__ptr_sceMoveTrackerGetWorkingMemorySize)) return;
  if(sprx_dlsym(__handle, "F4w2atwG428", &__ptr_sceMoveTrackerInit)) return;
  if(sprx_dlsym(__handle, "Vmog0fe2m+E", &__ptr_sceMoveTrackerPlayGetImages)) return;
  if(sprx_dlsym(__handle, "CZecZG5-Rfc", &__ptr_sceMoveTrackerPlayGetStates)) return;
  if(sprx_dlsym(__handle, "xGwa20Nmb2w", &__ptr_sceMoveTrackerPlayStart)) return;
  if(sprx_dlsym(__handle, "F1XWLxplruo", &__ptr_sceMoveTrackerPlayStep)) return;
  if(sprx_dlsym(__handle, "1PQY6npY6cE", &__ptr_sceMoveTrackerRecordSave)) return;
  if(sprx_dlsym(__handle, "zwC-pVt1RY4", &__ptr_sceMoveTrackerRecordStart)) return;
  if(sprx_dlsym(__handle, "7ZGS7F0Nl4E", &__ptr_sceMoveTrackerRecordStop)) return;
  if(sprx_dlsym(__handle, "3tiBWhkHH3A", &__ptr_sceMoveTrackerTerm)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
