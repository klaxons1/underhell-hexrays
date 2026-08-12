int __cdecl sub_100DDA40(int a1)
{
  CHAR *v1; // eax

  if ( (dword_10433FC0 & 1) != 0 )
  {
    v1 = (CHAR *)dword_10433FBC;
  }
  else
  {
    dword_10433FC0 |= 1u;
    v1 = sub_100DD740();
    dword_10433FBC = (int)v1;
  }
  if ( v1 )
    return (*(int (__thiscall **)(_DWORD, int, CHAR *, _DWORD))*g_pMemAlloc)(g_pMemAlloc, a1, v1, 0);
  else
    return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, a1);
}
