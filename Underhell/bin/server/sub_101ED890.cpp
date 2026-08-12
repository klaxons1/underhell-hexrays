// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_101ED890@<eax>(
        int a1@<ecx>,
        float *a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        int a7)
{
  int *v8; // ecx
  float *result; // eax
  float v10; // edx
  float v11; // ecx
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st5
  double v18; // st4
  double v19; // st6
  double v20; // st4
  int *v21; // ecx
  int v22; // eax
  int v23; // eax
  void (__thiscall *v24)(int, float *, int, _BYTE *); // edx
  int v25; // eax
  int v26; // esi
  int v27; // eax
  void *v28; // esp
  float **v29; // edi
  float v30; // ecx
  float v31; // edx
  float *v32; // edi
  float *v33; // eax
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // rt1
  double v38; // st6
  double v39; // st7
  int v40; // eax
  double v41; // st7
  int v42; // eax
  int (__thiscall *v43)(float *, _BYTE *); // edx
  float v44; // ecx
  float *v45; // eax
  double v46; // st7
  float *v47; // edi
  bool v48; // zf
  int (__thiscall *v49)(int); // eax
  float *v50; // eax
  double v51; // st7
  float *v52; // eax
  double v53; // st6
  double v54; // st7
  _BYTE *v55; // esi
  _BYTE *v56; // eax
  int *v57; // ecx
  _DWORD *v58; // eax
  double v59; // st7
  float *v60; // eax
  float v61; // ecx
  double v62; // st7
  float v64[22]; // [esp+24h] [ebp-14Ch] BYREF
  _BYTE v65[12]; // [esp+7Ch] [ebp-F4h] BYREF
  _BYTE v66[12]; // [esp+88h] [ebp-E8h] BYREF
  _BYTE v67[12]; // [esp+94h] [ebp-DCh] BYREF
  float v68[16]; // [esp+A0h] [ebp-D0h] BYREF
  int v69; // [esp+E0h] [ebp-90h]
  _BYTE v70[12]; // [esp+ECh] [ebp-84h] BYREF
  float v71; // [esp+F8h] [ebp-78h]
  _BYTE v72[16]; // [esp+104h] [ebp-6Ch] BYREF
  float **v73; // [esp+114h] [ebp-5Ch]
  float v74; // [esp+118h] [ebp-58h] BYREF
  float v75; // [esp+11Ch] [ebp-54h]
  float v76; // [esp+120h] [ebp-50h]
  float v77; // [esp+124h] [ebp-4Ch]
  _BYTE *v78; // [esp+128h] [ebp-48h]
  float *v79; // [esp+12Ch] [ebp-44h]
  float v80; // [esp+130h] [ebp-40h] BYREF
  float v81; // [esp+134h] [ebp-3Ch]
  float v82; // [esp+138h] [ebp-38h]
  int v83; // [esp+13Ch] [ebp-34h]
  float v84; // [esp+140h] [ebp-30h]
  float v85; // [esp+144h] [ebp-2Ch] BYREF
  float v86; // [esp+148h] [ebp-28h]
  float v87; // [esp+14Ch] [ebp-24h]
  float v88; // [esp+150h] [ebp-20h] BYREF
  float v89; // [esp+154h] [ebp-1Ch]
  float v90; // [esp+158h] [ebp-18h]
  float *v91; // [esp+15Ch] [ebp-14h]
  float *v92; // [esp+160h] [ebp-10h] BYREF
  float *v93; // [esp+164h] [ebp-Ch] BYREF
  void *v94; // [esp+168h] [ebp-8h]
  void *retaddr; // [esp+170h] [ebp+0h]

  v93 = a2;
  v94 = retaddr;
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 1512))(a1, a3, a4) )
  {
    if ( *(_BYTE *)(a1 + 3316) )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(a1 + 24);
        if ( v8 )
          sub_100194B0(v8, 3316);
      }
      *(_BYTE *)(a1 + 3316) = 0;
    }
LABEL_8:
    result = a5;
    v10 = flt_106F1CB8;
    *a5 = flt_106F1CB4;
    v11 = flt_106F1CBC;
    goto LABEL_9;
  }
  v12 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 508))(a1, v92);
  v13 = *v12;
  v71 = *v12;
  v14 = v12[1];
  v92 = (float *)v65;
  v15 = v13;
  v16 = v12[2];
  v91 = (float *)v66;
  v17 = v15 + *(float *)(a1 + 2304);
  v18 = *(float *)(a1 + 2308);
  v90 = COERCE_FLOAT(&v74);
  v19 = v14 + v18;
  v20 = *(float *)(a1 + 2312);
  v89 = COERCE_FLOAT(&v85);
  v85 = v17 + *(float *)(a1 + 3972);
  v86 = v19 + *(float *)(a1 + 3976);
  v87 = v16 + v20 + *(float *)(a1 + 3980);
  sub_104222B0(&v85, &v74, v66, v65);
  v80 = v74;
  v81 = v75;
  v79 = 0;
  v78 = (_BYTE *)(a1 + 3316);
  v82 = v76;
  v77 = 0.0;
  if ( *(_BYTE *)(a1 + 3316) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v21 = *(int **)(a1 + 24);
      if ( v21 )
        sub_100194B0(v21, 3316);
    }
    *(_BYTE *)(a1 + 3316) = 0;
  }
  *(_BYTE *)(a7 + 29) = 0;
  v22 = *(_DWORD *)a1;
  v83 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(v22 + 1088))(a1) )
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1096))(a1);
  else
    v23 = v83;
  sub_10265720(a1, v23, 0);
  v92 = &v85;
  v91 = a6;
  v85 = v80 * 16384.0 + *a6;
  v86 = v81 * 16384.0 + a6[1];
  v87 = 16384.0 * v82 + a6[2];
  sub_1001F180(v64, a6, &v85);
  v24 = *(void (__thiscall **)(int, float *, int, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16);
  v92 = (float *)v67;
  v24(dword_106B31F4, v64, 1174421507, v72);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v67, (int)v68, 255, 0, 0, 1, -1.0);
  v91 = (float *)v69;
  if ( v69 && *(_BYTE *)(v69 + 225) && *(int *)(v69 + 220) > 0 )
  {
    if ( *(_BYTE *)(a1 + 447) == 3 )
    {
      if ( !*(_BYTE *)(v69 + 447) )
        goto LABEL_35;
    }
    else if ( *(_BYTE *)(v69 + 447) == 3 )
    {
      goto LABEL_35;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v69 + 228))(v69, a1) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v91 + 284))(v91)
        || (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) <= 0
        || (v25 = (*(int (__thiscall **)(float *))(*(_DWORD *)v91 + 220))(v91), sub_100C7A00((void *)a1, v25) == 1) )
      {
        v26 = (int)v91;
        if ( ((_DWORD)v91[64] & 0x10000) != 0 )
        {
          HIBYTE(v92) = 1;
          sub_101EA070(v78, (_BYTE *)&v92 + 3);
        }
        sub_10043F10((_DWORD *)(a7 + 24), v26);
        *(float *)a7 = v80;
        *(float *)(a7 + 4) = v81;
        *(float *)(a7 + 8) = v82;
        *(float *)(a7 + 12) = v68[0];
        *(float *)(a7 + 16) = v68[1];
        *(float *)(a7 + 20) = v68[2];
        *(_WORD *)(a7 + 28) = 256;
        goto LABEL_8;
      }
    }
  }
LABEL_35:
  v27 = sub_1012BDE0();
  v83 = v27;
  if ( !v27 )
    goto LABEL_37;
  v28 = alloca(4 * v27);
  v29 = &v92;
  v73 = &v92;
  sub_1012C930(&v92, v83);
  v91 = 0;
  if ( v83 <= 0 )
    goto LABEL_37;
  while ( 1 )
  {
    v32 = v29[(_DWORD)v91];
    if ( (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)v32 + 228))(v32, a1)
      && v32 != (float *)a1
      && (!(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v32 + 284))(v32)
       || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v32 + 264))(v32))
      && *((_DWORD *)v32 + 6)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B3CDC + 232))(
           dword_106B3CDC,
           a1,
           *((_DWORD *)v32 + 6)) )
    {
      if ( *(_BYTE *)(a1 + 447) == 3 )
      {
        if ( !*((_BYTE *)v32 + 447) )
          goto LABEL_65;
      }
      else if ( *((_BYTE *)v32 + 447) == 3 )
      {
        goto LABEL_65;
      }
      if ( !sub_100D7680((int)v32)
        || (*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 1080))(a1, v32) == 1
        || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v32 + 320))(v32)
        || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 196))(dword_106B3CDC) )
      {
        v33 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v32 + 576))(v32);
        v34 = *v33;
        v88 = *v33;
        v35 = v33[1];
        v89 = v33[1];
        v36 = v33[2];
        v90 = v33[2];
        v37 = v35 - a6[1];
        v38 = v36 - a6[2];
        v85 = v34 - *a6;
        v86 = v37;
        v87 = v38;
        sub_10018D40(&v85);
        v84 = v38;
        off_10689714();
        if ( *(float *)(a7 + 36) >= (double)v84 )
        {
          v39 = v85 * v74 + v86 * v75 + v87 * v76;
          v84 = v39;
          if ( v39 >= 0.0 )
          {
            if ( ((_DWORD)v32[64] & 0x400) != 0
              || !sub_100CF460((_DWORD *)a1)
              || (v40 = sub_100CF460((_DWORD *)a1),
                  v41 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v40 + 1144))(v40),
                  v41 <= v84)
              || v71 >= 30.0
              && v71 <= 90.0
              && (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2 )
            {
              v42 = sub_100CF460((_DWORD *)a1);
              v43 = *(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)v32 + 236);
              v91 = (float *)v42;
              v90 = v44;
              v90 = *(float *)(a7 + 32);
              v89 = *(float *)&v32;
              v45 = (float *)v43(v32, v70);
              v46 = sub_101E64C0(a6, &v74, v45, SLODWORD(v89), v90, (int)v91);
              v84 = v46;
              if ( v46 > v77 )
              {
                sub_10023120(COERCE_FLOAT(&v93), a1, a6, &v88, 1174421507, (int)v72, (int)v67);
                if ( 1.0 == v68[8] || (float *)v69 == v32 )
                {
                  v79 = v32;
                  v77 = v84;
                  v80 = v85;
                  v81 = v86;
                  v82 = v87;
                }
              }
            }
          }
        }
      }
    }
LABEL_65:
    v91 = (float *)((char *)v91 + 1);
    if ( (int)v91 >= v83 )
      break;
    v29 = v73;
  }
  v47 = v79;
  if ( !v79 )
  {
LABEL_37:
    result = a5;
    v30 = flt_106F1CB8;
    *a5 = flt_106F1CB4;
    v31 = flt_106F1CBC;
    a5[1] = v30;
    a5[2] = v31;
    return result;
  }
  sub_10422540(&v80, &v88);
  v48 = (*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)a1 + 1088))(a1, v92) == 0;
  v49 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 508);
  if ( v48 )
  {
    v52 = (float *)v49(a1);
    v53 = v52[1] - *(float *)(a1 + 2308);
    v54 = v52[2] - *(float *)(a1 + 2312);
    v88 = v88 - (*v52 - *(float *)(a1 + 2304));
    v89 = v89 - v53;
    v51 = v90 - v54;
  }
  else
  {
    v50 = (float *)v49(a1);
    v88 = v88 - *v50;
    v89 = v89 - v50[1];
    v51 = v90 - v50[2];
  }
  v55 = v78;
  v90 = v51;
  if ( *v78 != 1 )
  {
    v56 = v78 - 3316;
    if ( *(v78 - 3232) )
    {
      v56[88] |= 1u;
    }
    else
    {
      v57 = (int *)*((_DWORD *)v56 + 6);
      if ( v57 )
        sub_100194B0(v57, 3316);
    }
    *v55 = 1;
  }
  v58 = (_DWORD *)(*(int (__thiscall **)(float *, float *, void *))(*(_DWORD *)v47 + 8))(v47, v93, v94);
  v59 = v80;
  *(_DWORD *)(a7 + 24) = *v58;
  *(float *)a7 = v59;
  *(float *)(a7 + 4) = v81;
  v94 = 0;
  v93 = a6;
  *(float *)(a7 + 8) = v82;
  v60 = (float *)(*(int (__thiscall **)(float *, _BYTE *, float *, void *))(*(_DWORD *)v47 + 520))(v47, v70, v93, v94);
  v61 = v88;
  *(float *)(a7 + 12) = *v60;
  v10 = v89;
  *(float *)(a7 + 16) = v60[1];
  v62 = v60[2];
  result = a5;
  *(float *)(a7 + 20) = v62;
  *a5 = v61;
  v11 = v90;
  *(_BYTE *)(a7 + 28) = 1;
LABEL_9:
  result[1] = v10;
  result[2] = v11;
  return result;
}
