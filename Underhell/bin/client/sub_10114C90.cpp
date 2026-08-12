int __thiscall sub_10114C90(_BYTE *this, char *String1)
{
  int result; // eax

  *this = sub_1012D5A0();
  if ( *(_DWORD *)(dword_104016C4 + 48) )
  {
    result = _stricmp(String1, "ep1_citadel_02");
    if ( result )
    {
      result = _stricmp(String1, "ep1_citadel_02b");
      if ( result )
      {
        result = _stricmp(String1, "ep1_citadel_03");
        goto LABEL_9;
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
LABEL_9:
          if ( result )
            return result;
        }
      }
    }
  }
  *this = 0;
  return result;
}
