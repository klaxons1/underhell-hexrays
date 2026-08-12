void __cdecl sub_10271140(_DWORD *a1, float *a2, float *a3, float a4, char a5, float *a6, _DWORD **a7, float *a8)
{
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  void *v13; // ecx
  float *v14; // eax
  _DWORD *v15; // ecx
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st5
  double v21; // st4
  double v22; // rt0
  double v23; // st4
  double v24; // st5
  double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st6
  double v29; // st7
  double v30; // st6
  double v31; // st7
  double v32; // st6
  double v33; // st4
  double v34; // st5
  double v35; // rtt
  double v36; // st7
  double v37; // st7
  double v38; // st7
  long double v39; // st7
  float v40; // edx
  float v41; // eax
  double v42; // st7
  double v43; // st6
  double v44; // st6
  double v45; // st7
  _BYTE v46[48]; // [esp+1Ch] [ebp-124h] BYREF
  _BYTE v47[48]; // [esp+4Ch] [ebp-F4h] BYREF
  _BYTE v48[48]; // [esp+7Ch] [ebp-C4h] BYREF
  _BYTE v49[48]; // [esp+ACh] [ebp-94h] BYREF
  _BYTE v50[48]; // [esp+DCh] [ebp-64h] BYREF
  _BYTE v51[12]; // [esp+10Ch] [ebp-34h] BYREF
  float v52; // [esp+118h] [ebp-28h] BYREF
  float v53; // [esp+11Ch] [ebp-24h]
  float v54; // [esp+124h] [ebp-1Ch] BYREF
  float v55; // [esp+128h] [ebp-18h]
  float v56; // [esp+12Ch] [ebp-14h]
  int v57; // [esp+130h] [ebp-10h]
  float v58; // [esp+134h] [ebp-Ch] BYREF
  float v59; // [esp+138h] [ebp-8h]
  float v60; // [esp+13Ch] [ebp-4h]
  int v61; // [esp+148h] [ebp+8h]
  int v62; // [esp+150h] [ebp+10h]
  float v63; // [esp+154h] [ebp+14h]
  char v64; // [esp+157h] [ebp+17h]
  int v65; // [esp+160h] [ebp+20h]

  a3[2] = 0.0;
  v10 = __RTDynamicCast(
          (int)*a7,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseAnimating `RTTI Type Descriptor',
          (int)&CPropVehicleDriveable `RTTI Type Descriptor',
          0);
  v11 = v10;
  if ( v10 && *(_BYTE *)(v10 + 1690) )
    v12 = sub_100BEF30((int)*a7, "vehicle_gunner_eyes");
  else
    v12 = sub_100BEF30((int)*a7, "vehicle_driver_eyes");
  v13 = *a7;
  v57 = v12;
  sub_100BCCA0(v13, v12, (int)v51, (int)&v58);
  sub_104227F0(&v58);
  v14 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 508))(a1);
  *a3 = *v14;
  a3[1] = v14[1];
  a3[2] = v14[2];
  if ( *(_DWORD *)(dword_106B753C + 48) && *((_BYTE *)a7 + 60) && v11 )
    (*(void (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v11 + 840))(v11, v51, &v58);
  if ( LOBYTE(a4) || a5 )
  {
    v64 = 1;
    if ( !*((_BYTE *)a7 + 62) )
    {
      v15 = *a7;
      *((_BYTE *)a7 + 61) = 1;
      v16 = *(float *)(dword_106B31C8 + 12);
      a7[16] = *(_DWORD **)(dword_106B31C8 + 12);
      sub_10019B30(v15, v15[227]);
      *((float *)a7 + 17) = v16;
      v17 = v58;
      sub_10424C10(v58, *((float *)a7 + 18));
      *((float *)a7 + 24) = v17;
      v18 = v59;
      sub_10424C10(v59, *((float *)a7 + 19));
      *((float *)a7 + 25) = v18;
      v19 = v60;
      sub_10424C10(v60, *((float *)a7 + 20));
      *((float *)a7 + 26) = v19;
      a7[27] = a7[24];
      a7[28] = a7[25];
      a7[29] = a7[26];
    }
  }
  else
  {
    v64 = 0;
  }
  *(float *)&v65 = 0.0;
  *((_BYTE *)a7 + 62) = v64;
  *(float *)&v62 = 0.0;
  if ( v64 || *((_BYTE *)a7 + 61) )
  {
    *a3 = v58;
    a3[1] = v59;
    a3[2] = v60;
    v20 = *(float *)(dword_106B31C8 + 12) - *((float *)a7 + 16);
    v21 = v20 / *((float *)a7 + 17);
    *(float *)&v65 = v21;
    if ( v21 <= 1.0 )
    {
      if ( v21 >= 0.0 )
      {
LABEL_21:
        v22 = v21;
        v23 = v20 / (*((float *)a7 + 17) * 0.85000002);
        v24 = v22;
        *(float *)&v62 = v23;
        if ( v23 <= 1.0 )
        {
          v25 = v24;
          if ( v23 < 0.0 )
            *(float *)&v62 = 0.0;
        }
        else
        {
          v25 = v24;
          *(float *)&v62 = 1.0;
        }
        if ( v25 >= 1.0 )
        {
          *((_BYTE *)a7 + 61) = 0;
          if ( !a5 )
            sub_100BF1E0(*a7, v57, (int)&v54, (int)&v52);
        }
        goto LABEL_28;
      }
      v21 = 0.0;
    }
    else
    {
      v21 = 1.0;
    }
    *(float *)&v65 = v21;
    goto LABEL_21;
  }
LABEL_28:
  sub_104227F0(a3);
  sub_10424F80(v50, v47);
  sub_10421E30(v47, v48, v46);
  if ( *((_BYTE *)a7 + 4) )
    sub_10271020((int)a7, COERCE_FLOAT(&v58));
  sub_10425040(&v58, v51, v50);
  sub_10421E30(v50, v46, v49);
  sub_10421A90(v49, a3);
  sub_10421CE0(v49, 3, a2);
  v26 = (double)sub_100F5E70(a1);
  *(float *)&v61 = v26;
  if ( v64 || *((_BYTE *)a7 + 61) )
  {
    v27 = *(float *)&v65;
    v28 = v27 * v27;
    if ( v27 * v27 * 3.0 - v27 * v27 * 2.0 * *(float *)&v65 <= 1.0 )
    {
      if ( v28 * 3.0 - v28 * 2.0 * v27 >= 0.0 )
      {
        v33 = 2.0 * v28;
        v34 = 3.0 * v28;
        v32 = 1.0;
        v31 = v34 - v27 * v33;
      }
      else
      {
        v31 = 0.0;
        v32 = 1.0;
      }
      v35 = v32;
      v30 = v31;
      v29 = v35;
    }
    else
    {
      v29 = 1.0;
      v30 = 1.0;
    }
    v63 = v30;
    v36 = v29 - v30;
    v54 = v36 * *((float *)a7 + 24);
    v55 = *((float *)a7 + 25) * v36;
    v56 = v36 * *((float *)a7 + 26);
    v37 = v58;
    sub_10424C10(v58, *((float *)a7 + 18));
    v52 = v37;
    v38 = v59;
    sub_10424C10(v59, *((float *)a7 + 19));
    v53 = v38;
    v39 = v60;
    sub_10424C10(v60, *((float *)a7 + 20));
    if ( fabs(*((float *)a7 + 27)) > fabs(v52) )
      *((float *)a7 + 27) = v52;
    if ( fabs(*((float *)a7 + 27)) > fabs(v54) )
      *((float *)a7 + 27) = v54;
    if ( fabs(*((float *)a7 + 28)) > fabs(v53) )
      *((float *)a7 + 28) = v53;
    if ( fabs(*((float *)a7 + 28)) > fabs(v55) )
      *((float *)a7 + 28) = v55;
    if ( fabs(*((float *)a7 + 29)) > fabs(v39) )
      *((float *)a7 + 29) = v39;
    if ( fabs(*((float *)a7 + 29)) > fabs(v56) )
      *((float *)a7 + 29) = v56;
    *a3 = *a3 - *((float *)a7 + 27);
    a3[1] = a3[1] - *((float *)a7 + 28);
    a3[2] = a3[2] - *((float *)a7 + 29);
    a7[18] = *(_DWORD **)a3;
    a7[19] = *((_DWORD **)a3 + 1);
    a7[20] = *((_DWORD **)a3 + 2);
    v40 = *a2;
    v41 = a2[1];
    v60 = a2[2];
    v58 = v40;
    v59 = v41;
    if ( a5 )
    {
      v42 = v60 + (a6[2] - v60) * v63;
      v43 = v59 + (a6[1] - v59) * v63;
      *a2 = v58 + (*a6 - v58) * v63;
      a2[1] = v43;
      a2[2] = v42;
      if ( a8 && *(float *)&v61 < (double)*((float *)a7 + 6) )
        *a8 = (*(float *)&v61 - *((float *)a7 + 6)) * *(float *)&v62 + *((float *)a7 + 6);
    }
    else
    {
      v44 = (v59 - *((float *)a7 + 22)) * v63 + *((float *)a7 + 22);
      v45 = (v60 - *((float *)a7 + 23)) * v63 + *((float *)a7 + 23);
      *a2 = (v58 - *((float *)a7 + 21)) * v63 + *((float *)a7 + 21);
      a2[1] = v44;
      a2[2] = v45;
      if ( a8 && *(float *)&v61 < (double)*((float *)a7 + 6) )
        *a8 = *(float *)&v61 + (*((float *)a7 + 6) - *(float *)&v61) * *(float *)&v62;
    }
  }
  else if ( a8 )
  {
    if ( v26 < *((float *)a7 + 6) )
      *a8 = *((float *)a7 + 6);
  }
}
