int __cdecl sub_101F8C90(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
    return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)((a1 & 0xFFFFFFFC) - 4));
  return result;
}
