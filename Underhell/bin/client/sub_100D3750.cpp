int sub_100D3750()
{
  int result; // eax

  (*(void (__thiscall **)(int *))(*off_103ED0D8 + 144))(off_103ED0D8);
  result = sub_100422D0();
  if ( result )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)result + 892))(result, 0);
  return result;
}
