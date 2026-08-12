float *__cdecl sub_10100370(int a1, int a2, int a3, int a4, _DWORD *a5, float *a6)
{
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  float *v15; // edx
  double v16; // st6
  int v17; // ecx
  double v18; // rt0
  double v19; // st6
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  double v25; // st7
  float *v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // eax
  double v33; // st7
  float *v34; // edx
  int v35; // ecx
  int v36; // eax
  int v37; // edx
  int v38; // eax
  float *result; // eax
  _DWORD *v40; // ecx
  int v41; // [esp+Ch] [ebp-20h]
  float v42; // [esp+10h] [ebp-1Ch]
  float v43; // [esp+14h] [ebp-18h]
  int v44; // [esp+14h] [ebp-18h]
  int v45; // [esp+1Ch] [ebp-10h]
  int v46; // [esp+1Ch] [ebp-10h]
  float v47; // [esp+20h] [ebp-Ch] BYREF
  float v48; // [esp+24h] [ebp-8h] BYREF
  int v49; // [esp+28h] [ebp-4h] BYREF

  v6 = a1;
  if ( a1 && (v7 = sub_10245270(a1), v8 = a3, a3 < v7) )
  {
    v47 = 0.0;
    v48 = 0.0;
    v49 = 0;
    a1 = 0;
    v9 = (_DWORD *)a2;
    sub_100FEA30(v6, a4, a2, a3, 0, &v47, &v49);
    sub_100FEA30(v6, a4, (int)v9, v8, 1, &v48, &a1);
    v10 = v9[17];
    v45 = v49;
    if ( v49 >= v10 )
      v45 = v10 - 1;
    v11 = v9[18];
    if ( a1 < v11 )
      v12 = a1;
    else
      v12 = v11 - 1;
    v13 = sub_102455F0(v8, *(__int16 *)((char *)v9 + 2 * v45 + 2 * v12 * v10 + v9[15]));
    v14 = sub_102454D0(v13);
    v15 = a6;
    v16 = 1.0 - v48;
    *a5 = v14;
    v17 = v49 + 1;
    v41 = v49 + 1;
    v43 = v16;
    v46 = v49 + 1;
    v18 = v16;
    v19 = 1.0 - v47;
    *v15 = v18 * v19;
    v20 = v9[17];
    if ( v17 >= v20 )
      v46 = v20 - 1;
    v21 = v9[18];
    if ( a1 < v21 )
      v22 = a1;
    else
      v22 = v21 - 1;
    v23 = sub_102455F0(v8, *(__int16 *)((char *)v9 + 2 * v46 + 2 * v22 * v20 + v9[15]));
    v24 = sub_102454D0(v23);
    v25 = v43 * v47;
    v26 = a6;
    a5[1] = v24;
    v27 = a1;
    v26[1] = v25;
    v28 = v9[17];
    v29 = v27 + 1;
    v44 = v29;
    a1 = v49;
    if ( v49 >= v28 )
      a1 = v28 - 1;
    v30 = v9[18];
    if ( v29 >= v30 )
      v29 = v30 - 1;
    v31 = sub_102455F0(v8, *(__int16 *)((char *)v9 + 2 * a1 + 2 * v29 * v28 + v9[15]));
    v32 = sub_102454D0(v31);
    v42 = v19;
    v33 = v42 * v48;
    v34 = a6;
    a5[2] = v32;
    v35 = v44;
    v34[2] = v33;
    v36 = v9[17];
    a1 = v41;
    if ( v41 >= v36 )
      a1 = v36 - 1;
    v37 = v9[18];
    if ( v44 >= v37 )
      v35 = v37 - 1;
    v38 = sub_102455F0(v8, *(__int16 *)((char *)v9 + 2 * a1 + 2 * v35 * v36 + v9[15]));
    result = (float *)sub_102454D0(v38);
    v40 = a5;
    a6[3] = v48 * v47;
    v40[3] = result;
  }
  else
  {
    result = a6;
    a6[3] = 0.0;
    result[2] = 0.0;
    result[1] = 0.0;
    *result = 0.0;
  }
  return result;
}
