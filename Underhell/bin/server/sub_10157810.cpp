double __thiscall sub_10157810(int this)
{
  int v2; // eax
  float *v3; // ecx
  double v4; // st4
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st7
  double v10; // st6
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // rtt
  double v15; // st4
  double v16; // st5
  double v17; // st7
  float v19; // [esp+4h] [ebp-1Ch]
  float v20; // [esp+8h] [ebp-18h]
  float v21; // [esp+Ch] [ebp-14h]
  float v22; // [esp+10h] [ebp-10h]
  float v23; // [esp+14h] [ebp-Ch]
  float v24; // [esp+18h] [ebp-8h]
  float v25; // [esp+1Ch] [ebp-4h]

  v2 = *(_DWORD *)(this + 8);
  if ( !v2 )
    return 1.0;
  if ( 0.0 == *(float *)(v2 + 140) )
    return 1.0;
  v3 = *(float **)(this + 8);
  v4 = v3[39] - v3[33];
  v5 = v4 * v4;
  v6 = v3[38] - v3[32];
  v7 = v5;
  v8 = v3[40] - v3[34];
  v9 = v6 * v6 + v7 + v8 * v8;
  v25 = v9;
  v10 = v3[35] - v3[36];
  if ( v10 * v10 >= v9 )
    return 1.0;
  if ( v3[35] * v3[35] <= v9 )
    return 1.0;
  v11 = v3;
  v12 = v3[11];
  v13 = v3[12];
  v14 = *(float *)(this + 24) * v12 + *(float *)(this + 36) * v13;
  v15 = *(float *)(this + 28) * v12 + *(float *)(this + 40) * v13;
  v16 = v12 * *(float *)(this + 32) + v13 * *(float *)(this + 44);
  v17 = v3[13];
  v22 = v14 + v17 * *(float *)(this + 48);
  v23 = v15 + *(float *)(this + 52) * v17;
  v24 = v17 * *(float *)(this + 56) + v16;
  v19 = v11[38] - v11[32];
  v20 = v11[39] - v11[33];
  v21 = v11[40] - v11[34];
  off_10689714();
  off_10689714();
  if ( v20 * v23 + v19 * v22 + v21 * v24 < 0.0 )
    return 1.0;
  else
    return (*(float *)(*(_DWORD *)(this + 8) + 148) - 1.0)
         * ((sqrt(v25) - (*(float *)(*(_DWORD *)(this + 8) + 140) - *(float *)(*(_DWORD *)(this + 8) + 144)))
          / *(float *)(*(_DWORD *)(this + 8) + 144))
         + 1.0;
}
