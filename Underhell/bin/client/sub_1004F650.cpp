int __thiscall sub_1004F650(
        float *this,
        void (__thiscall ***a2)(_DWORD, float *, float *),
        int a3,
        int a4,
        float *a5,
        float *a6,
        float *a7)
{
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  void (__thiscall *v17)(_DWORD, float *, float *); // edx
  double v18; // st7
  double v19; // st6
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  double v25; // st6
  double v26; // st7
  void (__thiscall **v27)(_DWORD, float *, float *); // edx
  void (__thiscall *v28)(_DWORD, float *, float *); // edx
  double v29; // st7
  double v30; // st6
  float *v31; // eax
  float *v32; // eax
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  double v36; // st6
  void (__thiscall *v37)(_DWORD, float *, float *); // edx
  double v38; // st7
  double v39; // st7
  double v40; // st6
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  float *v44; // eax
  float *v45; // eax
  int v46; // ebx
  int v47; // eax
  float v49; // [esp+Ch] [ebp-1Ch] BYREF
  float v50; // [esp+10h] [ebp-18h]
  float v51; // [esp+14h] [ebp-14h]
  float v52; // [esp+18h] [ebp-10h] BYREF
  float v53; // [esp+1Ch] [ebp-Ch]
  float v54; // [esp+20h] [ebp-8h] BYREF
  float v55; // [esp+24h] [ebp-4h]

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
  (**a2)(a2, a5, &v52);
  (*a2)[1](a2, a5, &v54);
  v10 = *(float **)(a4 + 428);
  v11 = a5[1];
  v12 = a5[2];
  *v10 = *a5;
  v10[1] = v11;
  v10[2] = v12;
  **(_DWORD **)(a4 + 468) = -1;
  v13 = *(float **)(a4 + 436);
  *v13 = 0.0;
  v13[1] = 1.0;
  v14 = *(float **)(a4 + 440);
  *v14 = v54;
  v14[1] = v55;
  v15 = *(float **)(a4 + 444);
  *v15 = v52;
  v15[1] = v53;
  v16 = *(float **)(a4 + 432);
  *v16 = this[303];
  v16[1] = this[304];
  v16[2] = this[305];
  sub_10016A80((_DWORD *)(a4 + 244));
  v17 = **a2;
  v49 = *a5 + *a6;
  v50 = a5[1] + a6[1];
  v51 = a5[2] + a6[2];
  v17(a2, &v49, &v52);
  (*a2)[1](a2, &v49, &v54);
  v18 = v50;
  v19 = v51;
  v20 = *(float **)(a4 + 428);
  *v20 = v49;
  v20[1] = v18;
  v20[2] = v19;
  **(_DWORD **)(a4 + 468) = -1;
  v21 = *(float **)(a4 + 436);
  *v21 = 0.0;
  v21[1] = 0.0;
  v22 = *(float **)(a4 + 440);
  *v22 = v54;
  v22[1] = v55;
  v23 = *(float **)(a4 + 444);
  *v23 = v52;
  v23[1] = v53;
  v24 = *(float **)(a4 + 432);
  *v24 = this[303];
  v24[1] = this[304];
  v24[2] = this[305];
  sub_10016A80((_DWORD *)(a4 + 244));
  v25 = a7[1] + v50;
  v26 = a7[2] + v51;
  v27 = *a2;
  v49 = *a7 + v49;
  v28 = *v27;
  v50 = v25;
  v51 = v26;
  v28(a2, &v49, &v52);
  (*a2)[1](a2, &v49, &v54);
  v29 = v50;
  v30 = v51;
  v31 = *(float **)(a4 + 428);
  *v31 = v49;
  v31[1] = v29;
  v31[2] = v30;
  **(_DWORD **)(a4 + 468) = -1;
  v32 = *(float **)(a4 + 436);
  *v32 = 1.0;
  v32[1] = 0.0;
  v33 = *(float **)(a4 + 440);
  *v33 = v54;
  v33[1] = v55;
  v34 = *(float **)(a4 + 444);
  *v34 = v52;
  v34[1] = v53;
  v35 = *(float **)(a4 + 432);
  *v35 = this[303];
  v35[1] = this[304];
  v35[2] = this[305];
  sub_10016A80((_DWORD *)(a4 + 244));
  v36 = v50 - a6[1];
  v37 = **a2;
  v38 = v51 - a6[2];
  v49 = v49 - *a6;
  v50 = v36;
  v51 = v38;
  v37(a2, &v49, &v52);
  (*a2)[1](a2, &v49, &v54);
  v39 = v50;
  v40 = v51;
  v41 = *(float **)(a4 + 428);
  *v41 = v49;
  v41[1] = v39;
  v41[2] = v40;
  **(_DWORD **)(a4 + 468) = -1;
  v42 = *(float **)(a4 + 436);
  *v42 = 1.0;
  v42[1] = 1.0;
  v43 = *(float **)(a4 + 440);
  *v43 = v54;
  v43[1] = v55;
  v44 = *(float **)(a4 + 444);
  *v44 = v52;
  v44[1] = v53;
  v45 = *(float **)(a4 + 432);
  *v45 = this[303];
  v45[1] = this[304];
  v45[2] = this[305];
  sub_10016A80((_DWORD *)(a4 + 244));
  if ( *(_BYTE *)(a4 + 188) )
  {
    v46 = *(_DWORD *)(a4 + 184);
    v47 = sub_10016D90(v46, *(_DWORD *)(a4 + 420));
    sub_10016B00((_DWORD *)(a4 + 192), v46, v47);
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
