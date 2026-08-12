int __cdecl sub_10074490(int a1)
{
  int result; // eax

  if ( !a1 )
    return 0;
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131D4 + 48))(dword_104131D4, a1);
  if ( result < 0 )
    return 0;
  return result;
}
