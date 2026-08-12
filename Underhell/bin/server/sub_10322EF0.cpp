// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_10322EF0(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int *a5,
        int a6,
        int a7,
        float a8)
{
  int v8; // eax
  double v10; // st7
  bool v11; // c0
  double v12; // st7
  unsigned int v13; // eax
  float v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  float *v17; // eax
  int v18; // edx
  float *v19; // eax
  float *v20; // eax
  int v21; // eax
  int v22; // ecx
  int *v23; // ecx
  int v24; // eax
  _DWORD *v25; // eax
  unsigned int v26; // eax
  int v27; // ecx
  float *v28; // eax
  double v29; // st7
  unsigned int v30; // eax
  bool v31; // cc
  unsigned int v32; // eax
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // ecx
  int v36; // eax
  float *v37; // edx
  __int16 v38; // ax
  int *v39; // ecx
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v42; // eax
  int v43; // ecx
  float v44; // edx
  int v45; // eax
  bool v46; // zf
  int *v47; // ecx
  int *v48; // ecx
  double v49; // st7
  int v50; // eax
  int v51; // eax
  int *v52; // ecx
  unsigned int v53; // eax
  int v54; // ecx
  float *v55; // ecx
  double v56; // st4
  double v57; // st7
  double v58; // st4
  double v59; // st5
  double v60; // st7
  int v61; // edi
  unsigned int v62; // eax
  int v63; // ecx
  __int64 v64; // [esp+4Ch] [ebp-188h]
  _BYTE v66[48]; // [esp+60h] [ebp-174h] BYREF
  _BYTE v67[48]; // [esp+90h] [ebp-144h] BYREF
  _BYTE v68[12]; // [esp+C0h] [ebp-114h] BYREF
  _BYTE v69[24]; // [esp+CCh] [ebp-108h] BYREF
  _BYTE v70[19]; // [esp+E4h] [ebp-F0h] BYREF
  char v71; // [esp+F7h] [ebp-DDh]
  _DWORD v72[4]; // [esp+118h] [ebp-BCh] BYREF
  float v73[2]; // [esp+128h] [ebp-ACh] BYREF
  _BYTE v74[48]; // [esp+130h] [ebp-A4h] BYREF
  float v75; // [esp+160h] [ebp-74h]
  float v76; // [esp+164h] [ebp-70h]
  float v77; // [esp+168h] [ebp-6Ch]
  float v78; // [esp+16Ch] [ebp-68h]
  float v79; // [esp+170h] [ebp-64h]
  char v80; // [esp+174h] [ebp-60h]
  float v81[3]; // [esp+184h] [ebp-50h] BYREF
  int v82; // [esp+190h] [ebp-44h] BYREF
  int v83; // [esp+194h] [ebp-40h]
  int v84; // [esp+19Ch] [ebp-38h]
  float v85; // [esp+1A0h] [ebp-34h] BYREF
  float v86; // [esp+1A4h] [ebp-30h]
  float v87; // [esp+1A8h] [ebp-2Ch]
  float v88; // [esp+1ACh] [ebp-28h] BYREF
  float v89; // [esp+1B0h] [ebp-24h]
  int v90; // [esp+1B4h] [ebp-20h]
  int v91; // [esp+1B8h] [ebp-1Ch] BYREF
  float *v92; // [esp+1BCh] [ebp-18h]
  float v93; // [esp+1C0h] [ebp-14h]
  float v94; // [esp+1C4h] [ebp-10h]
  int v95[3]; // [esp+1C8h] [ebp-Ch] BYREF
  int retaddr; // [esp+1D4h] [ebp+0h]

  v95[0] = a2;
  v95[1] = retaddr;
  v8 = -1;
  v91 = -1;
  if ( *(float *)&a5 != 0.0 )
    v8 = *(_DWORD *)(*(int (__thiscall **)(int *, int, int))(*a5 + 8))(a5, a3, a4);
  v91 = v8;
  sub_1010C270((float *)(a1 + 3620), 13, (__int16 *)&v91);
  HIDWORD(v64) = a1;
  LODWORD(v64) = a1;
  sub_1010DA50(
    (_DWORD *)(a1 + 3620),
    *(_DWORD *)(a1 + 3620),
    *(_DWORD *)(a1 + 3624),
    *(_DWORD *)(a1 + 3628),
    *(_DWORD *)(a1 + 3632),
    *(_DWORD *)(a1 + 3636),
    v64,
    0.0);
  *(float *)(a1 + 9928) = 80.0;
  v10 = RandomFloat(0.0, 1.0);
  v95[0] = 0;
  v94 = 0.0;
  if ( v10 <= 0.5 )
    v93 = COERCE_FLOAT("NPC_Barnacle.TongueStretch");
  else
    v93 = COERCE_FLOAT("NPC_Barnacle.PullPant");
  sub_1023C380((_DWORD *)a1, SLODWORD(v93), v94, v95[0]);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, dword_106E50A4);
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a5 + 320))(a5) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a5 + 1088))(a5) )
    {
      if ( (a5[63] & 0x800) != 0 )
        sub_100DAE60((int)a5);
      if ( (a5[63] & 0x800) != 0 )
        sub_100DAE60((int)a5);
      (*(void (__thiscall **)(int *, int *, int *))(*a5 + 1412))(a5, a5 + 145, a5 + 176);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      if ( (a5[63] & 0x800) != 0 )
        sub_100DAE60((int)a5);
      v88 = *((float *)a5 + 145) - *(float *)(a1 + 580);
      v89 = *((float *)a5 + 146) - *(float *)(a1 + 584);
      *(float *)&v90 = 0.0;
      v11 = off_10689714() > 20.0;
      v12 = 20.0;
      if ( v11 )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        {
          sub_100DAE60(a1);
          v12 = 20.0;
        }
        v13 = (unsigned int)a5[63] >> 11;
        v85 = v88 * v12 + *(float *)(a1 + 580);
        v86 = v89 * v12 + *(float *)(a1 + 584);
        v87 = v12 * *(float *)&v90 + *(float *)(a1 + 588);
        if ( (v13 & 1) != 0 )
          sub_100DAE60((int)a5);
        v87 = *((float *)a5 + 147);
        sub_100E0D20((int)a5, &v85);
      }
    }
    *(_BYTE *)(a1 + 3693) = (a5[64] & 2) == 0;
  }
  sub_100285C0((_DWORD *)a1, a5, 1);
  sub_101DAAC0((_DWORD *)a1, a5);
  if ( sub_100D7680((int)a5) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v14 = *(float *)(a1 + 584);
    v15 = *(int *)(a1 + 588);
    v88 = *(float *)(a1 + 580);
    v16 = (unsigned int)a5[63] >> 11;
    v89 = v14;
    v90 = v15;
    if ( (v16 & 1) != 0 )
      sub_100DAE60((int)a5);
    v90 = a5[147];
    sub_10265720(v72, a1, (int)a5, 0);
    v17 = (float *)(*(int (__thiscall **)(int *))(a5[80] + 8))(a5 + 80);
    v18 = a5[80];
    v92 = v17;
    v19 = (float *)(*(int (__thiscall **)(int *))(v18 + 4))(a5 + 80);
    sub_1001F200(v73, &v88, &v88, v19, v92);
    (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v73,
      33701899,
      v72,
      v68);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v68, (int)v69, 255, 255, 0, 1, -1.0);
    if ( v71 )
    {
      v92 = (float *)(*(int (__thiscall **)(int *))(a5[80] + 8))(a5 + 80);
      v20 = (float *)(*(int (__thiscall **)(int *))(a5[80] + 4))(a5 + 80);
      v85 = v88;
      v86 = v89;
      v87 = *(float *)&v90 + 24.0;
      sub_10023240(COERCE_FLOAT(v95), a1, &v85, &v88, v20, v92, 33701899, (int)v72, (int)v68);
      if ( v71 )
        goto LABEL_35;
      v94 = COERCE_FLOAT(v69);
    }
    else
    {
      v94 = COERCE_FLOAT(&v88);
    }
    sub_100E0D20((int)a5, (float *)LODWORD(v94));
  }
LABEL_35:
  v21 = *(_DWORD *)(a1 + 252) >> 11;
  *(_DWORD *)(a1 + 9904) = 6;
  *(_BYTE *)(a1 + 3676) = 1;
  if ( (v21 & 1) != 0 )
    sub_100DAE60(a1);
  v22 = *(_DWORD *)(a1 + 248) >> 17;
  v93 = *(float *)(a1 + 588) - a8;
  if ( (v22 & 1) == 0 && *(_DWORD *)(a1 + 3668) != LODWORD(v93) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v23 = *(int **)(a1 + 24);
      if ( v23 )
        sub_100194B0(v23, 3668);
    }
    *(float *)(a1 + 3668) = v93;
  }
  v94 = 0.0;
  v93 = COERCE_FLOAT(&CBaseAnimating `RTTI Type Descriptor');
  v92 = (float *)&CBaseEntity `RTTI Type Descriptor';
  v91 = 0;
  v90 = (int)a5;
  *(_BYTE *)(a1 + 3692) = 0;
  v91 = __RTDynamicCast(v90, v91, (struct _s_RTTICompleteObjectLocator *)v92, SLODWORD(v93), SLODWORD(v94));
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    && (v24 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v24 + 320))(v24))
    || sub_10321B90((_DWORD *)a1) )
  {
    v93 = *((float *)a5 + 106);
    v42 = *(_DWORD *)(a1 + 3736);
    if ( v42 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v42 >> 12 )
      v43 = 0;
    else
      v43 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
    v44 = *(float *)a5;
    v84 = *(_DWORD *)(v43 + 424);
    if ( (*(unsigned __int8 (__thiscall **)(int *))(LODWORD(v44) + 320))(a5) )
    {
      v45 = (*(int (__thiscall **)(int *, float *))(*a5 + 504))(a5, &v85);
      v88 = *(float *)v45;
      v89 = *(float *)(v45 + 4);
      v46 = *(_BYTE *)(a1 + 84) == 0;
      v90 = *(int *)(v45 + 8);
      if ( v46 )
      {
        v47 = *(int **)(a1 + 24);
        if ( v47 )
          sub_100194B0(v47, 3720);
      }
      else
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      if ( (a5[63] & 0x800) != 0 )
        sub_100DAE60((int)a5);
      sub_10421C00(&unk_1066D1D4, a5 + 125, a1 + 3720);
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        *(float *)(a1 + 3728) = flt_1066D1DC;
      }
      else
      {
        v48 = *(int **)(a1 + 24);
        if ( v48 )
          sub_100194B0(v48, 3720);
        *(float *)(a1 + 3728) = flt_1066D1DC;
      }
    }
    else
    {
      if ( (a5[63] & 0x800) != 0 )
        sub_100DAE60((int)a5);
      v49 = *(float *)(a1 + 3708) - *((float *)a5 + 145);
      v92 = (float *)(a5 + 145);
      v88 = v49;
      v89 = *(float *)(a1 + 3712) - *((float *)a5 + 146);
      *(float *)&v90 = *(float *)(a1 + 3716) - *((float *)a5 + 147);
      off_10689714();
      if ( (a5[63] & 0x800) != 0 )
        sub_100DAE60((int)a5);
      if ( (a5[63] & 0x800) != 0 )
        sub_100DAE60((int)a5);
      v91 = *(_DWORD *)dword_106BAFF0 + 88;
      v50 = (*(int (__thiscall **)(float, float *, int *, float *))(*(_DWORD *)LODWORD(v93) + 292))(
              COERCE_FLOAT(LODWORD(v93)),
              v92,
              a5 + 176,
              &v88);
      v51 = (*(int (__thiscall **)(int, float *, int))v91)(dword_106BAFF0, &v85, v50);
      v88 = *(float *)v51;
      v89 = *(float *)(v51 + 4);
      v46 = *(_BYTE *)(a1 + 84) == 0;
      v90 = *(int *)(v51 + 8);
      if ( v46 )
      {
        v52 = *(int **)(a1 + 24);
        if ( v52 )
          sub_100194B0(v52, 3720);
      }
      else
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      *(float *)(a1 + 3728) = 0.0;
      *(float *)(a1 + 3724) = 0.0;
      *(float *)(a1 + 3720) = 0.0;
    }
    v53 = *(_DWORD *)(a1 + 3736);
    if ( v53 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v53 >> 12 )
      v54 = 0;
    else
      v54 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v54 + 416))(v54, &v88, 0, 0);
    v55 = (float *)(*(_DWORD *)(a1 + 252) >> 11);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v94 = *(float *)&v55;
    v56 = v88 - *(float *)(a1 + 580);
    v57 = v56 * v56;
    v58 = v89 - *(float *)(a1 + 584);
    v59 = *(float *)&v90 - *(float *)(a1 + 588);
    v94 = v59 * v59 + v58 * v58 + v57;
    v60 = off_10689708(v94);
    if ( v60 / *(float *)(a1 + 9928) < 3.0 )
      *(float *)(a1 + 9928) = v60 * 0.33333334;
    sub_10422700(v74);
    v61 = v84;
    v76 = 0.0;
    v77 = 0.0;
    v80 = 1;
    v75 = 1.0;
    v78 = 1.0;
    v79 = 1.0;
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v84 + 192))(v84, v66);
    sub_10424F80(v66, v70);
    (*(void (__thiscall **)(float, _BYTE *))(*(_DWORD *)LODWORD(v93) + 192))(COERCE_FLOAT(LODWORD(v93)), v67);
    sub_10421E30(v70, v67, v74);
    v76 = 0.0;
    v77 = 0.0;
    v75 = 1.0;
    v78 = 1.0;
    v79 = 1.0;
    v80 = 1;
    *(_DWORD *)(a1 + 9888) = (*(int (__thiscall **)(int, int, float, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
                               dword_106BAFF4,
                               v61,
                               COERCE_FLOAT(LODWORD(v93)),
                               0,
                               v74);
    v62 = *(_DWORD *)(a1 + 3736);
    if ( v62 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v62 >> 12 )
      v63 = 0;
    else
      v63 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v63 + 1120) + 8))(10000.0);
    sub_103223D0(a1);
  }
  else
  {
    sub_100BCCF0((_DWORD *)v91);
    sub_101129A0((unsigned __int16 *)a5 + 160, *((_WORD *)a5 + 178) | 4);
    v25 = sub_10321F80((_DWORD *)a1, (volatile signed __int32 *)v91);
    if ( v25 )
      *(_DWORD *)(a1 + 3740) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v25 + 8))(v25);
    else
      *(_DWORD *)(a1 + 3740) = -1;
    v26 = *(_DWORD *)(a1 + 3740);
    if ( v26 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v26 >> 12 )
      v27 = 0;
    else
      v27 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 836))(v27, v91);
    v28 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v91 + 804))(v91, &v85);
    v81[0] = *v28 * 0.5;
    v81[1] = v28[1] * 0.5;
    v29 = 0.5 * v28[2];
    v30 = *(_DWORD *)(a1 + 3740);
    v81[2] = v29;
    if ( v30 == -1 || off_1061BE18[4 * (v30 & 0xFFF) + 2] != v30 >> 12 )
      v94 = 0.0;
    else
      v94 = *(float *)&off_1061BE18[4 * (v30 & 0xFFF) + 1];
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(LODWORD(v94) + 1140) + 16))(
      *(_DWORD *)(LODWORD(v94) + 1140),
      &v82);
    if ( v83 >= 5 )
      v83 = 5;
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(LODWORD(v94) + 1140) + 20))(
      *(_DWORD *)(LODWORD(v94) + 1140),
      &v82);
    v31 = *(_DWORD *)(LODWORD(v94) + 1132) <= 0;
    v92 = 0;
    if ( !v31 )
    {
      LODWORD(v93) = LODWORD(v94) + 1156;
      do
      {
        (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)LODWORD(v93) + 208))(
          *(_DWORD *)LODWORD(v93),
          v81,
          0);
        LODWORD(v93) += 24;
        v92 = (float *)((char *)v92 + 1);
      }
      while ( (int)v92 < *(_DWORD *)(LODWORD(v94) + 1132) );
    }
    if ( *(_DWORD *)(dword_106E511C + 48) )
    {
      v32 = *(_DWORD *)(a1 + 3740);
      if ( v32 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v32 >> 12 )
        v33 = 0;
      else
        v33 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
      sub_101CE640(v33, 387);
      v34 = *(_DWORD *)(a1 + 3740);
      if ( v34 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v34 >> 12 )
        v35 = 0;
      else
        v35 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
      v36 = *(_DWORD *)(v35 + 5064);
      v37 = (float *)(v35 + 5064);
      v93 = 1.0;
      v92 = (float *)(v35 + 5064);
      if ( v36 != COERCE_INT(1.0) )
      {
        v38 = v35;
        if ( *(_BYTE *)(v35 + 84) )
        {
          *(_BYTE *)(v35 + 88) |= 1u;
        }
        else
        {
          v39 = *(int **)(v35 + 24);
          if ( v39 )
          {
            sub_100194B0(v39, (_WORD)v92 - v38);
            v37 = v92;
          }
        }
        *v37 = 1.0;
      }
    }
    sub_100EAB80(a5, 32);
    v40 = *(_DWORD *)(a1 + 3736);
    if ( v40 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v40 >> 12 )
      v41 = 0;
    else
      v41 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(v41 + 1120) + 8))(10000.0);
    sub_103223D0(a1);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v91 + 776))(v91, a1 + 3744, 524032);
  }
}
