int __stdcall sub_10107ED0(int a1)
{
  int result; // eax

  result = sub_100422D0();
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 1064))(result, a1);
  return result;
}
