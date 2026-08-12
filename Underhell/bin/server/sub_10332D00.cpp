bool __thiscall sub_10332D00(float *this, int a2)
{
  double v4; // st4
  double v5; // st7
  double v6; // st4

  if ( (dword_106E5AC8 & 1) == 0 )
  {
    dword_106E5AC8 |= 1u;
    flt_106E5AC4 = cos(3.141592653589793);
  }
  if ( fabs(this[421] - flt_106E5AC4) > 0.01
    && !(*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)this + 876))(this, a2) )
  {
    return 0;
  }
  if ( this[920] <= 0.0 )
    return sub_10020EB0(this, a2);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v4 = this[145] - *(float *)(a2 + 580);
  v5 = v4 * v4;
  v6 = this[146] - *(float *)(a2 + 584);
  return v6 * v6 + v5 >= this[920] * this[920] && sub_10020EB0(this, a2);
}
