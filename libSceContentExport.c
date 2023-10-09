/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_sceContentExportCancel;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportCancel\n"
    ".type sceContentExportCancel @function\n"
    "sceContentExportCancel:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportCancel]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportFinish;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportFinish\n"
    ".type sceContentExportFinish @function\n"
    "sceContentExportFinish:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportFinish]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportFromData;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportFromData\n"
    ".type sceContentExportFromData @function\n"
    "sceContentExportFromData:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportFromData]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportFromDataWithThumbnail;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportFromDataWithThumbnail\n"
    ".type sceContentExportFromDataWithThumbnail @function\n"
    "sceContentExportFromDataWithThumbnail:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportFromDataWithThumbnail]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportFromFile;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportFromFile\n"
    ".type sceContentExportFromFile @function\n"
    "sceContentExportFromFile:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportFromFile]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportFromFileWithContentIdList;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportFromFileWithContentIdList\n"
    ".type sceContentExportFromFileWithContentIdList @function\n"
    "sceContentExportFromFileWithContentIdList:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportFromFileWithContentIdList]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportFromFileWithThumbnail;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportFromFileWithThumbnail\n"
    ".type sceContentExportFromFileWithThumbnail @function\n"
    "sceContentExportFromFileWithThumbnail:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportFromFileWithThumbnail]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportFromFileWithTitleIdList;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportFromFileWithTitleIdList\n"
    ".type sceContentExportFromFileWithTitleIdList @function\n"
    "sceContentExportFromFileWithTitleIdList:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportFromFileWithTitleIdList]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportGetProgress;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportGetProgress\n"
    ".type sceContentExportGetProgress @function\n"
    "sceContentExportGetProgress:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportGetProgress]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportInit;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportInit\n"
    ".type sceContentExportInit @function\n"
    "sceContentExportInit:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportInit]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportInit2;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportInit2\n"
    ".type sceContentExportInit2 @function\n"
    "sceContentExportInit2:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportInit2]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportStart;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportStart\n"
    ".type sceContentExportStart @function\n"
    "sceContentExportStart:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportStart]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportTerm;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportTerm\n"
    ".type sceContentExportTerm @function\n"
    "sceContentExportTerm:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportTerm]\n");

static __attribute__ ((used)) void* __ptr_sceContentExportValidateContents;
asm(".intel_syntax noprefix\n"
    ".global sceContentExportValidateContents\n"
    ".type sceContentExportValidateContents @function\n"
    "sceContentExportValidateContents:\n"
    "jmp qword ptr [rip + __ptr_sceContentExportValidateContents]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceContentExport", &__handle)) return;
  if(sprx_dlsym(__handle, "efqHe7wPRbs", &__ptr_sceContentExportCancel)) return;
  if(sprx_dlsym(__handle, "tb3cZTCl8Ps", &__ptr_sceContentExportFinish)) return;
  if(sprx_dlsym(__handle, "AOWqIYsgVHs", &__ptr_sceContentExportFromData)) return;
  if(sprx_dlsym(__handle, "uZTQHI50WpY", &__ptr_sceContentExportFromDataWithThumbnail)) return;
  if(sprx_dlsym(__handle, "OWCJUmrWH1g", &__ptr_sceContentExportFromFile)) return;
  if(sprx_dlsym(__handle, "bU89EJ+j9f0", &__ptr_sceContentExportFromFileWithContentIdList)) return;
  if(sprx_dlsym(__handle, "mbakKLPSO4o", &__ptr_sceContentExportFromFileWithThumbnail)) return;
  if(sprx_dlsym(__handle, "HK-7ir0qAkg", &__ptr_sceContentExportFromFileWithTitleIdList)) return;
  if(sprx_dlsym(__handle, "eRJv4xU7pGU", &__ptr_sceContentExportGetProgress)) return;
  if(sprx_dlsym(__handle, "FzEWeYnAFlI", &__ptr_sceContentExportInit)) return;
  if(sprx_dlsym(__handle, "0GnN4QCgIfs", &__ptr_sceContentExportInit2)) return;
  if(sprx_dlsym(__handle, "FCygF4Ec4so", &__ptr_sceContentExportStart)) return;
  if(sprx_dlsym(__handle, "+KDWny9Y-6k", &__ptr_sceContentExportTerm)) return;
  if(sprx_dlsym(__handle, "sVN0cBKC-4s", &__ptr_sceContentExportValidateContents)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}