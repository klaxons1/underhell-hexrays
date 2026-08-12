int __thiscall sub_1002FC40(int this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  char *v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  char **v11; // eax
  int v12; // eax
  int v13; // esi
  char *v14; // ebx
  int v15; // edi
  int v16; // eax
  const char *v18; // eax
  const char *v19; // eax
  int v20; // [esp-Ch] [ebp-28h]
  char *String; // [esp+Ch] [ebp-10h]
  char *String2; // [esp+10h] [ebp-Ch]
  char *String2a; // [esp+10h] [ebp-Ch]
  int v24; // [esp+14h] [ebp-8h]

  *(_BYTE *)(this + 1938) = 0;
  if ( sub_10229D00(32) )
    v24 = sub_10229D20(Locale);
  else
    v24 = 0;
  v2 = *(_DWORD *)dword_10413178;
  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4);
  v3 = (*(int (__thiscall **)(int))(v2 + 72))(dword_10413178);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 4) + 36))(this + 4, v3);
  v5 = (char *)(*(int (__thiscall **)(int, int))(v2 + 12))(dword_10413178, v4);
  v6 = v24;
  if ( !(unsigned __int8)sub_1022C1A0(v5, v20, 0, 0) )
    return sub_1022AF00(v6);
  v7 = sub_1022A6A0("Cables", 0);
  if ( v7 )
  {
    v8 = sub_10229C90(v7);
    if ( v8 )
    {
      v9 = this;
      do
      {
        String2 = (char *)sub_10064800(v9, v8);
        v10 = (unsigned __int16)sub_100EC160(0);
        sub_1016F8E0(0xFFFF, v10);
        v11 = (char **)(*(_DWORD *)(v9 + 1648) + 8 * v10);
        if ( v11 )
          *v11 = String2;
        v8 = sub_1021F0F0(v8);
      }
      while ( v8 );
      v6 = v24;
    }
  }
  v12 = sub_1022A6A0("Particles", 0);
  if ( !v12 )
    return sub_1022AF00(v6);
  v13 = sub_10229C90(v12);
  if ( !v13 )
    return sub_1022AF00(v6);
  while ( 1 )
  {
    String2a = (char *)sub_1022B4C0("name", (int)Locale);
    String = (char *)sub_1022B4C0("attachment_point", (int)Locale);
    v14 = (char *)sub_1022B4C0("attachment_type", (int)Locale);
    v15 = sub_100E91B0(v14);
    if ( v15 == -1 )
    {
      v18 = (const char *)sub_10034E90(this);
      return Warning(
               "Invalid attach type specified for particle effect in model '%s' keyvalues section. Trying to spawn effect"
               " '%s' with attach type of '%s'\n",
               v18,
               String2a,
               v14);
    }
    v16 = atoi(String);
    if ( *String != 48 && !v16 )
    {
      v16 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 4) + 140))(this + 4, String);
      if ( v16 == -1 )
        break;
    }
    sub_100EA350(String2a, v15, v16, SLODWORD(flt_10459240), SLODWORD(flt_10459244), SLODWORD(flt_10459248));
    v13 = sub_1021F0F0(v13);
    if ( !v13 )
    {
      v6 = v24;
      return sub_1022AF00(v6);
    }
  }
  v19 = (const char *)sub_10034E90(this);
  return Warning(
           "Failed to find attachment point specified for particle effect in model '%s' keyvalues section. Trying to spaw"
           "n effect '%s' on attachment named '%s'\n",
           v19,
           String2a,
           String);
}
