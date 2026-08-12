// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_103CBDF0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, float *a6)
{
  float v6; // edx
  float v8; // ecx
  double v9; // st7
  double v10; // st5
  double v11; // st6
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // eax
  double v17; // st7
  double v18; // st4
  double v19; // st1
  double v20; // st3
  double v21; // st5
  double v22; // st6
  double v23; // st5
  double v24; // st6
  int v25; // eax
  int v26; // ecx
  void (__thiscall *v27)(int, float *, int); // eax
  double v28; // st4
  double v29; // st5
  double v30; // st6
  float v32; // [esp+20h] [ebp-120h]
  float v34[24]; // [esp+34h] [ebp-10Ch] BYREF
  _BYTE v35[12]; // [esp+94h] [ebp-ACh] BYREF
  _BYTE v36[32]; // [esp+A0h] [ebp-A0h] BYREF
  float v37; // [esp+C0h] [ebp-80h]
  int v38[3]; // [esp+ECh] [ebp-54h] BYREF
  int v39[5]; // [esp+F8h] [ebp-48h] BYREF
  float v40; // [esp+10Ch] [ebp-34h]
  float v41; // [esp+110h] [ebp-30h] BYREF
  float v42; // [esp+114h] [ebp-2Ch]
  float v43; // [esp+118h] [ebp-28h]
  float v44; // [esp+11Ch] [ebp-24h] BYREF
  float v45; // [esp+120h] [ebp-20h]
  float v46; // [esp+124h] [ebp-1Ch]
  float v47; // [esp+128h] [ebp-18h] BYREF
  float v48; // [esp+12Ch] [ebp-14h]
  float v49; // [esp+130h] [ebp-10h]
  int v50; // [esp+134h] [ebp-Ch]
  void *v51; // [esp+138h] [ebp-8h]
  void *retaddr; // [esp+140h] [ebp+0h]

  v50 = a2;
  v51 = retaddr;
  v6 = flt_106F1CAC;
  *a5 = flt_106F1CA8;
  v8 = flt_106F1CB0;
  a5[1] = v6;
  a5[2] = v8;
  sub_10421D80(a6, &v44);
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v32 = *(float *)(a1 + 480) * *(float *)(a1 + 480)
      + *(float *)(a1 + 476) * *(float *)(a1 + 476)
      + *(float *)(a1 + 484) * *(float *)(a1 + 484);
  v9 = off_10689708(v32);
  v40 = v9;
  v10 = v45 + a6[1];
  v11 = v46 + a6[2];
  v47 = (*a6 + v44) * v9;
  v48 = v10 * v9;
  v49 = v9 * v11;
  sub_10265E30(v38, 0);
  sub_10265E60(v38, a1);
  v12 = *(_DWORD *)(a1 + 412);
  if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 412) & 0xFFF) + 1];
  sub_10265E60(v38, v13);
  v14 = *(_DWORD *)(a1 + 804);
  if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 2] != v14 >> 12 )
    v15 = 0;
  else
    v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 1];
  sub_10265E60(v38, v15);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v16 = *(_DWORD *)(a1 + 252) >> 11;
  v41 = v47 + *(float *)(a1 + 580);
  v42 = *(float *)(a1 + 584) + v48;
  v43 = *(float *)(a1 + 588) + v49;
  if ( (v16 & 1) != 0 )
    sub_100DAE60(a1);
  sub_1001F180(v34, (float *)(a1 + 580), &v41);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v34,
    1174421507,
    v38,
    v35,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v35, (int)v36, 255, 0, 0, 1, -1.0);
  v17 = v44;
  v18 = v45;
  v19 = 1.0 - v37;
  v20 = v45 * 100.0 * v19;
  v21 = 100.0 * v46 * v19;
  v22 = v46;
  *a5 = *a5 - v44 * 100.0 * v19;
  a5[1] = a5[1] - v20;
  a5[2] = a5[2] - v21;
  v23 = a6[1] - v18;
  v24 = a6[2] - v22;
  v25 = *(_DWORD *)(a1 + 252) >> 11;
  v47 = (*a6 - v17) * v40;
  v48 = v23 * v40;
  v49 = v40 * v24;
  if ( (v25 & 1) != 0 )
    sub_100DAE60(a1);
  v26 = *(_DWORD *)(a1 + 252) >> 11;
  v41 = v47 + *(float *)(a1 + 580);
  v42 = *(float *)(a1 + 584) + v48;
  v43 = *(float *)(a1 + 588) + v49;
  if ( (v26 & 1) != 0 )
    sub_100DAE60(a1);
  sub_1001F180(v34, (float *)(a1 + 580), &v41);
  sub_10265570(&v47, a1, 0);
  v27 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
  v49 = COERCE_FLOAT(v35);
  v48 = COERCE_FLOAT(&v47);
  v27(dword_106B31F4, v34, 1174421507);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v35, (int)v36, 255, 0, 0, 1, 5.0);
  v28 = 1.0 - v37;
  v29 = v45 * 100.0 * v28;
  v30 = 100.0 * v46 * v28;
  *a5 = v44 * 100.0 * v28 + *a5;
  a5[1] = v29 + a5[1];
  a5[2] = v30 + a5[2];
  sub_102375F0(v39);
  return a5;
}
