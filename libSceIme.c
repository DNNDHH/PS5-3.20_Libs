/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_FinalizeImeModule;
asm(".intel_syntax noprefix\n"
    ".global FinalizeImeModule\n"
    ".type FinalizeImeModule @function\n"
    "FinalizeImeModule:\n"
    "jmp qword ptr [rip + __ptr_FinalizeImeModule]\n");

static __attribute__ ((used)) void* __ptr_InitializeImeModule;
asm(".intel_syntax noprefix\n"
    ".global InitializeImeModule\n"
    ".type InitializeImeModule @function\n"
    "InitializeImeModule:\n"
    "jmp qword ptr [rip + __ptr_InitializeImeModule]\n");

static __attribute__ ((used)) void* __ptr_sceImeCheckFilterText;
asm(".intel_syntax noprefix\n"
    ".global sceImeCheckFilterText\n"
    ".type sceImeCheckFilterText @function\n"
    "sceImeCheckFilterText:\n"
    "jmp qword ptr [rip + __ptr_sceImeCheckFilterText]\n");

static __attribute__ ((used)) void* __ptr_sceImeCheckRemoteEventParam;
asm(".intel_syntax noprefix\n"
    ".global sceImeCheckRemoteEventParam\n"
    ".type sceImeCheckRemoteEventParam @function\n"
    "sceImeCheckRemoteEventParam:\n"
    "jmp qword ptr [rip + __ptr_sceImeCheckRemoteEventParam]\n");

static __attribute__ ((used)) void* __ptr_sceImeCheckUpdateTextInfo;
asm(".intel_syntax noprefix\n"
    ".global sceImeCheckUpdateTextInfo\n"
    ".type sceImeCheckUpdateTextInfo @function\n"
    "sceImeCheckUpdateTextInfo:\n"
    "jmp qword ptr [rip + __ptr_sceImeCheckUpdateTextInfo]\n");

static __attribute__ ((used)) void* __ptr_sceImeClose;
asm(".intel_syntax noprefix\n"
    ".global sceImeClose\n"
    ".type sceImeClose @function\n"
    "sceImeClose:\n"
    "jmp qword ptr [rip + __ptr_sceImeClose]\n");

static __attribute__ ((used)) void* __ptr_sceImeConfigGet;
asm(".intel_syntax noprefix\n"
    ".global sceImeConfigGet\n"
    ".type sceImeConfigGet @function\n"
    "sceImeConfigGet:\n"
    "jmp qword ptr [rip + __ptr_sceImeConfigGet]\n");

static __attribute__ ((used)) void* __ptr_sceImeConfigSet;
asm(".intel_syntax noprefix\n"
    ".global sceImeConfigSet\n"
    ".type sceImeConfigSet @function\n"
    "sceImeConfigSet:\n"
    "jmp qword ptr [rip + __ptr_sceImeConfigSet]\n");

static __attribute__ ((used)) void* __ptr_sceImeConfirmCandidate;
asm(".intel_syntax noprefix\n"
    ".global sceImeConfirmCandidate\n"
    ".type sceImeConfirmCandidate @function\n"
    "sceImeConfirmCandidate:\n"
    "jmp qword ptr [rip + __ptr_sceImeConfirmCandidate]\n");

static __attribute__ ((used)) void* __ptr_sceImeDicAddWord;
asm(".intel_syntax noprefix\n"
    ".global sceImeDicAddWord\n"
    ".type sceImeDicAddWord @function\n"
    "sceImeDicAddWord:\n"
    "jmp qword ptr [rip + __ptr_sceImeDicAddWord]\n");

static __attribute__ ((used)) void* __ptr_sceImeDicDeleteLearnDics;
asm(".intel_syntax noprefix\n"
    ".global sceImeDicDeleteLearnDics\n"
    ".type sceImeDicDeleteLearnDics @function\n"
    "sceImeDicDeleteLearnDics:\n"
    "jmp qword ptr [rip + __ptr_sceImeDicDeleteLearnDics]\n");

static __attribute__ ((used)) void* __ptr_sceImeDicDeleteUserDics;
asm(".intel_syntax noprefix\n"
    ".global sceImeDicDeleteUserDics\n"
    ".type sceImeDicDeleteUserDics @function\n"
    "sceImeDicDeleteUserDics:\n"
    "jmp qword ptr [rip + __ptr_sceImeDicDeleteUserDics]\n");

static __attribute__ ((used)) void* __ptr_sceImeDicDeleteWord;
asm(".intel_syntax noprefix\n"
    ".global sceImeDicDeleteWord\n"
    ".type sceImeDicDeleteWord @function\n"
    "sceImeDicDeleteWord:\n"
    "jmp qword ptr [rip + __ptr_sceImeDicDeleteWord]\n");

static __attribute__ ((used)) void* __ptr_sceImeDicGetWords;
asm(".intel_syntax noprefix\n"
    ".global sceImeDicGetWords\n"
    ".type sceImeDicGetWords @function\n"
    "sceImeDicGetWords:\n"
    "jmp qword ptr [rip + __ptr_sceImeDicGetWords]\n");

static __attribute__ ((used)) void* __ptr_sceImeDicReplaceWord;
asm(".intel_syntax noprefix\n"
    ".global sceImeDicReplaceWord\n"
    ".type sceImeDicReplaceWord @function\n"
    "sceImeDicReplaceWord:\n"
    "jmp qword ptr [rip + __ptr_sceImeDicReplaceWord]\n");

static __attribute__ ((used)) void* __ptr_sceImeDisableController;
asm(".intel_syntax noprefix\n"
    ".global sceImeDisableController\n"
    ".type sceImeDisableController @function\n"
    "sceImeDisableController:\n"
    "jmp qword ptr [rip + __ptr_sceImeDisableController]\n");

static __attribute__ ((used)) void* __ptr_sceImeFilterText;
asm(".intel_syntax noprefix\n"
    ".global sceImeFilterText\n"
    ".type sceImeFilterText @function\n"
    "sceImeFilterText:\n"
    "jmp qword ptr [rip + __ptr_sceImeFilterText]\n");

static __attribute__ ((used)) void* __ptr_sceImeForTestFunction;
asm(".intel_syntax noprefix\n"
    ".global sceImeForTestFunction\n"
    ".type sceImeForTestFunction @function\n"
    "sceImeForTestFunction:\n"
    "jmp qword ptr [rip + __ptr_sceImeForTestFunction]\n");

static __attribute__ ((used)) void* __ptr_sceImeGetPanelPositionAndForm;
asm(".intel_syntax noprefix\n"
    ".global sceImeGetPanelPositionAndForm\n"
    ".type sceImeGetPanelPositionAndForm @function\n"
    "sceImeGetPanelPositionAndForm:\n"
    "jmp qword ptr [rip + __ptr_sceImeGetPanelPositionAndForm]\n");

static __attribute__ ((used)) void* __ptr_sceImeGetPanelSize;
asm(".intel_syntax noprefix\n"
    ".global sceImeGetPanelSize\n"
    ".type sceImeGetPanelSize @function\n"
    "sceImeGetPanelSize:\n"
    "jmp qword ptr [rip + __ptr_sceImeGetPanelSize]\n");

static __attribute__ ((used)) void* __ptr_sceImeKeyboardClose;
asm(".intel_syntax noprefix\n"
    ".global sceImeKeyboardClose\n"
    ".type sceImeKeyboardClose @function\n"
    "sceImeKeyboardClose:\n"
    "jmp qword ptr [rip + __ptr_sceImeKeyboardClose]\n");

static __attribute__ ((used)) void* __ptr_sceImeKeyboardGetInfo;
asm(".intel_syntax noprefix\n"
    ".global sceImeKeyboardGetInfo\n"
    ".type sceImeKeyboardGetInfo @function\n"
    "sceImeKeyboardGetInfo:\n"
    "jmp qword ptr [rip + __ptr_sceImeKeyboardGetInfo]\n");

static __attribute__ ((used)) void* __ptr_sceImeKeyboardGetResourceId;
asm(".intel_syntax noprefix\n"
    ".global sceImeKeyboardGetResourceId\n"
    ".type sceImeKeyboardGetResourceId @function\n"
    "sceImeKeyboardGetResourceId:\n"
    "jmp qword ptr [rip + __ptr_sceImeKeyboardGetResourceId]\n");

static __attribute__ ((used)) void* __ptr_sceImeKeyboardOpen;
asm(".intel_syntax noprefix\n"
    ".global sceImeKeyboardOpen\n"
    ".type sceImeKeyboardOpen @function\n"
    "sceImeKeyboardOpen:\n"
    "jmp qword ptr [rip + __ptr_sceImeKeyboardOpen]\n");

static __attribute__ ((used)) void* __ptr_sceImeKeyboardOpenInternal;
asm(".intel_syntax noprefix\n"
    ".global sceImeKeyboardOpenInternal\n"
    ".type sceImeKeyboardOpenInternal @function\n"
    "sceImeKeyboardOpenInternal:\n"
    "jmp qword ptr [rip + __ptr_sceImeKeyboardOpenInternal]\n");

static __attribute__ ((used)) void* __ptr_sceImeKeyboardSetMode;
asm(".intel_syntax noprefix\n"
    ".global sceImeKeyboardSetMode\n"
    ".type sceImeKeyboardSetMode @function\n"
    "sceImeKeyboardSetMode:\n"
    "jmp qword ptr [rip + __ptr_sceImeKeyboardSetMode]\n");

static __attribute__ ((used)) void* __ptr_sceImeKeyboardUpdate;
asm(".intel_syntax noprefix\n"
    ".global sceImeKeyboardUpdate\n"
    ".type sceImeKeyboardUpdate @function\n"
    "sceImeKeyboardUpdate:\n"
    "jmp qword ptr [rip + __ptr_sceImeKeyboardUpdate]\n");

static __attribute__ ((used)) void* __ptr_sceImeOpen;
asm(".intel_syntax noprefix\n"
    ".global sceImeOpen\n"
    ".type sceImeOpen @function\n"
    "sceImeOpen:\n"
    "jmp qword ptr [rip + __ptr_sceImeOpen]\n");

static __attribute__ ((used)) void* __ptr_sceImeParamInit;
asm(".intel_syntax noprefix\n"
    ".global sceImeParamInit\n"
    ".type sceImeParamInit @function\n"
    "sceImeParamInit:\n"
    "jmp qword ptr [rip + __ptr_sceImeParamInit]\n");

static __attribute__ ((used)) void* __ptr_sceImeSetCandidateIndex;
asm(".intel_syntax noprefix\n"
    ".global sceImeSetCandidateIndex\n"
    ".type sceImeSetCandidateIndex @function\n"
    "sceImeSetCandidateIndex:\n"
    "jmp qword ptr [rip + __ptr_sceImeSetCandidateIndex]\n");

static __attribute__ ((used)) void* __ptr_sceImeSetCaret;
asm(".intel_syntax noprefix\n"
    ".global sceImeSetCaret\n"
    ".type sceImeSetCaret @function\n"
    "sceImeSetCaret:\n"
    "jmp qword ptr [rip + __ptr_sceImeSetCaret]\n");

static __attribute__ ((used)) void* __ptr_sceImeSetText;
asm(".intel_syntax noprefix\n"
    ".global sceImeSetText\n"
    ".type sceImeSetText @function\n"
    "sceImeSetText:\n"
    "jmp qword ptr [rip + __ptr_sceImeSetText]\n");

static __attribute__ ((used)) void* __ptr_sceImeSetTextGeometry;
asm(".intel_syntax noprefix\n"
    ".global sceImeSetTextGeometry\n"
    ".type sceImeSetTextGeometry @function\n"
    "sceImeSetTextGeometry:\n"
    "jmp qword ptr [rip + __ptr_sceImeSetTextGeometry]\n");

static __attribute__ ((used)) void* __ptr_sceImeUpdate;
asm(".intel_syntax noprefix\n"
    ".global sceImeUpdate\n"
    ".type sceImeUpdate @function\n"
    "sceImeUpdate:\n"
    "jmp qword ptr [rip + __ptr_sceImeUpdate]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshClearPreedit;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshClearPreedit\n"
    ".type sceImeVshClearPreedit @function\n"
    "sceImeVshClearPreedit:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshClearPreedit]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshClose;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshClose\n"
    ".type sceImeVshClose @function\n"
    "sceImeVshClose:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshClose]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshConfirmPreedit;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshConfirmPreedit\n"
    ".type sceImeVshConfirmPreedit @function\n"
    "sceImeVshConfirmPreedit:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshConfirmPreedit]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshGetPanelPositionAndForm;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshGetPanelPositionAndForm\n"
    ".type sceImeVshGetPanelPositionAndForm @function\n"
    "sceImeVshGetPanelPositionAndForm:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshGetPanelPositionAndForm]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshInformConfirmdString;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshInformConfirmdString\n"
    ".type sceImeVshInformConfirmdString @function\n"
    "sceImeVshInformConfirmdString:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshInformConfirmdString]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshInformConfirmdString2;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshInformConfirmdString2\n"
    ".type sceImeVshInformConfirmdString2 @function\n"
    "sceImeVshInformConfirmdString2:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshInformConfirmdString2]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshOpen;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshOpen\n"
    ".type sceImeVshOpen @function\n"
    "sceImeVshOpen:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshOpen]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshSendTextInfo;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshSendTextInfo\n"
    ".type sceImeVshSendTextInfo @function\n"
    "sceImeVshSendTextInfo:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshSendTextInfo]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshSetCaretGeometry;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshSetCaretGeometry\n"
    ".type sceImeVshSetCaretGeometry @function\n"
    "sceImeVshSetCaretGeometry:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshSetCaretGeometry]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshSetCaretIndexInPreedit;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshSetCaretIndexInPreedit\n"
    ".type sceImeVshSetCaretIndexInPreedit @function\n"
    "sceImeVshSetCaretIndexInPreedit:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshSetCaretIndexInPreedit]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshSetPanelPosition;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshSetPanelPosition\n"
    ".type sceImeVshSetPanelPosition @function\n"
    "sceImeVshSetPanelPosition:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshSetPanelPosition]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshSetParam;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshSetParam\n"
    ".type sceImeVshSetParam @function\n"
    "sceImeVshSetParam:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshSetParam]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshSetPreeditGeometry;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshSetPreeditGeometry\n"
    ".type sceImeVshSetPreeditGeometry @function\n"
    "sceImeVshSetPreeditGeometry:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshSetPreeditGeometry]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshSetSelectGeometry;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshSetSelectGeometry\n"
    ".type sceImeVshSetSelectGeometry @function\n"
    "sceImeVshSetSelectGeometry:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshSetSelectGeometry]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshSetSelectionText;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshSetSelectionText\n"
    ".type sceImeVshSetSelectionText @function\n"
    "sceImeVshSetSelectionText:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshSetSelectionText]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshUpdate;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshUpdate\n"
    ".type sceImeVshUpdate @function\n"
    "sceImeVshUpdate:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshUpdate]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshUpdateContext;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshUpdateContext\n"
    ".type sceImeVshUpdateContext @function\n"
    "sceImeVshUpdateContext:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshUpdateContext]\n");

static __attribute__ ((used)) void* __ptr_sceImeVshUpdateContext2;
asm(".intel_syntax noprefix\n"
    ".global sceImeVshUpdateContext2\n"
    ".type sceImeVshUpdateContext2 @function\n"
    "sceImeVshUpdateContext2:\n"
    "jmp qword ptr [rip + __ptr_sceImeVshUpdateContext2]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceIme", &__handle)) return;
  if(sprx_dlsym(__handle, "mN+ZoSN-8hQ", &__ptr_FinalizeImeModule)) return;
  if(sprx_dlsym(__handle, "uTW+63goeJs", &__ptr_InitializeImeModule)) return;
  if(sprx_dlsym(__handle, "Lf3DeGWC6xg", &__ptr_sceImeCheckFilterText)) return;
  if(sprx_dlsym(__handle, "zHuMUGb-AQI", &__ptr_sceImeCheckRemoteEventParam)) return;
  if(sprx_dlsym(__handle, "OTb0Mg+1i1k", &__ptr_sceImeCheckUpdateTextInfo)) return;
  if(sprx_dlsym(__handle, "TmVP8LzcFcY", &__ptr_sceImeClose)) return;
  if(sprx_dlsym(__handle, "Ho5NVQzpKHo", &__ptr_sceImeConfigGet)) return;
  if(sprx_dlsym(__handle, "P5dPeiLwm-M", &__ptr_sceImeConfigSet)) return;
  if(sprx_dlsym(__handle, "tKLmVIUkpyM", &__ptr_sceImeConfirmCandidate)) return;
  if(sprx_dlsym(__handle, "NYDsL9a0oEo", &__ptr_sceImeDicAddWord)) return;
  if(sprx_dlsym(__handle, "l01GKoyiQrY", &__ptr_sceImeDicDeleteLearnDics)) return;
  if(sprx_dlsym(__handle, "E2OcGgi-FPY", &__ptr_sceImeDicDeleteUserDics)) return;
  if(sprx_dlsym(__handle, "JAiMBkOTYKI", &__ptr_sceImeDicDeleteWord)) return;
  if(sprx_dlsym(__handle, "JoPdCUXOzMU", &__ptr_sceImeDicGetWords)) return;
  if(sprx_dlsym(__handle, "FuEl46uHDyo", &__ptr_sceImeDicReplaceWord)) return;
  if(sprx_dlsym(__handle, "E+f1n8e8DAw", &__ptr_sceImeDisableController)) return;
  if(sprx_dlsym(__handle, "evjOsE18yuI", &__ptr_sceImeFilterText)) return;
  if(sprx_dlsym(__handle, "wVkehxutK-U", &__ptr_sceImeForTestFunction)) return;
  if(sprx_dlsym(__handle, "T6FYjZXG93o", &__ptr_sceImeGetPanelPositionAndForm)) return;
  if(sprx_dlsym(__handle, "ziPDcIjO0Vk", &__ptr_sceImeGetPanelSize)) return;
  if(sprx_dlsym(__handle, "PMVehSlfZ94", &__ptr_sceImeKeyboardClose)) return;
  if(sprx_dlsym(__handle, "VkqLPArfFdc", &__ptr_sceImeKeyboardGetInfo)) return;
  if(sprx_dlsym(__handle, "dKadqZFgKKQ", &__ptr_sceImeKeyboardGetResourceId)) return;
  if(sprx_dlsym(__handle, "eaFXjfJv3xs", &__ptr_sceImeKeyboardOpen)) return;
  if(sprx_dlsym(__handle, "oYkJlMK51SA", &__ptr_sceImeKeyboardOpenInternal)) return;
  if(sprx_dlsym(__handle, "ua+13Hk9kKs", &__ptr_sceImeKeyboardSetMode)) return;
  if(sprx_dlsym(__handle, "3Hx2Uw9xnv8", &__ptr_sceImeKeyboardUpdate)) return;
  if(sprx_dlsym(__handle, "RPydv-Jr1bc", &__ptr_sceImeOpen)) return;
  if(sprx_dlsym(__handle, "WmYDzdC4EHI", &__ptr_sceImeParamInit)) return;
  if(sprx_dlsym(__handle, "TQaogSaqkEk", &__ptr_sceImeSetCandidateIndex)) return;
  if(sprx_dlsym(__handle, "WLxUN2WMim8", &__ptr_sceImeSetCaret)) return;
  if(sprx_dlsym(__handle, "ieCNrVrzKd4", &__ptr_sceImeSetText)) return;
  if(sprx_dlsym(__handle, "TXYHFRuL8UY", &__ptr_sceImeSetTextGeometry)) return;
  if(sprx_dlsym(__handle, "-4GCfYdNF1s", &__ptr_sceImeUpdate)) return;
  if(sprx_dlsym(__handle, "oOwl47ouxoM", &__ptr_sceImeVshClearPreedit)) return;
  if(sprx_dlsym(__handle, "gtoTsGM9vEY", &__ptr_sceImeVshClose)) return;
  if(sprx_dlsym(__handle, "wTKF4mUlSew", &__ptr_sceImeVshConfirmPreedit)) return;
  if(sprx_dlsym(__handle, "42xMaQ+GLeQ", &__ptr_sceImeVshGetPanelPositionAndForm)) return;
  if(sprx_dlsym(__handle, "ZmmV6iukhyo", &__ptr_sceImeVshInformConfirmdString)) return;
  if(sprx_dlsym(__handle, "EQBusz6Uhp8", &__ptr_sceImeVshInformConfirmdString2)) return;
  if(sprx_dlsym(__handle, "LBicRa-hj3A", &__ptr_sceImeVshOpen)) return;
  if(sprx_dlsym(__handle, "-IAOwd2nO7g", &__ptr_sceImeVshSendTextInfo)) return;
  if(sprx_dlsym(__handle, "qDagOjvJdNk", &__ptr_sceImeVshSetCaretGeometry)) return;
  if(sprx_dlsym(__handle, "tNOlmxee-Nk", &__ptr_sceImeVshSetCaretIndexInPreedit)) return;
  if(sprx_dlsym(__handle, "rASXozKkQ9g", &__ptr_sceImeVshSetPanelPosition)) return;
  if(sprx_dlsym(__handle, "idvMaIu5H+k", &__ptr_sceImeVshSetParam)) return;
  if(sprx_dlsym(__handle, "ga5GOgThbjo", &__ptr_sceImeVshSetPreeditGeometry)) return;
  if(sprx_dlsym(__handle, "RuSca8rS6yA", &__ptr_sceImeVshSetSelectGeometry)) return;
  if(sprx_dlsym(__handle, "J7COZrgSFRA", &__ptr_sceImeVshSetSelectionText)) return;
  if(sprx_dlsym(__handle, "WqAayyok5p0", &__ptr_sceImeVshUpdate)) return;
  if(sprx_dlsym(__handle, "O7Fdd+Oc-qQ", &__ptr_sceImeVshUpdateContext)) return;
  if(sprx_dlsym(__handle, "fwcPR7+7Rks", &__ptr_sceImeVshUpdateContext2)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
