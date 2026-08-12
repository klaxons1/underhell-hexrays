void __thiscall sub_1035B230(void *this)
{
  float v2; // ecx
  float v3; // edx
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // edi
  double v8; // st7
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  float v14; // edx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // ebx
  unsigned int v18; // eax
  int v19; // edi
  bool v20; // zf
  unsigned int v21; // eax
  double v22; // st6
  double v23; // st7
  long double v24; // st5
  int v25; // ecx
  long double v26; // st4
  void (*v27)(void); // eax
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  int v31; // edi
  long double v32; // st7
  unsigned int v33; // ecx
  int v34; // eax
  long double v35; // st7
  int v36; // eax
  int v37; // eax
  float v38; // [esp+8h] [ebp-78h]
  float v39; // [esp+Ch] [ebp-74h]
  float v40; // [esp+Ch] [ebp-74h]
  int v41; // [esp+14h] [ebp-6Ch] BYREF
  float v42; // [esp+18h] [ebp-68h]
  float v43; // [esp+1Ch] [ebp-64h]
  int v44; // [esp+20h] [ebp-60h] BYREF
  float v45; // [esp+24h] [ebp-5Ch]
  float v46; // [esp+28h] [ebp-58h]
  float v47[2]; // [esp+2Ch] [ebp-54h] BYREF
  float v48; // [esp+34h] [ebp-4Ch]
  float v49[2]; // [esp+38h] [ebp-48h] BYREF
  float v50; // [esp+40h] [ebp-40h]
  int v51[3]; // [esp+44h] [ebp-3Ch] BYREF
  float v52; // [esp+50h] [ebp-30h]
  float v53; // [esp+54h] [ebp-2Ch]
  float v54; // [esp+58h] [ebp-28h]
  int v55; // [esp+5Ch] [ebp-24h] BYREF
  float v56; // [esp+60h] [ebp-20h]
  float v57; // [esp+64h] [ebp-1Ch]
  float v58; // [esp+68h] [ebp-18h]
  float v59; // [esp+6Ch] [ebp-14h]
  float v60; // [esp+70h] [ebp-10h]
  float v61; // [esp+74h] [ebp-Ch]
  int v62; // [esp+78h] [ebp-8h]
  float v63; // [esp+7Ch] [ebp-4h]

  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this)
    && *((float *)this + 916) == flt_106F1CA8
    && *((float *)this + 917) == flt_106F1CAC
    && *((float *)this + 918) == flt_106F1CB0 )
  {
    return;
  }
  v2 = *((float *)this + 917);
  v3 = *((float *)this + 918);
  v55 = *((int *)this + 916);
  v4 = *((_DWORD *)this + 940);
  v56 = v2;
  v57 = v3;
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( v5[1] == v6 )
    {
      if ( *v5 )
      {
        if ( v5[1] == v6 )
          v7 = *v5;
        else
          v7 = 0;
        if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
          sub_100DAE60(v7);
        v55 = *(int *)(v7 + 580);
        v56 = *(float *)(v7 + 584);
        v8 = *(float *)(v7 + 588);
        goto LABEL_18;
      }
    }
  }
  if ( !*((_BYTE *)this + 3788)
    && !*((_BYTE *)this + 3789)
    && (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    v10 = sub_10019640(v9);
    v55 = *v10;
    v56 = *((float *)v10 + 1);
    v8 = *((float *)v10 + 2);
LABEL_18:
    v57 = v8;
  }
  v11 = *((_DWORD *)this + 939);
  if ( v11 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 1];
  v13 = sub_103E5A80(v12);
  v51[0] = *(_DWORD *)v13;
  v14 = *(float *)(v13 + 4);
  v60 = *(float *)v51;
  *(float *)&v51[1] = v14;
  v15 = *(_DWORD *)(v13 + 8);
  v61 = v14;
  v51[2] = v15;
  v16 = *((_DWORD *)this + 939);
  v62 = v55;
  v63 = v56;
  if ( v16 == -1 || off_1061BE18[4 * (v16 & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = off_1061BE18[4 * (v16 & 0xFFF) + 1];
  if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
    sub_100DAE60(v17);
  v18 = *((_DWORD *)this + 939);
  if ( v18 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
    sub_100DAE60(v19);
  v20 = *(_DWORD *)(dword_106B945C + 48) == 0;
  v58 = *(float *)(v19 + 580);
  v59 = *(float *)(v17 + 584);
  if ( !v20 )
  {
    *(float *)&v44 = 50.0;
    v45 = 50.0;
    v46 = 50.0;
    *(float *)&v41 = -50.0;
    v42 = -50.0;
    v43 = -50.0;
    sub_1011BB20((int)&v55, (int)&v41, (int)&v44, 0, 255, 0, 1, 0.1);
    *(float *)&v41 = 2.0;
    v42 = 2.0;
    v43 = 5.0;
    *(float *)&v44 = -2.0;
    v45 = -2.0;
    v46 = -5000.0;
    sub_1011BB20((int)v51, (int)&v44, (int)&v41, 0, 255, 0, 1, 0.1);
    *(float *)&v41 = 2.0;
    v42 = 2.0;
    v43 = 5000.0;
    *(float *)&v44 = -2.0;
    v45 = -2.0;
    v46 = -5.0;
    sub_1011BB20((int)&v55, (int)&v44, (int)&v41, 0, 255, 0, 1, 0.1);
  }
  v38 = (*(float *)&v62 - v60) * (*(float *)&v62 - v60) + (v63 - v61) * (v63 - v61);
  *((float *)this + 941) = off_10689708(v38);
  v21 = *((_DWORD *)this + 939);
  v22 = (v58 - *(float *)&v62) * (v58 - *(float *)&v62) + (v59 - v63) * (v59 - v63);
  v23 = (v58 - v60) * (v58 - v60) + (v59 - v61) * (v59 - v61);
  v24 = fabs(v22 - v23);
  if ( v21 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 2] != v21 >> 12 )
    v25 = 0;
  else
    v25 = off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 1];
  v26 = fabs(*(float *)(v25 + 1664) * 100.0);
  if ( (v26 * 50.0 + 50.0) * (v26 * 50.0 + 50.0) >= v24 )
  {
    v27 = *(void (**)(void))(**((_DWORD **)this + 907) + 160);
  }
  else if ( v22 >= v23 )
  {
    if ( v22 <= v23 )
      goto LABEL_48;
    v27 = *(void (**)(void))(**((_DWORD **)this + 907) + 168);
  }
  else
  {
    v27 = *(void (**)(void))(**((_DWORD **)this + 907) + 164);
  }
  v27();
LABEL_48:
  v28 = *((_DWORD *)this + 939);
  if ( v28 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 2] != v28 >> 12 )
    v29 = 0;
  else
    v29 = off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)v29 + 528))(v29, v47, v49, 0);
  v50 = 0.0;
  v48 = 0.0;
  off_10689714();
  off_10689714();
  v30 = *((_DWORD *)this + 939);
  if ( v30 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 2] != v30 >> 12 )
    v31 = 0;
  else
    v31 = off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v31 + 252) & 0x800) != 0 )
    sub_100DAE60(v31);
  v52 = *(float *)&v55 - *(float *)(v31 + 580);
  v53 = v56 - *(float *)(v31 + 584);
  v54 = 0.0;
  off_10689714();
  v63 = v49[1] * v53 + v49[0] * v52 + v50 * v54;
  v32 = acos(v53 * v47[1] + v52 * v47[0] + v54 * v48) * 57.29578;
  v33 = *((_DWORD *)this + 939);
  if ( v33 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 2] != *((_DWORD *)this + 939) >> 12 )
    v34 = 0;
  else
    v34 = off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 1];
  v35 = v32 * 0.06666666666666667 * *(float *)(v34 + 1692);
  if ( v33 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 2] != *((_DWORD *)this + 939) >> 12 )
    v36 = 0;
  else
    v36 = off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 1];
  if ( v35 > *(float *)(v36 + 1692) )
  {
    if ( v33 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 2] != v33 >> 12 )
      v37 = 0;
    else
      v37 = off_1061BE18[4 * (*((_DWORD *)this + 939) & 0xFFF) + 1];
    v35 = *(float *)(v37 + 1692);
  }
  if ( fabs(v35) >= 0.05 )
  {
    if ( v63 >= 0.0 )
    {
      if ( v63 > 0.0 )
      {
        v40 = v35;
        (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 907) + 176))(LODWORD(v40));
      }
    }
    else
    {
      v39 = v35;
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 907) + 180))(LODWORD(v39));
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 907) + 184))(*((_DWORD *)this + 907));
  }
}
