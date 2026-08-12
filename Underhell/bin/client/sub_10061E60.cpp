float *__thiscall sub_10061E60(_DWORD *this, int a2, int a3, float *a4)
{
  int v5; // edx
  double v6; // st7
  double v7; // st5
  double v8; // st6
  double v9; // st7
  float *v10; // eax
  long double v11; // st7
  long double v12; // st6
  long double v13; // st5
  long double v14; // st7
  float *v15; // eax
  float *result; // eax
  double v17; // st6
  double v18; // st7
  float v19; // [esp+0h] [ebp-1Ch]
  int v20[2]; // [esp+10h] [ebp-Ch] BYREF
  float v21; // [esp+18h] [ebp-4h]

  v5 = this[1];
  if ( (*(_DWORD *)(v5 + 1248) & 0x100) == 0 )
  {
    *a4 = 0.0;
    a4[1] = 0.0;
    a4[2] = -1500.0;
  }
  if ( ((1 << (a3 & 0x1F)) & *(_DWORD *)(v5 + 4 * (a3 >> 5) + 1192)) == 0 && *(_BYTE *)(v5 + 1200) )
  {
    sub_1009C8A0(*((float *)off_103DC81C + 3), v20);
    v6 = *(float *)&v20[1];
    v7 = *(float *)v20;
    v8 = v21;
    if ( v6 * v6 + v7 * v7 + v21 * v21 <= 0.0 )
    {
      if ( *(float *)(this[1] + 1992) <= (double)*(float *)(this[1] + 1988) )
        goto LABEL_10;
      v10 = (float *)this[1];
      v11 = 1.0 - cos(v10[497] / v10[498] * 3.141592653589793);
      v12 = v10[500] * v11;
      v13 = v10[501] * v11;
      v14 = v11 * v10[502];
      *a4 = v12 + *a4;
      a4[1] = v13 + a4[1];
      v9 = v14 + a4[2];
    }
    else
    {
      *a4 = v7 * 10.0 + *a4;
      a4[1] = v6 * 10.0 + a4[1];
      v9 = 10.0 * v8 + a4[2];
    }
    a4[2] = v9;
  }
LABEL_10:
  if ( *(_DWORD *)(dword_1040E534 + 48) )
  {
    v19 = -flt_103DBD14;
    v15 = sub_10042010((float *)v20, v19, flt_103DBD14);
    *a4 = *v15 + *a4;
    a4[1] = v15[1] + a4[1];
    a4[2] = v15[2] + a4[2];
  }
  result = (float *)this[1];
  v17 = 20.0 * result[493];
  v18 = result[492] * 20.0;
  *a4 = result[491] * 20.0 + *a4;
  a4[1] = v18 + a4[1];
  a4[2] = v17 + a4[2];
  result[491] = result[491] * 0.94999999;
  result[492] = result[492] * 0.94999999;
  result[493] = 0.94999999 * result[493];
  return result;
}
