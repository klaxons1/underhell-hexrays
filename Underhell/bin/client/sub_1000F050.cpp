char __thiscall sub_1000F050(_DWORD *this, char *String1, __int64 Buffer)
{
  double ArgList; // [esp+0h] [ebp-2Ch]
  double ArgLista; // [esp+0h] [ebp-2Ch]

  if ( !_stricmp(String1, "rendercolor") || !_stricmp(String1, "rendercolor32") )
  {
    sub_10228370((char *)Buffer, HIDWORD(Buffer), "%d %d %d %d", this[22]);
    return 1;
  }
  else
  {
    if ( !_stricmp(String1, "renderamt") )
    {
      sub_10228370((char *)Buffer, HIDWORD(Buffer), "%d", HIBYTE(this[22]));
      return 1;
    }
    if ( !_stricmp(String1, "disableshadows") )
    {
      sub_10228370((char *)Buffer, HIDWORD(Buffer), "%d", (this[28] & 0x10) != 0);
      return 1;
    }
    if ( !_stricmp(String1, "mins") || !_stricmp(String1, "maxs") )
      return 0;
    if ( !_stricmp(String1, "disablereceiveshadows") )
    {
      sub_10228370((char *)Buffer, HIDWORD(Buffer), "%d", (this[28] & 0x40) != 0);
      return 1;
    }
    if ( !_stricmp(String1, "nodamageforces") )
    {
      sub_10228370((char *)Buffer, HIDWORD(Buffer), "%d", (int)this[28] < 0);
      return 1;
    }
    if ( !_stricmp(String1, "angle") )
      return 0;
    if ( !_stricmp(String1, "angles") )
    {
      ArgList = *(float *)(*(int (__thiscall **)(_DWORD *))(*this + 40))(this);
      sub_10228370((char *)Buffer, HIDWORD(Buffer), "%f %f %f", SLOBYTE(ArgList));
      return 1;
    }
    if ( _stricmp(String1, "origin") )
      return 0;
    ArgLista = *(float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    sub_10228370((char *)Buffer, HIDWORD(Buffer), "%f %f %f", SLOBYTE(ArgLista));
    return 1;
  }
}
