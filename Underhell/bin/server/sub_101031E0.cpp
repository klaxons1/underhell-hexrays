void __cdecl sub_101031E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9, int a10, float a11)
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

  if ( (dword_1069A5BC & 1) == 0 )
  {
    dword_1069A5BC |= 1u;
    flt_1069A58C = 1.0;
    flt_1069A590 = 0.0;
    flt_1069A594 = 0.0;
    flt_1069A598 = 0.0;
    flt_1069A59C = 0.0;
    flt_1069A5A4 = 0.0;
    flt_1069A5A8 = 0.0;
    flt_1069A5AC = 0.0;
    flt_1069A5B0 = 0.0;
    flt_1069A5B8 = 0.0;
    flt_1069A5A0 = 1.0;
    flt_1069A5B4 = 1.0;
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
  sub_100FE710(a10 - *(_DWORD *)(v11 + 24), v11 + *(_DWORD *)(v11 + 28), a11, v23, (int)v22);
  sub_10102F30(a1, (int)&flt_1069A58C, a4, a5, a7, a2, a3);
  sub_10102F30(a1, (int)&flt_1069A58C, a4, a5, a8, a2, a3);
  sub_104252F0(v22, v24);
  sub_104256B0(v24, v23, v20);
  v29 = a2 + 48 * a7;
  sub_10421E30(a2 + 48 * a8, v20, v29);
  v15 = *(_DWORD *)(216 * a7 + a6 + 4);
  if ( v15 == -1 )
  {
    if ( 1.0 == v30 )
    {
      sub_10424D60(v29, a5 + 16 * a7, a4 + 12 * a7);
      return;
    }
    sub_10424D60(v29, v25, &v26);
  }
  else
  {
    sub_10424F80(a2 + 48 * v15, v19);
    sub_10421E30(v19, v29, v21);
    if ( 1.0 == v30 )
    {
      sub_10424D60(v21, a5 + 16 * a7, a4 + 12 * a7);
      return;
    }
    sub_10424D60(v21, v25, &v26);
  }
  sub_104251E0(a5 + 16 * a7, (int)v25, v30, a5 + 16 * a7);
  v16 = (float *)(a4 + 12 * a7);
  v17 = v28 + (v16[2] - v28) * v30;
  v18 = v27 + (v16[1] - v27) * v30;
  *v16 = v26 + (*v16 - v26) * v30;
  v16[1] = v18;
  v16[2] = v17;
}
