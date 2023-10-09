/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_AsyncStorageClearNative;
asm(".intel_syntax noprefix\n"
    ".global AsyncStorageClearNative\n"
    ".type AsyncStorageClearNative @function\n"
    "AsyncStorageClearNative:\n"
    "jmp qword ptr [rip + __ptr_AsyncStorageClearNative]\n");

static __attribute__ ((used)) void* __ptr_AsyncStorageCloseNative;
asm(".intel_syntax noprefix\n"
    ".global AsyncStorageCloseNative\n"
    ".type AsyncStorageCloseNative @function\n"
    "AsyncStorageCloseNative:\n"
    "jmp qword ptr [rip + __ptr_AsyncStorageCloseNative]\n");

static __attribute__ ((used)) void* __ptr_AsyncStorageGetAllKeysNative;
asm(".intel_syntax noprefix\n"
    ".global AsyncStorageGetAllKeysNative\n"
    ".type AsyncStorageGetAllKeysNative @function\n"
    "AsyncStorageGetAllKeysNative:\n"
    "jmp qword ptr [rip + __ptr_AsyncStorageGetAllKeysNative]\n");

static __attribute__ ((used)) void* __ptr_AsyncStorageGetItemNative;
asm(".intel_syntax noprefix\n"
    ".global AsyncStorageGetItemNative\n"
    ".type AsyncStorageGetItemNative @function\n"
    "AsyncStorageGetItemNative:\n"
    "jmp qword ptr [rip + __ptr_AsyncStorageGetItemNative]\n");

static __attribute__ ((used)) void* __ptr_AsyncStorageOpenNative;
asm(".intel_syntax noprefix\n"
    ".global AsyncStorageOpenNative\n"
    ".type AsyncStorageOpenNative @function\n"
    "AsyncStorageOpenNative:\n"
    "jmp qword ptr [rip + __ptr_AsyncStorageOpenNative]\n");

static __attribute__ ((used)) void* __ptr_AsyncStorageRemoveItemNative;
asm(".intel_syntax noprefix\n"
    ".global AsyncStorageRemoveItemNative\n"
    ".type AsyncStorageRemoveItemNative @function\n"
    "AsyncStorageRemoveItemNative:\n"
    "jmp qword ptr [rip + __ptr_AsyncStorageRemoveItemNative]\n");

static __attribute__ ((used)) void* __ptr_AsyncStorageSetItemNative;
asm(".intel_syntax noprefix\n"
    ".global AsyncStorageSetItemNative\n"
    ".type AsyncStorageSetItemNative @function\n"
    "AsyncStorageSetItemNative:\n"
    "jmp qword ptr [rip + __ptr_AsyncStorageSetItemNative]\n");

static __attribute__ ((used)) void* __ptr_BgsStorageClose;
asm(".intel_syntax noprefix\n"
    ".global BgsStorageClose\n"
    ".type BgsStorageClose @function\n"
    "BgsStorageClose:\n"
    "jmp qword ptr [rip + __ptr_BgsStorageClose]\n");

static __attribute__ ((used)) void* __ptr_BgsStorageFreeKeyValueResult;
asm(".intel_syntax noprefix\n"
    ".global BgsStorageFreeKeyValueResult\n"
    ".type BgsStorageFreeKeyValueResult @function\n"
    "BgsStorageFreeKeyValueResult:\n"
    "jmp qword ptr [rip + __ptr_BgsStorageFreeKeyValueResult]\n");

static __attribute__ ((used)) void* __ptr_BgsStorageFreeListResult;
asm(".intel_syntax noprefix\n"
    ".global BgsStorageFreeListResult\n"
    ".type BgsStorageFreeListResult @function\n"
    "BgsStorageFreeListResult:\n"
    "jmp qword ptr [rip + __ptr_BgsStorageFreeListResult]\n");

static __attribute__ ((used)) void* __ptr_BgsStorageGetContainers;
asm(".intel_syntax noprefix\n"
    ".global BgsStorageGetContainers\n"
    ".type BgsStorageGetContainers @function\n"
    "BgsStorageGetContainers:\n"
    "jmp qword ptr [rip + __ptr_BgsStorageGetContainers]\n");

static __attribute__ ((used)) void* __ptr_BgsStorageGetItems;
asm(".intel_syntax noprefix\n"
    ".global BgsStorageGetItems\n"
    ".type BgsStorageGetItems @function\n"
    "BgsStorageGetItems:\n"
    "jmp qword ptr [rip + __ptr_BgsStorageGetItems]\n");

static __attribute__ ((used)) void* __ptr_BgsStorageGetItemsBySearch;
asm(".intel_syntax noprefix\n"
    ".global BgsStorageGetItemsBySearch\n"
    ".type BgsStorageGetItemsBySearch @function\n"
    "BgsStorageGetItemsBySearch:\n"
    "jmp qword ptr [rip + __ptr_BgsStorageGetItemsBySearch]\n");

static __attribute__ ((used)) void* __ptr_BgsStorageOpen;
asm(".intel_syntax noprefix\n"
    ".global BgsStorageOpen\n"
    ".type BgsStorageOpen @function\n"
    "BgsStorageOpen:\n"
    "jmp qword ptr [rip + __ptr_BgsStorageOpen]\n");

static __attribute__ ((used)) void* __ptr_CurlGetDefaultUA;
asm(".intel_syntax noprefix\n"
    ".global CurlGetDefaultUA\n"
    ".type CurlGetDefaultUA @function\n"
    "CurlGetDefaultUA:\n"
    "jmp qword ptr [rip + __ptr_CurlGetDefaultUA]\n");

static __attribute__ ((used)) void* __ptr_CurlMultiInitialize;
asm(".intel_syntax noprefix\n"
    ".global CurlMultiInitialize\n"
    ".type CurlMultiInitialize @function\n"
    "CurlMultiInitialize:\n"
    "jmp qword ptr [rip + __ptr_CurlMultiInitialize]\n");

static __attribute__ ((used)) void* __ptr_CurlMultiQueueRequest;
asm(".intel_syntax noprefix\n"
    ".global CurlMultiQueueRequest\n"
    ".type CurlMultiQueueRequest @function\n"
    "CurlMultiQueueRequest:\n"
    "jmp qword ptr [rip + __ptr_CurlMultiQueueRequest]\n");

static __attribute__ ((used)) void* __ptr_CurlSendRequest;
asm(".intel_syntax noprefix\n"
    ".global CurlSendRequest\n"
    ".type CurlSendRequest @function\n"
    "CurlSendRequest:\n"
    "jmp qword ptr [rip + __ptr_CurlSendRequest]\n");

static __attribute__ ((used)) void* __ptr_DecryptRnpsBundle;
asm(".intel_syntax noprefix\n"
    ".global DecryptRnpsBundle\n"
    ".type DecryptRnpsBundle @function\n"
    "DecryptRnpsBundle:\n"
    "jmp qword ptr [rip + __ptr_DecryptRnpsBundle]\n");

static __attribute__ ((used)) void* __ptr_HttpCacheWrapperFree;
asm(".intel_syntax noprefix\n"
    ".global HttpCacheWrapperFree\n"
    ".type HttpCacheWrapperFree @function\n"
    "HttpCacheWrapperFree:\n"
    "jmp qword ptr [rip + __ptr_HttpCacheWrapperFree]\n");

static __attribute__ ((used)) void* __ptr_HttpCacheWrapperRetrieve;
asm(".intel_syntax noprefix\n"
    ".global HttpCacheWrapperRetrieve\n"
    ".type HttpCacheWrapperRetrieve @function\n"
    "HttpCacheWrapperRetrieve:\n"
    "jmp qword ptr [rip + __ptr_HttpCacheWrapperRetrieve]\n");

static __attribute__ ((used)) void* __ptr_HttpCacheWrapperRevalidate;
asm(".intel_syntax noprefix\n"
    ".global HttpCacheWrapperRevalidate\n"
    ".type HttpCacheWrapperRevalidate @function\n"
    "HttpCacheWrapperRevalidate:\n"
    "jmp qword ptr [rip + __ptr_HttpCacheWrapperRevalidate]\n");

static __attribute__ ((used)) void* __ptr_JSContextGetMemoryUsageStatistics;
asm(".intel_syntax noprefix\n"
    ".global JSContextGetMemoryUsageStatistics\n"
    ".type JSContextGetMemoryUsageStatistics @function\n"
    "JSContextGetMemoryUsageStatistics:\n"
    "jmp qword ptr [rip + __ptr_JSContextGetMemoryUsageStatistics]\n");

static __attribute__ ((used)) void* __ptr_NetCtlCheckCallbackNative;
asm(".intel_syntax noprefix\n"
    ".global NetCtlCheckCallbackNative\n"
    ".type NetCtlCheckCallbackNative @function\n"
    "NetCtlCheckCallbackNative:\n"
    "jmp qword ptr [rip + __ptr_NetCtlCheckCallbackNative]\n");

static __attribute__ ((used)) void* __ptr_NetCtlGetDeviceTypeNative;
asm(".intel_syntax noprefix\n"
    ".global NetCtlGetDeviceTypeNative\n"
    ".type NetCtlGetDeviceTypeNative @function\n"
    "NetCtlGetDeviceTypeNative:\n"
    "jmp qword ptr [rip + __ptr_NetCtlGetDeviceTypeNative]\n");

static __attribute__ ((used)) void* __ptr_NetCtlGetStateNative;
asm(".intel_syntax noprefix\n"
    ".global NetCtlGetStateNative\n"
    ".type NetCtlGetStateNative @function\n"
    "NetCtlGetStateNative:\n"
    "jmp qword ptr [rip + __ptr_NetCtlGetStateNative]\n");

static __attribute__ ((used)) void* __ptr_NetCtlInitNative;
asm(".intel_syntax noprefix\n"
    ".global NetCtlInitNative\n"
    ".type NetCtlInitNative @function\n"
    "NetCtlInitNative:\n"
    "jmp qword ptr [rip + __ptr_NetCtlInitNative]\n");

static __attribute__ ((used)) void* __ptr_NetCtlRegisterCallbackNative;
asm(".intel_syntax noprefix\n"
    ".global NetCtlRegisterCallbackNative\n"
    ".type NetCtlRegisterCallbackNative @function\n"
    "NetCtlRegisterCallbackNative:\n"
    "jmp qword ptr [rip + __ptr_NetCtlRegisterCallbackNative]\n");

static __attribute__ ((used)) void* __ptr_NetCtlTermNative;
asm(".intel_syntax noprefix\n"
    ".global NetCtlTermNative\n"
    ".type NetCtlTermNative @function\n"
    "NetCtlTermNative:\n"
    "jmp qword ptr [rip + __ptr_NetCtlTermNative]\n");

static __attribute__ ((used)) void* __ptr_NetCtlUnregisterCallbackNative;
asm(".intel_syntax noprefix\n"
    ".global NetCtlUnregisterCallbackNative\n"
    ".type NetCtlUnregisterCallbackNative @function\n"
    "NetCtlUnregisterCallbackNative:\n"
    "jmp qword ptr [rip + __ptr_NetCtlUnregisterCallbackNative]\n");

static __attribute__ ((used)) void* __ptr_PubSubCreateContext;
asm(".intel_syntax noprefix\n"
    ".global PubSubCreateContext\n"
    ".type PubSubCreateContext @function\n"
    "PubSubCreateContext:\n"
    "jmp qword ptr [rip + __ptr_PubSubCreateContext]\n");

static __attribute__ ((used)) void* __ptr_PubSubPublish;
asm(".intel_syntax noprefix\n"
    ".global PubSubPublish\n"
    ".type PubSubPublish @function\n"
    "PubSubPublish:\n"
    "jmp qword ptr [rip + __ptr_PubSubPublish]\n");

static __attribute__ ((used)) void* __ptr_PubSubSubscribe;
asm(".intel_syntax noprefix\n"
    ".global PubSubSubscribe\n"
    ".type PubSubSubscribe @function\n"
    "PubSubSubscribe:\n"
    "jmp qword ptr [rip + __ptr_PubSubSubscribe]\n");

static __attribute__ ((used)) void* __ptr_PubSubUnsubscribe;
asm(".intel_syntax noprefix\n"
    ".global PubSubUnsubscribe\n"
    ".type PubSubUnsubscribe @function\n"
    "PubSubUnsubscribe:\n"
    "jmp qword ptr [rip + __ptr_PubSubUnsubscribe]\n");

static __attribute__ ((used)) void* __ptr_RnpsGetOpenPsIdForSystem;
asm(".intel_syntax noprefix\n"
    ".global RnpsGetOpenPsIdForSystem\n"
    ".type RnpsGetOpenPsIdForSystem @function\n"
    "RnpsGetOpenPsIdForSystem:\n"
    "jmp qword ptr [rip + __ptr_RnpsGetOpenPsIdForSystem]\n");

static __attribute__ ((used)) void* __ptr_RnpsGetTicks;
asm(".intel_syntax noprefix\n"
    ".global RnpsGetTicks\n"
    ".type RnpsGetTicks @function\n"
    "RnpsGetTicks:\n"
    "jmp qword ptr [rip + __ptr_RnpsGetTicks]\n");

static __attribute__ ((used)) void* __ptr_ThreadUtils_SetSchedulePolicy;
asm(".intel_syntax noprefix\n"
    ".global ThreadUtils_SetSchedulePolicy\n"
    ".type ThreadUtils_SetSchedulePolicy @function\n"
    "ThreadUtils_SetSchedulePolicy:\n"
    "jmp qword ptr [rip + __ptr_ThreadUtils_SetSchedulePolicy]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libNativeExtensions", &__handle)) return;
  if(sprx_dlsym(__handle, "3eCvb-utsDw", &__ptr_AsyncStorageClearNative)) return;
  if(sprx_dlsym(__handle, "jiuuJN7Ux0Q", &__ptr_AsyncStorageCloseNative)) return;
  if(sprx_dlsym(__handle, "oirBv8VDfaA", &__ptr_AsyncStorageGetAllKeysNative)) return;
  if(sprx_dlsym(__handle, "lKfctLchxNs", &__ptr_AsyncStorageGetItemNative)) return;
  if(sprx_dlsym(__handle, "+YbLnJwL+xw", &__ptr_AsyncStorageOpenNative)) return;
  if(sprx_dlsym(__handle, "IjDmpUrMSz0", &__ptr_AsyncStorageRemoveItemNative)) return;
  if(sprx_dlsym(__handle, "xYf-z05L7UE", &__ptr_AsyncStorageSetItemNative)) return;
  if(sprx_dlsym(__handle, "sBHhzqDUvkU", &__ptr_BgsStorageClose)) return;
  if(sprx_dlsym(__handle, "g9E2ShyXqJU", &__ptr_BgsStorageFreeKeyValueResult)) return;
  if(sprx_dlsym(__handle, "jkw52aHWgtk", &__ptr_BgsStorageFreeListResult)) return;
  if(sprx_dlsym(__handle, "nkbTjX8ghpY", &__ptr_BgsStorageGetContainers)) return;
  if(sprx_dlsym(__handle, "nEusu9xBLh0", &__ptr_BgsStorageGetItems)) return;
  if(sprx_dlsym(__handle, "B0PtaDqaYm0", &__ptr_BgsStorageGetItemsBySearch)) return;
  if(sprx_dlsym(__handle, "kevKTD6kQxw", &__ptr_BgsStorageOpen)) return;
  if(sprx_dlsym(__handle, "mtAGcMQCufk", &__ptr_CurlGetDefaultUA)) return;
  if(sprx_dlsym(__handle, "xjVZ2aqjVrg", &__ptr_CurlMultiInitialize)) return;
  if(sprx_dlsym(__handle, "XuNOIRPz7Os", &__ptr_CurlMultiQueueRequest)) return;
  if(sprx_dlsym(__handle, "VlnUVT4Q3rI", &__ptr_CurlSendRequest)) return;
  if(sprx_dlsym(__handle, "hP81Fkk27pg", &__ptr_DecryptRnpsBundle)) return;
  if(sprx_dlsym(__handle, "ifOC0Tz3yMQ", &__ptr_HttpCacheWrapperFree)) return;
  if(sprx_dlsym(__handle, "h+TdWvCbo-Q", &__ptr_HttpCacheWrapperRetrieve)) return;
  if(sprx_dlsym(__handle, "Zi4XKSpB7ss", &__ptr_HttpCacheWrapperRevalidate)) return;
  if(sprx_dlsym(__handle, "jb+IRdsgPW8", &__ptr_JSContextGetMemoryUsageStatistics)) return;
  if(sprx_dlsym(__handle, "8I7xekkfFhQ", &__ptr_NetCtlCheckCallbackNative)) return;
  if(sprx_dlsym(__handle, "z4zamLphAP4", &__ptr_NetCtlGetDeviceTypeNative)) return;
  if(sprx_dlsym(__handle, "UBtYSUByi3M", &__ptr_NetCtlGetStateNative)) return;
  if(sprx_dlsym(__handle, "orTn+qafMUs", &__ptr_NetCtlInitNative)) return;
  if(sprx_dlsym(__handle, "rlfaE8TqUJI", &__ptr_NetCtlRegisterCallbackNative)) return;
  if(sprx_dlsym(__handle, "SKMDsFP5-Cs", &__ptr_NetCtlTermNative)) return;
  if(sprx_dlsym(__handle, "6lwSxBExYLo", &__ptr_NetCtlUnregisterCallbackNative)) return;
  if(sprx_dlsym(__handle, "OyrA1qLyRbE", &__ptr_PubSubCreateContext)) return;
  if(sprx_dlsym(__handle, "I4qJlIt9njM", &__ptr_PubSubPublish)) return;
  if(sprx_dlsym(__handle, "6wLehmKPNa4", &__ptr_PubSubSubscribe)) return;
  if(sprx_dlsym(__handle, "jdC8IMz6aBk", &__ptr_PubSubUnsubscribe)) return;
  if(sprx_dlsym(__handle, "85O5VmSVqmI", &__ptr_RnpsGetOpenPsIdForSystem)) return;
  if(sprx_dlsym(__handle, "dG6FGUzIYGA", &__ptr_RnpsGetTicks)) return;
  if(sprx_dlsym(__handle, "KGAA02fSVmk", &__ptr_ThreadUtils_SetSchedulePolicy)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}