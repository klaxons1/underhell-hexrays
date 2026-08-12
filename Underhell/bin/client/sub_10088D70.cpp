_DWORD *__thiscall sub_10088D70(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  *this = &CVisibleShadowList::`vftable';
  this[1] = 0;
  this[2] = 64;
  this[3] = 0;
  v2 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 1280);
  this[1] = v2;
  this[5] = v2;
  this[4] = 0;
  this[6] = 0;
  this[7] = 64;
  this[8] = 0;
  v3 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 256);
  this[9] = 0;
  this[6] = v3;
  this[10] = v3;
  return this;
}
