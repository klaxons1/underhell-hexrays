char __thiscall sub_100EBE90(int this, char *Str, char *String)
{
  char *v5; // eax
  char v6; // al
  char result; // al
  double v8; // st7
  _BYTE *v9; // eax
  int *v10; // esi
  char *v11; // edi
  const char *v12; // edx
  _BYTE *v13; // eax
  const char *v14; // eax
  int v15; // esi
  _BYTE *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  double ArgList; // [esp+0h] [ebp-30h]
  int v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+24h] [ebp-Ch] BYREF
  int v23; // [esp+28h] [ebp-8h] BYREF
  const char *v24; // [esp+2Ch] [ebp-4h]
  char Str_3; // [esp+3Bh] [ebp+Bh]

  v5 = strchr(Str, 35);
  if ( v5 )
    *v5 = 0;
  if ( Str == "rendercolor"
    || !_stricmp(Str, "rendercolor")
    || Str == "rendercolor32"
    || !_stricmp(Str, "rendercolor32") )
  {
    sub_10264FB0((int)&v23, String);
    sub_100C35E0((_BYTE *)(this + 116), v23, SBYTE1(v23), SBYTE2(v23));
    return 1;
  }
  if ( Str == "renderamt" || !_stricmp(Str, "renderamt") )
  {
    v6 = atoi(String);
    sub_100FB020(v6);
    return 1;
  }
  if ( Str == "disableshadows" || !_stricmp(Str, "disableshadows") )
  {
    if ( atoi(String) )
      sub_100EAB80((_DWORD *)this, 16);
    return 1;
  }
  if ( Str == "mins" || !_stricmp(Str, "mins") )
  {
    sub_10264F10((int)&v22, String);
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8))(this + 320);
    sub_10112A40(&v22, v21);
    return 1;
  }
  if ( sub_10043F40(Str, "maxs") )
  {
    sub_10264F10((int)&v22, String);
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
    sub_10112A40(v20, &v22);
    return 1;
  }
  if ( sub_10043F40(Str, "disablereceiveshadows") )
  {
    if ( atoi(String) )
    {
      sub_100EAB80((_DWORD *)this, 64);
      return 1;
    }
    return 1;
  }
  if ( sub_10043F40(Str, "nodamageforces") )
  {
    if ( atoi(String) )
    {
      *(_DWORD *)(this + 252) |= 0x80000000;
      return 1;
    }
    return 1;
  }
  if ( !sub_10043F40(Str, "angle") )
  {
    if ( sub_10043F40(Str, "angles") )
    {
      sub_10264F10((int)&v22, String);
      sub_100E0EA0(this, (float *)&v22);
      return 1;
    }
    if ( sub_10043F40(Str, "origin") )
    {
      sub_10264F10((int)&v22, String);
      sub_100E0D20(this, (float *)&v22);
      return 1;
    }
    if ( sub_10043F40(Str, "targetname") )
    {
      *(_DWORD *)(this + 260) = *(_DWORD *)sub_10162BE0(&String, String);
      return 1;
    }
    if ( (dword_10698384 & 0x1000) != 0 || (v9 = *(_BYTE **)(dword_1069838C + 36)) != 0 && *v9 )
    {
      v12 = ::String;
      Str_3 = 0;
      v24 = ::String;
      if ( (dword_10698384 & 0x1000) != 0 || (v13 = *(_BYTE **)(dword_1069838C + 36)) != 0 && *v13 )
      {
        if ( *(_DWORD *)(this + 92) )
          v12 = *(const char **)(this + 92);
        if ( (dword_10698384 & 0x1000) != 0 )
        {
          v14 = "FCVAR_NEVER_AS_STRING";
        }
        else
        {
          v14 = *(const char **)(dword_1069838C + 36);
          if ( !v14 )
            v14 = ::String;
        }
        if ( !_stricmp(v14, v12) )
        {
          Str_3 = 1;
          v24 = *(const char **)(this + 92);
          if ( !v24 )
            v24 = ::String;
        }
      }
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this);
      if ( v15 )
      {
        while ( 1 )
        {
          if ( !Str_3 && ((dword_10698384 & 0x1000) != 0 || (v16 = *(_BYTE **)(dword_1069838C + 36)) != 0 && *v16) )
          {
            if ( (dword_10698384 & 0x1000) != 0 )
            {
              v17 = "FCVAR_NEVER_AS_STRING";
            }
            else
            {
              v17 = *(const char **)(dword_1069838C + 36);
              if ( !v17 )
                v17 = ::String;
            }
            if ( !_stricmp(*(const char **)(v15 + 8), v17) )
            {
              Str_3 = 1;
              v24 = *(const char **)(v15 + 8);
            }
          }
          if ( (unsigned __int8)sub_10222FD0(this, *(_DWORD *)v15, *(_DWORD *)(v15 + 4), Str, String) )
            break;
          v15 = *(_DWORD *)(v15 + 12);
          if ( !v15 )
            goto LABEL_73;
        }
        if ( Str_3 )
        {
          Msg("(%s) key: %-16s value: %s\n", v24, Str, String);
          return 1;
        }
        return 1;
      }
LABEL_73:
      if ( Str_3 )
      {
        v18 = *(const char **)(this + 92);
        if ( !v18 )
          v18 = ::String;
        Msg("!! (%s) key not handled: \"%s\" \"%s\"\n", v18, Str, String);
      }
    }
    else
    {
      v10 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this);
      if ( v10 )
      {
        v11 = String;
        while ( 1 )
        {
          result = sub_10222FD0(this, *v10, v10[1], Str, v11);
          if ( result )
            break;
          v10 = (int *)v10[3];
          if ( !v10 )
            return result;
        }
        return 1;
      }
    }
    return 0;
  }
  v8 = atof(String);
  if ( v8 < 0.0 )
  {
    if ( (int)v8 == -1 )
      sub_104299C0(byte_10698650, "-90 0 0", 0x40u);
    else
      sub_104299C0(byte_10698650, "90 0 0", 0x40u);
  }
  else
  {
    ArgList = *(float *)(this + 728);
    sub_10429A00(byte_10698650, 0x40u, "%f %f %f", SLOBYTE(ArgList));
  }
  return (*(int (__thiscall **)(int, char *, char *))(*(_DWORD *)this + 128))(this, Str, byte_10698650);
}
