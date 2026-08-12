int __thiscall sub_10411390(int this)
{
  int v2; // edi
  double v3; // st4
  double v4; // st6
  double v5; // st4
  double v6; // st5
  double v7; // st6
  char *v8; // eax
  _DWORD *v9; // eax
  int v10; // edi
  float v11; // eax
  float v12; // edx
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st3
  float v18; // [esp+0h] [ebp-34h]
  float v19; // [esp+4h] [ebp-30h]
  float v20[3]; // [esp+10h] [ebp-24h] BYREF
  float v21; // [esp+1Ch] [ebp-18h]
  float v22; // [esp+20h] [ebp-14h]
  float v23; // [esp+24h] [ebp-10h]
  float v24; // [esp+28h] [ebp-Ch] BYREF
  float v25; // [esp+2Ch] [ebp-8h]
  float v26; // [esp+30h] [ebp-4h]

  sub_10411260((float *)this);
  v2 = *(_DWORD *)(this + 2148);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 2148));
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(float *)(this + 584) - *(float *)(v2 + 584);
    v4 = v3 * v3;
    v5 = *(float *)(this + 580) - *(float *)(v2 + 580);
    v6 = v4;
    v7 = *(float *)(this + 588) - *(float *)(v2 + 588);
    v19 = v5 * v5 + v6 + v7 * v7;
    if ( off_10689708(v19) < 300.0 )
    {
      v8 = *(char **)(*(_DWORD *)(this + 2148) + 212);
      if ( !v8 )
        v8 = (char *)String;
      v9 = sub_1012BF20(&dword_1069E3E0, 0, v8, 0, 0, 0, 0);
      *(_DWORD *)(this + 2148) = v9;
      if ( !v9 )
        *(float *)(this + 552) = 1.0;
    }
  }
  if ( *(_DWORD *)(this + 2148) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v10 = *(_DWORD *)(this + 2148);
    if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 2148));
    v21 = *(float *)(v10 + 580) - *(float *)(this + 580);
    v22 = *(float *)(v10 + 584) - *(float *)(this + 584);
    v23 = *(float *)(v10 + 588) - *(float *)(this + 588);
    off_10689714();
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v11 = *(float *)(this + 476);
    v12 = *(float *)(this + 484);
    v25 = *(float *)(this + 480);
    v24 = v11;
    v26 = v12;
    off_10689714();
    if ( *(float *)(dword_106B31C8 + 16) <= 0.0 )
    {
      v14 = v25;
      v15 = v26;
      v13 = v24;
    }
    else
    {
      v13 = v21 + v24;
      v14 = v25 + v22;
      v15 = v26 + v23;
    }
    v16 = *(float *)(this + 2152);
    v24 = v13 * v16;
    v25 = v14 * v16;
    v26 = v16 * v15;
    sub_100DD660(this, &v24);
  }
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  sub_10422540(this + 476, v20);
  sub_100E11A0(this, v20);
  v18 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v18, 0);
}
