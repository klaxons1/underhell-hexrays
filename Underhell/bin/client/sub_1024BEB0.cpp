int __thiscall sub_1024BEB0(int (__thiscall ***this)(_DWORD), char *String2, int a3)
{
  int result; // eax

  result = sub_10239950(this, String2, 0);
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 200))(result, a3);
  return result;
}
