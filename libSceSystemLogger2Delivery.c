/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceSystemLogger2DeliveryGetBatchResult;
asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2DeliveryGetBatchResult\n"
    ".type sceSystemLogger2DeliveryGetBatchResult @function\n"
    "sceSystemLogger2DeliveryGetBatchResult:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2DeliveryGetBatchResult]\n");

static __attribute__ ((used)) void* __ptr_sceSystemLogger2DeliveryGetResult;
asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2DeliveryGetResult\n"
    ".type sceSystemLogger2DeliveryGetResult @function\n"
    "sceSystemLogger2DeliveryGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2DeliveryGetResult]\n");

static __attribute__ ((used)) void* __ptr_sceSystemLogger2DeliverySetBatchDeliveryEvent;
asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2DeliverySetBatchDeliveryEvent\n"
    ".type sceSystemLogger2DeliverySetBatchDeliveryEvent @function\n"
    "sceSystemLogger2DeliverySetBatchDeliveryEvent:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2DeliverySetBatchDeliveryEvent]\n");

static __attribute__ ((used)) void* __ptr_sceSystemLogger2DeliveryTerminate;
asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2DeliveryTerminate\n"
    ".type sceSystemLogger2DeliveryTerminate @function\n"
    "sceSystemLogger2DeliveryTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2DeliveryTerminate]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceSystemLogger2Delivery", &__handle)) return;
  if(sprx_dlsym(__handle, "CTKW9UibxEA", &__ptr_sceSystemLogger2DeliveryGetBatchResult)) return;
  if(sprx_dlsym(__handle, "qb4NgfYbH90", &__ptr_sceSystemLogger2DeliveryGetResult)) return;
  if(sprx_dlsym(__handle, "rgrhz3d6cx8", &__ptr_sceSystemLogger2DeliverySetBatchDeliveryEvent)) return;
  if(sprx_dlsym(__handle, "tV3N4LyIutE", &__ptr_sceSystemLogger2DeliveryTerminate)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
