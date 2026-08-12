int sub_100D3710()
{
  int result; // eax

  (*(void (__thiscall **)(int *))(*off_103ED0D8 + 140))(off_103ED0D8);
  result = sub_100422D0();
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 892))(result, 1);
  return result;
}
