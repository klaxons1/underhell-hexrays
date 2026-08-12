bool __thiscall sub_10392D20(float *this)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  float *v6; // edi
  double v7; // st4
  double v8; // st7
  double v9; // st4
  double v10; // st5
  float v11; // [esp+0h] [ebp-Ch]

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    return 0;
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v4 = v3;
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  if ( this[147] - *(float *)(v4 + 588) >= 24.0 )
    return 0;
  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v6 = (float *)v5;
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(v5);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v7 = this[145] - v6[145];
  v8 = v7 * v7;
  v9 = this[146] - v6[146];
  v10 = this[147] - v6[147];
  v11 = v10 * v10 + v9 * v9 + v8;
  return off_10689708(v11) <= 180.0;
}
