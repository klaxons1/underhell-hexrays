char *__thiscall sub_100D3140(_DWORD *this)
{
  int *v2; // ecx
  int *v3; // ecx
  __int16 *v4; // edi
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  const char *v8; // ecx
  int *v9; // eax
  int v10; // eax
  const char *v11; // ecx
  int *v12; // ecx
  int *v13; // ecx
  int v14; // eax
  int v15; // eax
  int i; // edi
  char *result; // eax
  const char *v18; // esi
  char *v19; // [esp-4h] [ebp-14h]
  char *v20; // [esp-4h] [ebp-14h]
  char ArgList[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( this[299] != -1 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v2 = (int *)this[6];
      if ( v2 )
        sub_100194B0(v2, 1196);
    }
    this[299] = -1;
  }
  if ( this[298] != this[299] )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)this[6];
      if ( v3 )
        sub_100194B0(v3, 1192);
    }
    this[298] = this[299];
  }
  *(_DWORD *)ArgList = this[23];
  if ( !*(_DWORD *)ArgList )
    *(_DWORD *)ArgList = String;
  v4 = (__int16 *)(this + 312);
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1280))(this);
  if ( (unsigned __int8)sub_10275EF0(dword_106B31D8, ArgList[0], (int)(this + 312), v5) )
  {
    if ( *(_BYTE *)(sub_10275D10(*v4) + 480) )
    {
      v19 = (char *)(sub_10275D10(*v4) + 480);
      v6 = (int *)sub_102D9B20();
      *(_DWORD *)ArgList = sub_100B9D10(v6, v19);
      sub_100D2BC0(this + 298, ArgList);
      if ( this[298] == -1 )
      {
        v7 = sub_10275D10(*v4);
        v8 = (const char *)this[23];
        if ( !v8 )
          v8 = String;
        Msg("ERROR: Weapon (%s) using undefined primary ammo type (%s)\n", v8, (const char *)(v7 + 480));
      }
    }
    if ( *(_BYTE *)(sub_10275D10(*v4) + 512) )
    {
      v20 = (char *)(sub_10275D10(*v4) + 512);
      v9 = (int *)sub_102D9B20();
      *(_DWORD *)ArgList = sub_100B9D10(v9, v20);
      sub_100D2B70(this + 299, ArgList);
      if ( this[299] == -1 )
      {
        v10 = sub_10275D10(*v4);
        v11 = (const char *)this[23];
        if ( !v11 )
          v11 = String;
        Msg("ERROR: Weapon (%s) using undefined secondary ammo type (%s)\n", v11, (const char *)(v10 + 512));
      }
    }
    if ( this[287] )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v12 = (int *)this[6];
        if ( v12 )
          sub_100194B0(v12, 1148);
      }
      this[287] = 0;
    }
    if ( this[288] )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
      }
      else
      {
        v13 = (int *)this[6];
        if ( v13 )
          sub_100194B0(v13, 1152);
      }
      this[288] = 0;
    }
    if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1204))(this, 0)
      && *(_BYTE *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1204))(this, 0) )
    {
      v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1204))(this, 0);
      *(_DWORD *)ArgList = sub_100E8220(v14);
      sub_100D2C10(this + 287, ArgList);
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 1208))(this)
      && *(_BYTE *)(*(int (__thiscall **)(_DWORD *))(*this + 1208))(this) )
    {
      v15 = (*(int (__thiscall **)(_DWORD *))(*this + 1208))(this);
      *(_DWORD *)ArgList = sub_100E8220(v15);
      sub_100D2C60(this + 288, ArgList);
    }
    for ( i = 0; i < 16; ++i )
    {
      result = (char *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1264))(this, i);
      if ( result )
      {
        if ( *result )
          result = (char *)sub_1023B8B0(result);
      }
    }
  }
  else
  {
    v18 = (const char *)this[23];
    if ( !v18 )
      v18 = String;
    return (char *)Warning("Error reading weapon data file for: %s\n", v18);
  }
  return result;
}
