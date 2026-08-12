int __thiscall sub_100A1CA0(int this, const char *ArgList, size_t Size)
{
  const char *v5; // esi
  unsigned int v7; // eax
  void *v8; // eax
  float v9; // edx
  __int16 v10; // ax
  float v11; // edx
  float v12; // edx
  float v13; // edx
  float v14; // [esp+18h] [ebp-3Ch]
  float v15; // [esp+28h] [ebp-2Ch]
  float v16; // [esp+2Ch] [ebp-28h]
  float v17; // [esp+30h] [ebp-24h]
  float v18; // [esp+34h] [ebp-20h]
  float v19; // [esp+38h] [ebp-1Ch]
  float v20; // [esp+3Ch] [ebp-18h]
  float v21; // [esp+40h] [ebp-14h]
  float v22; // [esp+44h] [ebp-10h]
  void *v23; // [esp+48h] [ebp-Ch] BYREF
  __int16 v24; // [esp+4Ch] [ebp-8h]
  char v25; // [esp+4Eh] [ebp-6h]
  char v26; // [esp+4Fh] [ebp-5h]
  void *v27; // [esp+50h] [ebp-4h]
  size_t Sizea; // [esp+60h] [ebp+Ch]
  size_t Sizeb; // [esp+60h] [ebp+Ch]
  size_t Sizec; // [esp+60h] [ebp+Ch]

  v23 = 0;
  v25 = 0;
  v5 = (const char *)(this + 116);
  v24 = sub_10065220(1.0);
  v26 = sub_1009A580(v5) & 0x3F;
  if ( (v26 & 0x3F) != 0 )
  {
    sub_1009ACB0(this);
    if ( this == -116 )
    {
      v27 = 0;
    }
    else
    {
      v7 = this + 116 + strlen((const char *)(this + 116)) + 1;
      Sizea = v7 - (this + 117);
      v27 = (void *)sub_10184390(v7 - (_DWORD)v5);
      memcpy_0(v27, (const void *)(this + 116), Sizea);
      v8 = v27;
      *((_BYTE *)v27 + Sizea) = 0;
      v27 = v8;
    }
    v23 = v27;
    while ( sub_1009AD20((_DWORD *)this) )
    {
      if ( *(_BYTE *)(this + 1320) )
      {
        *(_BYTE *)(this + 1320) = 0;
      }
      else if ( *(int *)(this + 1336) > 0 )
      {
        Sizeb = *(_DWORD *)(this + 1324);
        *(_DWORD *)(Sizeb + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                                   dword_106B31D0,
                                   *(_DWORD *)(Sizeb + 8),
                                   this + 116,
                                   1204);
        ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
      }
      if ( !_stricmp((const char *)(this + 116), "weight") )
      {
        if ( *(_BYTE *)(this + 1320) )
        {
          *(_BYTE *)(this + 1320) = 0;
        }
        else if ( *(int *)(this + 1336) > 0 )
        {
          Sizec = *(_DWORD *)(this + 1324);
          *(_DWORD *)(Sizec + 8) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31D0 + 224))(
                                     dword_106B31D0,
                                     *(_DWORD *)(Sizec + 8),
                                     this + 116,
                                     1204);
          ++*(_DWORD *)(*(_DWORD *)(this + 1324) + 12);
        }
        v14 = atof((const char *)(this + 116));
        v24 = sub_10065220(v14);
      }
      else if ( !_stricmp((const char *)(this + 116), "predelay") )
      {
        sub_1009ACB0(this);
        *(_WORD *)(Size + 34) |= 0x100u;
        v21 = COERCE_FLOAT(sub_10171520((char *)(this + 116)));
        v22 = v9;
        *(_WORD *)(Size + 37) = sub_10065220(v21);
        *(_WORD *)(Size + 39) = sub_10065220(v22);
      }
      else if ( !_stricmp((const char *)(this + 116), "nodelay") )
      {
        sub_1009ACB0(this);
        *(_WORD *)(Size + 34) |= 1u;
        v10 = sub_10065220(0.0);
        *(_WORD *)(Size + 20) = v10;
        *(_WORD *)(Size + 22) = v10;
      }
      else if ( !_stricmp((const char *)(this + 116), "defaultdelay") )
      {
        *(_WORD *)(Size + 34) |= 1u;
        *(_WORD *)(Size + 20) = sub_10065220(2.8);
        *(_WORD *)(Size + 22) = sub_10065220(0.4000001);
      }
      else if ( !_stricmp((const char *)(this + 116), "delay") )
      {
        sub_1009ACB0(this);
        *(_WORD *)(Size + 34) |= 1u;
        v19 = COERCE_FLOAT(sub_10171520((char *)(this + 116)));
        v20 = v11;
        *(_WORD *)(Size + 20) = sub_10065220(v19);
        *(_WORD *)(Size + 22) = sub_10065220(v20);
      }
      else if ( !_stricmp((const char *)(this + 116), "speakonce") )
      {
        *(_WORD *)(Size + 34) |= 2u;
      }
      else if ( !_stricmp((const char *)(this + 116), "noscene") )
      {
        *(_WORD *)(Size + 34) |= 0x20u;
      }
      else if ( !_stricmp((const char *)(this + 116), "stop_on_nonidle") )
      {
        *(_WORD *)(Size + 34) |= 0x40u;
      }
      else if ( !_stricmp((const char *)(this + 116), "odds") )
      {
        sub_1009ACB0(this);
        *(_WORD *)(Size + 34) |= 4u;
        if ( atoi((const char *)(this + 116)) <= 100 )
        {
          if ( atoi((const char *)(this + 116)) >= 0 )
            *(_WORD *)(Size + 32) = atoi((const char *)(this + 116));
          else
            *(_WORD *)(Size + 32) = 0;
        }
        else
        {
          *(_WORD *)(Size + 32) = 100;
        }
      }
      else if ( !_stricmp((const char *)(this + 116), "respeakdelay") )
      {
        sub_1009ACB0(this);
        *(_WORD *)(Size + 34) |= 8u;
        v17 = COERCE_FLOAT(sub_10171520((char *)(this + 116)));
        v18 = v12;
        *(_WORD *)(Size + 24) = sub_10065220(v17);
        *(_WORD *)(Size + 26) = sub_10065220(v18);
      }
      else if ( !_stricmp((const char *)(this + 116), "weapondelay") )
      {
        sub_1009ACB0(this);
        *(_WORD *)(Size + 34) |= 0x80u;
        v15 = COERCE_FLOAT(sub_10171520((char *)(this + 116)));
        v16 = v13;
        *(_WORD *)(Size + 28) = sub_10065220(v15);
        *(_WORD *)(Size + 30) = sub_10065220(v16);
      }
      else if ( !_stricmp((const char *)(this + 116), "soundlevel") )
      {
        sub_1009ACB0(this);
        *(_WORD *)(Size + 34) |= 0x10u;
        *(_BYTE *)(Size + 36) = sub_1023F930((char *)(this + 116));
      }
      else if ( !_stricmp((const char *)(this + 116), "displayfirst") )
      {
        v26 |= 0x40u;
        *(_BYTE *)(Size + 44) |= 2u;
      }
      else if ( !_stricmp((const char *)(this + 116), "displaylast") )
      {
        v26 |= 0x80u;
        *(_BYTE *)(Size + 44) |= 4u;
      }
      else
      {
        sub_1009AEC0(this, "response entry '%s' with unknown command '%s'\n", ArgList, (const char *)(this + 116));
      }
    }
    sub_1009C990((int *)Size, *(_DWORD *)(Size + 12), (int)&v23);
    return sub_10184660(v27);
  }
  else
  {
    sub_1009AEC0(this, "response entry '%s' with unknown response type '%s'\n", ArgList, (const char *)(this + 116));
    return sub_10184660(0);
  }
}
