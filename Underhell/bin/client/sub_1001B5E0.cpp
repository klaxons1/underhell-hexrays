void __cdecl sub_1001B5E0(int a1, int a2, int a3, int a4, int a5, float *a6, int *a7)
{
  int v8; // eax
  float *v9; // eax
  double v10; // st7
  float *v11; // ebx
  double v12; // st6
  double v13; // st5
  double v14; // st4
  double v15; // rt0
  double v16; // st6
  double v17; // st7
  int v18; // eax
  double v19; // rt1
  double v20; // st6
  double v21; // st7
  double v22; // st6
  int v23; // eax
  int v24; // eax
  double v25; // st6
  double v26; // st7
  int v27; // [esp+24h] [ebp+10h]
  float v28; // [esp+24h] [ebp+10h]

  v8 = sub_10127B00(a4, *(_DWORD *)(a3 + 4 * a5 + 76));
  v27 = v8;
  if ( v8 == -1 )
  {
    *a6 = 0.0;
    *a7 = 0;
    return;
  }
  v9 = (float *)sub_10127A80(v8);
  v10 = *(float *)(a2 + 4 * v27);
  v11 = v9;
  v28 = *(float *)(a2 + 4 * v27);
  v12 = 0.0;
  if ( 0.0 != v9[4] )
  {
    v10 = v28 - floor((v10 + v9[4] - (v9[3] + v9[2] + v9[4]) * 0.5) / v9[4]) * v9[4];
    v12 = 0.0;
  }
  v13 = v11[3] - v11[2];
  if ( *(_DWORD *)(a3 + 160) )
  {
    v19 = v12;
    v20 = v10 * v13;
    v21 = v19;
    v22 = v20 + v11[2];
    *a7 = 0;
    v23 = a3 + 4 * a5 * *(_DWORD *)(a3 + 68);
    for ( *a6 = (v22 - *(float *)(v23 + *(_DWORD *)(a3 + 160)))
              / (*(float *)(v23 + *(_DWORD *)(a3 + 160) + 4) - *(float *)(v23 + *(_DWORD *)(a3 + 160)));
          *a7 < *(_DWORD *)(a3 + 4 * a5 + 68) - 2;
          *a6 = (v22 - *(float *)(v24 + *(_DWORD *)(a3 + 160)))
              / (*(float *)(v24 + *(_DWORD *)(a3 + 160) + 4) - *(float *)(v24 + *(_DWORD *)(a3 + 160))) )
    {
      if ( *a6 <= 1.0 )
        break;
      v24 = a3 + 4 * (++*a7 + a5 * *(_DWORD *)(a3 + 68));
    }
    v25 = v21;
    v26 = 1.0;
    if ( v25 <= *a6 )
    {
      if ( *a6 <= 1.0 )
        return;
    }
    else
    {
      v26 = v25;
    }
    *a6 = v26;
    return;
  }
  v14 = (*(float *)(a3 + 4 * a5 + 84) - v11[2]) / v13;
  v15 = v12;
  v16 = (v10 - v14) / ((*(float *)(a3 + 4 * a5 + 92) - v11[2]) / v13 - v14);
  v17 = v15;
  *a6 = v16;
  if ( v16 >= v15 )
  {
    if ( v16 > 1.0 )
      *a6 = 1.0;
  }
  else
  {
    *a6 = v17;
  }
  *a7 = 0;
  if ( *(int *)(a3 + 4 * a5 + 68) > 2 )
  {
    v18 = (int)((double)(*(_DWORD *)(a3 + 4 * a5 + 68) - 1) * *a6);
    *a7 = v18;
    if ( v18 == *(_DWORD *)(a3 + 4 * a5 + 68) - 1 )
      *a7 = *(_DWORD *)(a3 + 4 * a5 + 68) - 2;
    *a6 = (double)(*(_DWORD *)(a3 + 4 * a5 + 68) - 1) * *a6 - (double)*a7;
  }
}
