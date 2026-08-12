int sub_1019D8F0()
{
  int result; // eax

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B8370 + 16))(dword_106B8370);
    if ( result )
      return Msg("ERROR: Navigation Mesh load failed.\n");
  }
  return result;
}
