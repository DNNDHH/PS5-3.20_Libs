/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceNotificationSend;
asm(".intel_syntax noprefix\n"
    ".global sceNotificationSend\n"
    ".type sceNotificationSend @function\n"
    "sceNotificationSend:\n"
    "jmp qword ptr [rip + __ptr_sceNotificationSend]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceNotification", &__handle)) return;
  if(sprx_dlsym(__handle, "jSWBvOPfSOk", &__ptr_sceNotificationSend)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
