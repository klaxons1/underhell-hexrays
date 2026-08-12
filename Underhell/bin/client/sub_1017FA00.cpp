int __thiscall sub_1017FA00(void *this)
{
  int result; // eax
  int v3; // edi
  void (__thiscall *v4)(int); // edx
  unsigned int v5; // eax
  int v6; // eax
  double v7; // st7
  int (__thiscall *v8)(void *); // edx
  const char *v9; // eax
  double v10; // st7
  float *v11; // eax
  double v12; // st7
  unsigned int v13; // eax
  int v14; // ecx
  float *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st5
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edi
  double v25; // st7
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // ecx
  int (__thiscall *v30)(int); // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // ecx
  float v34; // eax
  _DWORD *v35; // ebx
  _DWORD *v36; // edx
  int v37; // eax
  float v38; // [esp+50h] [ebp-1A0h]
  _BYTE v39[96]; // [esp+64h] [ebp-18Ch] BYREF
  float v40[22]; // [esp+C4h] [ebp-12Ch] BYREF
  _BYTE v41[8]; // [esp+11Ch] [ebp-D4h] BYREF
  float v42; // [esp+124h] [ebp-CCh]
  _BYTE v43[8]; // [esp+128h] [ebp-C8h] BYREF
  float v44; // [esp+130h] [ebp-C0h]
  _DWORD v45[4]; // [esp+134h] [ebp-BCh] BYREF
  char v46; // [esp+144h] [ebp-ACh]
  float v47; // [esp+158h] [ebp-98h]
  float v48; // [esp+160h] [ebp-90h]
  float v49; // [esp+164h] [ebp-8Ch]
  float v50; // [esp+168h] [ebp-88h]
  float v51; // [esp+16Ch] [ebp-84h]
  float v52; // [esp+170h] [ebp-80h]
  float v53; // [esp+174h] [ebp-7Ch]
  float v54; // [esp+178h] [ebp-78h]
  float v55; // [esp+17Ch] [ebp-74h]
  char v56; // [esp+188h] [ebp-68h]
  float v57; // [esp+18Ch] [ebp-64h]
  char v58; // [esp+190h] [ebp-60h]
  __int16 v59; // [esp+1A4h] [ebp-4Ch]
  float v60[3]; // [esp+1A8h] [ebp-48h] BYREF
  int v61[3]; // [esp+1B4h] [ebp-3Ch] BYREF
  int v62; // [esp+1C0h] [ebp-30h]
  int v63; // [esp+1C4h] [ebp-2Ch] BYREF
  int v64; // [esp+1C8h] [ebp-28h] BYREF
  int v65[2]; // [esp+1CCh] [ebp-24h] BYREF
  float v66; // [esp+1D4h] [ebp-1Ch]
  int v67; // [esp+1D8h] [ebp-18h] BYREF
  int v68; // [esp+1DCh] [ebp-14h] BYREF
  float v69; // [esp+1E0h] [ebp-10h]
  float v70; // [esp+1E4h] [ebp-Ch]
  int v71; // [esp+1E8h] [ebp-8h] BYREF
  float v72; // [esp+1ECh] [ebp-4h]

  nullsub_4();
  result = sub_100422D0();
  if ( !result || !*((_DWORD *)this + 70) )
    return result;
  v3 = dword_1047CA8C;
  v4 = *(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100);
  v62 = dword_1047CA8C;
  v4(dword_1047CA8C);
  if ( *((_BYTE *)this + 312) )
  {
    sub_1017EAA0();
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 896))(this);
    if ( (int)strlen(*(const char **)(*((_DWORD *)this + 70) + 12)) > 0 )
      (*(void (__thiscall **)(void *))(*(_DWORD *)this + 900))(this);
    *((_BYTE *)this + 312) = 0;
  }
  v5 = *((_DWORD *)this + 71);
  if ( v5 == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 71) & 0xFFF) + 2) != v5 >> 12
    || !*((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 71) & 0xFFF) + 1) )
  {
    return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  }
  sub_10236250(&v71, &v67, &v64, &v63);
  sub_10236FB0(&v71, &v67);
  if ( !*((_BYTE *)this + 320) && v71 < 0 )
    v71 = 0;
  v6 = *(_DWORD *)dword_1041315C;
  *(float *)v65 = 0.0;
  v7 = ((double (__thiscall *)(int))*(_DWORD *)(v6 + 352))(dword_1041315C);
  v8 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 904);
  v72 = v7 * 0.75;
  v9 = (const char *)v8(this);
  if ( !strstr(v9, "models/player/") )
    goto LABEL_19;
  if ( v72 > 1.05 )
  {
    v10 = -60.0;
    goto LABEL_20;
  }
  if ( v72 < 0.94999999 )
    v10 = 15.0;
  else
LABEL_19:
    v10 = *(float *)v65;
LABEL_20:
  v11 = (float *)*((_DWORD *)this + 70);
  *(float *)&v68 = v10 + v11[7];
  v69 = v11[8];
  v12 = v11[9];
  v13 = *((_DWORD *)this + 71);
  v70 = v12;
  if ( v13 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v13 & 0xFFF) + 2) != v13 >> 12 )
    v14 = 0;
  else
    v14 = *((_DWORD *)off_103DCD74 + 4 * (v13 & 0xFFF) + 1);
  sub_10037BA0(v14, (float *)&v68);
  v15 = (float *)*((_DWORD *)this + 70);
  v16 = v15[5];
  v17 = v15[6];
  v18 = v15[4];
  v19 = *((_DWORD *)this + 71);
  *(float *)&v68 = v18;
  v69 = v16;
  v70 = v17;
  if ( v19 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v19 & 0xFFF) + 2) != v19 >> 12 )
    v20 = 0;
  else
    v20 = *((_DWORD *)off_103DCD74 + 4 * (v19 & 0xFFF) + 1);
  sub_10037CA0(v20, (float *)&v68);
  v21 = *((_DWORD *)this + 71);
  if ( v21 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 71) & 0xFFF) + 2) != v21 >> 12 )
    v22 = 0;
  else
    v22 = *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 71) & 0xFFF) + 1);
  if ( *(_DWORD *)(v22 + 1808) != -1 )
  {
    v23 = sub_1006BE10((unsigned int *)this + 71);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 680))(v23, *((float *)off_103DC81C + 4));
  }
  v24 = *((_DWORD *)this + 70);
  v57 = 0.0;
  v56 = 0;
  v58 = 0;
  v59 = 1;
  v45[0] = (int)((double)v71 + *(float *)(v24 + 40));
  v45[1] = (int)((double)v67 + *(float *)(v24 + 44));
  v25 = (double)*((int *)this + 67);
  v45[2] = v64;
  v45[3] = v63;
  v38 = v25;
  v46 = 0;
  v47 = sub_10135880(v38, v72);
  v48 = flt_10459240;
  v49 = *(float *)&qword_10459244;
  v50 = *((float *)&qword_10459244 + 1);
  v51 = 0.0;
  v52 = 0.0;
  v53 = 0.0;
  v54 = 7.0;
  v55 = 1000.0;
  v26 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v27 = v26;
  if ( v26 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 8))(v26);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 260))(dword_1047C97C) )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 20))(v27, *((_DWORD *)this + 82));
  else
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 20))(v27, *((_DWORD *)this + 81));
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v27 + 624))(
    v27,
    LODWORD(flt_10459240),
    qword_10459244,
    HIDWORD(qword_10459244));
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v27 + 56))(v27, 0.40000001, 0.40000001, 0.40000001);
  if ( (dword_10445390 & 1) == 0 )
  {
    dword_10445390 |= 1u;
    flt_10445348 = 0.40000001;
    flt_1044534C = 0.40000001;
    flt_10445350 = 0.40000001;
    flt_10445354 = 0.40000001;
    flt_10445358 = 0.40000001;
    flt_1044535C = 0.40000001;
    flt_10445360 = 0.40000001;
    flt_10445364 = 0.40000001;
    flt_10445368 = 0.40000001;
    flt_1044536C = 0.40000001;
    flt_10445370 = 0.40000001;
    flt_10445374 = 0.40000001;
    flt_10445378 = 0.40000001;
    flt_1044537C = 0.40000001;
    flt_10445380 = 0.40000001;
    flt_10445384 = 0.40000001;
    flt_10445388 = 0.40000001;
    flt_1044538C = 0.40000001;
  }
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1047CA5C + 64))(dword_1047CA5C, &flt_10445348);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA5C + 72))(dword_1047CA5C, 0, 0);
  if ( *(_BYTE *)(*((_DWORD *)this + 70) + 60) )
  {
    v28 = sub_1006BE10((unsigned int *)this + 71);
    (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)(v28 + 4) + 80))(v28 + 4, v43, v41);
    v29 = sub_1006BE10((unsigned int *)this + 71);
    v30 = *(int (__thiscall **)(int))(*(_DWORD *)v29 + 36);
    v66 = (v42 - v44) * 0.75;
    v31 = v30(v29);
    v68 = *(int *)v31;
    v69 = *(float *)(v31 + 4);
    v70 = *(float *)(v31 + 8) + v66;
    *(float *)v61 = 1.0;
    *(float *)&v61[1] = 1.0;
    *(float *)&v61[2] = 1.0;
    *(float *)v65 = flt_10459240;
    v65[1] = qword_10459244;
    v66 = *((float *)&qword_10459244 + 1) + 200.0;
    sub_1017EB30(v40, (float *)v65, (float *)v61, (float *)&v68, 0.035, 0.87300003);
    (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)dword_1047CA5C + 72))(dword_1047CA5C, 1, v40);
  }
  (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD, _BYTE *))(*(_DWORD *)dword_10413168 + 152))(
    dword_10413168,
    v45,
    0,
    0,
    v39);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413160 + 88))(dword_10413160, 1);
  v60[0] = 1.0;
  v60[1] = 1.0;
  v60[2] = 1.0;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v60);
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
  v32 = *((_DWORD *)this + 71);
  if ( v32 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 71) & 0xFFF) + 2) != v32 >> 12 )
    v33 = 0;
  else
    v33 = *((_DWORD *)off_103DCD74 + 4 * (*((_DWORD *)this + 71) & 0xFFF) + 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(v33 + 4) + 40))(v33 + 4, 1);
  v34 = 0.0;
  v72 = 0.0;
  if ( *((int *)this + 75) > 0 )
  {
    v35 = off_103DCD74;
    do
    {
      v36 = (_DWORD *)(*((_DWORD *)this + 72) + 4 * LODWORD(v34));
      if ( *v36 != -1 && v35[4 * (*v36 & 0xFFF) + 2] == *v36 >> 12 && v35[4 * (*v36 & 0xFFF) + 1] )
      {
        if ( *v36 == -1 || v35[4 * (*v36 & 0xFFF) + 2] != *v36 >> 12 )
          v37 = 0;
        else
          v37 = v35[4 * (*v36 & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int))(*(_DWORD *)(v37 + 4) + 40))(v37 + 4, 1);
        v35 = off_103DCD74;
      }
      LODWORD(v34) = LODWORD(v72) + 1;
      v72 = v34;
    }
    while ( SLODWORD(v34) < *((_DWORD *)this + 75) );
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413160 + 88))(dword_10413160, 0);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413168 + 160))(dword_10413168, v39);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 20))(v27, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 12))(v27);
  (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 4))(v27);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v62 + 104))(v62);
}
