bool __thiscall sub_101AC460(int this)
{
  int v2; // edx
  unsigned int v3; // eax
  bool result; // al
  _BYTE *v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // edi
  char v10; // bl
  int v11; // edx
  unsigned int v12; // eax
  int *v13; // ecx
  int v14; // edi
  double v15; // st6
  int v16; // ecx
  double v17; // st5
  double v18; // st4
  int v19; // eax
  int v20; // edx
  unsigned int v21; // eax
  float v22; // ecx
  float v23; // edx
  int v24; // eax
  double v25; // st7
  float *v26; // eax
  double v27; // st7
  double v28; // st5
  double v29; // st4
  double v30; // st6
  int v31; // eax
  double v32; // st7
  double v33; // st6
  double v34; // st4
  double v35; // st5
  double v36; // st2
  double v37; // st7
  double v38; // st2
  bool v39; // c0
  bool v40; // c3
  double v41; // st5
  double v42; // st6
  double v43; // st4
  double v44; // rtt
  float *v45; // esi
  double v46; // st6
  float v47[3]; // [esp+18h] [ebp-34h] BYREF
  float v48[3]; // [esp+24h] [ebp-28h] BYREF
  int v49; // [esp+30h] [ebp-1Ch] BYREF
  float v50; // [esp+34h] [ebp-18h]
  float v51; // [esp+38h] [ebp-14h]
  float v52; // [esp+3Ch] [ebp-10h]
  float v53; // [esp+40h] [ebp-Ch]
  float v54; // [esp+44h] [ebp-8h]
  int v55; // [esp+48h] [ebp-4h] BYREF
  int savedregs; // [esp+4Ch] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 4);
  if ( *(_BYTE *)(v2 + 316) == 8 )
  {
    v3 = *(_DWORD *)(v2 + 5228);
    if ( v3 != -1 && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v2 + 5228) & 0xFFF) + 2) == v3 >> 12 )
    {
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v2 + 5228) & 0xFFF) + 1) )
        nullsub_5(v2);
    }
    *(_DWORD *)(*(_DWORD *)(this + 4) + 5228) = -1;
    return 0;
  }
  if ( v2 )
    v5 = (_BYTE *)(v2 + 5232);
  else
    v5 = 0;
  if ( *v5 && sub_101ABCC0((_DWORD *)this) )
    return 1;
  v6 = *(_DWORD *)(this + 4);
  v7 = *(_DWORD *)(v6 + 5228);
  *(float *)&v49 = 0.0;
  v50 = 0.0;
  *(float *)&v55 = 0.0;
  v51 = 0.0;
  if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 2) != v7 >> 12 )
    v8 = 0;
  else
    v8 = *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_21;
  if ( *(_BYTE *)(v8 + 1248)
    || *(float *)(v6 + 288) * *(float *)(v6 + 288)
     + *(float *)(v6 + 284) * *(float *)(v6 + 284)
     + *(float *)(v6 + 292) * *(float *)(v6 + 292) > 1.0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1012))(v6);
    v9 = 0;
LABEL_21:
    sub_101ABE10((int *)this, (int)&savedregs, 64.0, &v55, (float *)&v49, 0);
  }
  v10 = (*(_DWORD *)(*(_DWORD *)(this + 8) + 36) >> 5)
      & ((*(_DWORD *)(*(_DWORD *)(this + 8) + 36) >> 5)
       ^ (*(_DWORD *)(*(_DWORD *)(this + 8) + 40) >> 5))
      & 1;
  if ( !v9 )
  {
    if ( !v10 )
      return !*(_DWORD *)(dword_1044E67C + 48)
          && ((!sub_100F7AF0(*(_DWORD **)(this + 4)) || *(float *)(*(_DWORD *)(this + 8) + 44) > 0.0)
           && sub_101AC220(this, v55, (float *)&v49, 15.0, 32.0)
           || *(float *)(*(_DWORD *)(this + 8) + 44) > 0.0 && sub_101AC0B0(this, v55, (float *)&v49));
    sub_101ABA80(this, v55);
  }
  v11 = *(_DWORD *)(this + 4);
  v12 = *(_DWORD *)(v11 + 5228);
  if ( v12 == -1 )
    return 0;
  v13 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(v11 + 5228) & 0xFFF) + 4);
  if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v11 + 5228) & 0xFFF) + 2) != v12 >> 12 )
    return 0;
  v14 = *v13;
  if ( !*v13 )
    return 0;
  if ( v10 )
    *(_BYTE *)(v11 + 5324) = 0;
  sub_10035C70(*(_BYTE **)(this + 4), 9, 0);
  sub_10034490(*(_BYTE **)(this + 4), 0);
  *(float *)(*(_DWORD *)(this + 4) + 296) = 0.0;
  v15 = 0.0;
  v16 = *(_DWORD *)(this + 8);
  v17 = 0.0;
  v18 = *(float *)(*(_DWORD *)(this + 4) + 4144);
  v19 = *(_DWORD *)(v16 + 36);
  if ( (v19 & 0x10) != 0 )
    v15 = -v18;
  if ( (v19 & 8) != 0 )
    v15 = v15 + v18;
  if ( (v19 & 0x200) != 0 )
    v17 = -v18;
  if ( (v19 & 0x400) != 0 )
    v17 = v17 + v18;
  if ( (v19 & 2) == 0 )
  {
    if ( 0.0 == v15 && 0.0 == v17 )
    {
      *(float *)(v16 + 64) = 0.0;
      result = 1;
      *(float *)(v16 + 68) = 0.0;
      *(float *)(v16 + 72) = 0.0;
      return result;
    }
    v27 = v17;
    v28 = *(float *)(this + 24) * v15;
    v29 = *(float *)(this + 28) * v15;
    v30 = v15 * *(float *)(this + 32);
    v52 = v28 + *(float *)(this + 36) * v27;
    v53 = v29 + *(float *)(this + 40) * v27;
    v54 = v27 * *(float *)(this + 44) + v30;
    off_103EDFEC();
    sub_1009E440(v14, (float *)&v49);
    off_103EDFEC();
    sub_1009E3A0(v14, v48);
    sub_1009E3F0(v14, v47);
    v31 = *(_DWORD *)(this + 8);
    *(float *)&v55 = 0.0;
    if ( sub_101F1280(v31 + 152, v48, v47, &v55) > 36.0 )
    {
      sub_10035C70(*(_BYTE **)(this + 4), 2, 0);
      sub_101ABA00((_DWORD *)this, 0);
      return 0;
    }
    if ( fabs(v48[2] - v47[2]) >= 64.0 )
      v32 = 0.30000001;
    else
      v32 = 0.0;
    v33 = 1.0;
    v34 = v50;
    v35 = v54 * v51 + v53 * v50 + v52 * *(float *)&v49;
    if ( v54 < 0.0 )
    {
      if ( -v35 <= v32 )
      {
        v37 = *(float *)&v49;
        v34 = v50;
        v41 = v51;
        goto LABEL_70;
      }
      v42 = v50;
      v37 = *(float *)&v49;
      v43 = -1.0;
      v41 = v51;
    }
    else
    {
      v36 = v32;
      v37 = *(float *)&v49;
      v38 = -v36;
      v39 = v38 < v35;
      v40 = v38 == v35;
      v41 = v51;
      if ( v39 || v40 )
      {
LABEL_70:
        v45 = *(float **)(this + 8);
        v46 = v33 * *(float *)(dword_1044E5A4 + 44);
        v45[16] = v37 * v46;
        v45[17] = v34 * v46;
        v45[18] = v46 * v41;
        return 1;
      }
      v42 = v50;
      v43 = -1.0;
    }
    v44 = v43;
    v34 = v42;
    v33 = v44;
    goto LABEL_70;
  }
  sub_10035C70(*(_BYTE **)(this + 4), 2, 0);
  v20 = *(_DWORD *)(this + 4);
  v21 = *(_DWORD *)(v20 + 5228);
  if ( v21 != -1
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v20 + 5228) & 0xFFF) + 2) == v21 >> 12
    && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v20 + 5228) & 0xFFF) + 1) )
  {
    nullsub_5(*(_DWORD *)(this + 4));
  }
  *(_DWORD *)(*(_DWORD *)(this + 4) + 5228) = -1;
  v22 = *(float *)(this + 28);
  v23 = *(float *)(this + 32);
  v52 = *(float *)(this + 24);
  v24 = *(_DWORD *)(this + 8);
  v53 = v22;
  v54 = v23;
  if ( *(float *)(v24 + 44) < 0.0 )
  {
    v52 = -v52;
    v53 = -v53;
    v54 = -v54;
  }
  off_103EDFEC();
  v25 = *(float *)(dword_1044E5A4 + 44);
  v26 = (float *)(*(_DWORD *)(this + 8) + 64);
  *v26 = v52 * v25;
  v26[1] = v53 * v25;
  v26[2] = v25 * v54;
  if ( *(float *)(this + 32) >= 0.0 )
    *(float *)(*(_DWORD *)(this + 8) + 72) = *(float *)(*(_DWORD *)(this + 8) + 72) + 50.0;
  return 0;
}
