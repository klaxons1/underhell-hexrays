char __thiscall sub_100101A0(float *this, char *Str, char *String)
{
  const char *v3; // edi
  char *v5; // eax
  char v6; // al
  int v7; // ecx
  int v9; // eax
  int v10; // eax
  double v11; // st7
  char v12; // cl
  double ArgList; // [esp+0h] [ebp-2Ch]
  int v14[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = Str;
  v5 = strchr(Str, 35);
  if ( v5 )
    *v5 = 0;
  if ( !_stricmp(v3, "rendercolor") || !_stricmp(v3, "rendercolor32") )
  {
    sub_1012CF40((int)&Str, String);
    v12 = *((_BYTE *)this + 91);
    LOWORD(String) = (_WORD)Str;
    BYTE2(String) = BYTE2(Str);
    HIBYTE(String) = v12;
LABEL_33:
    if ( *((char **)this + 22) != String )
      this[22] = *(float *)&String;
    return 1;
  }
  if ( !_stricmp(v3, "renderamt") )
  {
    v6 = atoi(String);
    v7 = *((_DWORD *)this + 22);
    LOWORD(String) = v7;
    BYTE2(String) = BYTE2(v7);
    HIBYTE(String) = v6;
    goto LABEL_33;
  }
  if ( !_stricmp(v3, "disableshadows") )
  {
    if ( atoi(String) )
    {
      *((_DWORD *)this + 28) |= 0x10u;
      return 1;
    }
    return 1;
  }
  if ( !_stricmp(v3, "mins") )
  {
    sub_1012CEA0((int)v14, String);
    v9 = (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)this + 88) + 8))((_BYTE *)this + 352);
    sub_1008FC00(v14, v9);
    return 1;
  }
  if ( !_stricmp(v3, "maxs") )
  {
    sub_1012CEA0((int)v14, String);
    v10 = (*(int (__thiscall **)(_BYTE *))(*((_DWORD *)this + 88) + 4))((_BYTE *)this + 352);
    sub_1008FC00(v10, v14);
    return 1;
  }
  if ( !_stricmp(v3, "disablereceiveshadows") )
  {
    if ( atoi(String) )
    {
      *((_DWORD *)this + 28) |= 0x40u;
      return 1;
    }
    return 1;
  }
  if ( !_stricmp(v3, "nodamageforces") )
  {
    if ( atoi(String) )
    {
      *((_DWORD *)this + 78) |= 0x80000000;
      return 1;
    }
    return 1;
  }
  if ( !_stricmp(v3, "angle") )
  {
    v11 = atof(String);
    *(float *)&Str = v11;
    if ( v11 < 0.0 )
    {
      if ( (int)v11 == -1 )
        sub_102282F0(byte_10401F88, "-90 0 0", 0x40u);
      else
        sub_102282F0(byte_10401F88, "90 0 0", 0x40u);
    }
    else
    {
      String = *(char **)(sub_10034AE0(this) + 8);
      ArgList = *(float *)sub_10034AE0(this);
      sub_10228370(byte_10401F88, 0x40u, "%f %f %f", SLOBYTE(ArgList));
    }
    return (*(int (__thiscall **)(float *, const char *, char *))(*(_DWORD *)this + 152))(this, v3, byte_10401F88);
  }
  else if ( !_stricmp(v3, "angles") )
  {
    sub_1012CEA0((int)v14, String);
    sub_10037CA0(v14);
    return 1;
  }
  else if ( !_stricmp(v3, "origin") )
  {
    sub_1012CEA0((int)v14, String);
    sub_10037BA0(v14);
    return 1;
  }
  else
  {
    return 0;
  }
}
