float *__thiscall sub_1011B5F0(int this, float *a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // eax
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // rt0
  double v11; // st7
  bool v12; // zf
  double v13; // st6
  double v14; // st5
  double v15; // st7
  int v16; // ecx
  const char *v17; // edi
  double v18; // st7
  const char *v20; // [esp+8h] [ebp-3Ch]
  _BYTE v21[20]; // [esp+18h] [ebp-2Ch] BYREF
  float v22[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v23; // [esp+38h] [ebp-Ch]
  float v24; // [esp+3Ch] [ebp-8h]
  float v25; // [esp+40h] [ebp-4h]

  if ( (*(_BYTE *)(this + 248) & 2) != 0 )
  {
    sub_1011B290(v21);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = a3;
    v5 = (*(int (__thiscall **)(_DWORD *))(*a3 + 576))(a3);
    sub_10424670(v5, this + 580, this + 812, v22, 0);
    v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 576))(v4);
    v7 = v22[0] - *v6;
    v8 = v22[1] - v6[1];
    v9 = v22[2];
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = a3;
    v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*a3 + 576))(a3);
    v7 = *(float *)(this + 580) - *v6;
    v8 = *(float *)(this + 584) - v6[1];
    v9 = *(float *)(this + 588);
  }
  v10 = v9 - v6[2];
  v23 = v7;
  v24 = v8;
  v25 = v10;
  off_10689714();
  v11 = *(float *)(this + 808);
  v12 = *(_DWORD *)(dword_1069C50C + 48) == 0;
  v13 = v23 * v11;
  v14 = v24 * v11;
  v15 = v11 * v25;
  *a2 = v13;
  a2[1] = v14;
  a2[2] = v15;
  if ( !v12 )
  {
    v16 = v4[106];
    if ( v16 )
    {
      v17 = (const char *)v4[23];
      if ( !v17 )
        v17 = String;
      v18 = ((double (__thiscall *)(int, const char *))*(_DWORD *)(*(_DWORD *)v16 + 116))(v16, v17);
      Msg("Ragdoll magnet adding %f inches/sec to %s\n", *(float *)(this + 808) / v18, v20);
    }
  }
  return a2;
}
