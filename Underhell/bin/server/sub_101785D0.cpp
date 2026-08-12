char __thiscall sub_101785D0(int this, char *String1, char *String)
{
  char result; // al
  int v5; // eax
  BOOL v6; // edx

  if ( !_stricmp(String1, "Slack") )
  {
    *(float *)(this + 564) = atof(String) - 100.0;
    *(_BYTE *)(this + 568) = 1;
    return 1;
  }
  else if ( !_stricmp(String1, "Type") )
  {
    v5 = atoi(String);
    if ( v5 )
    {
      v6 = v5 == 1;
      *(_BYTE *)(this + 568) = 1;
      result = 1;
      *(_DWORD *)(this + 572) = 2 * v6 + 2;
    }
    else
    {
      *(_DWORD *)(this + 572) = 10;
      *(_BYTE *)(this + 568) = 1;
      return 1;
    }
  }
  else
  {
    return 0;
  }
  return result;
}
