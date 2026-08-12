void __cdecl sub_1011C790(float *a1, float *a2, float a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  double v11; // st7
  double v12; // st4
  double v13; // st6
  double v14; // st5
  double v15; // st6
  double v16; // st3
  double v17; // st4
  double v18; // st1
  float v19; // eax
  int v20; // ecx
  int v21; // edx
  double v22; // st3
  double v23; // st1
  _BYTE v24[12]; // [esp+10h] [ebp-A0h] BYREF
  float v25; // [esp+1Ch] [ebp-94h]
  int v26[3]; // [esp+20h] [ebp-90h] BYREF
  int v27[3]; // [esp+2Ch] [ebp-84h] BYREF
  float v28; // [esp+38h] [ebp-78h]
  float v29; // [esp+3Ch] [ebp-74h]
  float v30; // [esp+40h] [ebp-70h]
  int v31[3]; // [esp+44h] [ebp-6Ch] BYREF
  int v32[3]; // [esp+50h] [ebp-60h] BYREF
  int v33[3]; // [esp+5Ch] [ebp-54h] BYREF
  int v34[3]; // [esp+68h] [ebp-48h] BYREF
  float v35; // [esp+74h] [ebp-3Ch] BYREF
  float v36; // [esp+78h] [ebp-38h]
  float v37; // [esp+7Ch] [ebp-34h]
  int v38[4]; // [esp+80h] [ebp-30h] BYREF
  float v39; // [esp+90h] [ebp-20h]
  float v40; // [esp+94h] [ebp-1Ch]
  float v41; // [esp+98h] [ebp-18h]
  float v42; // [esp+9Ch] [ebp-14h]
  float v43; // [esp+A0h] [ebp-10h]
  float v44; // [esp+A4h] [ebp-Ch]
  float v45; // [esp+A8h] [ebp-8h]
  float v46; // [esp+ACh] [ebp-4h]
  float v47; // [esp+B8h] [ebp+8h]
  float v48; // [esp+BCh] [ebp+Ch]
  float v49; // [esp+BCh] [ebp+Ch]
  float v50; // [esp+C0h] [ebp+10h]

  v35 = *a2 - *a1;
  v36 = a2[1] - a1[1];
  v37 = a2[2] - a1[2];
  off_10689714();
  v48 = a3 * 0.5;
  sub_10421D80(&v35, v24);
  v11 = v28 * v48;
  v12 = v29 * v48;
  v13 = v48 * v30;
  *(float *)v34 = *a1 - v11;
  *(float *)&v34[1] = a1[1] - v12;
  *(float *)&v34[2] = a1[2] - v13;
  v44 = v11;
  v45 = v12;
  v14 = v13;
  v15 = v12;
  v46 = v14;
  v16 = a3;
  v17 = v35 * a3;
  v18 = v36 * a3;
  v39 = v18;
  v50 = v37 * a3;
  v40 = v50;
  v41 = *a2 - v17;
  v42 = a2[1] - v39;
  v43 = a2[2] - v50;
  *(float *)v27 = v41 - v44;
  *(float *)&v27[1] = v42 - v45;
  v19 = *a2;
  v20 = *((_DWORD *)a2 + 1);
  v21 = *((_DWORD *)a2 + 2);
  *(float *)&v27[2] = v43 - v46;
  *(float *)v33 = v19;
  v33[1] = v20;
  v33[2] = v21;
  v49 = v28 * v16;
  v41 = v49;
  v47 = v29 * v16;
  v42 = v47;
  v25 = v16 * v30;
  v43 = v25;
  v39 = v18;
  v40 = v50;
  v44 = *a2 - v17;
  v45 = a2[1] - v39;
  v46 = a2[2] - v50;
  *(float *)v31 = v44 - v49;
  *(float *)&v31[1] = v45 - v47;
  *(float *)&v31[2] = v46 - v25;
  v41 = v49;
  v42 = v47;
  v43 = v25;
  v39 = v18;
  v40 = v50;
  v44 = *a2 - v17;
  v45 = a2[1] - v39;
  v46 = a2[2] - v50;
  *(float *)v32 = v44 + v49;
  *(float *)&v32[1] = v45 + v47;
  *(float *)&v32[2] = v46 + v25;
  v45 = v15;
  v40 = v50;
  v22 = a2[1] - v18;
  v23 = a2[2];
  *(float *)v38 = v11 + *a2 - v17;
  *(float *)&v38[1] = v22 + v45;
  *(float *)&v38[2] = v23 - v50 + v14;
  *(float *)v26 = v11 + *a1;
  *(float *)&v26[1] = v15 + a1[1];
  *(float *)&v26[2] = v14 + a1[2];
  sub_1011BC50((float *)v34, (float *)v27, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v27, (float *)v31, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v31, (float *)v33, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v33, (float *)v32, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v32, (float *)v38, a4, a5, a6, a8, a9);
  sub_1011BC50((float *)v38, (float *)v26, a4, a5, a6, a8, a9);
  if ( a7 > 0 )
  {
    sub_1011BE00((float *)v32, (float *)v33, (float *)v31, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v34, (float *)v26, (float *)v38, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v38, (float *)v27, (float *)v34, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v31, (float *)v33, (float *)v32, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v38, (float *)v26, (float *)v34, a4, a5, a6, a7, a8, a9);
    sub_1011BE00((float *)v34, (float *)v27, (float *)v38, a4, a5, a6, a7, a8, a9);
  }
}
