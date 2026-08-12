double __thiscall sub_1011B370(int this, float *a2)
{
  double v3; // st6
  double v4; // st7
  double result; // st7
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  float v12; // [esp+0h] [ebp-68h]
  float v13[5]; // [esp+8h] [ebp-60h] BYREF
  float v14[5]; // [esp+1Ch] [ebp-4Ch] BYREF
  float v15[5]; // [esp+30h] [ebp-38h] BYREF
  float v16[3]; // [esp+44h] [ebp-24h] BYREF
  float v17[3]; // [esp+50h] [ebp-18h] BYREF
  float v18; // [esp+5Ch] [ebp-Ch] BYREF
  float v19; // [esp+60h] [ebp-8h]
  float v20; // [esp+64h] [ebp-4h]
  float v21; // [esp+70h] [ebp+8h]

  if ( (*(_BYTE *)(this + 248) & 2) != 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(float *)(this + 816) - *(float *)(this + 584);
    v4 = *(float *)(this + 820) - *(float *)(this + 588);
    v18 = *(float *)(this + 812) - *(float *)(this + 580);
    v19 = v3;
    v20 = v4;
    off_10689714();
    sub_1011B290(v14);
    sub_1011B290(v13);
    v17[0] = -v18;
    v17[1] = -v19;
    v17[2] = -v20;
    sub_1011B2A0(v13, v17, (float *)(this + 812));
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011B2A0(v14, &v18, (float *)(this + 580));
    if ( sub_1011B2E0(v14, a2) && sub_1011B2E0(v13, a2) )
    {
      sub_1011B290(v15);
      sub_10421D80(&v18, v17);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1011B2A0(v15, v17, (float *)(this + 580));
      v21 = fabs(sub_1011B320(v15, a2));
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1011B2A0(v15, v16, (float *)(this + 580));
      result = fabs(sub_1011B320(v15, a2));
      if ( v21 > result )
        return v21;
    }
    else
    {
      return 3.4028235e38;
    }
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v7 = *(float *)(this + 584) - a2[1];
    v8 = v7 * v7;
    v9 = *(float *)(this + 580) - *a2;
    v10 = v8;
    v11 = *(float *)(this + 588) - a2[2];
    v12 = v9 * v9 + v10 + v11 * v11;
    return off_10689708(v12);
  }
  return result;
}
