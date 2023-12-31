/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceUsbdAllocTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdAllocTransfer\n"
    ".type sceUsbdAllocTransfer @function\n"
    "sceUsbdAllocTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdAllocTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdAttachKernelDriver;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdAttachKernelDriver\n"
    ".type sceUsbdAttachKernelDriver @function\n"
    "sceUsbdAttachKernelDriver:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdAttachKernelDriver]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdBulkTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdBulkTransfer\n"
    ".type sceUsbdBulkTransfer @function\n"
    "sceUsbdBulkTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdBulkTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdCancelTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdCancelTransfer\n"
    ".type sceUsbdCancelTransfer @function\n"
    "sceUsbdCancelTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdCancelTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdCheckConnected;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdCheckConnected\n"
    ".type sceUsbdCheckConnected @function\n"
    "sceUsbdCheckConnected:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdCheckConnected]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdClaimInterface;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdClaimInterface\n"
    ".type sceUsbdClaimInterface @function\n"
    "sceUsbdClaimInterface:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdClaimInterface]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdClearHalt;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdClearHalt\n"
    ".type sceUsbdClearHalt @function\n"
    "sceUsbdClearHalt:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdClearHalt]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdClose;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdClose\n"
    ".type sceUsbdClose @function\n"
    "sceUsbdClose:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdClose]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdControlTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdControlTransfer\n"
    ".type sceUsbdControlTransfer @function\n"
    "sceUsbdControlTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdControlTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdControlTransferGetData;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdControlTransferGetData\n"
    ".type sceUsbdControlTransferGetData @function\n"
    "sceUsbdControlTransferGetData:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdControlTransferGetData]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdControlTransferGetSetup;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdControlTransferGetSetup\n"
    ".type sceUsbdControlTransferGetSetup @function\n"
    "sceUsbdControlTransferGetSetup:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdControlTransferGetSetup]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdDetachKernelDriver;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdDetachKernelDriver\n"
    ".type sceUsbdDetachKernelDriver @function\n"
    "sceUsbdDetachKernelDriver:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdDetachKernelDriver]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdEventHandlerActive;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdEventHandlerActive\n"
    ".type sceUsbdEventHandlerActive @function\n"
    "sceUsbdEventHandlerActive:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdEventHandlerActive]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdEventHandlingOk;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdEventHandlingOk\n"
    ".type sceUsbdEventHandlingOk @function\n"
    "sceUsbdEventHandlingOk:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdEventHandlingOk]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdExit;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdExit\n"
    ".type sceUsbdExit @function\n"
    "sceUsbdExit:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdExit]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdFillBulkTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdFillBulkTransfer\n"
    ".type sceUsbdFillBulkTransfer @function\n"
    "sceUsbdFillBulkTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdFillBulkTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdFillControlSetup;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdFillControlSetup\n"
    ".type sceUsbdFillControlSetup @function\n"
    "sceUsbdFillControlSetup:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdFillControlSetup]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdFillControlTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdFillControlTransfer\n"
    ".type sceUsbdFillControlTransfer @function\n"
    "sceUsbdFillControlTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdFillControlTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdFillInterruptTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdFillInterruptTransfer\n"
    ".type sceUsbdFillInterruptTransfer @function\n"
    "sceUsbdFillInterruptTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdFillInterruptTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdFillIsoTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdFillIsoTransfer\n"
    ".type sceUsbdFillIsoTransfer @function\n"
    "sceUsbdFillIsoTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdFillIsoTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdFreeConfigDescriptor;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdFreeConfigDescriptor\n"
    ".type sceUsbdFreeConfigDescriptor @function\n"
    "sceUsbdFreeConfigDescriptor:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdFreeConfigDescriptor]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdFreeDeviceList;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdFreeDeviceList\n"
    ".type sceUsbdFreeDeviceList @function\n"
    "sceUsbdFreeDeviceList:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdFreeDeviceList]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdFreeTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdFreeTransfer\n"
    ".type sceUsbdFreeTransfer @function\n"
    "sceUsbdFreeTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdFreeTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetActiveConfigDescriptor;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetActiveConfigDescriptor\n"
    ".type sceUsbdGetActiveConfigDescriptor @function\n"
    "sceUsbdGetActiveConfigDescriptor:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetActiveConfigDescriptor]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetBusNumber;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetBusNumber\n"
    ".type sceUsbdGetBusNumber @function\n"
    "sceUsbdGetBusNumber:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetBusNumber]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetConfigDescriptor;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetConfigDescriptor\n"
    ".type sceUsbdGetConfigDescriptor @function\n"
    "sceUsbdGetConfigDescriptor:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetConfigDescriptor]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetConfigDescriptorByValue;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetConfigDescriptorByValue\n"
    ".type sceUsbdGetConfigDescriptorByValue @function\n"
    "sceUsbdGetConfigDescriptorByValue:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetConfigDescriptorByValue]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetConfiguration;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetConfiguration\n"
    ".type sceUsbdGetConfiguration @function\n"
    "sceUsbdGetConfiguration:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetConfiguration]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetDescriptor;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetDescriptor\n"
    ".type sceUsbdGetDescriptor @function\n"
    "sceUsbdGetDescriptor:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetDescriptor]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetDevice;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetDevice\n"
    ".type sceUsbdGetDevice @function\n"
    "sceUsbdGetDevice:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetDevice]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetDeviceAddress;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetDeviceAddress\n"
    ".type sceUsbdGetDeviceAddress @function\n"
    "sceUsbdGetDeviceAddress:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetDeviceAddress]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetDeviceDescriptor;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetDeviceDescriptor\n"
    ".type sceUsbdGetDeviceDescriptor @function\n"
    "sceUsbdGetDeviceDescriptor:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetDeviceDescriptor]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetDeviceList;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetDeviceList\n"
    ".type sceUsbdGetDeviceList @function\n"
    "sceUsbdGetDeviceList:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetDeviceList]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetDeviceSpeed;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetDeviceSpeed\n"
    ".type sceUsbdGetDeviceSpeed @function\n"
    "sceUsbdGetDeviceSpeed:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetDeviceSpeed]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetIsoPacketBuffer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetIsoPacketBuffer\n"
    ".type sceUsbdGetIsoPacketBuffer @function\n"
    "sceUsbdGetIsoPacketBuffer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetIsoPacketBuffer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetMaxIsoPacketSize;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetMaxIsoPacketSize\n"
    ".type sceUsbdGetMaxIsoPacketSize @function\n"
    "sceUsbdGetMaxIsoPacketSize:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetMaxIsoPacketSize]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetMaxPacketSize;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetMaxPacketSize\n"
    ".type sceUsbdGetMaxPacketSize @function\n"
    "sceUsbdGetMaxPacketSize:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetMaxPacketSize]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetStringDescriptor;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetStringDescriptor\n"
    ".type sceUsbdGetStringDescriptor @function\n"
    "sceUsbdGetStringDescriptor:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetStringDescriptor]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdGetStringDescriptorAscii;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdGetStringDescriptorAscii\n"
    ".type sceUsbdGetStringDescriptorAscii @function\n"
    "sceUsbdGetStringDescriptorAscii:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdGetStringDescriptorAscii]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdHandleEvents;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdHandleEvents\n"
    ".type sceUsbdHandleEvents @function\n"
    "sceUsbdHandleEvents:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdHandleEvents]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdHandleEventsLocked;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdHandleEventsLocked\n"
    ".type sceUsbdHandleEventsLocked @function\n"
    "sceUsbdHandleEventsLocked:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdHandleEventsLocked]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdHandleEventsTimeout;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdHandleEventsTimeout\n"
    ".type sceUsbdHandleEventsTimeout @function\n"
    "sceUsbdHandleEventsTimeout:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdHandleEventsTimeout]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdInit;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdInit\n"
    ".type sceUsbdInit @function\n"
    "sceUsbdInit:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdInit]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdInterruptTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdInterruptTransfer\n"
    ".type sceUsbdInterruptTransfer @function\n"
    "sceUsbdInterruptTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdInterruptTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdKernelDriverActive;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdKernelDriverActive\n"
    ".type sceUsbdKernelDriverActive @function\n"
    "sceUsbdKernelDriverActive:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdKernelDriverActive]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdLockEventWaiters;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdLockEventWaiters\n"
    ".type sceUsbdLockEventWaiters @function\n"
    "sceUsbdLockEventWaiters:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdLockEventWaiters]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdLockEvents;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdLockEvents\n"
    ".type sceUsbdLockEvents @function\n"
    "sceUsbdLockEvents:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdLockEvents]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdOpen;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdOpen\n"
    ".type sceUsbdOpen @function\n"
    "sceUsbdOpen:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdOpen]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdOpenDeviceWithVidPid;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdOpenDeviceWithVidPid\n"
    ".type sceUsbdOpenDeviceWithVidPid @function\n"
    "sceUsbdOpenDeviceWithVidPid:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdOpenDeviceWithVidPid]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdRefDevice;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdRefDevice\n"
    ".type sceUsbdRefDevice @function\n"
    "sceUsbdRefDevice:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdRefDevice]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdReleaseInterface;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdReleaseInterface\n"
    ".type sceUsbdReleaseInterface @function\n"
    "sceUsbdReleaseInterface:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdReleaseInterface]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdResetDevice;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdResetDevice\n"
    ".type sceUsbdResetDevice @function\n"
    "sceUsbdResetDevice:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdResetDevice]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdSetConfiguration;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdSetConfiguration\n"
    ".type sceUsbdSetConfiguration @function\n"
    "sceUsbdSetConfiguration:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdSetConfiguration]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdSetInterfaceAltSetting;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdSetInterfaceAltSetting\n"
    ".type sceUsbdSetInterfaceAltSetting @function\n"
    "sceUsbdSetInterfaceAltSetting:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdSetInterfaceAltSetting]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdSetIsoPacketLengths;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdSetIsoPacketLengths\n"
    ".type sceUsbdSetIsoPacketLengths @function\n"
    "sceUsbdSetIsoPacketLengths:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdSetIsoPacketLengths]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdSubmitTransfer;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdSubmitTransfer\n"
    ".type sceUsbdSubmitTransfer @function\n"
    "sceUsbdSubmitTransfer:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdSubmitTransfer]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdTryLockEvents;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdTryLockEvents\n"
    ".type sceUsbdTryLockEvents @function\n"
    "sceUsbdTryLockEvents:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdTryLockEvents]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdUnlockEventWaiters;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdUnlockEventWaiters\n"
    ".type sceUsbdUnlockEventWaiters @function\n"
    "sceUsbdUnlockEventWaiters:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdUnlockEventWaiters]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdUnlockEvents;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdUnlockEvents\n"
    ".type sceUsbdUnlockEvents @function\n"
    "sceUsbdUnlockEvents:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdUnlockEvents]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdUnrefDevice;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdUnrefDevice\n"
    ".type sceUsbdUnrefDevice @function\n"
    "sceUsbdUnrefDevice:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdUnrefDevice]\n");

static __attribute__ ((used)) void* __ptr_sceUsbdWaitForEvent;
asm(".intel_syntax noprefix\n"
    ".global sceUsbdWaitForEvent\n"
    ".type sceUsbdWaitForEvent @function\n"
    "sceUsbdWaitForEvent:\n"
    "jmp qword ptr [rip + __ptr_sceUsbdWaitForEvent]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceUsbd", &__handle)) return;
  if(sprx_dlsym(__handle, "0ktE1PhzGFU", &__ptr_sceUsbdAllocTransfer)) return;
  if(sprx_dlsym(__handle, "BKMEGvfCPyU", &__ptr_sceUsbdAttachKernelDriver)) return;
  if(sprx_dlsym(__handle, "fotb7DzeHYw", &__ptr_sceUsbdBulkTransfer)) return;
  if(sprx_dlsym(__handle, "-KNh1VFIzlM", &__ptr_sceUsbdCancelTransfer)) return;
  if(sprx_dlsym(__handle, "MlW6deWfPp0", &__ptr_sceUsbdCheckConnected)) return;
  if(sprx_dlsym(__handle, "AE+mHBHneyk", &__ptr_sceUsbdClaimInterface)) return;
  if(sprx_dlsym(__handle, "3tPPMo4QRdY", &__ptr_sceUsbdClearHalt)) return;
  if(sprx_dlsym(__handle, "HarYYlaFGJY", &__ptr_sceUsbdClose)) return;
  if(sprx_dlsym(__handle, "RRKFcKQ1Ka4", &__ptr_sceUsbdControlTransfer)) return;
  if(sprx_dlsym(__handle, "XUWtxI31YEY", &__ptr_sceUsbdControlTransferGetData)) return;
  if(sprx_dlsym(__handle, "SEdQo8CFmus", &__ptr_sceUsbdControlTransferGetSetup)) return;
  if(sprx_dlsym(__handle, "Y5go+ha6eDs", &__ptr_sceUsbdDetachKernelDriver)) return;
  if(sprx_dlsym(__handle, "Vw8Hg1CN028", &__ptr_sceUsbdEventHandlerActive)) return;
  if(sprx_dlsym(__handle, "e7gp1xhu6RI", &__ptr_sceUsbdEventHandlingOk)) return;
  if(sprx_dlsym(__handle, "Fq6+0Fm55xU", &__ptr_sceUsbdExit)) return;
  if(sprx_dlsym(__handle, "oHCade-0qQ0", &__ptr_sceUsbdFillBulkTransfer)) return;
  if(sprx_dlsym(__handle, "8KrqbaaPkE0", &__ptr_sceUsbdFillControlSetup)) return;
  if(sprx_dlsym(__handle, "7VGfMerK6m0", &__ptr_sceUsbdFillControlTransfer)) return;
  if(sprx_dlsym(__handle, "t3J5pXxhJlI", &__ptr_sceUsbdFillInterruptTransfer)) return;
  if(sprx_dlsym(__handle, "xqmkjHCEOSY", &__ptr_sceUsbdFillIsoTransfer)) return;
  if(sprx_dlsym(__handle, "Hvd3S--n25w", &__ptr_sceUsbdFreeConfigDescriptor)) return;
  if(sprx_dlsym(__handle, "EQ6SCLMqzkM", &__ptr_sceUsbdFreeDeviceList)) return;
  if(sprx_dlsym(__handle, "-sgi7EeLSO8", &__ptr_sceUsbdFreeTransfer)) return;
  if(sprx_dlsym(__handle, "S1o1C6yOt5g", &__ptr_sceUsbdGetActiveConfigDescriptor)) return;
  if(sprx_dlsym(__handle, "t7WE9mb1TB8", &__ptr_sceUsbdGetBusNumber)) return;
  if(sprx_dlsym(__handle, "Dkm5qe8j3XE", &__ptr_sceUsbdGetConfigDescriptor)) return;
  if(sprx_dlsym(__handle, "GQsAVJuy8gM", &__ptr_sceUsbdGetConfigDescriptorByValue)) return;
  if(sprx_dlsym(__handle, "L7FoTZp3bZs", &__ptr_sceUsbdGetConfiguration)) return;
  if(sprx_dlsym(__handle, "-JBoEtvTxvA", &__ptr_sceUsbdGetDescriptor)) return;
  if(sprx_dlsym(__handle, "rsl9KQ-agyA", &__ptr_sceUsbdGetDevice)) return;
  if(sprx_dlsym(__handle, "GjlCrU4GcIY", &__ptr_sceUsbdGetDeviceAddress)) return;
  if(sprx_dlsym(__handle, "bhomgbiQgeo", &__ptr_sceUsbdGetDeviceDescriptor)) return;
  if(sprx_dlsym(__handle, "8qB9Ar4P5nc", &__ptr_sceUsbdGetDeviceList)) return;
  if(sprx_dlsym(__handle, "e1UWb8cWPJM", &__ptr_sceUsbdGetDeviceSpeed)) return;
  if(sprx_dlsym(__handle, "vokkJ0aDf54", &__ptr_sceUsbdGetIsoPacketBuffer)) return;
  if(sprx_dlsym(__handle, "nuIRlpbxauM", &__ptr_sceUsbdGetMaxIsoPacketSize)) return;
  if(sprx_dlsym(__handle, "YJ0cMAlLuxQ", &__ptr_sceUsbdGetMaxPacketSize)) return;
  if(sprx_dlsym(__handle, "g2oYm1DitDg", &__ptr_sceUsbdGetStringDescriptor)) return;
  if(sprx_dlsym(__handle, "t4gUfGsjk+g", &__ptr_sceUsbdGetStringDescriptorAscii)) return;
  if(sprx_dlsym(__handle, "EkqGLxWC-S0", &__ptr_sceUsbdHandleEvents)) return;
  if(sprx_dlsym(__handle, "rt-WeUGibfg", &__ptr_sceUsbdHandleEventsLocked)) return;
  if(sprx_dlsym(__handle, "+wU6CGuZcWk", &__ptr_sceUsbdHandleEventsTimeout)) return;
  if(sprx_dlsym(__handle, "TOhg7P6kTH4", &__ptr_sceUsbdInit)) return;
  if(sprx_dlsym(__handle, "rxi1nCOKWc8", &__ptr_sceUsbdInterruptTransfer)) return;
  if(sprx_dlsym(__handle, "RLf56F-WjKQ", &__ptr_sceUsbdKernelDriverActive)) return;
  if(sprx_dlsym(__handle, "AeGaY8JrAV4", &__ptr_sceUsbdLockEventWaiters)) return;
  if(sprx_dlsym(__handle, "u9yKks02-rA", &__ptr_sceUsbdLockEvents)) return;
  if(sprx_dlsym(__handle, "VJ6oMq-Di2U", &__ptr_sceUsbdOpen)) return;
  if(sprx_dlsym(__handle, "vrQXYRo1Gwk", &__ptr_sceUsbdOpenDeviceWithVidPid)) return;
  if(sprx_dlsym(__handle, "U1t1SoJvV-A", &__ptr_sceUsbdRefDevice)) return;
  if(sprx_dlsym(__handle, "REfUTmTchMw", &__ptr_sceUsbdReleaseInterface)) return;
  if(sprx_dlsym(__handle, "hvMn0QJXj5g", &__ptr_sceUsbdResetDevice)) return;
  if(sprx_dlsym(__handle, "FhU9oYrbXoA", &__ptr_sceUsbdSetConfiguration)) return;
  if(sprx_dlsym(__handle, "DVCQW9o+ki0", &__ptr_sceUsbdSetInterfaceAltSetting)) return;
  if(sprx_dlsym(__handle, "dJxro8Nzcjk", &__ptr_sceUsbdSetIsoPacketLengths)) return;
  if(sprx_dlsym(__handle, "L0EHgZZNVas", &__ptr_sceUsbdSubmitTransfer)) return;
  if(sprx_dlsym(__handle, "TcXVGc-LPbQ", &__ptr_sceUsbdTryLockEvents)) return;
  if(sprx_dlsym(__handle, "1DkGvUQYFKI", &__ptr_sceUsbdUnlockEventWaiters)) return;
  if(sprx_dlsym(__handle, "RA2D9rFH-Uw", &__ptr_sceUsbdUnlockEvents)) return;
  if(sprx_dlsym(__handle, "OULgIo1zAsA", &__ptr_sceUsbdUnrefDevice)) return;
  if(sprx_dlsym(__handle, "ys2e9VRBPrY", &__ptr_sceUsbdWaitForEvent)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
