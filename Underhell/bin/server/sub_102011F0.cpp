void __usercall sub_102011F0(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  _DWORD *v6; // edi
  float *v7; // eax
  int v8; // edi
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // rt1
  double v17; // st5
  int *v18; // esi
  int v19; // eax
  int v20; // ecx
  float *v21; // eax
  int v22; // eax
  float *v23; // ebx
  float *v24; // edi
  int v25; // esi
  double v26; // st7
  int v27; // ecx
  float v28; // [esp+0h] [ebp-40h]
  float v29; // [esp+0h] [ebp-40h]
  _DWORD v30[3]; // [esp+10h] [ebp-30h] BYREF
  float v31; // [esp+1Ch] [ebp-24h]
  float v32; // [esp+20h] [ebp-20h]
  float v33; // [esp+24h] [ebp-1Ch]
  float v34; // [esp+28h] [ebp-18h] BYREF
  float v35; // [esp+2Ch] [ebp-14h]
  float v36; // [esp+30h] [ebp-10h]
  float v37; // [esp+34h] [ebp-Ch]
  int v38; // [esp+38h] [ebp-8h]
  int *v39; // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h] BYREF

  v4 = *(_DWORD *)(a1 + 844);
  v38 = a1;
  if ( v4 != -1 && off_1061BE18[4 * (v4 & 0xFFF) + 2] == v4 >> 12 && off_1061BE18[4 * (v4 & 0xFFF) + 1] )
  {
    if ( !*(_BYTE *)(a1 + 800) )
    {
      sub_102004C0((_DWORD *)a1);
      return;
    }
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 800) )
      return;
    sub_10200A50(a1, a2);
  }
  v5 = *(_DWORD *)(a1 + 848);
  v6 = (_DWORD *)(a1 + 848);
  v39 = (int *)(a1 + 848);
  if ( v5 != -1 && off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12 && off_1061BE18[4 * (v5 & 0xFFF) + 1]
    || (DevWarning("**Attempting to update point_spotlight but target ent is NULL\n"),
        sub_102004C0((_DWORD *)a1),
        sub_10200A50(a1, (int)v6),
        *v6 != -1)
    && off_1061BE18[4 * (*v6 & 0xFFF) + 2] == *v6 >> 12
    && off_1061BE18[4 * (*v6 & 0xFFF) + 1] )
  {
    v7 = (float *)sub_10200370(a1, (int)&savedregs, (int)v6, a3, v30);
    *(float *)(a1 + 816) = *v7;
    *(float *)(a1 + 820) = v7[1];
    *(float *)(a1 + 824) = v7[2];
    if ( *v6 == -1 || off_1061BE18[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*v6 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    v9 = *(float *)(a1 + 816) - *(float *)(v8 + 580);
    v31 = v9;
    v10 = *(float *)(a1 + 820) - *(float *)(v8 + 584);
    v32 = v10;
    v11 = *(float *)(a1 + 824) - *(float *)(v8 + 588);
    v33 = v11;
    v28 = v9 * v9 + v10 * v10 + v11 * v11;
    v12 = off_10689708(v28);
    v37 = v12;
    if ( v12 >= 1.0 )
    {
      v36 = v33;
      v34 = v31;
      v35 = v32;
      off_10689714();
      v13 = v37 * 10.0;
      v14 = v34 * v13;
      v34 = v14;
      v15 = v35 * v13;
      v35 = v15;
      v16 = v15;
      v17 = v13 * v36;
      v36 = v17;
      v29 = v17 * v17 + v14 * v14 + v16 * v16;
      if ( off_10689708(v29) <= 200.0 )
      {
        v18 = v39;
      }
      else
      {
        off_10689714();
        v34 = v34 * 200.0;
        v35 = v35 * 200.0;
        v36 = 200.0 * v36;
        off_10689714();
        v18 = v39;
        v19 = sub_1026A890(v39);
        sub_100E0D20(v19, (float *)(a1 + 816));
      }
      if ( *v18 == -1 || off_1061BE18[4 * (*v18 & 0xFFF) + 2] != (unsigned int)*v18 >> 12 )
        v20 = 0;
      else
        v20 = off_1061BE18[4 * (*v18 & 0xFFF) + 1];
      sub_100DD660(v20, &v34);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      if ( *v18 == -1 || off_1061BE18[4 * (*v18 & 0xFFF) + 2] != (unsigned int)*v18 >> 12 )
        v21 = 0;
      else
        v21 = (float *)off_1061BE18[4 * (*v18 & 0xFFF) + 1];
      v21[205] = *(float *)(a1 + 580);
      v21[206] = *(float *)(a1 + 584);
      v21[207] = *(float *)(a1 + 588);
      v22 = *v18;
      if ( *v18 == -1 || off_1061BE18[4 * (*v18 & 0xFFF) + 2] != (unsigned int)*v18 >> 12 )
        v23 = 0;
      else
        v23 = (float *)off_1061BE18[4 * (*v18 & 0xFFF) + 1];
      if ( v22 == -1 || off_1061BE18[4 * (*v18 & 0xFFF) + 2] != (unsigned int)*v18 >> 12 )
        v24 = 0;
      else
        v24 = (float *)off_1061BE18[4 * (*v18 & 0xFFF) + 1];
      if ( v22 == -1 || off_1061BE18[4 * (*v18 & 0xFFF) + 2] != (unsigned int)*v18 >> 12 )
        v25 = 0;
      else
        v25 = off_1061BE18[4 * (*v18 & 0xFFF) + 1];
      if ( (*(_DWORD *)(v25 + 252) & 0x800) != 0 )
        sub_100DAE60(v25);
      v23[202] = *(float *)(v25 + 580) - v24[205];
      v23[203] = *(float *)(v25 + 584) - v24[206];
      v23[204] = *(float *)(v25 + 588) - v24[207];
      v26 = off_10689714();
      v27 = v38;
      *(float *)(v38 + 856) = *(float *)(v38 + 856) * 0.6 + v26 * 0.4;
      sub_10200650(v27);
    }
    else if ( *v39 == -1 || off_1061BE18[4 * (*v39 & 0xFFF) + 2] != (unsigned int)*v39 >> 12 )
    {
      sub_100DD660(0, &flt_106F1CA8);
    }
    else
    {
      sub_100DD660(off_1061BE18[4 * (*v39 & 0xFFF) + 1], &flt_106F1CA8);
    }
  }
}
