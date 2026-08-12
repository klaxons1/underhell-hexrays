void __thiscall sub_10349860(float *this)
{
  int v2; // edi
  double v3; // st4
  double v4; // st6
  double v5; // st4
  double v6; // st5
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st7
  float v11; // [esp+0h] [ebp-14h]
  float v12; // [esp+0h] [ebp-14h]
  float v13; // [esp+4h] [ebp-10h]
  float v14; // [esp+10h] [ebp-4h]

  v14 = 0.0;
  v2 = sub_1025FB50(1);
  if ( v2 )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    v3 = *(float *)(v2 + 584) - this[146];
    v4 = v3 * v3;
    v5 = *(float *)(v2 + 580) - this[145];
    v6 = v4;
    v7 = *(float *)(v2 + 588) - this[147];
    v13 = v5 * v5 + v6 + v7 * v7;
    v8 = off_10689708(v13);
    v9 = 2500.0;
    if ( v8 <= 2500.0 )
    {
      v9 = 1000.0;
      if ( v8 >= 1000.0 )
        v9 = v8;
      v10 = 1000.0;
    }
    else
    {
      v10 = 1000.0;
    }
    v14 = 1.0 - (v9 - v10) * 0.00066666666;
  }
  if ( *((_DWORD *)this + 945) )
  {
    v11 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 2296))(this) * this[991] * (1.0 - v14);
    sub_10349010(*((_DWORD *)this + 945), v11, 3.0);
  }
  if ( *((_DWORD *)this + 1041) )
  {
    v12 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 2296))(this) * this[991] * v14;
    sub_10349010(*((_DWORD *)this + 1041), v12, 3.0);
  }
}
