char __thiscall sub_103098D0(int this, float *a2, float *a3, float a4, char a5)
{
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  float *v12; // edi
  long double v13; // st7
  int v14; // eax
  float *v15; // edi
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // st6
  int i; // edi
  int v21; // eax
  double v22; // st4
  double v23; // st6
  double v24; // st4
  double v25; // st5
  double v26; // st6
  float *v27; // eax
  double v28; // st7
  _DWORD *v29; // edi
  int v30; // eax
  double v31; // st7
  int v32; // eax
  char *v33; // eax
  double v34; // st7
  int v35; // eax
  char *v36; // eax
  float *v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41[14]; // [esp+18h] [ebp-78h] BYREF
  float v42; // [esp+50h] [ebp-40h]
  int v43[3]; // [esp+5Ch] [ebp-34h] BYREF
  int v44[3]; // [esp+68h] [ebp-28h] BYREF
  float v45; // [esp+74h] [ebp-1Ch]
  float v46; // [esp+78h] [ebp-18h]
  float v47; // [esp+7Ch] [ebp-14h]
  int v48; // [esp+80h] [ebp-10h] BYREF
  float v49; // [esp+84h] [ebp-Ch]
  float v50; // [esp+88h] [ebp-8h]
  int v51; // [esp+8Ch] [ebp-4h] BYREF
  int v52; // [esp+98h] [ebp+8h]
  float v53; // [esp+A0h] [ebp+10h]
  int v54; // [esp+A4h] [ebp+14h]

  if ( *(_DWORD *)(dword_10698344 + 48) && *(_BYTE *)(this + 3675) )
  {
    v6 = *(_DWORD *)(this + 3704);
    if ( v6 == -1 )
      return 0;
    v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 3704) & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3704) & 0xFFF) + 2] != v8 || !*v7 )
      return 0;
    v9 = off_1061BE18[4 * (*(_DWORD *)(this + 3704) & 0xFFF) + 2] == v8 ? *v7 : 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 264))(v9) )
      return 0;
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) || sub_1004AE70((_DWORD *)this, 8, 8) )
    return 0;
  if ( a5 )
  {
    v12 = a3;
  }
  else
  {
    if ( LOBYTE(a4) && *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3652) )
      return 0;
    v12 = a3;
    v13 = fabs(a2[1] - a3[1]) + fabs(*a2 - *a3);
    if ( v13 < 256.0 )
      return 0;
    if ( v13 > 2048.0 )
      return 0;
  }
  if ( *(_DWORD *)(this + 2796) )
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v15 = (float *)v14;
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v16 = *(float *)(this + 584) - v15[146];
    v17 = *(float *)(this + 580) - v15[145];
    v18 = v16 * v16;
    v19 = *(float *)(this + 588) - v15[147];
    *(float *)&v52 = v17 * v17 + v18 + v19 * v19;
    for ( i = sub_100B1560(*(_DWORD **)(this + 2796), &v51, 1); i; i = sub_100B1630(*(_DWORD **)(this + 2796), &v51, 1) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 264))(i) && i != this )
      {
        v21 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        v54 = v21;
        if ( (*(_DWORD *)(v21 + 252) & 0x800) != 0 )
        {
          sub_100DAE60(v21);
          v21 = v54;
        }
        if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
        {
          sub_100DAE60(i);
          v21 = v54;
        }
        v22 = *(float *)(i + 584) - *(float *)(v21 + 584);
        v23 = v22 * v22;
        v24 = *(float *)(i + 580) - *(float *)(v21 + 580);
        v25 = v23;
        v26 = *(float *)(i + 588) - *(float *)(v21 + 588);
        if ( v24 * v24 + v25 + v26 * v26 < *(float *)&v52 )
          return 0;
      }
    }
    v12 = a3;
  }
  v45 = *v12 - *a2;
  v46 = v12[1] - a2[1];
  v47 = v12[2] - a2[2];
  off_10689714();
  v27 = (float *)sub_10022D70();
  *v27 = *(float *)(this + 340) - *(float *)(this + 328);
  v27[1] = *(float *)(this + 344) - *(float *)(this + 332);
  v27[2] = *(float *)(this + 348) - *(float *)(this + 336);
  v28 = *v27 * 0.5;
  *(float *)&v48 = *v12 - v45 * v28;
  v49 = v12[1] - v46 * v28;
  v50 = v12[2] - v28 * v47;
  memset(v41, 0, sizeof(v41));
  v29 = *(_DWORD **)(this + 2600);
  v30 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  sub_1007C550(v29, 0, a2, (float *)&v48, 147467, v30, 100.0, 0, (float *)v41);
  if ( *(_DWORD *)(dword_106E3074 + 48) == 1 )
  {
    *(float *)v44 = *(float *)&v48 - *a2;
    *(float *)&v44[1] = v49 - a2[1];
    *(float *)&v44[2] = v50 - a2[2];
    v31 = off_10689714();
    v32 = *(_DWORD *)(this + 1676);
    v42 = v31;
    v33 = sub_10073730(v32);
    *(float *)v43 = v42 + *(float *)v33;
    v43[1] = *((int *)v33 + 1);
    v34 = *((float *)v33 + 2);
    v35 = *(_DWORD *)(this + 1676);
    *(float *)&v43[2] = v34;
    v36 = sub_10073710(v35);
    sub_1011BB60((int)a2, (int)v36, (int)v43, (int)v44, 0, 255, 0, 8, 1.0);
  }
  if ( v41[0] >= 0 )
  {
    if ( LOBYTE(a4) )
      *(float *)(this + 3652) = *(float *)(dword_106B31C8 + 12) + 4.0;
    return 1;
  }
  v37 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
  if ( fabs(v37[1] - *(float *)&v41[2]) + fabs(*v37 - *(float *)&v41[1]) + fabs(v37[2] - *(float *)&v41[3]) < 256.0
    || !v41[7] )
  {
    return 0;
  }
  v38 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  v39 = sub_10038080(v38);
  v40 = v41[7];
  if ( v41[7] != v39 )
    goto LABEL_45;
  v53 = fabs(*(float *)&v41[3] - v50);
  if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 1724))(this) < v53 )
    return 0;
  if ( fabs(*(float *)&v41[1] - *(float *)&v48) + fabs(*(float *)&v41[2] - v49) + fabs(*(float *)&v41[3] - v50) >= 64.0 )
  {
    v40 = v41[7];
LABEL_45:
    if ( !*(_BYTE *)(v40 + 225) && *(_BYTE *)(v40 + 306) != 6 )
      return 0;
  }
  return 1;
}
