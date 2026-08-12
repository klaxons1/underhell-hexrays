bool __thiscall sub_1008F280(_DWORD *this, int a2, float *a3, int a4, float a5, int a6, float *a7)
{
  int v8; // ecx
  bool result; // al
  double v11; // st7
  int v12; // eax
  double v13; // st7
  double v14; // st7
  double v15; // st7
  bool v16; // zf
  double v17; // st7
  double v18; // st6
  int v19; // esi
  double v20; // st5
  double v21; // st4
  double v22; // st7
  double v23; // st3
  double v24; // st2
  double v25; // st1
  double v26; // rt0
  double v27; // st2
  double v28; // st7
  double v29; // st5
  double v30; // st4
  double v31; // st6
  double v32; // st3
  double v33; // st1
  double v34; // rtt
  double v35; // st1
  int v36; // ebx
  float *v37; // esi
  float *v38; // edi
  double v39; // st4
  double v40; // st7
  double v41; // st3
  double v42; // st5
  double v43; // st2
  double v44; // st7
  float *v45; // eax
  double v46; // st7
  float *v47; // eax
  double v48; // st7
  int v49; // [esp+4h] [ebp-D4h]
  float v50[14]; // [esp+18h] [ebp-C0h] BYREF
  float v51[2]; // [esp+50h] [ebp-88h] BYREF
  float v52[10]; // [esp+58h] [ebp-80h] BYREF
  float v53[6]; // [esp+80h] [ebp-58h] BYREF
  float v54; // [esp+98h] [ebp-40h]
  _DWORD *v55; // [esp+9Ch] [ebp-3Ch]
  float v56; // [esp+A0h] [ebp-38h]
  float v57; // [esp+A8h] [ebp-30h]
  float v58; // [esp+ACh] [ebp-2Ch]
  int v59; // [esp+B0h] [ebp-28h] BYREF
  float v60; // [esp+B4h] [ebp-24h]
  float v61; // [esp+B8h] [ebp-20h]
  float v62; // [esp+BCh] [ebp-1Ch]
  float v63; // [esp+C0h] [ebp-18h]
  float v64; // [esp+C4h] [ebp-14h]
  float v65; // [esp+C8h] [ebp-10h]
  float v66; // [esp+CCh] [ebp-Ch]
  float v67; // [esp+D0h] [ebp-8h]
  float v68; // [esp+D4h] [ebp-4h]
  int v69; // [esp+E8h] [ebp+10h]
  int v70; // [esp+E8h] [ebp+10h]
  int v71; // [esp+ECh] [ebp+14h]

  v8 = *(_DWORD *)(this[1] + 248) >> 4;
  v55 = this;
  if ( (v8 & 1) != 0 )
    return 0;
  v66 = *(float *)a4 - *a3;
  v67 = *(float *)(a4 + 4) - a3[1];
  v68 = *(float *)(a4 + 8) - a3[2];
  v11 = off_10689714();
  *(float *)&v69 = v11;
  if ( a2 == 2 || v11 <= 384.0 )
  {
    v59 = *(int *)a4;
    v60 = *(float *)(a4 + 4);
    v61 = *(float *)(a4 + 8);
  }
  else
  {
    v12 = this[1];
    *(float *)&v59 = v66 * 384.0;
    v60 = v67 * 384.0;
    v61 = v68 * 384.0;
    *(float *)&v69 = 384.0;
    result = sub_1007C550(*(_DWORD **)(v12 + 2600), a2, (float *)&v59, (float *)a4, 33701899, a6, 100.0, 0, 0);
    if ( !result )
      return result;
  }
  if ( 1.0 - fabs(v68) <= 0.001 )
  {
    v57 = 1.0;
    v58 = 0.0;
    v64 = 0.0;
    v65 = 0.0;
    v63 = 1.0;
  }
  else
  {
    v57 = 0.0;
    v58 = 1.0;
    v13 = v68 * 0.0;
    v63 = v67 - v13;
    v64 = v13 - v66;
    v65 = v66 * 0.0 - 0.0 * v67;
  }
  v14 = sub_10073790(*(_DWORD *)(this[1] + 1676));
  v49 = *(_DWORD *)(this[1] + 1676);
  v54 = v14 * 0.5;
  v15 = sub_100737D0(v49);
  v16 = (*(_DWORD *)(this[1] + 236) & 0x8000) == 0;
  v56 = v15 * 0.5;
  if ( !v16 )
    sub_1008DD90(this + 2);
  v17 = v54;
  v18 = a5 + v54;
  if ( *(float *)&v69 < v18 )
    v18 = *(float *)&v69;
  v19 = 2;
  v20 = v63 * v17;
  v21 = v64 * v17;
  v22 = v17 * v65;
  v23 = v66 * v18 + *a3;
  v24 = v67 * v18 + a3[1];
  v25 = v18 * v68 + a3[2];
  v51[0] = v23 - v20;
  v51[1] = v24 - v21;
  v52[0] = v25 - v22;
  v52[1] = v23 + v20;
  v52[2] = v24 + v21;
  v52[3] = v25 + v22;
  v53[0] = v20 * 2.0;
  v53[1] = v21 * 2.0;
  v26 = v24;
  v27 = v22;
  v28 = v26;
  v29 = v23;
  v53[2] = 2.0 * v27;
  v30 = v18;
  v31 = v25;
  v63 = v30;
  v62 = v30;
  if ( a2 == 2 )
  {
    v19 = 4;
    v32 = v56 * 3.0;
    v53[3] = 0.0 * v32;
    v33 = v57 * v32;
    v53[4] = v33;
    v34 = v33;
    v35 = v32 * v58;
    v53[5] = v35;
    v52[4] = v29 - 0.0 * v32;
    v52[5] = v28 - v34;
    v52[6] = v31 - v35;
    v52[7] = v29 + 0.0 * v32;
    v52[8] = v28 + v34;
    v52[9] = v31 + v35;
    v65 = v30;
    v64 = v65;
  }
  memset(v50, 0, sizeof(v50));
  v70 = 0;
  v71 = v19 - 1;
  while ( 1 )
  {
    v36 = v71;
    if ( v71 >= 0 )
      break;
LABEL_29:
    if ( ++v70 >= 2 )
      return 0;
  }
  v37 = &v52[3 * v71];
  while ( 1 )
  {
    v38 = v37 - 2;
    if ( sub_1008F1B0(v55, a2, a3, v37 - 2, (float *)&v59, a6, v50) )
      break;
    if ( v50[0] < 0.0 )
    {
      v39 = v67;
      v40 = v68;
      v41 = (v50[3] - a3[2]) * v68 + (v50[1] - *a3) * v66 + (v50[2] - a3[1]) * v67;
      v42 = *(&v62 + v36);
      if ( v41 < v42 )
        v42 = v41;
      v43 = v42 - *(&v62 + v36);
      *v38 = v66 * v43 + *v38;
      *(v37 - 1) = v39 * v43 + *(v37 - 1);
      *v37 = v40 * v43 + *v37;
      *(&v62 + v36) = v42;
    }
    v44 = *v38;
    v45 = &v53[3 * (v36 >> 1)];
    if ( (v36 & 1) != 0 )
    {
      *v38 = v44 + *v45;
      *(v37 - 1) = v45[1] + *(v37 - 1);
      v46 = v45[2] + *v37;
    }
    else
    {
      *v38 = v44 - *v45;
      *(v37 - 1) = *(v37 - 1) - v45[1];
      v46 = *v37 - v45[2];
    }
    *v37 = v46;
    v37 -= 3;
    if ( --v36 < 0 )
      goto LABEL_29;
  }
  v47 = &v51[3 * v36];
  *a7 = *v47;
  a7[1] = v47[1];
  v48 = v47[2];
  result = 1;
  a7[2] = v48;
  return result;
}
