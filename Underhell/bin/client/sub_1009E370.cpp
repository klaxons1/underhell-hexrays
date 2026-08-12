int __cdecl sub_1009E370(int a1)
{
  if ( a1 < 0 || a1 >= dword_1042DFE8 )
    return 0;
  else
    return *(_DWORD *)(dword_1042DFDC + 4 * a1);
}
