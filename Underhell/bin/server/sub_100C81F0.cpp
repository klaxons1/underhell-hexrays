bool __thiscall sub_100C81F0(int this, _DWORD *a2)
{
  if ( a2[313] )
    return 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  return fabs(*(float *)((*(int (__thiscall **)(_DWORD *))(*a2 + 576))(a2) + 8) - *(float *)(this + 588)) < 12.0;
}
