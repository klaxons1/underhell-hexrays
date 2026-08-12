void __cdecl sub_10054ED0(float **a1, float *a2, float *a3, float a4, float a5, float a6)
{
  float *v6; // esi
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  int v10; // ebx
  float *v11; // ecx
  double v12; // st7
  float *v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  float *v17; // ecx
  float *v18; // eax
  int *v19; // edx
  double v20; // st7
  double v21; // st6
  double v22; // st7
  float *v23; // ecx
  float *v24; // eax
  int *v25; // ecx
  double v26; // st7
  double v27; // st6
  double v28; // st7
  float *v29; // esi
  float v30; // [esp+4h] [ebp-18h]
  float v31; // [esp+4h] [ebp-18h]
  float v32; // [esp+8h] [ebp-14h]
  float v33; // [esp+8h] [ebp-14h]
  int v34; // [esp+8h] [ebp-14h]
  int v35; // [esp+Ch] [ebp-10h]
  int v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  float v38; // [esp+18h] [ebp-4h]
  _DWORD *v39; // [esp+30h] [ebp+14h]

  if ( a4 >= 0.001 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      v32 = *a3 * 254.89999;
      v36 = (int)v32;
      v33 = a3[1] * 254.89999;
      v35 = (int)v33;
      v30 = a3[2] * 254.89999;
      v34 = (int)v30;
      v31 = a4 * 254.89999;
      v37 = cos(a6);
      v38 = sin(a6);
      v7 = (float *)*((_DWORD *)v6 + 107);
      v8 = a2[2];
      v9 = (-v38 - v37) * a5 + a2[1];
      *v7 = a5 * (v38 - v37) + *a2;
      v7[1] = v9;
      v7[2] = v8;
      v10 = (unsigned __int8)v34
          | (((unsigned __int8)v35 | (((unsigned __int8)v36 | ((unsigned __int8)(int)v31 << 8)) << 8)) << 8);
      **((_DWORD **)v6 + 117) = v10;
      v11 = (float *)*((_DWORD *)v6 + 109);
      v12 = (*a1)[3];
      *v11 = **a1;
      v11[1] = v12;
      v39 = v6 + 61;
      sub_10016A80((_DWORD *)v6 + 61);
      v13 = (float *)*((_DWORD *)v6 + 107);
      v14 = a2[2];
      v15 = (v37 - v38) * a5 + a2[1];
      *v13 = a5 * (-v37 - v38) + *a2;
      v13[1] = v15;
      v13[2] = v14;
      **((_DWORD **)v6 + 117) = v10;
      v16 = (*a1)[1];
      v17 = (float *)*((_DWORD *)v6 + 109);
      *v17 = **a1;
      v17[1] = v16;
      sub_10016A80((_DWORD *)v6 + 61);
      v18 = (float *)*((_DWORD *)v6 + 107);
      v19 = (int *)*((_DWORD *)v6 + 117);
      v20 = (v38 + v37) * a5 + a2[1];
      v21 = a2[2];
      *v18 = a5 * (v37 - v38) + *a2;
      v18[1] = v20;
      v18[2] = v21;
      *v19 = v10;
      v22 = (*a1)[1];
      v23 = (float *)*((_DWORD *)v6 + 109);
      *v23 = (*a1)[2];
      v23[1] = v22;
      sub_10016A80((_DWORD *)v6 + 61);
      v24 = (float *)*((_DWORD *)v6 + 107);
      v25 = (int *)*((_DWORD *)v6 + 117);
      v26 = a2[2];
      v27 = (v38 - v37) * a5 + a2[1];
      *v24 = a5 * (v37 + v38) + *a2;
      v24[1] = v27;
      v24[2] = v26;
      *v25 = v10;
      v28 = (*a1)[3];
      v29 = (float *)*((_DWORD *)v6 + 109);
      *v29 = (*a1)[2];
      v29[1] = v28;
      sub_10016A80(v39);
    }
  }
}
