int __thiscall sub_101ADBD0(float *this, int a2, int a3, int a4, float *a5, float *a6)
{
  int result; // eax
  float *v9; // eax
  double v10; // st7
  long double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st3
  double v15; // st0
  double v16; // st5
  double v17; // st2
  double v18; // st1
  bool v19; // c3
  double v20; // st5
  double v21; // st3
  double v22; // st6
  _BYTE v23[48]; // [esp+8h] [ebp-54h] BYREF
  _BYTE v24[12]; // [esp+38h] [ebp-24h] BYREF
  float v25[3]; // [esp+44h] [ebp-18h] BYREF
  float v26; // [esp+50h] [ebp-Ch] BYREF
  float v27; // [esp+54h] [ebp-8h]
  float v28; // [esp+58h] [ebp-4h]
  float v29; // [esp+70h] [ebp+14h]

  *a5 = flt_106F1CA8;
  a5[1] = flt_106F1CAC;
  a5[2] = flt_106F1CB0;
  *a6 = flt_106F1CA8;
  a6[1] = flt_106F1CAC;
  a6[2] = flt_106F1CB0;
  if ( 0.0 == this[1] )
    return 0;
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 192))(a3, v23);
  (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)a3 + 204))(a3, 0, v25);
  sub_10421C60(this + 3, v23, &v26);
  v29 = v25[1] * v27 + v26 * v25[0] + v28 * v25[2];
  v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 124))(a3, v24);
  v10 = v27;
  v11 = fabs(v9[1] * v27) + fabs(*v9 * v26) + fabs(v9[2] * v28);
  v12 = v29;
  v13 = this[1] - v29;
  v14 = v13 * v11 * this[6];
  if ( fabs(this[8]) > 0.0 )
  {
    v15 = v12 - this[7];
    if ( v13 * v15 > 0.0 )
    {
      v16 = 0.0;
      v17 = v15 / this[8];
      if ( v17 <= 1.0 )
      {
        v18 = v17;
        if ( v17 < 0.0 )
          v18 = 0.0;
        v14 = v14 + (1.0 - v18) * this[9] * this[10];
      }
      else
      {
        v14 = v14 + (1.0 - 1.0) * this[9] * this[10];
      }
      goto LABEL_14;
    }
    if ( 0.0 != v12 )
    {
      v16 = 0.0;
      if ( fabs(v15 / this[8]) < 0.05 )
        v14 = v14 + this[10] * this[9];
      goto LABEL_14;
    }
  }
  v16 = 0.0;
LABEL_14:
  v19 = this[2] == v16;
  v20 = v14;
  if ( !v19 )
  {
    if ( this[2] >= v14 )
    {
      v21 = -this[2];
      if ( v21 > v20 )
        v20 = v21;
    }
    else
    {
      v20 = this[2];
    }
  }
  result = 2;
  this[9] = v20;
  this[8] = v20 / v11;
  this[7] = v29;
  v22 = v20 * v28;
  *a6 = v26 * v20;
  a6[1] = v10 * v20;
  a6[2] = v22;
  return result;
}
