// bad sp value at call has been detected, the output may be wrong!
char __usercall sub_103762F0@<al>(float *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  bool v5; // zf
  int v6; // eax
  int v8; // eax
  float *v9; // edi
  float v10; // edx
  int (__thiscall *v11)(float *); // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edi
  float *v16; // eax
  double v17; // st7
  float *v18; // ecx
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int (__thiscall *v23)(int, _DWORD); // eax
  int v24; // eax
  char *v25; // eax
  float v26; // edx
  float v27; // ecx
  float v28; // eax
  float v29; // edx
  double v30; // st7
  int v31; // ecx
  int v32; // edi
  float *v33; // eax
  int v34; // edx
  int v35; // eax
  void (__thiscall *v36)(int); // edx
  float v38[23]; // [esp-178h] [ebp-184h] BYREF
  int v39; // [esp-11Ch] [ebp-128h] BYREF
  float v40[10]; // [esp-110h] [ebp-11Ch] BYREF
  float v41; // [esp-E8h] [ebp-F4h]
  float v42[8]; // [esp-C0h] [ebp-CCh] BYREF
  _BYTE v43[8]; // [esp-A0h] [ebp-ACh] BYREF
  float v44; // [esp-98h] [ebp-A4h]
  float v45[3]; // [esp-6Ch] [ebp-78h] BYREF
  _DWORD v46[4]; // [esp-60h] [ebp-6Ch] BYREF
  float v47[3]; // [esp-50h] [ebp-5Ch] BYREF
  float v48[3]; // [esp-44h] [ebp-50h] BYREF
  int v49; // [esp-38h] [ebp-44h]
  float v50; // [esp-34h] [ebp-40h] BYREF
  float v51; // [esp-30h] [ebp-3Ch]
  float v52; // [esp-2Ch] [ebp-38h]
  float v53; // [esp-28h] [ebp-34h] BYREF
  float v54; // [esp-24h] [ebp-30h]
  float v55; // [esp-20h] [ebp-2Ch]
  float v56; // [esp-1Ch] [ebp-28h]
  float *v57; // [esp-18h] [ebp-24h] BYREF
  float v58; // [esp-14h] [ebp-20h] BYREF
  float v59; // [esp-10h] [ebp-1Ch]
  float v60; // [esp-Ch] [ebp-18h]
  int v61; // [esp-8h] [ebp-14h]
  int v62; // [esp-4h] [ebp-10h]
  int v63; // [esp+0h] [ebp-Ch]
  _DWORD *v64; // [esp+4h] [ebp-8h]
  float *v65; // [esp+8h] [ebp-4h]
  _DWORD *retaddr; // [esp+Ch] [ebp+0h]

  v63 = a2;
  v64 = retaddr;
  v5 = (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)a1 + 368))(a1, a3, a4) == 0;
  v6 = *(_DWORD *)a1;
  if ( v5 )
    return (*(int (__thiscall **)(float *, const char *))(v6 + 1312))(a1, "No enemy to dodge");
  (*(void (__thiscall **)(float *, _DWORD, float *, int *))(v6 + 528))(a1, 0, v48, &v39);
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1);
  v9 = (float *)v8;
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  v54 = v9[145] - a1[145];
  v55 = v9[146] - a1[146];
  v56 = v9[147] - a1[147];
  off_10689714();
  v10 = *a1;
  if ( fabs(v48[1] * v55 + v54 * v48[0] + v48[2] * v56) > 0.7 )
    return (*(int (__thiscall **)(float *, const char *))(LODWORD(v10) + 1312))(
             a1,
             "Can't dodge, enemy approaching perpendicularly");
  v11 = *(int (__thiscall **)(float *))(LODWORD(v10) + 368);
  HIBYTE(v62) = 0;
  if ( !v11(a1)
    || (v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 368))(a1),
        (v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 288))(v12)) == 0)
    || (v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 1096))(v13), (v15 = v14) == 0) )
  {
    v23 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8);
    v62 = 1;
    if ( v23(dword_106B31E4, 0) )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
    sub_100DAE60(v14);
  v16 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v15 + 536))(v15, v45);
  v17 = *(float *)(v15 + 580) + *v16;
  v18 = (float *)(v15 + 580);
  v61 = v15 + 580;
  v58 = v17;
  v59 = *(float *)(v15 + 584) + v16[1];
  v19 = *(float *)(v15 + 588) + v16[2];
  v20 = *(_DWORD *)(v15 + 252) >> 11;
  v60 = v19;
  if ( (v20 & 1) != 0 )
  {
    sub_100DAE60(v15);
    v18 = (float *)v61;
  }
  sub_1001F180(v42, v18, &v58);
  v58 = v54;
  v21 = *((_DWORD *)a1 + 63) >> 11;
  v59 = -v55;
  v60 = v56;
  if ( (v21 & 1) != 0 )
    sub_100DAE60((int)a1);
  v22 = *((_DWORD *)a1 + 63) >> 11;
  v50 = v58 + a1[145];
  v51 = a1[146] + v59;
  v52 = v60 + a1[147];
  if ( (v22 & 1) != 0 )
    sub_100DAE60((int)a1);
  sub_1001F180(v40, a1 + 145, &v50);
  v42[6] = v44;
  v42[2] = v44;
  v40[6] = v41;
  v40[2] = v41;
  sub_101136C0(v40, v42, (float *)&v57, &v53);
  if ( *(float *)&v57 > 0.0 )
LABEL_23:
    HIBYTE(v62) = 1;
LABEL_24:
  v61 = 0;
  while ( v61 < 2 )
  {
    if ( HIBYTE(v62) )
      *((_DWORD *)a1 + 1058) = dword_106E84FC;
    else
      *((_DWORD *)a1 + 1058) = dword_106E8500;
    v24 = sub_100BDCE0((int)a1, *((_DWORD *)a1 + 1058));
    sub_100BE180((int)a1, v24, v45);
    v61 = (int)v43;
    sub_104227F0(a1 + 182);
    sub_10421C00(v45, v43, &v50);
    v25 = sub_10073710(*((_DWORD *)a1 + 419));
    v26 = *((float *)v25 + 1);
    v27 = *(float *)v25;
    v28 = *((float *)v25 + 2);
    v59 = v26;
    v29 = *a1;
    v58 = v27;
    v60 = v28;
    v30 = ((double (__thiscall *)(float *, int))*(_DWORD *)(LODWORD(v29) + 1724))(a1, v62);
    v31 = *((_DWORD *)a1 + 105);
    v32 = *((_DWORD *)a1 + 106);
    v62 = *((_DWORD *)a1 + 419);
    v49 = v31;
    v60 = v30 + v30 + v60;
    *(float *)&v33 = COERCE_FLOAT(sub_10073730(v62));
    v34 = *((_DWORD *)a1 + 63) >> 11;
    v57 = v33;
    if ( (v34 & 1) != 0 )
      sub_100DAE60((int)a1);
    v35 = *((_DWORD *)a1 + 63) >> 11;
    v47[0] = v50 + a1[145];
    v47[1] = v51 + a1[146];
    v47[2] = v52 + a1[147];
    if ( (v35 & 1) != 0 )
      sub_100DAE60((int)a1);
    v53 = ((double (__thiscall *)(int, int, _DWORD *, float *))*(_DWORD *)(*(_DWORD *)v32 + 116))(v32, v63, v64, v65)
        * 0.5;
    sub_1001F200(v40, a1 + 145, v47, &v58, v57);
    *(float *)&v46[3] = v53;
    v65 = v38;
    v46[2] = v49;
    v64 = v46;
    v46[0] = &CHunterTraceFilterSkipPhysics::`vftable';
    v46[1] = a1;
    v36 = *(void (__thiscall **)(int))(*(_DWORD *)dword_106B31F4 + 16);
    v63 = 33701899;
    v62 = (int)v40;
    v36(dword_106B31F4);
    if ( 1.0 == v38[11] )
    {
      sub_10027CD0(a1, 0);
      if ( v61 < 2 )
        return sub_10027CD0(a1, 0);
      return (*(int (__thiscall **)(float *, const char *))(*(_DWORD *)a1 + 1312))(a1, "Couldn't find dodge position\n");
    }
    ++v61;
    HIBYTE(v62) = HIBYTE(v62) == 0;
  }
  return (*(int (__thiscall **)(float *, const char *))(*(_DWORD *)a1 + 1312))(a1, "Couldn't find dodge position\n");
}
