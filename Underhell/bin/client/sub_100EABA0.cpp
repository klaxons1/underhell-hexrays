void __cdecl sub_100EABA0(float **a1, float *a2, float *a3, float a4, float a5, int a6)
{
  float *v6; // esi
  float v7; // edx
  float *v8; // eax
  int v9; // edi
  int *v10; // ecx
  int v11; // edx
  int v12; // edi
  float *v13; // eax
  double v14; // st7
  float *v15; // ecx
  double v16; // st6
  double v17; // st7
  _DWORD *v18; // ebx
  float *v19; // eax
  int *v20; // edx
  double v21; // st7
  float *v22; // eax
  double v23; // st6
  float *v24; // ecx
  double v25; // st7
  float *v26; // eax
  int *v27; // ecx
  double v28; // st7
  float *v29; // eax
  double v30; // st6
  float *v31; // ecx
  double v32; // st7
  float *v33; // eax
  double v34; // st6
  double v35; // st7
  double v36; // st7
  double v37; // st6
  float *v38; // eax
  float *v39; // esi
  double v40; // st7
  float v41; // [esp+0h] [ebp-4Ch]
  float v42; // [esp+4h] [ebp-48h]
  float v43; // [esp+8h] [ebp-44h]
  float v44; // [esp+Ch] [ebp-40h]
  float v45; // [esp+Ch] [ebp-40h]
  float v46; // [esp+10h] [ebp-3Ch]
  float v47; // [esp+10h] [ebp-3Ch]
  float v48; // [esp+14h] [ebp-38h]
  float v49; // [esp+14h] [ebp-38h]
  float v50[3]; // [esp+18h] [ebp-34h] BYREF
  float v51; // [esp+24h] [ebp-28h] BYREF
  float v52; // [esp+28h] [ebp-24h]
  float v53; // [esp+2Ch] [ebp-20h]
  float v54; // [esp+30h] [ebp-1Ch] BYREF
  float v55; // [esp+34h] [ebp-18h]
  float v56; // [esp+38h] [ebp-14h]
  float v57; // [esp+3Ch] [ebp-10h]
  int v58; // [esp+40h] [ebp-Ch]
  int v59; // [esp+44h] [ebp-8h]
  int v60; // [esp+48h] [ebp-4h]
  int v61; // [esp+60h] [ebp+14h]

  if ( a4 >= 0.001 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      *(float *)&v58 = *a3 * 254.89999;
      v60 = (int)*(float *)&v58;
      *(float *)&v58 = a3[1] * 254.89999;
      v59 = (int)*(float *)&v58;
      v57 = a3[2] * 254.89999;
      v58 = (int)v57;
      v57 = a4 * 254.89999;
      v61 = (int)v57;
      sub_101EE040(a6, &v54, &v51, v50);
      v7 = a2[1];
      v44 = *a2;
      v48 = a2[2];
      v8 = (float *)*((_DWORD *)v6 + 107);
      v9 = (unsigned __int8)v60 | ((unsigned __int8)v61 << 8);
      v10 = (int *)*((_DWORD *)v6 + 117);
      *v8 = *a2;
      v46 = v7;
      v11 = (unsigned __int8)v59;
      v8[1] = v46;
      v8[2] = v48;
      v12 = (unsigned __int8)v58 | ((v11 | (v9 << 8)) << 8);
      *v10 = v12;
      v13 = (float *)*((_DWORD *)v6 + 108);
      v14 = v55;
      v15 = (float *)*((_DWORD *)v6 + 109);
      v16 = v56;
      *v13 = v54;
      v13[1] = v14;
      v13[2] = v16;
      v17 = (*a1)[3];
      v18 = v6 + 61;
      *v15 = **a1;
      v15[1] = v17;
      sub_10016A80((_DWORD *)v6 + 61);
      v41 = v51 * a5 + v44;
      v19 = (float *)*((_DWORD *)v6 + 107);
      v20 = (int *)*((_DWORD *)v6 + 117);
      v42 = v52 * a5 + v46;
      v43 = a5 * v53 + v48;
      *v19 = v41;
      v19[1] = v42;
      v19[2] = v43;
      *v20 = v12;
      v21 = v55;
      v22 = (float *)*((_DWORD *)v6 + 108);
      v23 = v56;
      v24 = (float *)*((_DWORD *)v6 + 109);
      *v22 = v54;
      v22[1] = v21;
      v22[2] = v23;
      v25 = (*a1)[1];
      *v24 = **a1;
      v24[1] = v25;
      sub_10016A80((_DWORD *)v6 + 61);
      v26 = (float *)*((_DWORD *)v6 + 107);
      v27 = (int *)*((_DWORD *)v6 + 117);
      v45 = v50[0] * a5 + v41;
      v47 = v50[1] * a5 + v42;
      v49 = a5 * v50[2] + v43;
      *v26 = v45;
      v26[1] = v47;
      v26[2] = v49;
      *v27 = v12;
      v28 = v55;
      v29 = (float *)*((_DWORD *)v6 + 108);
      v30 = v56;
      v31 = (float *)*((_DWORD *)v6 + 109);
      *v29 = v54;
      v29[1] = v28;
      v29[2] = v30;
      v32 = (*a1)[1];
      *v31 = (*a1)[2];
      v31[1] = v32;
      sub_10016A80((_DWORD *)v6 + 61);
      v33 = (float *)*((_DWORD *)v6 + 107);
      v34 = v49 - a5 * v53;
      v35 = v47 - v52 * a5;
      *v33 = v45 - v51 * a5;
      v33[1] = v35;
      v33[2] = v34;
      **((_DWORD **)v6 + 117) = v12;
      v36 = v55;
      v37 = v56;
      v38 = (float *)*((_DWORD *)v6 + 108);
      v39 = (float *)*((_DWORD *)v6 + 109);
      *v38 = v54;
      v38[1] = v36;
      v38[2] = v37;
      v40 = (*a1)[3];
      *v39 = (*a1)[2];
      v39[1] = v40;
      sub_10016A80(v18);
    }
  }
}
