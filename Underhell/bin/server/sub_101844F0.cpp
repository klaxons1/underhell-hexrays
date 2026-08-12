int __cdecl sub_101844F0(int a1, int a2)
{
  CHAR *v2; // eax

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
    return (*(int (__thiscall **)(_DWORD, int, int, CHAR *, _DWORD))(*g_pMemAlloc + 8))(g_pMemAlloc, a1, a2, v2, 0);
  else
    return (*(int (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 12))(g_pMemAlloc, a1, a2);
}
