void __thiscall sub_103AB3E0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  float *v7; // eax
  float *v8; // edi
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // rt1
  double v17; // st5
  int v18; // eax
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  float *v22; // eax
  unsigned int v23; // eax
  float *v24; // edx
  float *v25; // ecx
  double v26; // st6
  double v27; // st5
  float *v28; // eax
  double v29; // st7
  double v30; // st7
  int v31; // eax
  double v32; // st7
  int v33; // eax
  _DWORD *v34; // edi
  int v35; // eax
  unsigned int v36; // eax
  double v37; // st7
  int v38; // ecx
  int v39; // ecx
  unsigned int v40; // eax
  int v41; // ecx
  float v42; // [esp+0h] [ebp-48h]
  float v43; // [esp+0h] [ebp-48h]
  char v44; // [esp+0h] [ebp-48h]
  float v45; // [esp+0h] [ebp-48h]
  float v46; // [esp+0h] [ebp-48h]
  float v47[3]; // [esp+10h] [ebp-38h] BYREF
  float v48; // [esp+1Ch] [ebp-2Ch]
  float v49; // [esp+20h] [ebp-28h]
  float v50; // [esp+24h] [ebp-24h]
  float v51; // [esp+28h] [ebp-20h] BYREF
  double v52; // [esp+2Ch] [ebp-1Ch]
  float v53; // [esp+34h] [ebp-14h] BYREF
  double v54; // [esp+38h] [ebp-10h] BYREF
  int v55; // [esp+40h] [ebp-8h]
  float v56; // [esp+44h] [ebp-4h]

  if ( *(_BYTE *)(this + 4020) )
  {
    v2 = *(_DWORD *)(this + 3916);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3916) & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3916) & 0xFFF) + 2] == v2 >> 12 )
      {
        if ( *v3 )
          goto LABEL_5;
      }
    }
    return;
  }
  v4 = *(_DWORD *)(this + 3764);
  if ( v4 == 4 || v4 == 1 || v4 == 2 )
  {
    v5 = *(_DWORD *)(this + 3916);
    if ( v5 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 3916) & 0xFFF) + 2] != v5 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 3916) & 0xFFF) + 1] )
    {
      sub_103AAC60(this, this);
      v6 = *(_DWORD *)(this + 3916);
      if ( v6 == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 3916) & 0xFFF) + 2] != v6 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(this + 3916) & 0xFFF) + 1] )
      {
        return;
      }
    }
    v7 = sub_103A6B80(this, &v53);
    *(float *)(this + 3904) = *v7;
    v8 = (float *)(this + 3904);
    *(float *)(this + 3908) = v7[1];
    *(float *)(this + 3912) = v7[2];
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v48 = *v8 - *(float *)(this + 580);
    v49 = *(float *)(this + 3908) - *(float *)(this + 584);
    v50 = *(float *)(this + 3912) - *(float *)(this + 588);
    off_10689714();
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10422220(this + 704, v47);
    if ( v48 * v47[0] + v47[1] * v49 + v47[2] * v50 < 0.0 )
    {
      *(float *)(this + 3960) = *(float *)(dword_106B31C8 + 12) + 3.0;
      sub_103A6AF0((_DWORD *)this);
      return;
    }
    if ( *(_DWORD *)(this + 3920) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 2] != *(_DWORD *)(this + 3920) >> 12 )
    {
      v9 = 0;
    }
    else
    {
      v9 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 1];
    }
    v10 = *v8 - v9[179];
    v53 = v10;
    v11 = *(float *)(this + 3908) - v9[180];
    *(float *)&v54 = v11;
    v12 = *(float *)(this + 3912) - v9[181];
    *((float *)&v54 + 1) = v12;
    v42 = v12 * v12 + v11 * v11 + v10 * v10;
    v56 = off_10689708(v42);
    v52 = v54;
    v51 = v53;
    off_10689714();
    v13 = v56 * 10.0;
    v14 = v51 * v13;
    v51 = v14;
    v15 = *(float *)&v52 * v13;
    *(float *)&v52 = v15;
    v16 = v15;
    v17 = v13 * *((float *)&v52 + 1);
    *((float *)&v52 + 1) = v17;
    v43 = v16 * v16 + v14 * v14 + v17 * v17;
    if ( off_10689708(v43) > 200.0 )
    {
      off_10689714();
      v51 = v51 * 200.0;
      *(float *)&v52 = *(float *)&v52 * 200.0;
      *((float *)&v52 + 1) = 200.0 * *((float *)&v52 + 1);
      v18 = sub_1026A890((unsigned int *)(this + 3920));
      sub_100E10C0(v18, (float *)(this + 3904));
    }
    v19 = *(_DWORD *)(this + 3920);
    if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 2] != v19 >> 12 )
      v20 = 0;
    else
      v20 = off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 1];
    sub_100DD660(v20, &v51);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v21 = *(_DWORD *)(this + 3920);
    if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 1];
    v22[205] = *(float *)(this + 580);
    v22[206] = *(float *)(this + 584);
    v22[207] = *(float *)(this + 588);
    v23 = *(_DWORD *)(this + 3920);
    if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 2] != *(_DWORD *)(this + 3920) >> 12 )
      v24 = 0;
    else
      v24 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 1];
    if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 2] != *(_DWORD *)(this + 3920) >> 12 )
      v25 = 0;
    else
      v25 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 1];
    v26 = v25[180] - v24[206];
    v27 = v25[181] - v24[207];
    if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 2] != v23 >> 12 )
      v28 = 0;
    else
      v28 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 1];
    v28[202] = v25[179] - v24[205];
    v28[203] = v26;
    v28[204] = v27;
    v29 = off_10689714();
    *((float *)&v54 + 1) = v29;
    v30 = v29 * 0.2 + *(float *)(this + 3948) * 0.8;
    *(float *)(this + 3948) = v30;
    if ( *(float *)(this + 3952) + *(float *)(this + 3952) >= v30 )
    {
      if ( v30 <= *(float *)(this + 3952) )
      {
        v33 = sub_1026A890((unsigned int *)(this + 3920));
        sub_100FB020(v33, 1);
        v32 = *(float *)(this + 3948);
LABEL_57:
        v34 = (_DWORD *)(this + 3916);
        v45 = v32;
        v35 = sub_1026A890((unsigned int *)(this + 3916));
        sub_100FA740(v35, v45);
        v36 = *(_DWORD *)(this + 3916);
        v37 = *((float *)&v54 + 1) / *(float *)(this + 3952) * 32.0;
        *((float *)&v54 + 1) = v37;
        if ( v36 == -1 || off_1061BE18[4 * (v36 & 0xFFF) + 2] != v36 >> 12 )
          v38 = 0;
        else
          v38 = off_1061BE18[4 * (v36 & 0xFFF) + 1];
        v46 = v37;
        sub_1005C3A0(v38, v46);
        if ( *v34 == -1 || off_1061BE18[4 * (*v34 & 0xFFF) + 2] != *v34 >> 12 )
          v39 = 0;
        else
          v39 = off_1061BE18[4 * (*v34 & 0xFFF) + 1];
        sub_1005C410(v39, *((float *)&v54 + 1));
        v40 = *(_DWORD *)(this + 3920);
        v54 = 0.0;
        if ( v40 == -1 || off_1061BE18[4 * (v40 & 0xFFF) + 2] != v40 >> 12 )
          v41 = 0;
        else
          v41 = off_1061BE18[4 * (v40 & 0xFFF) + 1];
        sub_101BE090((float *)(v41 + 800), &v54);
        return;
      }
      v55 = (int)(1.0 - (v30 - *(float *)(this + 3952)) / *(float *)(this + 3952));
      v44 = v55;
    }
    else
    {
      v44 = 0;
    }
    v31 = sub_1026A890((unsigned int *)(this + 3920));
    sub_100FB020(v31, v44);
    v32 = *(float *)(this + 3952);
    goto LABEL_57;
  }
  if ( sub_1026A890((unsigned int *)(this + 3916)) )
LABEL_5:
    sub_103A6AF0((_DWORD *)this);
}
