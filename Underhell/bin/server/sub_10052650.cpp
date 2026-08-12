int __thiscall sub_10052650(int this)
{
  bool v2; // dl
  int v3; // ebx
  unsigned int v4; // eax
  int v5; // edi
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  int v12; // eax
  double v13; // st7
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // eax
  int v19; // edi
  double v20; // st4
  double v21; // st6
  double v22; // st4
  double v23; // st5
  double v24; // st6
  unsigned int v25; // eax
  float v26; // [esp+0h] [ebp-20h]
  float v27; // [esp+18h] [ebp-8h]
  bool v28; // [esp+1Eh] [ebp-2h]
  char v29; // [esp+1Fh] [ebp-1h]
  char v30; // [esp+1Fh] [ebp-1h]

  if ( !*(_DWORD *)(dword_1069216C + 48)
    || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4))
    || (v26 = *(float *)(this + 52) + 0.1,
        v29 = 1,
        !sub_10051020(this, v26, *(float *)(this + 44), *(_DWORD *)(this + 24))) )
  {
    v29 = 0;
  }
  v27 = 3.4028235e38;
  v2 = sub_10052150((_DWORD *)this);
  v28 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 4));
    v4 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    v6 = *(float *)(v5 + 584) - *(float *)(v3 + 584);
    v7 = v6 * v6;
    v8 = *(float *)(v5 + 580) - *(float *)(v3 + 580);
    v9 = v7;
    v10 = *(float *)(v5 + 588) - *(float *)(v3 + 588);
    v27 = v8 * v8 + v9 + v10 * v10;
    if ( !v29
      || (v11 = sub_100737B0(*(_DWORD *)(*(_DWORD *)(this + 4) + 1676)), v27 > (v11 + v11) * (v11 + v11))
      || ((*(void (__thiscall **)(int))(*(_DWORD *)this + 52))(this),
          v12 = sub_1007DB30(100005),
          sub_10023D10(*(_DWORD **)(this + 4), v12)) )
    {
      sub_10070510(0.0);
      sub_100448D0(*(_DWORD **)(this + 4), 0);
      if ( 0.0 == *(float *)(this + 176) )
        v13 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 172);
      else
        v13 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                *(float *)(this + 172),
                *(float *)(this + 176))
            + *(float *)(dword_106B31C8 + 12);
      *(float *)(this + 168) = v13;
      goto LABEL_20;
    }
    v2 = v28;
  }
  if ( !v29 )
  {
LABEL_20:
    sub_100521C0((_DWORD *)this);
    return 0;
  }
  v30 = 0;
  if ( *(_DWORD *)(*(_DWORD *)(this + 4) + 2888) != -1
    && off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] == *(_DWORD *)(*(_DWORD *)(this + 4)
                                                                                              + 2888) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1]
    && !v2 )
  {
    sub_100519F0((_DWORD *)this);
    sub_10070510(0.0);
    sub_100448D0(*(_DWORD **)(this + 4), 0);
  }
  v15 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
  if ( v15 == -1
    || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] != v15 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1] )
  {
    v16 = *(_DWORD *)(this + 188);
    v30 = 1;
    if ( !v16 )
      v16 = sub_10051220(this);
    sub_10052590(this, v16);
    v17 = *(_DWORD *)(this + 4);
    v18 = *(_DWORD *)(v17 + 2888);
    if ( v18 != -1
      && off_1061BE18[4 * (*(_DWORD *)(v17 + 2888) & 0xFFF) + 2] == v18 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(v17 + 2888) & 0xFFF) + 1] )
    {
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)(this + 4));
      v19 = sub_100519F0((_DWORD *)this);
      if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
        sub_100DAE60(v19);
      v20 = *(float *)(v19 + 584) - *(float *)(v17 + 584);
      v21 = v20 * v20;
      v22 = *(float *)(v19 + 580) - *(float *)(v17 + 580);
      v23 = v21;
      v24 = *(float *)(v19 + 588) - *(float *)(v17 + 588);
      v27 = v22 * v22 + v23 + v24 * v24;
    }
  }
  v25 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2888);
  if ( v25 == -1
    || off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 2] != v25 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 4) + 2888) & 0xFFF) + 1] )
  {
    return 0;
  }
  if ( v30 || v27 > 256.0 )
    return 100006;
  if ( sub_100524D0((_DWORD *)this) )
    return 0;
  return 100008;
}
