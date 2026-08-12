int __thiscall sub_10218120(_BYTE *this, char *String1)
{
  int result; // eax

  *this = sub_10265BA0();
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
    *this = 0;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    result = _stricmp(String1, "ep1_citadel_02");
    if ( result )
    {
      result = _stricmp(String1, "ep1_citadel_02b");
      if ( result )
      {
        result = _stricmp(String1, "ep1_citadel_03");
        goto LABEL_11;
      }
    }
  }
  else
  {
    result = _stricmp(String1, "d3_citadel_03");
    if ( result )
    {
      result = _stricmp(String1, "d3_citadel_04");
      if ( result )
      {
        result = _stricmp(String1, "d3_citadel_05");
        if ( result )
        {
          result = _stricmp(String1, "d3_breen_01");
LABEL_11:
          if ( result )
            return result;
        }
      }
    }
  }
  *this = 0;
  return result;
}
