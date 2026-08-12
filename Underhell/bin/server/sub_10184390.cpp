int __cdecl sub_10184390(int a1)
{
  CHAR *v1; // eax

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
    return (*(int (__thiscall **)(_DWORD, int, CHAR *, _DWORD))*g_pMemAlloc)(g_pMemAlloc, a1, v1, 0);
  else
    return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, a1);
}
