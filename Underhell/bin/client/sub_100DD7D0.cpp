void *__cdecl sub_100DD7D0(int a1, int a2)
{
  size_t v2; // esi
  CHAR *v3; // eax
  void *v4; // edi

  v2 = a2 * a1;
  if ( (dword_10433FC0 & 1) != 0 )
  {
    v3 = (CHAR *)dword_10433FBC;
  }
  else
  {
    dword_10433FC0 |= 1u;
    v3 = sub_100DD740();
    dword_10433FBC = (int)v3;
  }
  if ( v3 )
    v4 = (void *)(*(int (__thiscall **)(_DWORD, size_t, CHAR *, _DWORD))*g_pMemAlloc)(g_pMemAlloc, v2, v3, 0);
  else
    v4 = (void *)(*(int (__thiscall **)(_DWORD, size_t))(*g_pMemAlloc + 4))(g_pMemAlloc, v2);
  memset(v4, 0, v2);
  return v4;
}
