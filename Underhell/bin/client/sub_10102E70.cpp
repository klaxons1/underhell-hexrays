char __thiscall sub_10102E70(int this, char *String1, char *String)
{
  char result; // al
  int v5; // eax

  if ( !_stricmp(String1, "physdamagescale") )
  {
    *(float *)(this + 1980) = atof(String);
    return 1;
  }
  if ( !_stricmp(String1, "health") )
  {
    *(_DWORD *)(this + 136) = sub_10227CC0(String);
    return 1;
  }
  else if ( !_stricmp(String1, "spawnflags") )
  {
    *(_DWORD *)(this + 1984) = sub_10227CC0(String);
    return 1;
  }
  else if ( !_stricmp(String1, "model") )
  {
    v5 = sub_100AF260(String);
    sub_10034E80((_DWORD *)this, v5);
    return 1;
  }
  else if ( !_stricmp(String1, "fademaxdist") )
  {
    *(float *)(this + 1316) = sub_10227D70(String);
    return 1;
  }
  else if ( !_stricmp(String1, "fademindist") )
  {
    *(float *)(this + 1312) = sub_10227D70(String);
    return 1;
  }
  else if ( !_stricmp(String1, "fadescale") )
  {
    *(float *)(this + 1320) = sub_10227D70(String);
    return 1;
  }
  else if ( !_stricmp(String1, "inertiaScale") )
  {
    *(float *)(this + 1988) = sub_10227D70(String);
    return 1;
  }
  else if ( !_stricmp(String1, "skin") )
  {
    *(_DWORD *)(this + 1196) = sub_10227CC0(String);
    return 1;
  }
  else if ( !_stricmp(String1, "physicsmode") )
  {
    *(_DWORD *)(this + 1968) = sub_10227CC0(String);
    return 1;
  }
  else
  {
    result = sub_100101A0((float *)this, String1, String);
    if ( result )
      return 1;
  }
  return result;
}
