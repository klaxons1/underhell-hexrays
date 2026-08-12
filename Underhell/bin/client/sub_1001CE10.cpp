int __cdecl sub_1001CE10(int a1, int a2, int a3)
{
  float *v3; // esi
  int v4; // edx
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st6
  double v11; // st5
  int v12; // edx
  int v13; // ecx
  double v14; // st5
  double v15; // rt0
  double v16; // st4
  double v17; // st3
  double v18; // st5
  float *v19; // ebx
  double v20; // st2
  double v21; // st6
  int v22; // ecx
  float *v23; // edi
  double v24; // rt1
  double v25; // st3
  double v26; // st7
  int v27; // edx
  float *v28; // esi
  double v29; // rt0
  double v30; // st4
  double v31; // st7
  double v32; // st6
  double v33; // st5
  double v34; // st4
  double v35; // rt2
  double v36; // st4
  double v37; // rtt
  double v38; // rt0
  double v39; // st4
  double v40; // rt1
  double v41; // st4
  double v42; // st5
  double v43; // st7
  float v45; // [esp+0h] [ebp-A0h]
  float v46; // [esp+0h] [ebp-A0h]
  _BYTE v47[48]; // [esp+14h] [ebp-8Ch] BYREF
  int v48[4]; // [esp+44h] [ebp-5Ch] BYREF
  int v49[4]; // [esp+54h] [ebp-4Ch] BYREF
  float v50[3]; // [esp+64h] [ebp-3Ch] BYREF
  int v51; // [esp+70h] [ebp-30h]
  float v52; // [esp+74h] [ebp-2Ch] BYREF
  float v53; // [esp+78h] [ebp-28h]
  float v54; // [esp+7Ch] [ebp-24h]
  float v55; // [esp+80h] [ebp-20h]
  int v56; // [esp+84h] [ebp-1Ch]
  float v57; // [esp+88h] [ebp-18h]
  float v58; // [esp+8Ch] [ebp-14h]
  float v59; // [esp+90h] [ebp-10h] BYREF
  float v60; // [esp+94h] [ebp-Ch]
  float v61; // [esp+98h] [ebp-8h]
  float v62; // [esp+9Ch] [ebp-4h]
  int v63; // [esp+A8h] [ebp+8h]

  v3 = *(float **)(216 * a2 + a1 + 168);
  v51 = a1 + 216 * a2;
  if ( v3 )
    v3 = (float *)((char *)v3 + 216 * a2 + a1);
  v4 = *(_DWORD *)(a3 + 4);
  v5 = (_DWORD *)(216 * *(_DWORD *)v3 + a1 + 4);
  v6 = *((_DWORD *)v3 + 1);
  v7 = v4 + 48 * *(_DWORD *)v3;
  v8 = *(float *)(v7 + 4 * v6);
  if ( *v5 == -1 )
  {
    v52 = *(float *)(v7 + 4 * v6);
    v12 = *((_DWORD *)v3 + 1);
    v10 = *(float *)(v7 + 4 * v12 + 16);
    v53 = *(float *)(v7 + 4 * v12 + 16);
    v13 = *((_DWORD *)v3 + 1);
    v14 = *(float *)(v7 + 4 * v13 + 32);
    v54 = *(float *)(v7 + 4 * v13 + 32);
    v15 = v14;
    v11 = v8;
    v9 = v15;
  }
  else
  {
    v50[0] = *(float *)(v7 + 4 * v6);
    v50[1] = *(float *)(v7 + 4 * v6 + 16);
    v50[2] = *(float *)(v7 + 4 * v6 + 32);
    sub_101ED980(v50, v4 + 48 * *v5, &v52);
    v9 = v54;
    v10 = v53;
    v11 = v52;
  }
  v16 = v11;
  v58 = v11;
  v17 = v10;
  v57 = v10;
  v62 = v9;
  if ( v11 < 0.0 )
  {
    v56 = (int)(v3 + 24);
    v19 = v3 + 5;
    v58 = -v11;
    v16 = -v11;
    v18 = 0.0;
  }
  else
  {
    v18 = 0.0;
    v56 = (int)(v3 + 20);
    v19 = v3 + 2;
  }
  v20 = v10;
  v21 = v9;
  if ( v20 < v18 )
  {
    v22 = (int)(v3 + 32);
    v17 = -v20;
    v23 = v3 + 11;
    v57 = -v20;
  }
  else
  {
    v22 = (int)(v3 + 28);
    v23 = v3 + 8;
  }
  v24 = v17;
  v25 = v9;
  v26 = v24;
  if ( v25 < v18 )
  {
    v27 = (int)(v3 + 40);
    v63 = (int)(v3 + 40);
    v28 = v3 + 17;
    v62 = -v25;
    v21 = -v25;
  }
  else
  {
    v27 = (int)(v3 + 36);
    v63 = (int)(v3 + 36);
    v28 = v3 + 14;
  }
  v29 = v16;
  v30 = v26 + v16;
  v31 = v29;
  if ( v30 <= v18 )
  {
    v46 = v18;
    sub_101F0F00(v27, v27, v46, (int)v49);
    v59 = *v28;
    v60 = v28[1];
    v43 = v28[2];
  }
  else
  {
    v55 = 1.0 / (v21 + v30);
    v45 = v31 / v30;
    sub_101F0F00(v22, v56, v45, (int)v48);
    v62 = v55 * v62;
    sub_101F0F00((int)v48, v63, v62, (int)v49);
    v32 = v58 * v55;
    v33 = *v19 * v32;
    v59 = v33;
    v34 = v19[1] * v32;
    v60 = v34;
    v35 = v34;
    v36 = v32 * v19[2];
    v61 = v36;
    v37 = v36;
    v38 = v55 * v57;
    v39 = v33 + v38 * *v23;
    v59 = v39;
    v40 = v39;
    v41 = v35 + v23[1] * v38;
    v60 = v41;
    v42 = v37 + v38 * v23[2];
    v61 = v42;
    v59 = v40 + v62 * *v28;
    v60 = v41 + v28[1] * v62;
    v43 = v42 + v62 * v28[2];
  }
  v61 = v43;
  sub_101F0F40(v49, &v59, v47);
  return sub_101EDC00(*(_DWORD *)(a3 + 4) + 48 * *(_DWORD *)(v51 + 4), v47, *(_DWORD *)(a3 + 4) + 48 * a2);
}
