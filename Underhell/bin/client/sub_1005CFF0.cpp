int __stdcall sub_1005CFF0(int a1)
{
  int result; // eax

  result = sub_1006D090(a1);
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 596))(result);
  return result;
}
