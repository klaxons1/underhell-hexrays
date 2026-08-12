int __stdcall sub_10080F20(int a1, int a2)
{
  int result; // eax

  result = sub_10033760();
  if ( result )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)result + 1284))(result, a1, a2);
  return result;
}
