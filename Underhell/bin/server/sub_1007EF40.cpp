char __thiscall sub_1007EF40(_DWORD *this, float *a2, float *a3, float a4, float a5, float a6)
{
  int v7; // eax
  float *v9; // eax
  _DWORD *v10; // ecx
  double v11; // st6
  double v12; // rt0
  double v13; // st7
  bool v14; // zf
  double v15; // st7
  int v16; // ecx
  int v18[14]; // [esp+14h] [ebp-68h] BYREF
  int v19[3]; // [esp+4Ch] [ebp-30h] BYREF
  float v20[3]; // [esp+58h] [ebp-24h] BYREF
  float v21[2]; // [esp+64h] [ebp-18h] BYREF
  float v22; // [esp+6Ch] [ebp-10h]
  int v23; // [esp+70h] [ebp-Ch] BYREF
  float v24; // [esp+74h] [ebp-8h]
  float v25; // [esp+78h] [ebp-4h]
  int v26; // [esp+88h] [ebp+Ch]
  float v27; // [esp+94h] [ebp+18h]

  memset(v18, 0, sizeof(v18));
  v7 = this[1];
  if ( v7 )
    *(_DWORD *)(v7 + 2716) |= 8u;
  v9 = (float *)(this[1] + 716);
  v10 = (_DWORD *)this[6];
  v11 = a4 * a3[2];
  v12 = a3[1] * a4;
  *(float *)&v23 = *a3 * a4 + *v9;
  v24 = v12 + v9[1];
  v25 = v11 + v9[2];
  sub_1007C550(v10, this[3], v9, (float *)&v23, 33701899, 0, 100.0, 0, (float *)v18);
  if ( v18[0] )
  {
    v13 = a4 - *(float *)&v18[9];
    *(float *)&v26 = v13;
    if ( LOBYTE(a6)
      && (*(float *)&v18[4] != flt_106F1CA8 || *(float *)&v18[5] != flt_106F1CAC || *(float *)&v18[6] != flt_106F1CB0) )
    {
      v14 = this[3] == 0;
      v21[0] = *(float *)&v18[4];
      v21[1] = *(float *)&v18[5];
      v22 = *(float *)&v18[6];
      if ( v14 )
        v22 = 0.0;
      sub_1007DCD0((int)&v18[1], a3, v21, v20);
      v15 = a4 - *(float *)&v26;
      v27 = v15;
      v19[0] = v18[1];
      v16 = this[3];
      v19[1] = v18[2];
      v19[2] = v18[3];
      *(float *)&v23 = v20[0] * v15 + *(float *)&v18[1];
      v24 = v15 * v20[1] + *(float *)&v18[2];
      v25 = v15 * v20[2] + *(float *)&v18[3];
      sub_1007C550((_DWORD *)this[6], v16, (float *)v19, (float *)&v23, 33701899, 0, 100.0, 0, (float *)v18);
      v13 = v27 - *(float *)&v18[9] + *(float *)&v26;
    }
    if ( a5 + 0.01 > v13 )
      return 0;
  }
  *a2 = *(float *)&v18[1];
  a2[1] = *(float *)&v18[2];
  a2[2] = *(float *)&v18[3];
  return 1;
}
