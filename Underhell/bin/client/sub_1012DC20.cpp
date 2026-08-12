void __cdecl sub_1012DC20(int a1, float *a2, float *a3, float a4, char a5, float *a6, _DWORD **a7, float *a8)
{
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  void (__thiscall *v14)(int, int, _BYTE *, float *); // edx
  float *v15; // eax
  _DWORD *v16; // ecx
  double v17; // st7
  float *v18; // eax
  float *v19; // eax
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st5
  double v24; // st4
  double v25; // rt0
  double v26; // st4
  double v27; // st5
  double v28; // st7
  double v29; // st7
  double v30; // st6
  double v31; // st7
  double v32; // st6
  double v33; // st7
  double v34; // st6
  double v35; // st4
  double v36; // st5
  double v37; // rtt
  double v38; // st7
  double v39; // st7
  double v40; // st7
  long double v41; // st7
  float v42; // edx
  float v43; // eax
  double v44; // st7
  double v45; // st6
  double v46; // st6
  double v47; // st7
  _BYTE v48[48]; // [esp+2Ch] [ebp-124h] BYREF
  _BYTE v49[48]; // [esp+5Ch] [ebp-F4h] BYREF
  _BYTE v50[48]; // [esp+8Ch] [ebp-C4h] BYREF
  _BYTE v51[48]; // [esp+BCh] [ebp-94h] BYREF
  _BYTE v52[48]; // [esp+ECh] [ebp-64h] BYREF
  _BYTE v53[12]; // [esp+11Ch] [ebp-34h] BYREF
  float v54; // [esp+128h] [ebp-28h] BYREF
  float v55; // [esp+12Ch] [ebp-24h]
  float v56; // [esp+134h] [ebp-1Ch] BYREF
  float v57; // [esp+138h] [ebp-18h]
  float v58; // [esp+13Ch] [ebp-14h]
  int v59; // [esp+140h] [ebp-10h]
  float v60; // [esp+144h] [ebp-Ch] BYREF
  float v61; // [esp+148h] [ebp-8h]
  float v62; // [esp+14Ch] [ebp-4h]
  int v63; // [esp+158h] [ebp+8h]
  int v64; // [esp+160h] [ebp+10h]
  float v65; // [esp+164h] [ebp+14h]
  char v66; // [esp+167h] [ebp+17h]
  int v67; // [esp+170h] [ebp+20h]

  a3[2] = 0.0;
  v10 = __RTDynamicCast(
          (int)*a7,
          0,
          (struct _s_RTTICompleteObjectLocator *)&C_BaseAnimating `RTTI Type Descriptor',
          (int)&C_PropVehicleDriveable `RTTI Type Descriptor',
          0);
  v11 = v10;
  if ( v10 && *(_BYTE *)(v10 + 1964) )
    v12 = (*(int (__thiscall **)(_DWORD *, const char *))((*a7)[1] + 140))(*a7 + 1, "vehicle_gunner_eyes");
  else
    v12 = (*(int (__thiscall **)(_DWORD *, const char *))((*a7)[1] + 140))(*a7 + 1, "vehicle_driver_eyes");
  v13 = (int)*a7;
  v14 = *(void (__thiscall **)(int, int, _BYTE *, float *))((*a7)[1] + 148);
  v59 = v12;
  v14(v13 + 4, v12, v53, &v60);
  sub_101EE440(&v60);
  v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 536))(a1);
  *a3 = *v15;
  a3[1] = v15[1];
  a3[2] = v15[2];
  if ( *(_DWORD *)(dword_10434C74 + 48) && *((_BYTE *)a7 + 60) && v11 )
    (*(void (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v11 + 744))(v11, v53, &v60);
  if ( LOBYTE(a4) || a5 )
  {
    v66 = 1;
    if ( !*((_BYTE *)a7 + 62) )
    {
      v16 = *a7;
      *((_BYTE *)a7 + 61) = 1;
      v17 = *((float *)off_103DC81C + 3);
      a7[16] = *((_DWORD **)off_103DC81C + 3);
      sub_1000B780(v16, v16[452]);
      *((float *)a7 + 17) = v17;
      v18 = (float *)sub_10135720();
      a7[21] = *(_DWORD **)v18;
      a7[22] = *((_DWORD **)v18 + 1);
      a7[23] = *((_DWORD **)v18 + 2);
      v19 = (float *)sub_10135730();
      a7[18] = *(_DWORD **)v19;
      a7[19] = *((_DWORD **)v19 + 1);
      a7[20] = *((_DWORD **)v19 + 2);
      v20 = v60;
      sub_101F0610(v60, *((float *)a7 + 18));
      *((float *)a7 + 24) = v20;
      v21 = v61;
      sub_101F0610(v61, *((float *)a7 + 19));
      *((float *)a7 + 25) = v21;
      v22 = v62;
      sub_101F0610(v62, *((float *)a7 + 20));
      *((float *)a7 + 26) = v22;
      a7[27] = a7[24];
      a7[28] = a7[25];
      a7[29] = a7[26];
    }
  }
  else
  {
    v66 = 0;
  }
  *(float *)&v67 = 0.0;
  *((_BYTE *)a7 + 62) = v66;
  *(float *)&v64 = 0.0;
  if ( v66 || *((_BYTE *)a7 + 61) )
  {
    *a3 = v60;
    a3[1] = v61;
    a3[2] = v62;
    v23 = *((float *)off_103DC81C + 3) - *((float *)a7 + 16);
    v24 = v23 / *((float *)a7 + 17);
    *(float *)&v67 = v24;
    if ( v24 <= 1.0 )
    {
      if ( v24 >= 0.0 )
      {
LABEL_21:
        v25 = v24;
        v26 = v23 / (*((float *)a7 + 17) * 0.85000002);
        v27 = v25;
        *(float *)&v64 = v26;
        if ( v26 <= 1.0 )
        {
          v28 = v27;
          if ( v26 < 0.0 )
            *(float *)&v64 = 0.0;
        }
        else
        {
          v28 = v27;
          *(float *)&v64 = 1.0;
        }
        if ( v28 >= 1.0 )
        {
          *((_BYTE *)a7 + 61) = 0;
          if ( !a5 )
          {
            sub_10026820(*a7, v59, &v56, (int)&v54);
            (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, &v54);
          }
        }
        goto LABEL_28;
      }
      v24 = 0.0;
    }
    else
    {
      v24 = 1.0;
    }
    *(float *)&v67 = v24;
    goto LABEL_21;
  }
LABEL_28:
  sub_101EE440(a3);
  sub_101F0AB0(v52, v49);
  sub_101EDC00(v49, v50, v48);
  if ( *((_BYTE *)a7 + 4) )
    sub_1012DB00((int)a7, COERCE_FLOAT(&v60));
  sub_101F0B70(&v60, v53, v52);
  sub_101EDC00(v52, v48, v51);
  sub_101ED7B0(v51, a3);
  sub_101EDA00(v51, 3, a2);
  v63 = *(int *)(dword_1044CC6C + 44);
  if ( v66 || *((_BYTE *)a7 + 61) )
  {
    v29 = *(float *)&v67;
    v30 = v29 * v29;
    if ( v29 * v29 * 3.0 - v29 * v29 * 2.0 * *(float *)&v67 <= 1.0 )
    {
      if ( v30 * 3.0 - v30 * 2.0 * v29 >= 0.0 )
      {
        v35 = 2.0 * v30;
        v36 = 3.0 * v30;
        v34 = 1.0;
        v33 = v36 - v29 * v35;
      }
      else
      {
        v33 = 0.0;
        v34 = 1.0;
      }
      v37 = v34;
      v32 = v33;
      v31 = v37;
    }
    else
    {
      v31 = 1.0;
      v32 = 1.0;
    }
    v65 = v32;
    v38 = v31 - v32;
    v56 = v38 * *((float *)a7 + 24);
    v57 = *((float *)a7 + 25) * v38;
    v58 = v38 * *((float *)a7 + 26);
    v39 = v60;
    sub_101F0610(v60, *((float *)a7 + 18));
    v54 = v39;
    v40 = v61;
    sub_101F0610(v61, *((float *)a7 + 19));
    v55 = v40;
    v41 = v62;
    sub_101F0610(v62, *((float *)a7 + 20));
    if ( fabs(*((float *)a7 + 27)) > fabs(v54) )
      *((float *)a7 + 27) = v54;
    if ( fabs(*((float *)a7 + 27)) > fabs(v56) )
      *((float *)a7 + 27) = v56;
    if ( fabs(*((float *)a7 + 28)) > fabs(v55) )
      *((float *)a7 + 28) = v55;
    if ( fabs(*((float *)a7 + 28)) > fabs(v57) )
      *((float *)a7 + 28) = v57;
    if ( fabs(*((float *)a7 + 29)) > fabs(v41) )
      *((float *)a7 + 29) = v41;
    if ( fabs(*((float *)a7 + 29)) > fabs(v58) )
      *((float *)a7 + 29) = v58;
    *a3 = *a3 - *((float *)a7 + 27);
    a3[1] = a3[1] - *((float *)a7 + 28);
    a3[2] = a3[2] - *((float *)a7 + 29);
    a7[18] = *(_DWORD **)a3;
    a7[19] = *((_DWORD **)a3 + 1);
    a7[20] = *((_DWORD **)a3 + 2);
    v42 = a2[1];
    v43 = a2[2];
    v60 = *a2;
    v61 = v42;
    v62 = v43;
    if ( a5 )
    {
      v44 = v62 + (a6[2] - v62) * v65;
      v45 = v61 + (a6[1] - v61) * v65;
      *a2 = v60 + (*a6 - v60) * v65;
      a2[1] = v45;
      a2[2] = v44;
      if ( a8 && *(float *)&v63 < (double)*((float *)a7 + 6) )
        *a8 = (*(float *)&v63 - *((float *)a7 + 6)) * *(float *)&v64 + *((float *)a7 + 6);
    }
    else
    {
      v46 = (v61 - *((float *)a7 + 22)) * v65 + *((float *)a7 + 22);
      v47 = (v62 - *((float *)a7 + 23)) * v65 + *((float *)a7 + 23);
      *a2 = (v60 - *((float *)a7 + 21)) * v65 + *((float *)a7 + 21);
      a2[1] = v46;
      a2[2] = v47;
      if ( a8 && *(float *)&v63 < (double)*((float *)a7 + 6) )
        *a8 = *(float *)&v63 + (*((float *)a7 + 6) - *(float *)&v63) * *(float *)&v64;
    }
  }
  else if ( a8 )
  {
    if ( *(float *)(dword_1044CC6C + 44) < (double)*((float *)a7 + 6) )
      *a8 = *((float *)a7 + 6);
  }
}
