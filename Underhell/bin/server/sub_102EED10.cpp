char __thiscall sub_102EED10(int this, int a2, int a3, int a4, int a5, float *a6)
{
  float *v7; // eax
  char result; // al
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  double v16; // st7
  int v17; // esi
  int v18; // edi
  int v19; // ecx
  float *v20; // edx
  float *v21; // edx
  char *v22; // edi
  double v23; // st7
  double v24; // st7
  float *v25; // [esp+10h] [ebp-24h]
  float *v26; // [esp+10h] [ebp-24h]
  float *v27; // [esp+10h] [ebp-24h]
  float *v28; // [esp+10h] [ebp-24h]
  float *v29; // [esp+10h] [ebp-24h]
  float *v30; // [esp+10h] [ebp-24h]
  float *v31; // [esp+10h] [ebp-24h]
  float *v32; // [esp+10h] [ebp-24h]
  float v33[2]; // [esp+1Ch] [ebp-18h] BYREF
  float v34; // [esp+24h] [ebp-10h]
  float v35[2]; // [esp+28h] [ebp-Ch] BYREF
  float v36; // [esp+30h] [ebp-4h]

  if ( *(_BYTE *)(this + 852) )
  {
    switch ( sub_10219A30() % 21 )
    {
      case 0:
        v25 = (float *)sub_1001F410((_DWORD *)this);
        v7 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_healthvial", v7, v25, this);
        result = 1;
        break;
      case 1:
        v26 = (float *)sub_1001F410((_DWORD *)this);
        v9 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_bandages", v9, v26, this);
        result = 1;
        break;
      case 2:
        v27 = (float *)sub_1001F410((_DWORD *)this);
        v10 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_glowstick", v10, v27, this);
        result = 1;
        break;
      case 3:
        v28 = (float *)sub_1001F410((_DWORD *)this);
        v11 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_flarepack", v11, v28, this);
        result = 1;
        break;
      case 4:
        v29 = (float *)sub_1001F410((_DWORD *)this);
        v12 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_box_pistol_ammo", v12, v29, this);
        result = 1;
        break;
      case 5:
        v30 = (float *)sub_1001F410((_DWORD *)this);
        v13 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_ammo_buckshot", v13, v30, this);
        result = 1;
        break;
      case 6:
        v31 = (float *)sub_1001F410((_DWORD *)this);
        v14 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_box_smg1_ammo", v14, v31, this);
        result = 1;
        break;
      case 7:
        v32 = (float *)sub_1001F410((_DWORD *)this);
        v15 = (float *)sub_10019640((_DWORD *)this);
        sub_100E3960((int)"item_battery_pack", v15, v32, this);
        result = 1;
        break;
      default:
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v16 = 0.0;
    v17 = a2;
    v18 = -1;
    v19 = 0;
    if ( a2 >= 4 )
    {
      v20 = (float *)(a5 + 24);
      do
      {
        if ( v16 < *(v20 - 4) )
        {
          v18 = v19;
          v16 = *(v20 - 4);
        }
        if ( v16 < *v20 )
        {
          v18 = v19 + 1;
          v16 = *v20;
        }
        if ( v16 < v20[4] )
        {
          v18 = v19 + 2;
          v16 = v20[4];
        }
        if ( v16 < v20[8] )
        {
          v18 = v19 + 3;
          v16 = v20[8];
        }
        v19 += 4;
        v20 += 16;
      }
      while ( v19 < a2 - 3 );
      v17 = a2;
    }
    if ( v19 < v17 )
    {
      v21 = (float *)(a5 + 16 * v19 + 8);
      do
      {
        if ( v16 < *v21 )
        {
          v18 = v19;
          v16 = *v21;
        }
        ++v19;
        v21 += 4;
      }
      while ( v19 < a2 );
    }
    if ( v18 >= 0 )
    {
      if ( a4 )
        Msg(
          "Chosen item: %s (had farthest delta, %.2f)\n",
          *(const char **)(a3 + 16 * v18),
          *(float *)(a5 + 16 * v18 + 8));
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v22 = sub_100E3960(*(_DWORD *)(a3 + 16 * v18), a6, (float *)(this + 704), this);
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      sub_100DD660((int)v22, (float *)(this + 476));
      sub_100D7260((float *)v22, (float *)(this + 488));
      sub_10111910(v22 + 320, (float *)v22 + 82, (float *)v22 + 85, v33, v35);
      if ( v34 < (double)a6[2] )
      {
        v23 = a6[2] - v34;
        a6[2] = a6[2] + v23;
        v36 = v23 + v36;
        sub_100E0D20((int)v22, a6);
      }
      a6[2] = v36 + 6.0;
      *a6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -6.0,
              6.0)
          + *a6;
      v24 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -6.0,
              6.0);
      result = 1;
      a6[1] = v24 + a6[1];
    }
    else
    {
      return 0;
    }
  }
  return result;
}
