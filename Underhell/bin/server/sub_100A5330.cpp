int __thiscall sub_100A5330(int this)
{
  int v2; // ebx
  int v3; // ebx
  float v4; // edx
  int v5; // ebx
  float v6; // edx
  float v7; // edx
  float v8; // edx
  int v9; // ebx
  int result; // eax
  char Destination[128]; // [esp+28h] [ebp-D0h] BYREF
  float v12; // [esp+A8h] [ebp-50h]
  float v13; // [esp+ACh] [ebp-4Ch]
  float v14; // [esp+B0h] [ebp-48h]
  float v15; // [esp+B4h] [ebp-44h]
  float v16; // [esp+B8h] [ebp-40h]
  float v17; // [esp+BCh] [ebp-3Ch]
  float v18; // [esp+C0h] [ebp-38h]
  float v19; // [esp+C4h] [ebp-34h]
  size_t Size[5]; // [esp+C8h] [ebp-30h] BYREF
  __int16 v21; // [esp+DCh] [ebp-1Ch]
  __int16 v22; // [esp+DEh] [ebp-1Ah]
  __int16 v23; // [esp+E0h] [ebp-18h]
  __int16 v24; // [esp+E2h] [ebp-16h]
  __int16 v25; // [esp+E4h] [ebp-14h]
  __int16 v26; // [esp+E6h] [ebp-12h]
  __int16 v27; // [esp+E8h] [ebp-10h]
  __int16 v28; // [esp+EAh] [ebp-Eh]
  char v29; // [esp+ECh] [ebp-Ch]
  __int16 v30; // [esp+EDh] [ebp-Bh]
  __int16 v31; // [esp+EFh] [ebp-9h]
  char v32; // [esp+F4h] [ebp-4h]

  sub_100A0F60((char *)Size);
  sub_1009ACB0(this);
  sub_104299C0(Destination, (char *)(this + 116), 0x80u);
  while ( 1 )
  {
    if ( *(_BYTE *)(this + 1320) )
    {
      *(_BYTE *)(this + 1320) = 0;
    }
    else if ( *(int *)(this + 1336) > 0 )
    {
      v2 = *(_DWORD *)(this + 1324);
      *(_DWORD *)(v2 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                              dword_106B31D0,
                              *(_DWORD *)(v2 + 8),
                              this + 116,
                              1204);
      ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
    }
    if ( !_stricmp((const char *)(this + 116), "#include")
      || !_stricmp((const char *)(this + 116), "response")
      || !_stricmp((const char *)(this + 116), "enumeration")
      || !_stricmp((const char *)(this + 116), "criteria")
      || !_stricmp((const char *)(this + 116), "criterion")
      || !_stricmp((const char *)(this + 116), "rule") )
    {
      *(_BYTE *)(this + 1320) = 1;
      goto LABEL_61;
    }
    if ( !_stricmp((const char *)(this + 116), "{") )
      break;
    if ( !_stricmp((const char *)(this + 116), "predelay") )
    {
      if ( *(_BYTE *)(this + 1320) )
      {
        *(_BYTE *)(this + 1320) = 0;
      }
      else if ( *(int *)(this + 1336) > 0 )
      {
        v3 = *(_DWORD *)(this + 1324);
        *(_DWORD *)(v3 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                                dword_106B31D0,
                                *(_DWORD *)(v3 + 8),
                                this + 116,
                                1204);
        ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
      }
      v28 |= 0x100u;
      v12 = COERCE_FLOAT(sub_10171520((char *)(this + 116)));
      v13 = v4;
      v30 = sub_10065220(v12);
      v31 = sub_10065220(v13);
    }
    else if ( !_stricmp((const char *)(this + 116), "nodelay") )
    {
      if ( *(_BYTE *)(this + 1320) )
      {
        *(_BYTE *)(this + 1320) = 0;
      }
      else if ( *(int *)(this + 1336) > 0 )
      {
        v5 = *(_DWORD *)(this + 1324);
        *(_DWORD *)(v5 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                                dword_106B31D0,
                                *(_DWORD *)(v5 + 8),
                                this + 116,
                                1204);
        ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
      }
      v28 |= 1u;
      v21 = sub_10065220(0.0);
      v22 = v21;
    }
    else if ( !_stricmp((const char *)(this + 116), "defaultdelay") )
    {
      v28 |= 1u;
      v21 = sub_10065220(2.8);
      v22 = sub_10065220(0.4000001);
    }
    else if ( !_stricmp((const char *)(this + 116), "delay") )
    {
      sub_1009ACB0(this);
      v28 |= 1u;
      v14 = COERCE_FLOAT(sub_10171520((char *)(this + 116)));
      v15 = v6;
      v21 = sub_10065220(v14);
      v22 = sub_10065220(v15);
    }
    else if ( !_stricmp((const char *)(this + 116), "speakonce") )
    {
      v28 |= 2u;
    }
    else if ( !_stricmp((const char *)(this + 116), "noscene") )
    {
      v28 |= 0x20u;
    }
    else if ( !_stricmp((const char *)(this + 116), "stop_on_nonidle") )
    {
      v28 |= 0x40u;
    }
    else if ( !_stricmp((const char *)(this + 116), "odds") )
    {
      sub_1009ACB0(this);
      v28 |= 4u;
      if ( atoi((const char *)(this + 116)) <= 100 )
      {
        if ( atoi((const char *)(this + 116)) >= 0 )
          v27 = atoi((const char *)(this + 116));
        else
          v27 = 0;
      }
      else
      {
        v27 = 100;
      }
    }
    else if ( !_stricmp((const char *)(this + 116), "respeakdelay") )
    {
      sub_1009ACB0(this);
      v28 |= 8u;
      v18 = COERCE_FLOAT(sub_10171520((char *)(this + 116)));
      v19 = v7;
      v23 = sub_10065220(v18);
      v24 = sub_10065220(v19);
    }
    else if ( !_stricmp((const char *)(this + 116), "weapondelay") )
    {
      sub_1009ACB0(this);
      v28 |= 0x80u;
      v16 = COERCE_FLOAT(sub_10171520((char *)(this + 116)));
      v17 = v8;
      v25 = sub_10065220(v16);
      v26 = sub_10065220(v17);
    }
    else if ( !_stricmp((const char *)(this + 116), "soundlevel") )
    {
      sub_1009ACB0(this);
      v28 |= 0x10u;
      v29 = sub_1023F930((char *)(this + 116));
    }
    else
    {
      sub_100A1CA0(this, Destination, (size_t)Size);
    }
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(this + 1320) )
    {
      *(_BYTE *)(this + 1320) = 0;
    }
    else if ( *(int *)(this + 1336) > 0 )
    {
      v9 = *(_DWORD *)(this + 1324);
      *(_DWORD *)(v9 + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                              dword_106B31D0,
                              *(_DWORD *)(v9 + 8),
                              this + 116,
                              1204);
      ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
    }
    if ( !_stricmp((const char *)(this + 116), "}") )
      break;
    if ( !_stricmp((const char *)(this + 116), "permitrepeats") )
    {
      v32 &= ~1u;
    }
    else if ( !_stricmp((const char *)(this + 116), "sequential") )
    {
      v32 |= 8u;
    }
    else if ( !_stricmp((const char *)(this + 116), "norepeat") )
    {
      v32 |= 0x10u;
    }
    else
    {
      sub_100A1CA0(this, Destination, (size_t)Size);
    }
  }
LABEL_61:
  sub_100A50F0((void *)(this + 4), Destination, Size);
  result = sub_1009CA00((int *)Size);
  if ( (Size[2] & 0x80000000) == 0 )
  {
    result = Size[0];
    if ( Size[0] )
      return (*(int (__thiscall **)(_DWORD, size_t))(*g_pMemAlloc + 20))(g_pMemAlloc, Size[0]);
  }
  return result;
}
