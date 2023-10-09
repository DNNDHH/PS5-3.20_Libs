/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_scePadTrackerCalibrate;
asm(".intel_syntax noprefix\n"
    ".global scePadTrackerCalibrate\n"
    ".type scePadTrackerCalibrate @function\n"
    "scePadTrackerCalibrate:\n"
    "jmp qword ptr [rip + __ptr_scePadTrackerCalibrate]\n");

static __attribute__ ((used)) void* __ptr_scePadTrackerGetWorkingMemorySize;
asm(".intel_syntax noprefix\n"
    ".global scePadTrackerGetWorkingMemorySize\n"
    ".type scePadTrackerGetWorkingMemorySize @function\n"
    "scePadTrackerGetWorkingMemorySize:\n"
    "jmp qword ptr [rip + __ptr_scePadTrackerGetWorkingMemorySize]\n");

static __attribute__ ((used)) void* __ptr_scePadTrackerInit;
asm(".intel_syntax noprefix\n"
    ".global scePadTrackerInit\n"
    ".type scePadTrackerInit @function\n"
    "scePadTrackerInit:\n"
    "jmp qword ptr [rip + __ptr_scePadTrackerInit]\n");

static __attribute__ ((used)) void* __ptr_scePadTrackerReadState;
asm(".intel_syntax noprefix\n"
    ".global scePadTrackerReadState\n"
    ".type scePadTrackerReadState @function\n"
    "scePadTrackerReadState:\n"
    "jmp qword ptr [rip + __ptr_scePadTrackerReadState]\n");

static __attribute__ ((used)) void* __ptr_scePadTrackerTerm;
asm(".intel_syntax noprefix\n"
    ".global scePadTrackerTerm\n"
    ".type scePadTrackerTerm @function\n"
    "scePadTrackerTerm:\n"
    "jmp qword ptr [rip + __ptr_scePadTrackerTerm]\n");

static __attribute__ ((used)) void* __ptr_scePadTrackerUpdate;
asm(".intel_syntax noprefix\n"
    ".global scePadTrackerUpdate\n"
    ".type scePadTrackerUpdate @function\n"
    "scePadTrackerUpdate:\n"
    "jmp qword ptr [rip + __ptr_scePadTrackerUpdate]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libScePadTracker", &__handle)) return;
  if(sprx_dlsym(__handle, "FN4UuY2CUz0", &__ptr_scePadTrackerCalibrate)) return;
  if(sprx_dlsym(__handle, "8bK-4Vxjr8E", &__ptr_scePadTrackerGetWorkingMemorySize)) return;
  if(sprx_dlsym(__handle, "G1-RyPlIrIY", &__ptr_scePadTrackerInit)) return;
  if(sprx_dlsym(__handle, "PqlxOq+k02o", &__ptr_scePadTrackerReadState)) return;
  if(sprx_dlsym(__handle, "Ci0PqEOATeQ", &__ptr_scePadTrackerTerm)) return;
  if(sprx_dlsym(__handle, "cri6g3qvCtc", &__ptr_scePadTrackerUpdate)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
