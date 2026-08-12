void *__cdecl sub_10184680(const char *Src)
{
  size_t v1; // edi
  CHAR *v2; // eax
  void *v3; // eax
  void *v4; // esi

  v1 = strlen(Src) + 1;
  if ( (dword_106B6CFC & 1) != 0 )
  {
    v2 = (CHAR *)dword_106B6CF8;
  }
  else
  {
    dword_106B6CFC |= 1u;
    v2 = sub_10184300();
    dword_106B6CF8 = (int)v2;
  }
  if ( v2 )
    v3 = (void *)(*(int (__thiscall **)(_DWORD, size_t, CHAR *, _DWORD))*g_pMemAlloc)(g_pMemAlloc, v1, v2, 0);
  else
    v3 = (void *)(*(int (__thiscall **)(_DWORD, size_t))(*g_pMemAlloc + 4))(g_pMemAlloc, v1);
  v4 = v3;
  if ( v3 )
    memcpy_0(v3, Src, v1);
  return v4;
}
