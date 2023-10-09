/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceVoiceChatAbortRequest;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatAbortRequest\n"
    ".type sceVoiceChatAbortRequest @function\n"
    "sceVoiceChatAbortRequest:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatAbortRequest]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatCreateRequest;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatCreateRequest\n"
    ".type sceVoiceChatCreateRequest @function\n"
    "sceVoiceChatCreateRequest:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatCreateRequest]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatDeleteRequest;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatDeleteRequest\n"
    ".type sceVoiceChatDeleteRequest @function\n"
    "sceVoiceChatDeleteRequest:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatDeleteRequest]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatGetChannelMemberActiveChannelMatchingState;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatGetChannelMemberActiveChannelMatchingState\n"
    ".type sceVoiceChatGetChannelMemberActiveChannelMatchingState @function\n"
    "sceVoiceChatGetChannelMemberActiveChannelMatchingState:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatGetChannelMemberActiveChannelMatchingState]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatGetChannelMemberVoiceConnectionState;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatGetChannelMemberVoiceConnectionState\n"
    ".type sceVoiceChatGetChannelMemberVoiceConnectionState @function\n"
    "sceVoiceChatGetChannelMemberVoiceConnectionState:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatGetChannelMemberVoiceConnectionState]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatGetChatChannelMemberInfoList;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatGetChatChannelMemberInfoList\n"
    ".type sceVoiceChatGetChatChannelMemberInfoList @function\n"
    "sceVoiceChatGetChatChannelMemberInfoList:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatGetChatChannelMemberInfoList]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatGetChatGroupMemberInfoList;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatGetChatGroupMemberInfoList\n"
    ".type sceVoiceChatGetChatGroupMemberInfoList @function\n"
    "sceVoiceChatGetChatGroupMemberInfoList:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatGetChatGroupMemberInfoList]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatGetMicState;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatGetMicState\n"
    ".type sceVoiceChatGetMicState @function\n"
    "sceVoiceChatGetMicState:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatGetMicState]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatInitialize;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatInitialize\n"
    ".type sceVoiceChatInitialize @function\n"
    "sceVoiceChatInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatInitialize]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatProcessEvent;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatProcessEvent\n"
    ".type sceVoiceChatProcessEvent @function\n"
    "sceVoiceChatProcessEvent:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatProcessEvent]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRegisterHandlers;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRegisterHandlers\n"
    ".type sceVoiceChatRegisterHandlers @function\n"
    "sceVoiceChatRegisterHandlers:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRegisterHandlers]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRegisterMicEventHandler;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRegisterMicEventHandler\n"
    ".type sceVoiceChatRegisterMicEventHandler @function\n"
    "sceVoiceChatRegisterMicEventHandler:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRegisterMicEventHandler]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestCreateGameSessionVoiceChatChannel;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestCreateGameSessionVoiceChatChannel\n"
    ".type sceVoiceChatRequestCreateGameSessionVoiceChatChannel @function\n"
    "sceVoiceChatRequestCreateGameSessionVoiceChatChannel:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestCreateGameSessionVoiceChatChannel]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestCreatePlayerSessionVoiceChatChannel;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestCreatePlayerSessionVoiceChatChannel\n"
    ".type sceVoiceChatRequestCreatePlayerSessionVoiceChatChannel @function\n"
    "sceVoiceChatRequestCreatePlayerSessionVoiceChatChannel:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestCreatePlayerSessionVoiceChatChannel]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestCreateVoiceChatGroup;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestCreateVoiceChatGroup\n"
    ".type sceVoiceChatRequestCreateVoiceChatGroup @function\n"
    "sceVoiceChatRequestCreateVoiceChatGroup:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestCreateVoiceChatGroup]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestDeleteGameSessionVoiceChatChannel;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestDeleteGameSessionVoiceChatChannel\n"
    ".type sceVoiceChatRequestDeleteGameSessionVoiceChatChannel @function\n"
    "sceVoiceChatRequestDeleteGameSessionVoiceChatChannel:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestDeleteGameSessionVoiceChatChannel]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestDeletePlayerSessionVoiceChatChannel;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestDeletePlayerSessionVoiceChatChannel\n"
    ".type sceVoiceChatRequestDeletePlayerSessionVoiceChatChannel @function\n"
    "sceVoiceChatRequestDeletePlayerSessionVoiceChatChannel:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestDeletePlayerSessionVoiceChatChannel]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestDeleteVoiceChatGroup;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestDeleteVoiceChatGroup\n"
    ".type sceVoiceChatRequestDeleteVoiceChatGroup @function\n"
    "sceVoiceChatRequestDeleteVoiceChatGroup:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestDeleteVoiceChatGroup]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestJoinGameSessionVoiceChatChannel;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestJoinGameSessionVoiceChatChannel\n"
    ".type sceVoiceChatRequestJoinGameSessionVoiceChatChannel @function\n"
    "sceVoiceChatRequestJoinGameSessionVoiceChatChannel:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestJoinGameSessionVoiceChatChannel]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestJoinPlayerSessionVoiceChatChannel;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestJoinPlayerSessionVoiceChatChannel\n"
    ".type sceVoiceChatRequestJoinPlayerSessionVoiceChatChannel @function\n"
    "sceVoiceChatRequestJoinPlayerSessionVoiceChatChannel:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestJoinPlayerSessionVoiceChatChannel]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestJoinVoiceChatGroup;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestJoinVoiceChatGroup\n"
    ".type sceVoiceChatRequestJoinVoiceChatGroup @function\n"
    "sceVoiceChatRequestJoinVoiceChatGroup:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestJoinVoiceChatGroup]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestLeaveGameSessionVoiceChatChannel;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestLeaveGameSessionVoiceChatChannel\n"
    ".type sceVoiceChatRequestLeaveGameSessionVoiceChatChannel @function\n"
    "sceVoiceChatRequestLeaveGameSessionVoiceChatChannel:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestLeaveGameSessionVoiceChatChannel]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestLeavePlayerSessionVoiceChatChannel;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestLeavePlayerSessionVoiceChatChannel\n"
    ".type sceVoiceChatRequestLeavePlayerSessionVoiceChatChannel @function\n"
    "sceVoiceChatRequestLeavePlayerSessionVoiceChatChannel:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestLeavePlayerSessionVoiceChatChannel]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestLeaveVoiceChatGroup;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestLeaveVoiceChatGroup\n"
    ".type sceVoiceChatRequestLeaveVoiceChatGroup @function\n"
    "sceVoiceChatRequestLeaveVoiceChatGroup:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestLeaveVoiceChatGroup]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestRegisterSession;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestRegisterSession\n"
    ".type sceVoiceChatRequestRegisterSession @function\n"
    "sceVoiceChatRequestRegisterSession:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestRegisterSession]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestUnregisterSession;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestUnregisterSession\n"
    ".type sceVoiceChatRequestUnregisterSession @function\n"
    "sceVoiceChatRequestUnregisterSession:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestUnregisterSession]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestUpdateGameSessionVoiceChatChannelName;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestUpdateGameSessionVoiceChatChannelName\n"
    ".type sceVoiceChatRequestUpdateGameSessionVoiceChatChannelName @function\n"
    "sceVoiceChatRequestUpdateGameSessionVoiceChatChannelName:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestUpdateGameSessionVoiceChatChannelName]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatRequestUpdatePlayerSessionVoiceChatChannelName;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatRequestUpdatePlayerSessionVoiceChatChannelName\n"
    ".type sceVoiceChatRequestUpdatePlayerSessionVoiceChatChannelName @function\n"
    "sceVoiceChatRequestUpdatePlayerSessionVoiceChatChannelName:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatRequestUpdatePlayerSessionVoiceChatChannelName]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatTerminate\n"
    ".type sceVoiceChatTerminate @function\n"
    "sceVoiceChatTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatTerminate]\n");

static __attribute__ ((used)) void* __ptr_sceVoiceChatUnregisterMicEventHandler;
asm(".intel_syntax noprefix\n"
    ".global sceVoiceChatUnregisterMicEventHandler\n"
    ".type sceVoiceChatUnregisterMicEventHandler @function\n"
    "sceVoiceChatUnregisterMicEventHandler:\n"
    "jmp qword ptr [rip + __ptr_sceVoiceChatUnregisterMicEventHandler]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceVoiceChat", &__handle)) return;
  if(sprx_dlsym(__handle, "07Dax1oKoV8", &__ptr_sceVoiceChatAbortRequest)) return;
  if(sprx_dlsym(__handle, "hR8-CKMl2JQ", &__ptr_sceVoiceChatCreateRequest)) return;
  if(sprx_dlsym(__handle, "eEMpsX1fGHU", &__ptr_sceVoiceChatDeleteRequest)) return;
  if(sprx_dlsym(__handle, "wOgJGhjCAmw", &__ptr_sceVoiceChatGetChannelMemberActiveChannelMatchingState)) return;
  if(sprx_dlsym(__handle, "iEEU+O+wPfM", &__ptr_sceVoiceChatGetChannelMemberVoiceConnectionState)) return;
  if(sprx_dlsym(__handle, "FNzy4vvhlPY", &__ptr_sceVoiceChatGetChatChannelMemberInfoList)) return;
  if(sprx_dlsym(__handle, "g3CyiTf6nMY", &__ptr_sceVoiceChatGetChatGroupMemberInfoList)) return;
  if(sprx_dlsym(__handle, "ai3eCxzTopg", &__ptr_sceVoiceChatGetMicState)) return;
  if(sprx_dlsym(__handle, "spdS-hedavE", &__ptr_sceVoiceChatInitialize)) return;
  if(sprx_dlsym(__handle, "CscDZAFA5+c", &__ptr_sceVoiceChatProcessEvent)) return;
  if(sprx_dlsym(__handle, "Ptmkf9UnWBg", &__ptr_sceVoiceChatRegisterHandlers)) return;
  if(sprx_dlsym(__handle, "ajXKK3BOVc8", &__ptr_sceVoiceChatRegisterMicEventHandler)) return;
  if(sprx_dlsym(__handle, "y7MgGX889Mo", &__ptr_sceVoiceChatRequestCreateGameSessionVoiceChatChannel)) return;
  if(sprx_dlsym(__handle, "sW3km27c12M", &__ptr_sceVoiceChatRequestCreatePlayerSessionVoiceChatChannel)) return;
  if(sprx_dlsym(__handle, "8jiB8eq+BkM", &__ptr_sceVoiceChatRequestCreateVoiceChatGroup)) return;
  if(sprx_dlsym(__handle, "7bu++dneYUU", &__ptr_sceVoiceChatRequestDeleteGameSessionVoiceChatChannel)) return;
  if(sprx_dlsym(__handle, "zbKF-ejbR0Q", &__ptr_sceVoiceChatRequestDeletePlayerSessionVoiceChatChannel)) return;
  if(sprx_dlsym(__handle, "ZpO7G7+nd2E", &__ptr_sceVoiceChatRequestDeleteVoiceChatGroup)) return;
  if(sprx_dlsym(__handle, "hpG+mR4EbpE", &__ptr_sceVoiceChatRequestJoinGameSessionVoiceChatChannel)) return;
  if(sprx_dlsym(__handle, "X3BWlTuErbk", &__ptr_sceVoiceChatRequestJoinPlayerSessionVoiceChatChannel)) return;
  if(sprx_dlsym(__handle, "aT9KhNAu0RY", &__ptr_sceVoiceChatRequestJoinVoiceChatGroup)) return;
  if(sprx_dlsym(__handle, "S+mOdmysfhw", &__ptr_sceVoiceChatRequestLeaveGameSessionVoiceChatChannel)) return;
  if(sprx_dlsym(__handle, "0rKMjtnMATU", &__ptr_sceVoiceChatRequestLeavePlayerSessionVoiceChatChannel)) return;
  if(sprx_dlsym(__handle, "uWNeRp70BRw", &__ptr_sceVoiceChatRequestLeaveVoiceChatGroup)) return;
  if(sprx_dlsym(__handle, "po9eImAEhY4", &__ptr_sceVoiceChatRequestRegisterSession)) return;
  if(sprx_dlsym(__handle, "q75YGaxUT3s", &__ptr_sceVoiceChatRequestUnregisterSession)) return;
  if(sprx_dlsym(__handle, "hcB56mjq-i4", &__ptr_sceVoiceChatRequestUpdateGameSessionVoiceChatChannelName)) return;
  if(sprx_dlsym(__handle, "iaiPHdqpfdk", &__ptr_sceVoiceChatRequestUpdatePlayerSessionVoiceChatChannelName)) return;
  if(sprx_dlsym(__handle, "j43P62s5SX4", &__ptr_sceVoiceChatTerminate)) return;
  if(sprx_dlsym(__handle, "X8PFsyb2UTk", &__ptr_sceVoiceChatUnregisterMicEventHandler)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
