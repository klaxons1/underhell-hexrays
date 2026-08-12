bool __thiscall sub_101BC8B0(_DWORD *this)
{
  int v2; // eax
  int (__cdecl *v4[2])(const char *, _DWORD); // [esp+4h] [ebp-8h] BYREF

  sub_10079870(v4);
  v2 = v4[0]("VCLIENTENGINETOOLS001", 0);
  this[1] = v2;
  return v2 != 0;
}
