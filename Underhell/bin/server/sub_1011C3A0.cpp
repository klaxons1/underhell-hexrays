void __cdecl sub_1011C3A0(float *a1, float *a2, float a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  double v11; // st6
  double v12; // st5
  double v13; // st2
  double v14; // rt1
  double v15; // st2
  double v16; // rt2
  double v17; // st2
  double v18; // st4
  double v19; // st6
  double v20; // st1
  double v21; // rt2
  double v22; // st1
  int v23; // ecx
  int v24; // edx
  double v25; // st7
  double v26; // st3
  double v27; // st1
  double v28; // st2
  double v29; // st7
  float v30; // [esp+14h] [ebp-84h]
  float v31; // [esp+1Ch] [ebp-7Ch]
  int v32[3]; // [esp+20h] [ebp-78h] BYREF
  int v33[3]; // [esp+2Ch] [ebp-6Ch] BYREF
  int v34[3]; // [esp+38h] [ebp-60h] BYREF
  int v35[3]; // [esp+44h] [ebp-54h] BYREF
  int v36[3]; // [esp+50h] [ebp-48h] BYREF
  int v37[3]; // [esp+5Ch] [ebp-3Ch] BYREF
  float v38; // [esp+68h] [ebp-30h]
  float v39; // [esp+6Ch] [ebp-2Ch]
  float v40; // [esp+70h] [ebp-28h]
  int v41[3]; // [esp+74h] [ebp-24h] BYREF
  float v42; // [esp+80h] [ebp-18h]
  float v43; // [esp+84h] [ebp-14h]
  float v44; // [esp+88h] [ebp-10h]
  float v45; // [esp+8Ch] [ebp-Ch]
  float v46; // [esp+90h] [ebp-8h]
  float v47; // [esp+94h] [ebp-4h]
  float v48; // [esp+A0h] [ebp+8h]
  float v49; // [esp+A4h] [ebp+Ch]
  float v50; // [esp+A8h] [ebp+10h]

  v38 = *a2 - *a1;
  v39 = a2[1] - a1[1];
  v40 = a2[2] - a1[2];
  off_10689714();
  v11 = 0.5 * a3;
  v12 = v40 * 0.0;
  v13 = v39 - v12;
  v45 = v13;
  v46 = v12 - v38;
  v14 = v13;
  v15 = v38 * 0.0 - 0.0 * v39;
  v47 = v15;
  v16 = v15;
  v17 = v14 * v11;
  v18 = v46 * v11;
  v19 = v11 * v16;
  *(float *)v37 = *a1 - v17;
  *(float *)&v37[1] = a1[1] - v18;
  *(float *)&v37[2] = a1[2] - v19;
  v20 = v39 * a3;
  v30 = v20;
  v31 = v40 * a3;
  v21 = v20;
  v42 = *a2 - v38 * a3;
  v43 = a2[1] - v30;
  v22 = a2[2] - v31;
  *(float *)v35 = v42 - v17;
  *(float *)&v35[1] = v43 - v18;
  *(float *)&v35[2] = v22 - v19;
  v23 = *((_DWORD *)a2 + 1);
  v24 = *((_DWORD *)a2 + 2);
  v49 = v45 * a3;
  v33[0] = *(int *)a2;
  v33[1] = v23;
  v33[2] = v24;
  v48 = v46 * a3;
  v25 = v38 * a3;
  v50 = a3 * v47;
  v43 = v21;
  v44 = v31;
  v45 = *a2 - v25;
  v46 = a2[1] - v43;
  v47 = a2[2] - v31;
  *(float *)v34 = v45 - v49;
  *(float *)&v34[1] = v46 - v48;
  *(float *)&v34[2] = v47 - v50;
  v43 = v21;
  v44 = v31;
  v45 = *a2 - v25;
  v46 = a2[1] - v43;
  v47 = a2[2] - v31;
  *(float *)v36 = v49 + v45;
  *(float *)&v36[1] = v48 + v46;
  *(float *)&v36[2] = v50 + v47;
  v26 = a2[1] - v21;
  v27 = v17;
  v28 = *a2 - v25 + v17;
  v29 = a2[2] - v31;
  *(float *)v41 = v28;
  *(float *)&v41[1] = v26 + v18;
  *(float *)&v41[2] = v29 + v19;
  *(float *)v32 = v27 + *a1;
  *(float *)&v32[1] = v18 + a1[1];
  *(float *)&v32[2] = v19 + a1[2];
  sub_1011BC50((float *)v37, (float *)v35, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v35, (float *)v34, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v34, (float *)v33, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v33, (float *)v36, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v36, (float *)v41, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v41, (float *)v32, a4, a5, a6, a8, a9);
  if ( a7 > 0 )
  {
    sub_1011BE00((float *)v36, (float *)v33, (float *)v34, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v37, (float *)v32, (float *)v41, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v41, (float *)v35, (float *)v37, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v34, (float *)v33, (float *)v36, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v41, (float *)v32, (float *)v37, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v37, (float *)v35, (float *)v41, a4, a5, a6, a7, a8, a9);
  }
}
