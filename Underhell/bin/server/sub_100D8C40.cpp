int sub_100D8C40()
{
  int result; // eax
  int v1; // esi

  result = sub_10153490();
  v1 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
      return sub_1010CD10(v1);
  }
  return result;
}
