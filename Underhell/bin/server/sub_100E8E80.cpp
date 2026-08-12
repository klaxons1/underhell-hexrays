char __thiscall sub_100E8E80(_DWORD *this, char *String1, __int64 Buffer)
{
  const char *v5; // ebx
  int *v6; // esi
  double ArgList; // [esp+0h] [ebp-2Ch]
  double ArgLista; // [esp+0h] [ebp-2Ch]

  if ( String1 == "rendercolor"
    || !_stricmp(String1, "rendercolor")
    || String1 == "rendercolor32"
    || !_stricmp(String1, "rendercolor32") )
  {
    sub_10429A00((char *)Buffer, HIDWORD(Buffer), "%d %d %d %d", this[29]);
    return 1;
  }
  else
  {
    if ( String1 == "renderamt" || !_stricmp(String1, "renderamt") )
    {
      sub_10429A00((char *)Buffer, HIDWORD(Buffer), "%d", HIBYTE(this[29]));
      return 1;
    }
    if ( String1 == "disableshadows" || !_stricmp(String1, "disableshadows") )
    {
      sub_10429A00((char *)Buffer, HIDWORD(Buffer), "%d", (this[48] & 0x10) != 0);
      return 1;
    }
    if ( String1 == "mins" || !_stricmp(String1, "mins") || sub_10043F40(String1, "maxs") )
      return 0;
    if ( sub_10043F40(String1, "disablereceiveshadows") )
    {
      sub_10429A00((char *)Buffer, HIDWORD(Buffer), "%d", (this[48] & 0x40) != 0);
      return 1;
    }
    if ( sub_10043F40(String1, "nodamageforces") )
    {
      sub_10429A00((char *)Buffer, HIDWORD(Buffer), "%d", (int)this[48] < 0);
      return 1;
    }
    if ( sub_10043F40(String1, "angle") )
      return 0;
    if ( sub_10043F40(String1, "angles") )
    {
      ArgList = *(float *)sub_1001F410(this);
      sub_10429A00((char *)Buffer, HIDWORD(Buffer), "%f %f %f", SLOBYTE(ArgList));
      return 1;
    }
    if ( sub_10043F40(String1, "origin") )
    {
      ArgLista = *(float *)sub_10019640(this);
      sub_10429A00((char *)Buffer, HIDWORD(Buffer), "%f %f %f", SLOBYTE(ArgLista));
      return 1;
    }
    if ( sub_10043F40(String1, "targetname") )
    {
      v5 = (const char *)this[65];
      if ( !v5 )
        v5 = String;
LABEL_28:
      sub_10429A00((char *)Buffer, HIDWORD(Buffer), "%s", (char)v5);
      return 1;
    }
    if ( sub_10043F40(String1, "classname") )
    {
      v5 = (const char *)this[23];
      if ( !v5 )
        v5 = String;
      goto LABEL_28;
    }
    v6 = (int *)(*(int (__thiscall **)(_DWORD *))(*this + 44))(this);
    if ( v6 )
    {
      while ( !(unsigned __int8)sub_10223200((int)this, *v6, v6[1], String1, (char *)Buffer, HIDWORD(Buffer)) )
      {
        v6 = (int *)v6[3];
        if ( !v6 )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
