bool __thiscall sub_103466C0(float *this, int a2)
{
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  float v8; // [esp+0h] [ebp-Ch]

  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v3 = *(float *)(a2 + 580) - this[145];
  v4 = v3 * v3;
  v5 = *(float *)(a2 + 584) - this[146];
  v6 = *(float *)(a2 + 588) - this[147];
  v8 = v6 * v6 + v5 * v5 + v4;
  return (double)*((int *)this + 908) >= off_10689708(v8)
      && (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)this + 876))(this, a2)
      && sub_10027D40(this, a2);
}
