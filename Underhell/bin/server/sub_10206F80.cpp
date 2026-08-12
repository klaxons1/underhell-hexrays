void __thiscall sub_10206F80(int this, int a2, int a3)
{
  int v4; // ecx
  double v6; // st6
  double v7; // st7
  double v8; // st6
  double v9; // st7
  double v10; // st5
  double v11; // st4
  double v12; // st2
  double v13; // st3
  double v14; // st1
  double v15; // st7
  double v16; // rt2
  double v17; // st5
  float v18[3]; // [esp+Ch] [ebp-24h] BYREF
  float v19; // [esp+18h] [ebp-18h]
  float v20; // [esp+1Ch] [ebp-14h]
  float v21; // [esp+20h] [ebp-10h]
  float v22; // [esp+24h] [ebp-Ch] BYREF
  float v23; // [esp+28h] [ebp-8h]
  float v24; // [esp+2Ch] [ebp-4h]
  float v25; // [esp+3Ch] [ebp+Ch]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_104222B0(this + 704, &v22, v18, 0);
  v4 = *(_DWORD *)(this + 252) >> 11;
  v19 = v18[0] * 24.0;
  v20 = v18[1] * 24.0;
  v21 = 24.0 * v18[2];
  if ( (v4 & 1) != 0 )
    sub_100DAE60(this);
  v6 = *(float *)(this + 584) - v20;
  v7 = *(float *)(this + 588) - v21;
  *(float *)a3 = *(float *)(this + 580) - v19;
  *(float *)(a3 + 4) = v6;
  *(float *)(a3 + 8) = v7 - 54.0;
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v8 = v23;
  v9 = v22;
  v10 = v24;
  v25 = *(float *)(a2 + 588) * v24 + *(float *)(a2 + 580) * v22 + *(float *)(a2 + 584) * v23;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
  {
    sub_100DAE60(this);
    v8 = v23;
    v10 = v24;
    v9 = v22;
  }
  v11 = v9 * 64.0;
  v12 = v8 * 64.0;
  v13 = 64.0 * v10;
  v14 = *(float *)a3;
  if ( *(float *)(this + 584) * v8 + *(float *)(this + 580) * v9 + *(float *)(this + 588) * v10 >= v25 )
  {
    *(float *)a3 = v14 - v11;
    *(float *)(a3 + 4) = *(float *)(a3 + 4) - v12;
    *(float *)(a3 + 8) = *(float *)(a3 + 8) - v13;
    v16 = v10;
    v17 = v9;
    v15 = v16;
    *(float *)(a3 + 12) = v17;
  }
  else
  {
    *(float *)a3 = v11 + v14;
    *(float *)(a3 + 4) = v12 + *(float *)(a3 + 4);
    *(float *)(a3 + 8) = v13 + *(float *)(a3 + 8);
    *(float *)(a3 + 12) = -v9;
    v8 = -v8;
    v15 = -v10;
  }
  *(float *)(a3 + 16) = v8;
  *(float *)(a3 + 20) = v15;
  *(_DWORD *)(a3 + 24) = 396;
}
