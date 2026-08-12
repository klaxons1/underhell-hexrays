void __thiscall sub_102EE730(int this, int a2, _DWORD *a3, int a4)
{
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  unsigned int v11; // esi
  float *v12; // edi
  int *v13; // eax
  int v14; // eax
  double v15; // st7
  double v16; // st6
  int v17; // esi
  int v18; // esi
  char *v19; // eax
  const char **v20; // esi
  float v21; // [esp+0h] [ebp-44h]
  char *v22; // [esp+4h] [ebp-40h]
  float v23; // [esp+4h] [ebp-40h]
  float *v24; // [esp+8h] [ebp-3Ch]
  float *v25; // [esp+8h] [ebp-3Ch]
  float *v26; // [esp+8h] [ebp-3Ch]
  float *v27; // [esp+8h] [ebp-3Ch]
  float *v28; // [esp+8h] [ebp-3Ch]
  float *v29; // [esp+8h] [ebp-3Ch]
  float v30[10]; // [esp+14h] [ebp-30h]
  float *v31; // [esp+3Ch] [ebp-8h]
  float v32; // [esp+40h] [ebp-4h]

  if ( *(_BYTE *)(this + 852) )
  {
    switch ( sub_10219A30() % 21 )
    {
      case 1:
        v24 = (float *)sub_1001F410((_DWORD *)this);
        v5 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_battery_pack", v5, v24, this);
        break;
      case 2:
        v25 = (float *)sub_1001F410((_DWORD *)this);
        v6 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_glowstick", v6, v25, this);
        break;
      case 3:
        v26 = (float *)sub_1001F410((_DWORD *)this);
        v7 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_flarepack", v7, v26, this);
        break;
      case 4:
        v27 = (float *)sub_1001F410((_DWORD *)this);
        v8 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_box_pistol_ammo", v8, v27, this);
        break;
      case 5:
        v28 = (float *)sub_1001F410((_DWORD *)this);
        v9 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_ammo_buckshot", v9, v28, this);
        break;
      case 6:
        v29 = (float *)sub_1001F410((_DWORD *)this);
        v10 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_box_smg1_ammo", v10, v29, this);
        break;
      default:
        goto LABEL_9;
    }
    return;
  }
LABEL_9:
  if ( (*(_DWORD *)(this + 248) & 4) == 0 )
    return;
  v32 = 0.0;
  v11 = 0;
  v12 = (float *)&unk_10668E54;
  v31 = (float *)(a2 + 812);
  do
  {
    v22 = (char *)*((_DWORD *)v12 - 2);
    v13 = sub_102D9B20();
    v14 = sub_100B9D10(v13, v22);
    if ( sub_100C9700(a3, v14) )
    {
      v15 = 0.0;
      if ( 0.0 != *v12 && 0.0 != *v31 )
      {
        v16 = *v12 + v32;
        v32 = v16;
        v30[v11] = v16;
        goto LABEL_17;
      }
    }
    else
    {
      v15 = 0.0;
    }
    v30[v11] = -1.0;
    v16 = v32;
LABEL_17:
    ++v31;
    ++v11;
    v12 += 4;
  }
  while ( v11 < 0xA );
  if ( v15 == v16 )
  {
    if ( (*(_DWORD *)(a2 + 248) & 8) != 0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_100E3960((int)"item_healthvial", (float *)(this + 580), (float *)(this + 704), this);
      if ( a4 )
        Msg("Player is full, spawning item_healthvial due to spawnflag.\n", off_10668E48[4 * v11]);
      return;
    }
    v16 = 1.0;
    v30[0] = 1.0;
  }
  v23 = v16;
  v21 = v15;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(
    dword_106B31E4,
    LODWORD(v21),
    LODWORD(v23));
  v17 = 0;
  while ( v15 > v30[v17] )
  {
    if ( (unsigned int)++v17 >= 0xA )
    {
      if ( a4 )
        Msg("Player is full on all health + ammo, is not spawning.\n");
      return;
    }
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v18 = 4 * v17;
  v19 = off_10668E48[v18];
  v20 = (const char **)&off_10668E48[v18];
  sub_100E3960((int)v19, (float *)(this + 580), (float *)(this + 704), this);
  if ( a4 )
    Msg("Player is full, spawning %s \n", *v20);
}
