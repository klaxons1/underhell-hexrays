float *__thiscall sub_1037F5A0(int this, float *a2, float *a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st7
  double v8; // st6
  double v9; // st7
  float *result; // eax
  double v11; // st6
  double v12; // rt0
  float v13; // [esp+0h] [ebp-20h]
  float v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+Ch] [ebp-14h]
  float v16; // [esp+10h] [ebp-10h]
  float v17; // [esp+14h] [ebp-Ch]
  float v18; // [esp+18h] [ebp-8h]
  float v19; // [esp+1Ch] [ebp-4h]

  v4 = *a3 - *(float *)(this + 716);
  v14 = v4;
  v5 = a3[1] - *(float *)(this + 720);
  v15 = v5;
  v6 = a3[2] - *(float *)(this + 724);
  v13 = v6 * v6 + v5 * v5 + v4 * v4;
  v7 = off_10689708(v13);
  v8 = 0.015625 * v7 * *(float *)(this + 800);
  if ( v8 >= *(float *)(this + 800) )
    v8 = *(float *)(this + 800);
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  if ( v7 > 64.0 )
  {
    v9 = v8 / v7;
    v17 = v14 * v9;
    v18 = v9 * v15;
    v16 = v6;
    v19 = v9 * v16;
  }
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  result = a2;
  v11 = v18 - *(float *)(this + 480);
  v12 = v19 - *(float *)(this + 484);
  *a2 = v17 - *(float *)(this + 476);
  a2[1] = v11;
  a2[2] = v12;
  return result;
}
