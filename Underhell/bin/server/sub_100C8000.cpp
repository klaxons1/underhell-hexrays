float *__thiscall sub_100C8000(int this, float *a2)
{
  double v3; // st7
  int v4; // edx
  double v5; // st7
  double v6; // st7
  float *result; // eax
  double v8; // rt2
  double v9; // st6
  float v10[3]; // [esp+4h] [ebp-48h] BYREF
  float v11[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v12[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v13; // [esp+28h] [ebp-24h]
  float v14; // [esp+2Ch] [ebp-20h]
  float v15; // [esp+30h] [ebp-1Ch]
  float v16; // [esp+34h] [ebp-18h]
  float v17; // [esp+38h] [ebp-14h]
  float v18; // [esp+3Ch] [ebp-10h]
  float v19; // [esp+40h] [ebp-Ch]
  float v20; // [esp+44h] [ebp-8h]
  float v21; // [esp+48h] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_104222B0(this + 704, v10, v11, v12);
  v3 = *(float *)(this + 1696);
  v4 = *(_DWORD *)(this + 252) >> 11;
  v13 = v12[0] * v3;
  v14 = v12[1] * v3;
  v15 = v3 * v12[2];
  v5 = *(float *)(this + 1688);
  v16 = v11[0] * v5;
  v17 = v11[1] * v5;
  v18 = v5 * v11[2];
  v6 = *(float *)(this + 1692);
  v19 = v10[0] * v6;
  v20 = v10[1] * v6;
  v21 = v6 * v10[2];
  if ( (v4 & 1) != 0 )
    sub_100DAE60(this);
  result = a2;
  v8 = *(float *)(this + 584) + v20 + v17;
  v9 = *(float *)(this + 588) + v21 + v18;
  *a2 = *(float *)(this + 580) + v19 + v16 + v13;
  a2[1] = v8 + v14;
  a2[2] = v9 + v15;
  return result;
}
