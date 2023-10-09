/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceImeDialogAbort;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogAbort\n"
    ".type sceImeDialogAbort @function\n"
    "sceImeDialogAbort:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogAbort]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogForTestFunction;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogForTestFunction\n"
    ".type sceImeDialogForTestFunction @function\n"
    "sceImeDialogForTestFunction:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogForTestFunction]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogForceClose;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogForceClose\n"
    ".type sceImeDialogForceClose @function\n"
    "sceImeDialogForceClose:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogForceClose]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogGetCurrentStarState;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogGetCurrentStarState\n"
    ".type sceImeDialogGetCurrentStarState @function\n"
    "sceImeDialogGetCurrentStarState:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogGetCurrentStarState]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogGetPanelPositionAndForm;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogGetPanelPositionAndForm\n"
    ".type sceImeDialogGetPanelPositionAndForm @function\n"
    "sceImeDialogGetPanelPositionAndForm:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogGetPanelPositionAndForm]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogGetPanelSize;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogGetPanelSize\n"
    ".type sceImeDialogGetPanelSize @function\n"
    "sceImeDialogGetPanelSize:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogGetPanelSize]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogGetPanelSizeExtended;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogGetPanelSizeExtended\n"
    ".type sceImeDialogGetPanelSizeExtended @function\n"
    "sceImeDialogGetPanelSizeExtended:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogGetPanelSizeExtended]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogGetResult;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogGetResult\n"
    ".type sceImeDialogGetResult @function\n"
    "sceImeDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogGetResult]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogGetStatus;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogGetStatus\n"
    ".type sceImeDialogGetStatus @function\n"
    "sceImeDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogGetStatus]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogInit;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogInit\n"
    ".type sceImeDialogInit @function\n"
    "sceImeDialogInit:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogInit]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogInitInternal;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogInitInternal\n"
    ".type sceImeDialogInitInternal @function\n"
    "sceImeDialogInitInternal:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogInitInternal]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogSetPanelPosition;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogSetPanelPosition\n"
    ".type sceImeDialogSetPanelPosition @function\n"
    "sceImeDialogSetPanelPosition:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogSetPanelPosition]\n");

static __attribute__ ((used)) void* __ptr_sceImeDialogTerm;
asm(".intel_syntax noprefix\n"
    ".global sceImeDialogTerm\n"
    ".type sceImeDialogTerm @function\n"
    "sceImeDialogTerm:\n"
    "jmp qword ptr [rip + __ptr_sceImeDialogTerm]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceImeDialog", &__handle)) return;
  if(sprx_dlsym(__handle, "oBmw4xrmfKs", &__ptr_sceImeDialogAbort)) return;
  if(sprx_dlsym(__handle, "UFcyYDf+e88", &__ptr_sceImeDialogForTestFunction)) return;
  if(sprx_dlsym(__handle, "bX4H+sxPI-o", &__ptr_sceImeDialogForceClose)) return;
  if(sprx_dlsym(__handle, "fy6ntM25pEc", &__ptr_sceImeDialogGetCurrentStarState)) return;
  if(sprx_dlsym(__handle, "8jqzzPioYl8", &__ptr_sceImeDialogGetPanelPositionAndForm)) return;
  if(sprx_dlsym(__handle, "wqsJvRXwl58", &__ptr_sceImeDialogGetPanelSize)) return;
  if(sprx_dlsym(__handle, "CRD+jSErEJQ", &__ptr_sceImeDialogGetPanelSizeExtended)) return;
  if(sprx_dlsym(__handle, "x01jxu+vxlc", &__ptr_sceImeDialogGetResult)) return;
  if(sprx_dlsym(__handle, "IADmD4tScBY", &__ptr_sceImeDialogGetStatus)) return;
  if(sprx_dlsym(__handle, "NUeBrN7hzf0", &__ptr_sceImeDialogInit)) return;
  if(sprx_dlsym(__handle, "KR6QDasuKco", &__ptr_sceImeDialogInitInternal)) return;
  if(sprx_dlsym(__handle, "-2WqB87KKGg", &__ptr_sceImeDialogSetPanelPosition)) return;
  if(sprx_dlsym(__handle, "gyTyVn+bXMw", &__ptr_sceImeDialogTerm)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
