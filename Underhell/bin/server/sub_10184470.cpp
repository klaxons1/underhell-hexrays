void *__cdecl sub_10184470(size_t Size)
{
  CHAR *v1; // eax
  void *v2; // esi

  if ( (dword_106B6CFC & 1) != 0 )
  {
    v1 = (CHAR *)dword_106B6CF8;
  }
  else
  {
    dword_106B6CFC |= 1u;
    v1 = sub_10184300();
    dword_106B6CF8 = (int)v1;
  }
  if ( v1 )
    v2 = (void *)(*(int (__thiscall **)(_DWORD, size_t, CHAR *, _DWORD))*g_pMemAlloc)(g_pMemAlloc, Size, v1, 0);
  else
    v2 = (void *)(*(int (__thiscall **)(_DWORD, size_t))(*g_pMemAlloc + 4))(g_pMemAlloc, Size);
  memset(v2, 0, Size);
  return v2;
}
