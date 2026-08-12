int __userpurge sub_1004FFC0@<eax>(
        float *a1@<ecx>,
        int a2@<edi>,
        void (__thiscall ***a3)(_DWORD, float *, _BYTE *),
        int a4,
        int a5,
        float *a6,
        float *a7,
        float *a8,
        int a9)
{
  double v12; // st7
  float *v13; // eax
  double v14; // st6
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  void (__thiscall *v21)(_DWORD, float *, _BYTE *); // edx
  double v22; // st7
  double v23; // st6
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  double v27; // st7
  float *v28; // eax
  void (__thiscall *v29)(_DWORD, float *, _BYTE *); // edx
  double v30; // st6
  double v31; // st7
  double v32; // st7
  double v33; // st6
  float *v34; // eax
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  double v38; // st7
  void (__thiscall *v39)(_DWORD, float *, _BYTE *); // edx
  double v40; // st6
  double v41; // st7
  double v42; // st7
  double v43; // st6
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  double v47; // st7
  float *v48; // eax
  int v49; // ebx
  int v50; // eax
  float v52; // [esp+14h] [ebp-24h] BYREF
  float v53; // [esp+18h] [ebp-20h]
  float v54; // [esp+1Ch] [ebp-1Ch]
  _BYTE v55[8]; // [esp+20h] [ebp-18h] BYREF
  float v56; // [esp+28h] [ebp-10h] BYREF
  float v57; // [esp+2Ch] [ebp-Ch]
  float v58; // [esp+30h] [ebp-8h]
  float v59; // [esp+34h] [ebp-4h]
  float v60; // [esp+40h] [ebp+8h]
  float v61; // [esp+40h] [ebp+8h]
  float v62; // [esp+40h] [ebp+8h]
  float v63; // [esp+40h] [ebp+8h]
  float v64; // [esp+48h] [ebp+10h]
  float v65; // [esp+48h] [ebp+10h]
  float v66; // [esp+48h] [ebp+10h]
  float v67; // [esp+48h] [ebp+10h]
  float v68; // [esp+4Ch] [ebp+14h]
  float v69; // [esp+4Ch] [ebp+14h]
  float v70; // [esp+4Ch] [ebp+14h]
  float v71; // [esp+50h] [ebp+18h]
  float v72; // [esp+54h] [ebp+1Ch]

  *(_DWORD *)(a5 + 180) = a4;
  *(_BYTE *)(a5 + 188) = 1;
  *(_DWORD *)(a5 + 184) = 7;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a4 + 40))(a4, 2, a2);
  (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a5 + 180) + 68))(*(_DWORD *)(a5 + 180), 4, 6, a5);
  *(_DWORD *)(a5 + 208) = a4 + 4;
  *(_DWORD *)(a5 + 216) = 0;
  *(_DWORD *)(a5 + 212) = 6;
  *(_BYTE *)(a5 + 240) = 0;
  *(_DWORD *)(a5 + 220) = *(_DWORD *)(a5 + 156);
  *(_DWORD *)(a5 + 192) = *(_DWORD *)(a5 + 164);
  *(_BYTE *)(a5 + 204) = *(_BYTE *)(a5 + 176);
  *(_DWORD *)(a5 + 224) = 0;
  sub_10016990(a5 + 244, a4, 4, (_DWORD *)a5);
  *(_DWORD *)(a5 + 224) = 0;
  sub_10016A00((_DWORD *)(a5 + 244));
  (**a3)(a3, a6, v55);
  ((void (__thiscall **)(_DWORD, float *, float *))*a3)[1](a3, a6, &v56);
  v12 = a6[1];
  v13 = *(float **)(a5 + 428);
  v14 = a6[2];
  *v13 = *a6;
  v13[1] = v12;
  v13[2] = v14;
  v15 = *(float **)(a5 + 432);
  *v15 = a1[303];
  v15[1] = a1[304];
  v15[2] = a1[305];
  v58 = 8388669.0;
  v59 = 8388697.0;
  v60 = 8388713.0;
  v64 = 8388863.0;
  **(_DWORD **)(a5 + 468) = LOBYTE(v58) | ((LOBYTE(v59) | ((LOBYTE(v60) | (LOBYTE(v64) << 8)) << 8)) << 8);
  v16 = *(float **)(a5 + 440);
  *v16 = v56;
  v16[1] = v57;
  switch ( a9 )
  {
    case 0:
      v18 = *(float **)(a5 + 436);
      *v18 = 1.0;
      v18[1] = 1.0;
      break;
    case 1:
      v17 = *(float **)(a5 + 436);
      *v17 = 1.0;
      v17[1] = 0.0;
      break;
    case 2:
      v20 = *(float **)(a5 + 436);
      *v20 = 0.0;
      v20[1] = 0.0;
      break;
    case 3:
      v19 = *(float **)(a5 + 436);
      *v19 = 0.0;
      v19[1] = 1.0;
      break;
    default:
      break;
  }
  sub_10016A80((_DWORD *)(a5 + 244));
  v21 = **a3;
  v52 = *a6 + *a7;
  v53 = a6[1] + a7[1];
  v54 = a7[2] + a6[2];
  v21(a3, &v52, v55);
  ((void (__thiscall **)(_DWORD, float *, float *))*a3)[1](a3, &v52, &v56);
  v22 = v53;
  v23 = v54;
  v24 = *(float **)(a5 + 428);
  *v24 = v52;
  v24[1] = v22;
  v24[2] = v23;
  v25 = *(float **)(a5 + 432);
  *v25 = a1[303];
  v25[1] = a1[304];
  v25[2] = a1[305];
  v58 = 8388669.0;
  v61 = 8388697.0;
  v65 = 8388713.0;
  v68 = 8388863.0;
  **(_DWORD **)(a5 + 468) = LOBYTE(v58) | ((LOBYTE(v61) | ((LOBYTE(v65) | (LOBYTE(v68) << 8)) << 8)) << 8);
  v26 = *(float **)(a5 + 440);
  *v26 = v56;
  v26[1] = v57;
  switch ( a9 )
  {
    case 0:
      v28 = *(float **)(a5 + 436);
      *v28 = 0.0;
      v27 = 1.0;
      goto LABEL_11;
    case 1:
      v27 = 1.0;
      v28 = *(float **)(a5 + 436);
      *v28 = 1.0;
      goto LABEL_11;
    case 2:
      v28 = *(float **)(a5 + 436);
      *v28 = 1.0;
      v27 = 0.0;
      goto LABEL_11;
    case 3:
      v27 = 0.0;
      v28 = *(float **)(a5 + 436);
      *v28 = 0.0;
LABEL_11:
      v28[1] = v27;
      break;
    default:
      break;
  }
  sub_10016A80((_DWORD *)(a5 + 244));
  v29 = **a3;
  v30 = a8[1] + v53;
  v31 = a8[2] + v54;
  v52 = *a8 + v52;
  v53 = v30;
  v54 = v31;
  v29(a3, &v52, v55);
  ((void (__thiscall **)(_DWORD, float *, float *))*a3)[1](a3, &v52, &v56);
  v32 = v53;
  v33 = v54;
  v34 = *(float **)(a5 + 428);
  *v34 = v52;
  v34[1] = v32;
  v34[2] = v33;
  v35 = *(float **)(a5 + 432);
  *v35 = a1[303];
  v35[1] = a1[304];
  v35[2] = a1[305];
  v72 = 8388669.0;
  v62 = 8388697.0;
  v66 = 8388713.0;
  v69 = 8388863.0;
  **(_DWORD **)(a5 + 468) = LOBYTE(v72) | ((LOBYTE(v62) | ((LOBYTE(v66) | (LOBYTE(v69) << 8)) << 8)) << 8);
  v36 = *(float **)(a5 + 440);
  *v36 = v56;
  v36[1] = v57;
  switch ( a9 )
  {
    case 0:
      v38 = 0.0;
      goto LABEL_17;
    case 1:
      v37 = *(float **)(a5 + 436);
      *v37 = 0.0;
      v38 = 1.0;
      goto LABEL_18;
    case 2:
      v38 = 1.0;
LABEL_17:
      v37 = *(float **)(a5 + 436);
      *v37 = v38;
      goto LABEL_18;
    case 3:
      v37 = *(float **)(a5 + 436);
      *v37 = 1.0;
      v38 = 0.0;
LABEL_18:
      v37[1] = v38;
      break;
    default:
      break;
  }
  sub_10016A80((_DWORD *)(a5 + 244));
  v39 = **a3;
  v40 = v53 - a7[1];
  v41 = v54 - a7[2];
  v52 = v52 - *a7;
  v53 = v40;
  v54 = v41;
  v39(a3, &v52, v55);
  ((void (__thiscall **)(_DWORD, float *, float *))*a3)[1](a3, &v52, &v56);
  v42 = v53;
  v43 = v54;
  v44 = *(float **)(a5 + 428);
  *v44 = v52;
  v44[1] = v42;
  v44[2] = v43;
  v45 = *(float **)(a5 + 432);
  *v45 = a1[303];
  v45[1] = a1[304];
  v45[2] = a1[305];
  v63 = 8388669.0;
  v67 = 8388697.0;
  v71 = 8388713.0;
  v70 = 8388863.0;
  **(_DWORD **)(a5 + 468) = LOBYTE(v63) | ((LOBYTE(v67) | ((LOBYTE(v71) | (LOBYTE(v70) << 8)) << 8)) << 8);
  v46 = *(float **)(a5 + 440);
  *v46 = v56;
  v46[1] = v57;
  switch ( a9 )
  {
    case 0:
      v48 = *(float **)(a5 + 436);
      *v48 = 1.0;
      v47 = 0.0;
      goto LABEL_24;
    case 1:
      v47 = 0.0;
      v48 = *(float **)(a5 + 436);
      *v48 = 0.0;
      goto LABEL_24;
    case 2:
      v48 = *(float **)(a5 + 436);
      *v48 = 0.0;
      v47 = 1.0;
      goto LABEL_24;
    case 3:
      v47 = 1.0;
      v48 = *(float **)(a5 + 436);
      *v48 = 1.0;
LABEL_24:
      v48[1] = v47;
      break;
    default:
      break;
  }
  sub_10016A80((_DWORD *)(a5 + 244));
  if ( *(_BYTE *)(a5 + 188) )
  {
    v49 = *(_DWORD *)(a5 + 184);
    v50 = sub_10016D90(v49, *(_DWORD *)(a5 + 420));
    sub_10016B00((_DWORD *)(a5 + 192), v49, v50);
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a5 + 180) + 80))(
    *(_DWORD *)(a5 + 180),
    *(_DWORD *)(a5 + 420),
    *(_DWORD *)(a5 + 216));
  *(_DWORD *)(a5 + 208) = 0;
  *(_DWORD *)(a5 + 212) = 0;
  *(_DWORD *)(a5 + 416) = 0;
  *(_DWORD *)(a5 + 408) = 0;
  *(_DWORD *)(a5 + 320) = -1;
  *(_DWORD *)(a5 + 180) = 0;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a4 + 48))(a4, -1, 0);
}
