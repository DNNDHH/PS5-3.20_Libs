/*
 This file was generated by genstub.py, do not edit manually!
*/

int sprx_dlsym(unsigned int handle, const char *nid, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned int handle);

static __attribute__ ((used)) void* __ptr_FT_Get_PFR_Advance;
asm(".intel_syntax noprefix\n"
    ".global FT_Get_PFR_Advance\n"
    ".type FT_Get_PFR_Advance @function\n"
    "FT_Get_PFR_Advance:\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Advance]\n");

static __attribute__ ((used)) void* __ptr_FT_Get_PFR_Kerning;
asm(".intel_syntax noprefix\n"
    ".global FT_Get_PFR_Kerning\n"
    ".type FT_Get_PFR_Kerning @function\n"
    "FT_Get_PFR_Kerning:\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Kerning]\n");

static __attribute__ ((used)) void* __ptr_FT_Get_PFR_Metrics;
asm(".intel_syntax noprefix\n"
    ".global FT_Get_PFR_Metrics\n"
    ".type FT_Get_PFR_Metrics @function\n"
    "FT_Get_PFR_Metrics:\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Metrics]\n");

static unsigned short __handle = 0;
static void __attribute__((constructor(104)))
__constructor(void) {
  if(sprx_dlopen("libSceFreeTypeOptOl", &__handle)) return;
  if(sprx_dlsym(__handle, "NVuvsPgTXto", &__ptr_FT_Get_PFR_Advance)) return;
  if(sprx_dlsym(__handle, "qBohKqdkAqE", &__ptr_FT_Get_PFR_Kerning)) return;
  if(sprx_dlsym(__handle, "OqaxEkRhr+8", &__ptr_FT_Get_PFR_Metrics)) return;
}

static void __attribute__((destructor(104)))
__destructor(void) {
  sprx_dlclose(__handle);
}
