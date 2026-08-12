void __thiscall sub_1010B6F0(_BYTE *this, int a2, char *String1, char *String)
{
  if ( !_stricmp(String1, "model") )
  {
    sub_1010B650(String, 0x200u, (char *)(a2 + 12));
  }
  else if ( !_stricmp(String1, "ragdoll") )
  {
    sub_1010B650(String, 0x200u, (char *)(a2 + 12));
    *(_BYTE *)(a2 + 1060) = 1;
  }
  else if ( !_stricmp(String1, "motiondisabled") )
  {
    *(_BYTE *)(a2 + 1062) = 1;
  }
  else if ( !_stricmp(String1, "offset") )
  {
    sub_1012CEA0(a2, String);
  }
  else if ( !_stricmp(String1, "health") )
  {
    *(float *)(a2 + 1048) = atof(String);
  }
  else if ( !_stricmp(String1, "fadetime") )
  {
    *(float *)(a2 + 1036) = atof(String);
    if ( !this[12] )
      *(_DWORD *)(a2 + 1056) = 1;
  }
  else if ( !_stricmp(String1, "fademindist") )
  {
    *(float *)(a2 + 1040) = atof(String);
  }
  else if ( !_stricmp(String1, "fademaxdist") )
  {
    *(float *)(a2 + 1044) = atof(String);
  }
  else if ( !_stricmp(String1, "debris") )
  {
    *(_DWORD *)(a2 + 1056) = atoi(String) <= 0 ? 4 : 1;
    this[12] = 1;
  }
  else if ( !_stricmp(String1, "burst") )
  {
    *(float *)(a2 + 1052) = atof(String);
  }
  else if ( !_stricmp(String1, "placementbone") )
  {
    sub_102282F0((char *)(a2 + 524), String, 0x200u);
    *(_BYTE *)(a2 + 1061) = 1;
  }
  else if ( !_stricmp(String1, "placementattachment") )
  {
    sub_102282F0((char *)(a2 + 524), String, 0x200u);
    *(_BYTE *)(a2 + 1061) = 0;
  }
  else if ( !_stricmp(String1, "multiplayer_break") )
  {
    if ( !_stricmp(String, "server") )
    {
      *(_DWORD *)(a2 + 1064) = 1;
    }
    else if ( !_stricmp(String, "client") )
    {
      *(_DWORD *)(a2 + 1064) = 2;
    }
  }
}
