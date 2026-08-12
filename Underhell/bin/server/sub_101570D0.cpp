int __stdcall sub_101570D0(char a1)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  if ( a1 )
    result += 60;
  return result;
}
