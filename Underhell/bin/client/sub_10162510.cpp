void __cdecl sub_10162510(int a1, float *a2, float *a3, float a4, float a5)
{
  _DWORD *v5; // esi
  float *v6; // eax
  int v7; // ecx
  double v8; // st7
  int v9; // edx
  double v10; // st6
  int v11; // ebx
  int *v12; // ecx
  double v13; // st7
  int v14; // ebx
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  int *v18; // edx
  double v19; // st7
  double v20; // st6
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  double v24; // st7
  double v25; // st6
  double v26; // st7
  float *v27; // eax
  float *v28; // eax
  float *v29; // eax
  int *v30; // ecx
  double v31; // st7
  double v32; // st6
  float *v33; // eax
  float *v34; // esi
  float v35; // [esp+14h] [ebp-1Ch] BYREF
  float v36; // [esp+18h] [ebp-18h]
  float v37; // [esp+1Ch] [ebp-14h]
  float v38; // [esp+20h] [ebp-10h]
  int v39; // [esp+24h] [ebp-Ch]
  int v40; // [esp+28h] [ebp-8h]
  int v41; // [esp+2Ch] [ebp-4h]
  int v42; // [esp+44h] [ebp+14h]
  _DWORD *v43; // [esp+44h] [ebp+14h]

  if ( a4 >= 0.001 )
  {
    v5 = *(_DWORD **)(a1 + 4);
    if ( v5 )
    {
      *(float *)&v39 = *a3 * 254.89999;
      v41 = (int)*(float *)&v39;
      *(float *)&v39 = a3[1] * 254.89999;
      v40 = (int)*(float *)&v39;
      v38 = a3[2] * 254.89999;
      v39 = (int)v38;
      v38 = a4 * 254.89999;
      v42 = (int)v38;
      sub_10041FA0(&v35, -1.0, 1.0);
      v6 = (float *)v5[107];
      v7 = (unsigned __int8)v41;
      v8 = a2[1] - a5;
      v9 = (unsigned __int8)v40;
      v10 = a2[2];
      *v6 = *a2 - a5;
      v11 = v7 | ((unsigned __int8)v42 << 8);
      v12 = (int *)v5[117];
      v6[1] = v8;
      v6[2] = v10;
      v13 = v35;
      v14 = (unsigned __int8)v39 | ((v9 | (v11 << 8)) << 8);
      *v12 = v14;
      v15 = (float *)v5[108];
      v43 = v5 + 61;
      *v15 = v13;
      v15[1] = v36;
      v15[2] = v37;
      v16 = (float *)v5[109];
      *v16 = 0.0;
      v16[1] = 1.0;
      sub_10016A80(v5 + 61);
      v17 = (float *)v5[107];
      v18 = (int *)v5[117];
      v19 = a2[1] + a5;
      v20 = a2[2];
      *v17 = *a2 - a5;
      v17[1] = v19;
      v17[2] = v20;
      *v18 = v14;
      v21 = (float *)v5[108];
      *v21 = v35;
      v21[1] = v36;
      v21[2] = v37;
      v22 = (float *)v5[109];
      *v22 = 0.0;
      v22[1] = 0.0;
      sub_10016A80(v5 + 61);
      v23 = (float *)v5[107];
      v24 = a2[1] + a5;
      v25 = a2[2];
      *v23 = a5 + *a2;
      v23[1] = v24;
      v23[2] = v25;
      v26 = v35;
      *(_DWORD *)v5[117] = v14;
      v27 = (float *)v5[108];
      *v27 = v26;
      v27[1] = v36;
      v27[2] = v37;
      v28 = (float *)v5[109];
      *v28 = 1.0;
      v28[1] = 0.0;
      sub_10016A80(v5 + 61);
      v29 = (float *)v5[107];
      v30 = (int *)v5[117];
      v31 = a2[1] - a5;
      v32 = a2[2];
      *v29 = a5 + *a2;
      v29[1] = v31;
      v29[2] = v32;
      *v30 = v14;
      v33 = (float *)v5[108];
      v34 = (float *)v5[109];
      *v33 = v35;
      v33[1] = v36;
      v33[2] = v37;
      *v34 = 1.0;
      v34[1] = 1.0;
      sub_10016A80(v43);
    }
  }
}
