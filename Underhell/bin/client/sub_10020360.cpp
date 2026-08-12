void __cdecl sub_10020360(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11)
{
  int v11; // ecx
  double v12; // st5
  double v13; // st7
  double v14; // st7
  int v15; // eax
  float *v16; // eax
  double v17; // st7
  double v18; // st6
  _BYTE v19[48]; // [esp+18h] [ebp-DCh] BYREF
  _BYTE v20[48]; // [esp+48h] [ebp-ACh] BYREF
  _BYTE v21[48]; // [esp+78h] [ebp-7Ch] BYREF
  _BYTE v22[16]; // [esp+A8h] [ebp-4Ch] BYREF
  float v23[3]; // [esp+B8h] [ebp-3Ch] BYREF
  _BYTE v24[12]; // [esp+C4h] [ebp-30h] BYREF
  int v25[4]; // [esp+D0h] [ebp-24h] BYREF
  float v26; // [esp+E0h] [ebp-14h] BYREF
  float v27; // [esp+E4h] [ebp-10h]
  float v28; // [esp+E8h] [ebp-Ch]
  int v29; // [esp+ECh] [ebp-8h]
  float v30; // [esp+F0h] [ebp-4h]

  if ( (dword_10403264 & 1) == 0 )
  {
    dword_10403264 |= 1u;
    flt_10403234 = 1.0;
    flt_10403238 = 0.0;
    flt_1040323C = 0.0;
    flt_10403240 = 0.0;
    flt_10403244 = 0.0;
    flt_1040324C = 0.0;
    flt_10403250 = 0.0;
    flt_10403254 = 0.0;
    flt_10403258 = 0.0;
    flt_10403260 = 0.0;
    flt_10403248 = 1.0;
    flt_1040325C = 1.0;
  }
  v30 = 1.0;
  if ( *(float *)(v11 + 16) - *(float *)(v11 + 12) < 1.0 )
  {
    v12 = a9;
    v13 = a9;
    if ( *(float *)(v11 + 20) > 1.0 && *(float *)(v11 + 8) > v12 )
      v13 = v12 + 1.0;
    if ( *(float *)(v11 + 8) > v13 || *(float *)(v11 + 20) <= v13 )
      return;
    if ( *(float *)(v11 + 12) <= v13 || *(float *)(v11 + 12) == *(float *)(v11 + 8) )
    {
      if ( *(float *)(v11 + 16) >= v13 || *(float *)(v11 + 16) == *(float *)(v11 + 20) )
        v14 = 1.0;
      else
        v14 = (*(float *)(v11 + 20) - v13) / (*(float *)(v11 + 20) - *(float *)(v11 + 16));
    }
    else
    {
      v14 = (v13 - *(float *)(v11 + 8)) / (*(float *)(v11 + 12) - *(float *)(v11 + 8));
    }
    v30 = 3.0 * (v14 * v14) - v14 * (v14 * v14 + v14 * v14);
  }
  sub_1001B2C0(a10 - *(_DWORD *)(v11 + 24), v11 + *(_DWORD *)(v11 + 28), a11, v23, (int)v22);
  sub_10020130(a1, (int)&flt_10403234, a4, a5, a7, a2, a3);
  sub_10020130(a1, (int)&flt_10403234, a4, a5, a8, a2, a3);
  sub_101F1020(v22, v24);
  sub_101F1750(v24, v23, v20);
  v29 = a2 + 48 * a7;
  sub_101EDC00(a2 + 48 * a8, v20, v29);
  v15 = *(_DWORD *)(216 * a7 + a6 + 4);
  if ( v15 == -1 )
  {
    if ( 1.0 == v30 )
    {
      sub_101F0930(v29, a5 + 16 * a7, a4 + 12 * a7);
      return;
    }
    sub_101F0930(v29, v25, &v26);
  }
  else
  {
    sub_101F0AB0(a2 + 48 * v15, v19);
    sub_101EDC00(v19, v29, v21);
    if ( 1.0 == v30 )
    {
      sub_101F0930(v21, a5 + 16 * a7, a4 + 12 * a7);
      return;
    }
    sub_101F0930(v21, v25, &v26);
  }
  sub_101F0F00(a5 + 16 * a7, (int)v25, v30, a5 + 16 * a7);
  v16 = (float *)(a4 + 12 * a7);
  v17 = v28 + (v16[2] - v28) * v30;
  v18 = v27 + (v16[1] - v27) * v30;
  *v16 = v26 + (*v16 - v26) * v30;
  v16[1] = v18;
  v16[2] = v17;
}
