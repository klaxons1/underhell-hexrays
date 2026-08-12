void __cdecl sub_10161350(float **a1, float *a2, float *a3, float a4, float a5, float *a6, float a7)
{
  float *v7; // esi
  long double v8; // st6
  float *v9; // eax
  long double v10; // rt0
  long double v11; // st6
  long double v12; // st4
  long double v13; // st3
  double v14; // st6
  long double v15; // st5
  int v16; // ebx
  float *v17; // ecx
  double v18; // st7
  float *v19; // eax
  float *v20; // eax
  double v21; // st4
  double v22; // st7
  double v23; // rtt
  double v24; // st7
  float *v25; // ecx
  float *v26; // eax
  float *v27; // eax
  int *v28; // edx
  double v29; // st7
  double v30; // st7
  double v31; // st6
  double v32; // st7
  float *v33; // ecx
  float *v34; // eax
  float *v35; // eax
  double v36; // st7
  int *v37; // ecx
  double v38; // st6
  double v39; // st7
  float *v40; // ecx
  float *v41; // esi
  float v42; // [esp+0h] [ebp-1Ch]
  float v43; // [esp+4h] [ebp-18h]
  float v44; // [esp+4h] [ebp-18h]
  float v45; // [esp+8h] [ebp-14h]
  int v46; // [esp+Ch] [ebp-10h]
  float v47; // [esp+Ch] [ebp-10h]
  int v48; // [esp+10h] [ebp-Ch]
  int v49; // [esp+14h] [ebp-8h]
  _DWORD *v50; // [esp+30h] [ebp+14h]

  if ( a4 >= 0.5 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      v49 = (int)*a3;
      v48 = (int)a3[1];
      v46 = (int)a3[2];
      v8 = cos(a7);
      v9 = (float *)*((_DWORD *)v7 + 107);
      v43 = v8;
      v10 = v8;
      v11 = sin(a7);
      v45 = v11;
      v12 = (-v11 - v10) * a5 + a2[1];
      v13 = v11;
      v14 = a2[2];
      v15 = a5 * (v13 - v10);
      v42 = v15;
      *v9 = v15 + *a2;
      v9[1] = v12;
      v9[2] = v14;
      v16 = (unsigned __int8)v46
          | (((unsigned __int8)v48 | (((unsigned __int8)v49 | ((unsigned __int8)(int)a4 << 8)) << 8)) << 8);
      **((_DWORD **)v7 + 117) = v16;
      v17 = (float *)*((_DWORD *)v7 + 109);
      v18 = (*a1)[3];
      v19 = (float *)*((_DWORD *)v7 + 108);
      *v17 = **a1;
      v17[1] = v18;
      *v19 = *a6;
      v19[1] = a6[1];
      v19[2] = a6[2];
      v50 = v7 + 61;
      sub_10016A80((_DWORD *)v7 + 61);
      v20 = (float *)*((_DWORD *)v7 + 107);
      v21 = (v43 - v45) * a5;
      v47 = v21;
      v22 = a2[2];
      v23 = v21 + a2[1];
      *v20 = a5 * (-v43 - v45) + *a2;
      v20[1] = v23;
      v20[2] = v22;
      **((_DWORD **)v7 + 117) = v16;
      v24 = (*a1)[1];
      v25 = (float *)*((_DWORD *)v7 + 109);
      v26 = (float *)*((_DWORD *)v7 + 108);
      *v25 = **a1;
      v25[1] = v24;
      *v26 = *a6;
      v26[1] = a6[1];
      v26[2] = a6[2];
      sub_10016A80((_DWORD *)v7 + 61);
      v27 = (float *)*((_DWORD *)v7 + 107);
      v28 = (int *)*((_DWORD *)v7 + 117);
      v29 = (v45 + v43) * a5;
      v44 = v29;
      v30 = v29 + a2[1];
      v31 = a2[2];
      *v27 = *a2 + v47;
      v27[1] = v30;
      v27[2] = v31;
      *v28 = v16;
      v32 = (*a1)[1];
      v33 = (float *)*((_DWORD *)v7 + 109);
      v34 = (float *)*((_DWORD *)v7 + 108);
      *v33 = (*a1)[2];
      v33[1] = v32;
      *v34 = *a6;
      v34[1] = a6[1];
      v34[2] = a6[2];
      sub_10016A80((_DWORD *)v7 + 61);
      v35 = (float *)*((_DWORD *)v7 + 107);
      v36 = a2[1] + v42;
      v37 = (int *)*((_DWORD *)v7 + 117);
      v38 = a2[2];
      *v35 = *a2 + v44;
      v35[1] = v36;
      v35[2] = v38;
      *v37 = v16;
      v39 = (*a1)[3];
      v40 = (float *)*((_DWORD *)v7 + 109);
      v41 = (float *)*((_DWORD *)v7 + 108);
      *v40 = (*a1)[2];
      v40[1] = v39;
      *v41 = *a6;
      v41[1] = a6[1];
      v41[2] = a6[2];
      sub_10016A80(v50);
    }
  }
}
