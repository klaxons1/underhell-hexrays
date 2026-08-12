int __cdecl sub_100DD8D0(int a1, int a2)
{
  CHAR *v2; // eax

  if ( (dword_10433FC8 & 1) != 0 )
  {
    v2 = (CHAR *)dword_10433FC4;
  }
  else
  {
    dword_10433FC8 |= 1u;
    v2 = sub_100DD740();
    dword_10433FC4 = (int)v2;
  }
  if ( v2 )
    return (*(int (__thiscall **)(_DWORD, int, int, CHAR *, _DWORD))(*g_pMemAlloc + 8))(g_pMemAlloc, a1, a2, v2, 0);
  else
    return (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, a1, a2);
}
