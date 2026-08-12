bool __thiscall sub_102A2F70(_DWORD *this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  float *v6; // eax
  int v7; // esi
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  double v13; // st7
  int v14; // esi
  double v15; // st4
  double v16; // st7
  double v17; // st4
  double v18; // st5
  float v20; // [esp+0h] [ebp-1Ch]
  float v21; // [esp+0h] [ebp-1Ch]
  float v22; // [esp+10h] [ebp-Ch]
  float v23; // [esp+14h] [ebp-8h]
  float v24; // [esp+18h] [ebp-4h]
  float v25; // [esp+24h] [ebp+8h]

  v3 = this[17];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
  v7 = this[1];
  v22 = *v6;
  v24 = a2[2];
  v23 = v6[1];
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v9 = v22 - *(float *)(v7 + 580);
  v10 = v9 * v9;
  v11 = v23 - *(float *)(v7 + 584);
  v12 = v24 - *(float *)(v7 + 588);
  v20 = v12 * v12 + v11 * v11 + v10;
  v13 = off_10689708(v20);
  v14 = this[1];
  v25 = v13;
  if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
    sub_100DAE60(v14);
  v15 = *a2 - *(float *)(v14 + 580);
  v16 = v15 * v15;
  v17 = a2[1] - *(float *)(v14 + 584);
  v18 = a2[2] - *(float *)(v14 + 588);
  v21 = v18 * v18 + v17 * v17 + v16;
  return off_10689708(v21) > v25;
}
