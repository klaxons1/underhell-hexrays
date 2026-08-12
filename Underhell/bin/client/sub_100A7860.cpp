int __stdcall sub_100A7860(char a1)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
  if ( a1 )
    result += 60;
  return result;
}
