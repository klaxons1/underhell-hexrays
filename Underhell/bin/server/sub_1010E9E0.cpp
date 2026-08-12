int sub_1010E9E0()
{
  int result; // eax
  int v1; // esi
  int v2; // eax

  result = sub_10153490();
  v1 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      v2 = *(_DWORD *)(v1 + 236);
      if ( (v2 & 0x2000000) != 0 )
      {
        *(_DWORD *)(v1 + 236) = v2 & 0xFDFFFFFF;
        return Msg("Buddha Mode off...\n");
      }
      else
      {
        *(_DWORD *)(v1 + 236) = v2 | 0x2000000;
        return Msg("Buddha Mode on...\n");
      }
    }
  }
  return result;
}
