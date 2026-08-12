int __stdcall sub_10154D40(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    if ( dword_106B3CDC )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 144))(dword_106B3CDC, a1);
  }
  return result;
}
