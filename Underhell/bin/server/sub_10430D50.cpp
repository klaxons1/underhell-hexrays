bool (__cdecl **__thiscall sub_10430D50(
        bool (__cdecl **this)(const char **a1, const char **a2)))(const char **a1, const char **a2)
{
  bool (__cdecl *v2)(const char **, const char **); // edx

  *this = sub_10430130;
  this[1] = 0;
  this[2] = (bool (__cdecl *)(const char **, const char **))256;
  this[3] = (bool (__cdecl *)(const char **, const char **))32;
  this[1] = (bool (__cdecl *)(const char **, const char **))(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(
                                                              g_pMemAlloc,
                                                              3072);
  v2 = this[1];
  this[4] = (bool (__cdecl *)(const char **, const char **))0xFFFF;
  this[5] = (bool (__cdecl *)(const char **, const char **))-1;
  this[6] = v2;
  return this;
}
