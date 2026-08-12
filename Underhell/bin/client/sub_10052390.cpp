void __cdecl sub_10052390(float **a1, float *a2, float *a3, float a4, float a5)
{
  float *v5; // esi
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  int v9; // ebx
  float *v10; // ecx
  double v11; // st7
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st7
  float *v16; // ecx
  float *v17; // eax
  double v18; // st7
  double v19; // st6
  int *v20; // edx
  double v21; // st7
  float *v22; // ecx
  float *v23; // eax
  int *v24; // ecx
  double v25; // st7
  double v26; // st6
  double v27; // st7
  float *v28; // esi
  int v29; // [esp+0h] [ebp-10h]
  int v30; // [esp+4h] [ebp-Ch]
  int v31; // [esp+8h] [ebp-8h]
  _DWORD *v32; // [esp+24h] [ebp+14h]

  if ( a4 >= 0.5 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v31 = (int)*a3;
      v30 = (int)a3[1];
      v29 = (int)a3[2];
      v6 = (float *)*((_DWORD *)v5 + 107);
      v7 = a2[1] - a5;
      v8 = a2[2];
      *v6 = *a2 - a5;
      v6[1] = v7;
      v6[2] = v8;
      v9 = (unsigned __int8)v29
         | (((unsigned __int8)v30 | (((unsigned __int8)v31 | ((unsigned __int8)(int)a4 << 8)) << 8)) << 8);
      **((_DWORD **)v5 + 117) = v9;
      v10 = (float *)*((_DWORD *)v5 + 109);
      v11 = (*a1)[3];
      *v10 = **a1;
      v10[1] = v11;
      v32 = v5 + 61;
      sub_10016A80((_DWORD *)v5 + 61);
      v12 = (float *)*((_DWORD *)v5 + 107);
      v13 = a2[1] + a5;
      v14 = a2[2];
      *v12 = *a2 - a5;
      v12[1] = v13;
      v12[2] = v14;
      **((_DWORD **)v5 + 117) = v9;
      v15 = (*a1)[1];
      v16 = (float *)*((_DWORD *)v5 + 109);
      *v16 = **a1;
      v16[1] = v15;
      sub_10016A80((_DWORD *)v5 + 61);
      v17 = (float *)*((_DWORD *)v5 + 107);
      v18 = a2[1] + a5;
      v19 = a2[2];
      *v17 = a5 + *a2;
      v17[1] = v18;
      v20 = (int *)*((_DWORD *)v5 + 117);
      v17[2] = v19;
      *v20 = v9;
      v21 = (*a1)[1];
      v22 = (float *)*((_DWORD *)v5 + 109);
      *v22 = (*a1)[2];
      v22[1] = v21;
      sub_10016A80((_DWORD *)v5 + 61);
      v23 = (float *)*((_DWORD *)v5 + 107);
      v24 = (int *)*((_DWORD *)v5 + 117);
      v25 = a2[1] - a5;
      v26 = a2[2];
      *v23 = a5 + *a2;
      v23[1] = v25;
      v23[2] = v26;
      *v24 = v9;
      v27 = (*a1)[3];
      v28 = (float *)*((_DWORD *)v5 + 109);
      *v28 = (*a1)[2];
      v28[1] = v27;
      sub_10016A80(v32);
    }
  }
}
