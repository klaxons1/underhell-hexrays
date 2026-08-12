char __thiscall sub_10281940(float *this, char *String1, char *String)
{
  float v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h] BYREF
  char v7; // [esp+10h] [ebp-4h] BYREF

  if ( String1 == "skyname" || !_stricmp(String1, "skyname") )
  {
    sub_1042CBA0("sv_skyname");
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v6 + 8))(v6, String);
    return 1;
  }
  if ( String1 == "newunit" || !_stricmp(String1, "newunit") )
  {
    if ( atoi(String) )
    {
      sub_10153D20();
      return 1;
    }
    return 1;
  }
  if ( String1 == "world_mins" || !_stricmp(String1, "world_mins") )
  {
    sscanf(String, "%f %f %f", &v5, &v6, &v7);
    sub_10281640(this + 202, &v5);
    return 1;
  }
  if ( String1 == "world_maxs" || !_stricmp(String1, "world_maxs") )
  {
    sscanf(String, "%f %f %f", &v5, &v6, &v7);
    sub_102816B0(this + 205, &v5);
    return 1;
  }
  return sub_100EBE90((int)this, String1, String);
}
