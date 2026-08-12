char __thiscall sub_103C2CE0(int this, int a2)
{
  void *v4; // eax
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  int v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  int v14; // [esp+Ch] [ebp-50h]
  float v15; // [esp+10h] [ebp-4Ch]
  float v16; // [esp+14h] [ebp-48h]
  int v17; // [esp+20h] [ebp-3Ch] BYREF
  float v18; // [esp+24h] [ebp-38h]
  float v19; // [esp+28h] [ebp-34h]
  int v20; // [esp+2Ch] [ebp-30h] BYREF
  float v21; // [esp+30h] [ebp-2Ch]
  float v22; // [esp+34h] [ebp-28h]
  int v23; // [esp+38h] [ebp-24h] BYREF
  float v24; // [esp+3Ch] [ebp-20h]
  float v25; // [esp+40h] [ebp-1Ch]
  float v26; // [esp+44h] [ebp-18h]
  float v27; // [esp+48h] [ebp-14h]
  float v28; // [esp+4Ch] [ebp-10h]
  float v29; // [esp+50h] [ebp-Ch] BYREF
  float v30; // [esp+54h] [ebp-8h]
  float v31; // [esp+58h] [ebp-4h]

  if ( (dword_1069042C & 1) != 0 )
  {
    v16 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v16, 0);
    return 1;
  }
  sub_10025DD0((_DWORD *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( a2 == 7 )
    return 0;
  if ( *(_BYTE *)(this + 3764) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2272))(this) )
  {
    if ( sub_1026A890((unsigned int *)(this + 3776))
      && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3780) )
    {
      v14 = dword_106EBC7C;
      v4 = (void *)sub_1026A890((unsigned int *)(this + 3776));
      sub_100B0F60(v4, v14, 0, this);
      *(_DWORD *)(this + 3776) = -1;
    }
    if ( *(_DWORD *)(dword_106EBC9C + 48) )
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528))(this, 0, 0, &v29);
      v26 = v29 * 128.0;
      v27 = v30 * 128.0;
      v28 = 128.0 * v31;
      v5 = (float *)sub_10019640((_DWORD *)this);
      *(float *)&v23 = *v5 + v26;
      v24 = v5[1] + v27;
      v25 = v5[2] + v28;
      v26 = v29 * 32.0;
      v27 = v30 * 32.0;
      v28 = 32.0 * v31;
      v6 = (float *)sub_10019640((_DWORD *)this);
      *(float *)&v20 = *v6 + v26;
      v21 = v6[1] + v27;
      v22 = v6[2] + v28;
      sub_1011BC50((float *)&v20, (float *)&v23, 0, 255, 0, 0, 2.0);
      *(float *)&v20 = 2.0;
      v21 = 2.0;
      v22 = 2.0;
      *(float *)&v23 = -2.0;
      v24 = -2.0;
      v25 = -2.0;
      v26 = v29 * 32.0;
      v27 = v30 * 32.0;
      v28 = 32.0 * v31;
      v7 = (float *)sub_10019640((_DWORD *)this);
      *(float *)&v17 = v26 + *v7;
      v18 = v7[1] + v27;
      v19 = v7[2] + v28;
      sub_1011C000((float *)&v17, (float *)&v23, (float *)&v20, 0, 255, 0, 0, 2.0);
      *(float *)&v17 = 2.0;
      v18 = 2.0;
      v19 = 2.0;
      *(float *)&v20 = -2.0;
      v21 = -2.0;
      v22 = -2.0;
      v26 = v29 * 128.0;
      v27 = v30 * 128.0;
      v28 = 128.0 * v31;
      v8 = (float *)sub_10019640((_DWORD *)this);
      *(float *)&v23 = v26 + *v8;
      v24 = v8[1] + v27;
      v25 = v8[2] + v28;
      sub_1011C000((float *)&v23, (float *)&v20, (float *)&v17, 0, 255, 0, 0, 2.0);
    }
    return 0;
  }
  if ( (*(_DWORD *)(this + 248) & 0x100) != 0 )
  {
    v9 = sub_1026A890((unsigned int *)(this + 3812));
    sub_1025FAC0(v9);
    *(_DWORD *)(this + 3812) = -1;
    sub_100EC3F0((_DWORD *)this, (int)sub_103BFBC0, 0.0, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 2268))(this, 3);
  }
  else
  {
    *(float *)(this + 3752) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                2.0,
                                2.5)
                            + *(float *)(dword_106B31C8 + 12);
    v15 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)this, v15, 0);
    sub_100EC3F0((_DWORD *)this, (int)sub_103BFBA0, 0.0, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 2268))(this, 0);
    if ( !*(_BYTE *)(this + 3736) )
      sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Alarm", 0.0, 0);
  }
  sub_1002B660(this, 7);
  if ( *(_BYTE *)(this + 224) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
    *(_BYTE *)(this + 224) = 2;
  }
  *(_BYTE *)(sub_1026A890((unsigned int *)(this + 3816)) + 804) = 0;
  if ( *(_DWORD *)(dword_106EBC9C + 48) )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528))(this, 0, 0, &v29);
    v26 = v29 * 128.0;
    v27 = v30 * 128.0;
    v28 = 128.0 * v31;
    v10 = (float *)sub_10019640((_DWORD *)this);
    *(float *)&v17 = *v10 + v26;
    v18 = v10[1] + v27;
    v19 = v10[2] + v28;
    v26 = v29 * 32.0;
    v27 = v30 * 32.0;
    v28 = 32.0 * v31;
    v11 = (float *)sub_10019640((_DWORD *)this);
    *(float *)&v20 = *v11 + v26;
    v21 = v11[1] + v27;
    v22 = v11[2] + v28;
    sub_1011BC50((float *)&v20, (float *)&v17, 255, 0, 0, 0, 2.0);
    *(float *)&v17 = 2.0;
    v18 = 2.0;
    v19 = 2.0;
    *(float *)&v20 = -2.0;
    v21 = -2.0;
    v22 = -2.0;
    v26 = v29 * 32.0;
    v27 = v30 * 32.0;
    v28 = 32.0 * v31;
    v12 = (float *)sub_10019640((_DWORD *)this);
    *(float *)&v23 = v26 + *v12;
    v24 = v12[1] + v27;
    v25 = v12[2] + v28;
    sub_1011C000((float *)&v23, (float *)&v20, (float *)&v17, 255, 0, 0, 0, 2.0);
    *(float *)&v17 = 2.0;
    v18 = 2.0;
    v19 = 2.0;
    *(float *)&v20 = -2.0;
    v21 = -2.0;
    v22 = -2.0;
    v26 = v29 * 128.0;
    v27 = v30 * 128.0;
    v28 = 128.0 * v31;
    v13 = (float *)sub_10019640((_DWORD *)this);
    *(float *)&v23 = *v13 + v26;
    v24 = v13[1] + v27;
    v25 = v13[2] + v28;
    sub_1011C000((float *)&v23, (float *)&v20, (float *)&v17, 255, 0, 0, 0, 2.0);
  }
  return 1;
}
