int __thiscall sub_100D5270(_DWORD *this)
{
  const char *v2; // eax
  const char *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int result; // eax
  _BYTE v11[4]; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h]

  this[28] = 0;
  this[29] = 0;
  this[31] = 0;
  this[32] = 0;
  this[34] = 0;
  this[35] = 0;
  this[37] = 0;
  this[38] = 0;
  this[40] = 0;
  this[41] = 0;
  this[43] = 0;
  this[44] = 0;
  if ( *(_DWORD *)(dword_104319DC + 48) )
  {
    if ( (dword_1043198C & 0x1000) != 0 )
    {
      v2 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v2 = *(const char **)(dword_10431994 + 36);
      if ( !v2 )
        v2 = Locale;
    }
    if ( _stricmp(v2, "joystick") )
    {
      if ( (dword_1043198C & 0x1000) != 0 )
      {
        v3 = "FCVAR_NEVER_AS_STRING";
      }
      else
      {
        v3 = *(const char **)(dword_10431994 + 36);
        if ( !v3 )
          v3 = Locale;
      }
      Msg("Using joystick '%s' configuration\n", v3);
    }
    if ( *(_DWORD *)(dword_10432444 + 48) )
      v4 = *(_DWORD *)(dword_10431B44 + 48);
    else
      v4 = *(_DWORD *)(dword_10431A24 + 48);
    this[28] = v4 & 0xF;
    this[29] = v4 & 0x10;
    sub_100D4BD0("JOY_AXIS_X", (int)(this + 27));
    if ( *(_DWORD *)(dword_10432444 + 48) )
      v5 = *(_DWORD *)(dword_10431AFC + 48);
    else
      v5 = *(_DWORD *)(dword_10431A6C + 48);
    this[31] = v5 & 0xF;
    this[32] = v5 & 0x10;
    sub_100D4BD0("JOY_AXIS_Y", (int)(this + 30));
    v6 = *(_DWORD *)(dword_10431AB4 + 48);
    this[34] = v6 & 0xF;
    this[35] = v6 & 0x10;
    sub_100D4BD0("JOY_AXIS_Z", (int)(this + 33));
    if ( *(_DWORD *)(dword_10432444 + 48) )
      v7 = *(_DWORD *)(dword_10431A6C + 48);
    else
      v7 = *(_DWORD *)(dword_10431AFC + 48);
    this[37] = v7 & 0xF;
    this[38] = v7 & 0x10;
    sub_100D4BD0("JOY_AXIS_R", (int)(this + 36));
    if ( *(_DWORD *)(dword_10432444 + 48) )
      v8 = *(_DWORD *)(dword_10431A24 + 48);
    else
      v8 = *(_DWORD *)(dword_10431B44 + 48);
    this[40] = v8 & 0xF;
    this[41] = v8 & 0x10;
    sub_100D4BD0("JOY_AXIS_U", (int)(this + 39));
    v9 = *(_DWORD *)(dword_10431B8C + 48);
    this[43] = v9 & 0xF;
    this[44] = v9 & 0x10;
    sub_100D4BD0("JOY_AXIS_V", (int)(this + 42));
    Msg("Advanced Joystick settings initialized\n");
  }
  else
  {
    this[28] = 4;
    this[31] = 1;
  }
  sub_10229600("joy_xcontroller_found");
  if ( (unsigned __int8)sub_102291A0(v11) && (result = v12, *(_DWORD *)(v12 + 48)) && *(_DWORD *)(dword_10432A74 + 48) )
  {
    if ( !*(_DWORD *)(dword_1043248C + 48) )
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(
        dword_1041315C,
        "exec 360controller.cfg");
      return sub_10229140(&unk_10432488, 1);
    }
  }
  else
  {
    result = dword_1043248C;
    if ( *(_DWORD *)(dword_1043248C + 48) )
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 28))(
        dword_1041315C,
        "exec undo360controller.cfg");
      return sub_10229140(&unk_10432488, 0);
    }
  }
  return result;
}
