int __cdecl sub_1006D090(int a1)
{
  int v1; // esi

  v1 = 0;
  if ( dword_10411994 <= 0 )
    return 0;
  while ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_10411988 + 4 * v1) + 296))(*(_DWORD *)(dword_10411988 + 4 * v1)) != a1 )
  {
    if ( ++v1 >= dword_10411994 )
      return 0;
  }
  return *(_DWORD *)(dword_10411988 + 4 * v1);
}
