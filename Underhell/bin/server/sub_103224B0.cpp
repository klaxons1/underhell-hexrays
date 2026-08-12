// bad sp value at call has been detected, the output may be wrong!
_DWORD *__userpurge sub_103224B0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5)
{
  int v5; // edi
  unsigned int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  float *v10; // esi
  long double v11; // st7
  int v12; // eax
  double v13; // st7
  int v14; // ecx
  float v15; // ecx
  _DWORD *v16; // esi
  int (__thiscall ***v17)(_DWORD, _DWORD); // eax
  int v18; // edi
  int (__thiscall *v19)(int); // eax
  float *v20; // eax
  int v21; // edx
  float *v22; // eax
  int v23; // ecx
  int v24; // ecx
  float *v25; // eax
  int (__thiscall *v26)(_DWORD *); // eax
  int v27; // eax
  double v28; // st7
  long double v29; // st7
  char v30; // al
  _DWORD *v32; // eax
  int v33; // edx
  _BYTE v36[12]; // [esp+48h] [ebp-13Ch] BYREF
  float v37[19]; // [esp+54h] [ebp-130h] BYREF
  _DWORD v38[10]; // [esp+A0h] [ebp-E4h] BYREF
  __m128 v39[5]; // [esp+C8h] [ebp-BCh] BYREF
  _DWORD v40[5]; // [esp+11Ch] [ebp-68h] BYREF
  _DWORD v41[3]; // [esp+130h] [ebp-54h] BYREF
  float v42; // [esp+13Ch] [ebp-48h]
  float *v43; // [esp+140h] [ebp-44h]
  float v44[2]; // [esp+144h] [ebp-40h] BYREF
  float v45; // [esp+14Ch] [ebp-38h]
  float v46[2]; // [esp+150h] [ebp-34h] BYREF
  float v47; // [esp+158h] [ebp-2Ch]
  int v48; // [esp+15Ch] [ebp-28h]
  float v49; // [esp+160h] [ebp-24h] BYREF
  float v50; // [esp+164h] [ebp-20h]
  float v51; // [esp+168h] [ebp-1Ch]
  int v52; // [esp+16Ch] [ebp-18h]
  float v53; // [esp+170h] [ebp-14h]
  float *v54; // [esp+174h] [ebp-10h]
  int v55; // [esp+178h] [ebp-Ch]
  void *v56; // [esp+17Ch] [ebp-8h]
  void *retaddr; // [esp+184h] [ebp+0h]

  v55 = a2;
  v56 = retaddr;
  v5 = a1;
  v6 = *(_DWORD *)(a1 + 9900);
  v48 = a1;
  if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (v6 & 0xFFF) + 1];
  sub_10265570(v40, a1, 0);
  v40[0] = &CBarnacleTongueFilter::`vftable';
  v40[3] = v7;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31E0 + 12))(
         dword_106B31E0,
         v5,
         a3,
         a4) )
  {
    v8 = 0;
  }
  else
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
  }
  v40[4] = v8;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v9 = *(_DWORD *)(v5 + 252);
  v10 = (float *)(v5 + 580);
  v49 = *(float *)(v5 + 580);
  v50 = *(float *)(v5 + 584);
  v51 = *(float *)(v5 + 588) - 2048.0;
  if ( (v9 & 0x800) != 0 )
    sub_100DAE60(v5);
  sub_1001F180(v39[0].m128_f32, (float *)(v5 + 580), &v49);
  (*(void (__thiscall **)(int, __m128 *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v39,
    33701899,
    v40,
    v36);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v36, (int)v37, 255, 0, 0, 1, -1.0);
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v11 = fabs(*(float *)(v5 + 588) - v37[2]) - *(float *)(v5 + 9892);
  if ( v11 < 8.0 )
    v11 = 8.0;
  v53 = v11;
  if ( a5 )
    *a5 = v11;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v12 = *(_DWORD *)(v5 + 252) >> 11;
  v13 = 12.0;
  v46[0] = *v10 - 12.0;
  v46[1] = *(float *)(v5 + 584) - 12.0;
  v47 = *(float *)(v5 + 588);
  if ( (v12 & 1) != 0 )
  {
    sub_100DAE60(v5);
    v13 = 12.0;
  }
  v14 = *(_DWORD *)(v5 + 252) >> 11;
  v44[0] = *v10 + v13;
  v44[1] = v13 + *(float *)(v5 + 584);
  v45 = *(float *)(v5 + 588);
  if ( (v14 & 1) != 0 )
    sub_100DAE60(v5);
  v45 = *(float *)(v5 + 588);
  v41[1] = v38;
  v54 = (float *)v41;
  v47 = v47 - v53;
  v41[0] = &CTongueEntitiesEnum::`vftable';
  v41[2] = 10;
  v42 = 0.0;
  (*(void (__thiscall **)(int, int, float *, float *, _DWORD))(*(_DWORD *)dword_106B31EC + 48))(
    dword_106B31EC,
    1,
    v46,
    v44,
    0);
  *(float *)&v52 = v42;
  if ( v42 == 0.0 )
    return 0;
  v15 = 0.0;
  v53 = 0.0;
  if ( SLODWORD(v42) <= 0 )
    return 0;
  while ( 1 )
  {
    v16 = (_DWORD *)v38[LODWORD(v15)];
    if ( (v16[63] & 0x100000) != 0 )
      goto LABEL_54;
    if ( (*(int (__thiscall **)(_DWORD *))(*v16 + 340))(v16) )
    {
      v17 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(_DWORD *))(*v16 + 340))(v16);
      v18 = (**v17)(v17, 0);
      if ( v18 )
      {
        (*(void (__thiscall **)(_DWORD *, float *, _DWORD))(*v16 + 540))(v16, &v49, 0);
        if ( (*(_DWORD *)(v18 + 252) & 0x800) != 0 )
          sub_100DAE60(v18);
        v19 = *(int (__thiscall **)(int))(*(_DWORD *)(v18 + 320) + 8);
        v49 = *(float *)(v18 + 580) - v49 * 0.1;
        v50 = *(float *)(v18 + 584) - v50 * 0.1;
        v51 = *(float *)(v18 + 588) - 0.1 * v51;
        v20 = (float *)v19(v18 + 320);
        v21 = *(_DWORD *)(v18 + 320);
        v43 = v20;
        v22 = (float *)(*(int (__thiscall **)(int))(v21 + 4))(v18 + 320);
        v23 = *(_DWORD *)(v18 + 252) >> 11;
        v54 = v22;
        if ( (v23 & 1) != 0 )
          sub_100DAE60(v18);
        sub_1001F200(v39[0].m128_f32, &v49, (float *)(v18 + 580), v54, v43);
        if ( sub_101135C0(v46, v44, v39, COERCE_UNSIGNED_INT(0.0)) )
          v16 = (_DWORD *)v18;
      }
      v5 = v48;
    }
    if ( *((_BYTE *)v16 + 306) == 6 )
    {
      v24 = v16[106];
      if ( v24 )
      {
        if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v24 + 116))(v24) <= 70.0 )
          break;
      }
    }
    v54 = (float *)(*(int (__thiscall **)(_DWORD *))(*v16 + 288))(v16);
    if ( v54 )
    {
      if ( v16 != (_DWORD *)v5 && (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 1080))(v5, v16) == 1 )
      {
        v30 = *((_BYTE *)v54 + 224);
        if ( v30 != 2 && v30 != 1 && ((_DWORD)v54[64] & 0x8000) == 0 )
        {
          v32 = sub_10019640((_DWORD *)v5);
          v33 = *v16;
          v52 = v32[2];
          v27 = (*(int (__thiscall **)(_DWORD *))(v33 + 576))(v16);
          v28 = *(float *)&v52;
          goto LABEL_46;
        }
      }
    }
LABEL_54:
    LODWORD(v15) = LODWORD(v53) + 1;
    v53 = v15;
    if ( SLODWORD(v15) >= v52 )
      return 0;
  }
  if ( ((*(int (__thiscall **)(_DWORD *))(v16[80] + 48))(v16 + 80) & 8) != 0 )
  {
    v54 = (float *)(*(int (__thiscall **)(_DWORD *))(*v16 + 576))(v16);
    v25 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
    if ( fabs(v25[1] - v54[1]) + fabs(*v25 - *v54) > 16.0 )
      goto LABEL_54;
  }
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  v26 = *(int (__thiscall **)(_DWORD *))(*v16 + 576);
  v52 = *(int *)(v5 + 588);
  v27 = v26(v16);
  v28 = *(float *)&v52;
LABEL_46:
  v29 = fabs(v28 - *(float *)(v27 + 8)) - *(float *)(v5 + 9892);
  if ( v29 < 8.0 )
    v29 = 8.0;
  if ( a5 )
    *a5 = v29;
  return v16;
}
