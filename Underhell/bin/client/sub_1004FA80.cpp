int __thiscall sub_1004FA80(
        float *this,
        void (__thiscall ***a2)(_DWORD, float *, float *),
        int a3,
        int a4,
        float *a5,
        float *a6,
        float *a7,
        int a8)
{
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  void (__thiscall *v20)(_DWORD, float *, float *); // edx
  double v21; // st7
  double v22; // st6
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  double v27; // st7
  float *v28; // eax
  void (__thiscall *v29)(_DWORD, float *, float *); // edx
  double v30; // st6
  double v31; // st7
  double v32; // st7
  double v33; // st6
  float *v34; // eax
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  float *v38; // eax
  double v39; // st7
  void (__thiscall *v40)(_DWORD, float *, float *); // edx
  double v41; // st6
  double v42; // st7
  double v43; // st7
  double v44; // st6
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  double v49; // st7
  float *v50; // eax
  int v51; // ebx
  int v52; // eax
  float v54; // [esp+Ch] [ebp-1Ch] BYREF
  float v55; // [esp+10h] [ebp-18h]
  float v56; // [esp+14h] [ebp-14h]
  float v57; // [esp+18h] [ebp-10h] BYREF
  float v58; // [esp+1Ch] [ebp-Ch]
  float v59; // [esp+20h] [ebp-8h] BYREF
  float v60; // [esp+24h] [ebp-4h]

  *(_DWORD *)(a4 + 180) = a3;
  *(_BYTE *)(a4 + 188) = 1;
  *(_DWORD *)(a4 + 184) = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 40))(a3, 2);
  (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(a4 + 180) + 68))(*(_DWORD *)(a4 + 180), 4, 6, a4);
  *(_DWORD *)(a4 + 208) = a3 + 4;
  *(_DWORD *)(a4 + 216) = 0;
  *(_DWORD *)(a4 + 212) = 6;
  *(_BYTE *)(a4 + 240) = 0;
  *(_DWORD *)(a4 + 220) = *(_DWORD *)(a4 + 156);
  *(_DWORD *)(a4 + 192) = *(_DWORD *)(a4 + 164);
  *(_BYTE *)(a4 + 204) = *(_BYTE *)(a4 + 176);
  *(_DWORD *)(a4 + 224) = 0;
  sub_10016990(a4 + 244, a3, 4, (_DWORD *)a4);
  *(_DWORD *)(a4 + 224) = 0;
  sub_10016A00((_DWORD *)(a4 + 244));
  (**a2)(a2, a5, &v57);
  (*a2)[1](a2, a5, &v59);
  v10 = *(float **)(a4 + 428);
  v11 = a5[1];
  v12 = a5[2];
  *v10 = *a5;
  v10[1] = v11;
  v10[2] = v12;
  v13 = *(float **)(a4 + 432);
  *v13 = this[303];
  v13[1] = this[304];
  v13[2] = this[305];
  **(_DWORD **)(a4 + 468) = -1;
  v14 = *(float **)(a4 + 440);
  *v14 = v59;
  v14[1] = v60;
  v15 = *(float **)(a4 + 444);
  *v15 = v57;
  v15[1] = v58;
  switch ( a8 )
  {
    case 0:
      v17 = *(float **)(a4 + 436);
      *v17 = 1.0;
      v17[1] = 1.0;
      break;
    case 1:
      v16 = *(float **)(a4 + 436);
      *v16 = 1.0;
      v16[1] = 0.0;
      break;
    case 2:
      v19 = *(float **)(a4 + 436);
      *v19 = 0.0;
      v19[1] = 0.0;
      break;
    case 3:
      v18 = *(float **)(a4 + 436);
      *v18 = 0.0;
      v18[1] = 1.0;
      break;
    default:
      break;
  }
  sub_10016A80((_DWORD *)(a4 + 244));
  v20 = **a2;
  v54 = *a5 + *a6;
  v55 = a5[1] + a6[1];
  v56 = a5[2] + a6[2];
  v20(a2, &v54, &v57);
  (*a2)[1](a2, &v54, &v59);
  v21 = v55;
  v22 = v56;
  v23 = *(float **)(a4 + 428);
  *v23 = v54;
  v23[1] = v21;
  v23[2] = v22;
  v24 = *(float **)(a4 + 432);
  *v24 = this[303];
  v24[1] = this[304];
  v24[2] = this[305];
  **(_DWORD **)(a4 + 468) = -1;
  v25 = *(float **)(a4 + 440);
  *v25 = v59;
  v25[1] = v60;
  v26 = *(float **)(a4 + 444);
  *v26 = v57;
  v26[1] = v58;
  switch ( a8 )
  {
    case 0:
      v28 = *(float **)(a4 + 436);
      *v28 = 0.0;
      v27 = 1.0;
      goto LABEL_11;
    case 1:
      v27 = 1.0;
      v28 = *(float **)(a4 + 436);
      *v28 = 1.0;
      goto LABEL_11;
    case 2:
      v28 = *(float **)(a4 + 436);
      *v28 = 1.0;
      v27 = 0.0;
      goto LABEL_11;
    case 3:
      v27 = 0.0;
      v28 = *(float **)(a4 + 436);
      *v28 = 0.0;
LABEL_11:
      v28[1] = v27;
      break;
    default:
      break;
  }
  sub_10016A80((_DWORD *)(a4 + 244));
  v29 = **a2;
  v30 = a7[1] + v55;
  v31 = a7[2] + v56;
  v54 = *a7 + v54;
  v55 = v30;
  v56 = v31;
  v29(a2, &v54, &v57);
  (*a2)[1](a2, &v54, &v59);
  v32 = v55;
  v33 = v56;
  v34 = *(float **)(a4 + 428);
  *v34 = v54;
  v34[1] = v32;
  v34[2] = v33;
  v35 = *(float **)(a4 + 432);
  *v35 = this[303];
  v35[1] = this[304];
  v35[2] = this[305];
  **(_DWORD **)(a4 + 468) = -1;
  v36 = *(float **)(a4 + 440);
  *v36 = v59;
  v36[1] = v60;
  v37 = *(float **)(a4 + 444);
  *v37 = v57;
  v37[1] = v58;
  switch ( a8 )
  {
    case 0:
      v39 = 0.0;
      goto LABEL_17;
    case 1:
      v38 = *(float **)(a4 + 436);
      *v38 = 0.0;
      v39 = 1.0;
      goto LABEL_18;
    case 2:
      v39 = 1.0;
LABEL_17:
      v38 = *(float **)(a4 + 436);
      *v38 = v39;
      goto LABEL_18;
    case 3:
      v38 = *(float **)(a4 + 436);
      *v38 = 1.0;
      v39 = 0.0;
LABEL_18:
      v38[1] = v39;
      break;
    default:
      break;
  }
  sub_10016A80((_DWORD *)(a4 + 244));
  v40 = **a2;
  v41 = v55 - a6[1];
  v42 = v56 - a6[2];
  v54 = v54 - *a6;
  v55 = v41;
  v56 = v42;
  v40(a2, &v54, &v57);
  (*a2)[1](a2, &v54, &v59);
  v43 = v55;
  v44 = v56;
  v45 = *(float **)(a4 + 428);
  *v45 = v54;
  v45[1] = v43;
  v45[2] = v44;
  v46 = *(float **)(a4 + 432);
  *v46 = this[303];
  v46[1] = this[304];
  v46[2] = this[305];
  **(_DWORD **)(a4 + 468) = -1;
  v47 = *(float **)(a4 + 440);
  *v47 = v59;
  v47[1] = v60;
  v48 = *(float **)(a4 + 444);
  *v48 = v57;
  v48[1] = v58;
  switch ( a8 )
  {
    case 0:
      v50 = *(float **)(a4 + 436);
      *v50 = 1.0;
      v49 = 0.0;
      goto LABEL_24;
    case 1:
      v49 = 0.0;
      v50 = *(float **)(a4 + 436);
      *v50 = 0.0;
      goto LABEL_24;
    case 2:
      v50 = *(float **)(a4 + 436);
      *v50 = 0.0;
      v49 = 1.0;
      goto LABEL_24;
    case 3:
      v49 = 1.0;
      v50 = *(float **)(a4 + 436);
      *v50 = 1.0;
LABEL_24:
      v50[1] = v49;
      break;
    default:
      break;
  }
  sub_10016A80((_DWORD *)(a4 + 244));
  if ( *(_BYTE *)(a4 + 188) )
  {
    v51 = *(_DWORD *)(a4 + 184);
    v52 = sub_10016D90(v51, *(_DWORD *)(a4 + 420));
    sub_10016B00((_DWORD *)(a4 + 192), v51, v52);
  }
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a4 + 180) + 80))(
    *(_DWORD *)(a4 + 180),
    *(_DWORD *)(a4 + 420),
    *(_DWORD *)(a4 + 216),
    a4);
  *(_DWORD *)(a4 + 208) = 0;
  *(_DWORD *)(a4 + 212) = 0;
  *(_DWORD *)(a4 + 416) = 0;
  *(_DWORD *)(a4 + 408) = 0;
  *(_DWORD *)(a4 + 320) = -1;
  *(_DWORD *)(a4 + 180) = 0;
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a3 + 48))(a3, -1, 0);
}
