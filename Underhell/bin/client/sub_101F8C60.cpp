unsigned int __cdecl sub_101F8C60(int a1)
{
  unsigned int result; // eax

  result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, a1 + 19);
  if ( result )
  {
    *(_DWORD *)(((result + 19) & 0xFFFFFFF0) - 4) = result;
    return (result + 19) & 0xFFFFFFF0;
  }
  return result;
}
