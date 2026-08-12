double __thiscall sub_102A3090(_DWORD *this, float *a2, float *a3, _BYTE *a4)
{
  int v4; // esi
  int v5; // ecx
  double v6; // st7
  float v7; // edx
  double v8; // st7
  double result; // st7
  float v10; // [esp+0h] [ebp-34h]
  float v11[3]; // [esp+10h] [ebp-24h] BYREF
  float v12[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v13; // [esp+28h] [ebp-Ch]
  float v14; // [esp+2Ch] [ebp-8h]
  float v15; // [esp+30h] [ebp-4h]
  float v16; // [esp+40h] [ebp+Ch]

  v4 = this[1];
  v5 = *(_DWORD *)(v4 + 252);
  v6 = a2[2];
  v13 = *a3;
  v7 = a3[1];
  v15 = v6;
  v14 = v7;
  if ( (v5 & 0x800) != 0 )
    sub_100DAE60(v4);
  v12[0] = *(float *)(v4 + 580) - *a2;
  v12[1] = *(float *)(v4 + 584) - a2[1];
  v12[2] = *(float *)(v4 + 588) - a2[2];
  off_10689714();
  v11[0] = v13 - *a2;
  v11[1] = v14 - a2[1];
  v11[2] = v15 - a2[2];
  off_10689714();
  v16 = sub_10265030(v12);
  v8 = sub_10265030(v11);
  v10 = v8;
  sub_10424C60(v10, v16);
  if ( v8 >= 0.0 )
  {
    result = fabs(v8);
    *a4 = 0;
  }
  else
  {
    result = fabs(v8);
    *a4 = 1;
  }
  return result;
}
