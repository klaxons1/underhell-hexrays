void __thiscall sub_102D3A40(int this)
{
  int *v2; // ecx
  int v3; // edx
  float v4; // [esp+8h] [ebp-28h]
  float v5; // [esp+Ch] [ebp-24h]
  int v6[3]; // [esp+18h] [ebp-18h] BYREF
  float v7; // [esp+24h] [ebp-Ch]
  float v8; // [esp+28h] [ebp-8h]
  float v9; // [esp+2Ch] [ebp-4h]

  v4 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  sub_100EC4A0((int *)this, v4, 0);
  if ( *(_BYTE *)(this + 2109) )
    goto LABEL_10;
  if ( *(float *)(dword_106B31C8 + 12) > *(float *)(this + 2148) + 0.2 && *(_BYTE *)(this + 2109) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 2109);
    }
    *(_BYTE *)(this + 2109) = 1;
  }
  if ( *(_BYTE *)(this + 2109) )
  {
LABEL_10:
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v5 = *(float *)(this + 480) * *(float *)(this + 480)
       + *(float *)(this + 476) * *(float *)(this + 476)
       + *(float *)(this + 484) * *(float *)(this + 484);
    if ( 0.0 == off_10689708(v5) || sub_101C5260((_DWORD *)this) )
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 1152))(this);
  }
  if ( *(float *)(this + 2152) <= 300.0 )
    *(float *)(this + 2152) = *(float *)(this + 2152) + 15.0;
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v3 = *(_DWORD *)(this + 252) >> 11;
  v7 = *(float *)(this + 476) * 0.5;
  v8 = *(float *)(this + 480) * 0.5;
  v9 = 0.5 * *(float *)(this + 484);
  if ( (v3 & 1) != 0 )
    sub_100DAE60(this);
  *(float *)v6 = *(float *)(this + 580) + v7;
  *(float *)&v6[1] = *(float *)(this + 584) + v8;
  *(float *)&v6[2] = *(float *)(this + 588) + v9;
  sub_1023D4B0(8, (float *)v6, (int)*(float *)(this + 2152), 0.2, this, 2, 0);
}
