char __thiscall sub_1036ACA0(int this, int a2)
{
  double v3; // st4
  double v4; // st6
  double v5; // st4
  double v6; // st5
  double v7; // st6

  if ( !sub_100697A0((_DWORD *)this, 93, 1)
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    return sub_100C7760((int *)this, a2);
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v3 = *(float *)(a2 + 584) - *(float *)(this + 584);
  v4 = v3 * v3;
  v5 = *(float *)(a2 + 580) - *(float *)(this + 580);
  v6 = v4;
  v7 = *(float *)(a2 + 588) - *(float *)(this + 588);
  if ( v5 * v5 + v6 + v7 * v7 <= 82944.0 )
    return 1;
  else
    return sub_100C7760((int *)this, a2);
}
