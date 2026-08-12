int __stdcall sub_10219DB0(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    a1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
    return sub_1023E0F0(&a1);
  }
  return result;
}
