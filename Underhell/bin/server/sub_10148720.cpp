char __thiscall sub_10148720(_DWORD *this, char *String1, char *String)
{
  unsigned int v4; // eax
  int v6; // eax
  _BYTE *v7; // eax
  int v8; // eax
  bool v9; // zf
  _BYTE *v10; // eax

  if ( String1 == "material" || !_stricmp(String1, "material") )
  {
    v4 = atoi(String);
    if ( v4 > 0xA )
      this[203] = 1;
    else
      this[203] = v4;
    return 1;
  }
  if ( String1 == "deadmodel" || !_stricmp(String1, "deadmodel") || String1 == "shards" || !_stricmp(String1, "shards") )
    return 1;
  if ( String1 == "gibmodel" || !_stricmp(String1, "gibmodel") )
  {
    this[209] = *(_DWORD *)sub_10162BE0(&String, String);
    return 1;
  }
  if ( String1 == "spawnobject" || !_stricmp(String1, "spawnobject") )
  {
    v6 = atoi(String);
    if ( v6 > 0 && (unsigned int)v6 < 0x1B )
    {
      v7 = (_BYTE *)dword_10625430[v6];
      if ( !v7 || !*v7 )
        v7 = 0;
      this[210] = v7;
      return 1;
    }
    return 1;
  }
  if ( !sub_10043F40(String1, "propdata") )
  {
    if ( !sub_10043F40(String1, "lip") )
      return sub_100EBE90((int)this, String1, String);
    return 1;
  }
  v8 = atoi(String);
  v9 = v8 == 0;
  if ( v8 <= 0 )
  {
LABEL_30:
    if ( !v9 )
    {
      Warning("func_breakable with invalid propdata %d.\n", v8);
      return 1;
    }
    return 1;
  }
  if ( (unsigned int)v8 >= 0x19 )
  {
    v9 = v8 == 0;
    goto LABEL_30;
  }
  v10 = (_BYTE *)dword_106254A0[v8];
  if ( !v10 || !*v10 )
    v10 = 0;
  this[215] = v10;
  return 1;
}
