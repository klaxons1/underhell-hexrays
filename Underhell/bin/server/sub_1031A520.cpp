void __userpurge sub_1031A520(int a1@<ecx>, int a2@<edi>, float *a3, float a4, float a5, float a6, float *a7)
{
  int v8; // ecx
  double v9; // st7
  double v10; // st7
  double v11; // st7
  int v12; // edx
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  long double v17; // st7
  double v18; // st5
  double v19; // st6
  long double v20; // st6
  long double v21; // st7
  int v22; // eax
  int v23; // eax
  double v24; // st7
  double v25; // st6
  void (__thiscall *v26)(int, _BYTE *); // edx
  double v27; // st7
  unsigned int v28; // eax
  double v29; // st7
  double v30; // st6
  float v31; // ecx
  double v32; // st4
  float v33; // edx
  double v34; // st3
  double v35; // st5
  double v36; // st2
  double v37; // rt1
  double v38; // st1
  double v39; // rt2
  double v40; // st1
  double v41; // st2
  double v42; // st2
  double v43; // st1
  double v44; // rt1
  _BYTE v45[12]; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v46[12]; // [esp+24h] [ebp-60h] BYREF
  float v47[3]; // [esp+30h] [ebp-54h] BYREF
  float v48[3]; // [esp+3Ch] [ebp-48h] BYREF
  float v49; // [esp+48h] [ebp-3Ch]
  float v50; // [esp+4Ch] [ebp-38h]
  float v51; // [esp+50h] [ebp-34h]
  int v52; // [esp+54h] [ebp-30h] BYREF
  float v53; // [esp+58h] [ebp-2Ch]
  float v54; // [esp+5Ch] [ebp-28h]
  float v55; // [esp+60h] [ebp-24h]
  float v56; // [esp+64h] [ebp-20h]
  float v57; // [esp+68h] [ebp-1Ch]
  int v58; // [esp+6Ch] [ebp-18h] BYREF
  float v59; // [esp+70h] [ebp-14h]
  float v60; // [esp+74h] [ebp-10h]
  float v61; // [esp+78h] [ebp-Ch] BYREF
  float v62; // [esp+7Ch] [ebp-8h]
  float v63; // [esp+80h] [ebp-4h]
  int v64; // [esp+8Ch] [ebp+8h]
  float v65; // [esp+98h] [ebp+14h]

  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v8 = *(_DWORD *)(a1 + 252) >> 12;
  v49 = *a3 - *(float *)(a1 + 580);
  v50 = a3[1] - *(float *)(a1 + 584);
  v51 = a3[2] - *(float *)(a1 + 588);
  if ( (v8 & 1) != 0 )
    sub_100DAFD0(a1);
  v9 = v49 - *(float *)(a1 + 476);
  *a7 = v9 + v9;
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v10 = v50 - *(float *)(a1 + 480);
  a7[1] = v10 + v10;
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v11 = v51 - *(float *)(a1 + 484);
  a7[2] = v11 + v11 + 384.0;
  *(float *)&v64 = 0.0;
  if ( a6 != 0.0 )
  {
    sub_100B6940(a1, (float *)&v58);
    if ( 0.0 != a4 )
    {
      v12 = *(_DWORD *)(a1 + 252);
      v52 = v58;
      v53 = v59;
      v54 = a4 + v60;
      if ( (v12 & 0x800) != 0 )
        sub_100DAE60(a1);
      sub_10424670(a1 + 580, &v58, &v52, v48, 0);
      v58 = SLODWORD(v48[0]);
      v59 = v48[1];
      v60 = v48[2];
    }
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v55 = *(float *)&v58 - *(float *)(a1 + 580);
    v56 = v59 - *(float *)(a1 + 584);
    v57 = v60 - *(float *)(a1 + 588);
    v13 = off_10689714();
    *(float *)&v64 = v13;
    if ( a6 < v13 )
    {
      v14 = (v13 - a6) * 0.0049999999;
      if ( v14 <= 1.0 )
      {
        if ( v14 < 0.0 )
          v14 = 0.0;
      }
      else
      {
        v14 = 1.0;
      }
      v15 = v14 * 200.0;
      *a7 = v55 * v15 + *a7;
      a7[1] = v56 * v15 + a7[1];
      a7[2] = v15 * v57 + a7[2];
    }
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x80000) == 0 )
  {
    sub_10318800(a1, 350.0, COERCE_INT(2.0), (float *)&v52);
    *a7 = *a7 + *(float *)&v52;
    a7[1] = v53 + a7[1];
    a7[2] = a7[2] + v54;
    sub_10318A30(a1, 350.0, 2.0, (float *)&v52);
    *a7 = *a7 + *(float *)&v52;
    a7[1] = v53 + a7[1];
    a7[2] = a7[2] + v54;
  }
  v16 = 768.0;
  if ( a7[2] <= 768.0 )
  {
    v16 = 76.800003;
    if ( a7[2] >= 76.800003 )
      v16 = a7[2];
  }
  a7[2] = v16;
  v17 = (fabs(*a7) + fabs(a7[1])) * 0.1;
  v65 = v17;
  v18 = v51;
  if ( v51 <= -500.0 )
  {
    if ( v18 < -1000.0 )
      v18 = -1000.0;
  }
  else
  {
    v18 = -500.0;
  }
  v19 = (v18 - -500.0) * -0.0020000001;
  v20 = (3.0 * (v19 * v19) - v19 * (v19 * v19 + v19 * v19)) * (192.0 - v17) + v17;
  if ( 0.0 != v20 )
  {
    v21 = v20 / v17;
    if ( v21 < 1.0 )
    {
      *a7 = *a7 * v21;
      a7[1] = v21 * a7[1];
      v65 = v20;
    }
  }
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *, float *, int))(*(_DWORD *)a1 + 528))(a1, v45, v46, v47, a2);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    && (v22 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 320))(v22))
    && (v23 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
        (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 1096))(v23)) )
  {
    v24 = 0.2;
  }
  else
  {
    v24 = 0.80000001;
  }
  v25 = *(float *)(a1 + 3788) * v24;
  v26 = *(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 2284);
  *(float *)(a1 + 3788) = v25;
  v27 = (1.0 - v24) * ((a7[2] + v65) * 0.1) + v25;
  *(float *)(a1 + 3788) = v27;
  v61 = v47[0] * v27;
  v62 = v47[1] * v27;
  v63 = v27 * v47[2];
  v26(a1, v46);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 2288))(a1);
  if ( *(_BYTE *)(a1 + 224) != 1
    || (v28 = *(_DWORD *)(a1 + 4332), v28 != -1)
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 4332) & 0xFFF) + 2] == v28 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 4332) & 0xFFF) + 1] )
  {
    v29 = v63 - 38.400002;
    v63 = v29;
    if ( 0.0 == a5 || a5 >= (double)*(float *)&v64 )
      goto LABEL_53;
    if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    {
      sub_100DAFD0(a1);
      v29 = v63;
    }
    v30 = v56;
    v31 = *(float *)(a1 + 476);
    v32 = v62;
    v33 = *(float *)(a1 + 480);
    v51 = *(float *)(a1 + 484);
    v34 = v55;
    v49 = v31;
    v50 = v33;
    v35 = v61;
    v36 = v55 * v61 + v56 * v62 + v57 * v29;
    if ( v36 >= 0.0 )
    {
      v42 = v57;
    }
    else
    {
      v37 = v36 * -0.1;
      v38 = v35 + v34 * v37;
      v61 = v38;
      v39 = v38;
      v40 = v32 + v30 * v37;
      v62 = v40;
      v41 = v29 + v37 * v57;
      v63 = v41;
      v29 = v41;
      v35 = v39;
      v42 = v57;
      v32 = v40;
    }
    v43 = v50 * v30 + v49 * v34 + v51 * v42;
    if ( v43 >= 0.0 )
    {
LABEL_53:
      sub_100EA150(a1, &v61);
    }
    else
    {
      v44 = v43 * -0.1;
      v61 = v35 + v34 * v44;
      v62 = v32 + v30 * v44;
      v63 = v29 + v44 * v42;
      sub_100EA150(a1, &v61);
    }
  }
  else
  {
    v63 = -38.400002;
    v61 = v61 * 0.1;
    v62 = 0.1 * v62;
    sub_100EA150(a1, &v61);
  }
}
