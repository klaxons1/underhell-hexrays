void *__cdecl sub_10184550(int a1, size_t Size)
{
  CHAR *v2; // eax
  void *v3; // esi

  if ( (dword_106B6D04 & 1) != 0 )
  {
    v2 = (CHAR *)dword_106B6D00;
  }
  else
  {
    dword_106B6D04 |= 1u;
    v2 = sub_10184300();
    dword_106B6D00 = (int)v2;
  }
  if ( v2 )
    v3 = (void *)(*(int (__thiscall **)(_DWORD, int, size_t, CHAR *, _DWORD))(*g_pMemAlloc + 8))(
                   g_pMemAlloc,
                   a1,
                   Size,
                   v2,
                   0);
  else
    v3 = (void *)(*(int (__thiscall **)(_DWORD, int, size_t))(*g_pMemAlloc + 12))(g_pMemAlloc, a1, Size);
  memset(v3, 0, Size);
  return v3;
}
