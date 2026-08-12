int __stdcall sub_1011C240(char *String2)
{
  int v1; // esi

  v1 = dword_10437688;
  if ( dword_10437688 )
  {
    while ( _stricmp(*(const char **)v1, String2) )
    {
      v1 = *(_DWORD *)(v1 + 8);
      if ( !v1 )
        goto LABEL_4;
    }
    return *(_DWORD *)(v1 + 4);
  }
  else
  {
LABEL_4:
    Warning("Could not find screen space effect %s\n", String2);
    return 0;
  }
}
