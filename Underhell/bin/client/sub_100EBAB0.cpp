int __stdcall sub_100EBAB0(int a1, int a2, float *a3, int a4, int a5, int a6, float a7)
{
  int v7; // eax
  double v8; // st7
  int v9; // edi
  bool *v10; // esi
  int v11; // eax
  double v12; // st7
  int v13; // eax
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  double v19; // st7
  long double v20; // st7
  long double v21; // st7
  double v22; // st6
  long double v23; // st4
  double v24; // st5
  long double v25; // st4
  double v26; // st4
  long double v27; // st2
  double v28; // st3
  long double v29; // st7
  long double v30; // st7
  float v32; // [esp+0h] [ebp-28h] BYREF
  float v33; // [esp+4h] [ebp-24h]
  float v34; // [esp+Ch] [ebp-1Ch] BYREF
  float v35; // [esp+10h] [ebp-18h]
  float v36; // [esp+14h] [ebp-14h]
  float v37; // [esp+18h] [ebp-10h]
  float v38; // [esp+1Ch] [ebp-Ch]
  float v39; // [esp+20h] [ebp-8h]
  int v40; // [esp+24h] [ebp-4h]

  v7 = a4;
  v37 = *(float *)(a4 + 456);
  v8 = *(float *)(a4 + 452);
  v38 = *(float *)(a4 + 452);
  v40 = 0;
  v39 = v8 * v8;
  *a3 = 0.0;
  v9 = *(_DWORD *)(a4 + 320);
  if ( !v9 )
    return 0;
  v10 = (bool *)(a2 + 8);
  do
  {
    if ( (*(_BYTE *)(v9 - 16 + 6721) & 1) != 0 )
    {
      *((_DWORD *)v10 - 2) = v9;
      *((float *)v10 - 1) = 0.0;
      *v10 = 0;
      v11 = *(_DWORD *)(v7 + 460);
      v12 = *(float *)(v9 + 68 * v11 + 88);
      v13 = v9 + 68 * v11 + 88;
      v34 = v12;
      v35 = *(float *)(v13 + 4);
      v36 = *(float *)(v13 + 8);
      sub_101F2310(a6, &v34, &v32);
      v14 = v35 - *(float *)(a5 + 48);
      v15 = v14 * v14;
      v16 = v34 - *(float *)(a5 + 44);
      v17 = v15;
      v18 = v36 - *(float *)(a5 + 52);
      v19 = v16 * v16 + v17 + v18 * v18;
      if ( v39 >= v19 )
        v20 = 1.0;
      else
        v20 = a7 * 0.5 * v38 / sqrt(v19 - v39);
      v21 = v20 * (double)*(int *)(a5 + 8);
      v22 = (double)*(int *)a5;
      v23 = v32 - v21;
      if ( v23 >= v22 )
        v22 = v23;
      v24 = (double)(*(_DWORD *)(a5 + 8) + *(_DWORD *)a5);
      v25 = v32 + v21;
      if ( v25 <= v24 )
        v24 = v25;
      v26 = (double)*(int *)(a5 + 4);
      v27 = v33 - v21;
      if ( v27 >= v26 )
        v26 = v27;
      v28 = (double)(*(_DWORD *)(a5 + 4) + *(_DWORD *)(a5 + 12));
      v29 = v21 + v33;
      if ( v28 < v29 )
        v29 = v28;
      ++v40;
      v30 = (v29 - v26) * (v24 - v22) * v37;
      *a3 = *a3 + v30;
      *((_DWORD *)v10 - 2) = v9;
      *((float *)v10 - 1) = v30;
      v7 = a4;
      *v10 = (*(_BYTE *)(v9 - 16 + 6720) & 0x10) != 0;
      v10 += 12;
    }
    v9 = *(_DWORD *)(v9 + 6672);
  }
  while ( v9 );
  return v40;
}
