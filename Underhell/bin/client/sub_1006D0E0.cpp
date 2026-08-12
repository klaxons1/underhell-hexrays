int __cdecl sub_1006D0E0(int a1)
{
  int v1; // esi

  v1 = 0;
  if ( dword_10411994 <= 0 )
    return 0;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_10411988 + 4 * v1) + 612))(
             *(_DWORD *)(dword_10411988 + 4 * v1),
             a1) )
  {
    if ( ++v1 >= dword_10411994 )
      return 0;
  }
  return *(_DWORD *)(dword_10411988 + 4 * v1);
}
