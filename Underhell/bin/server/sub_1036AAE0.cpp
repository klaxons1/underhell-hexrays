bool __thiscall sub_1036AAE0(int this, int a2, char a3)
{
  if ( *(_BYTE *)(this + 3672) == 1 )
    return sub_1001FBD0((void *)this, a2, a3);
  if ( *(_DWORD *)(this + 2324) == 3 )
    return sub_1001FBD0((void *)this, a2, a3);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( fabs(*(float *)(a2 + 588) - *(float *)(this + 588)) < 150.0 )
    return sub_1001FBD0((void *)this, a2, a3);
  return 0;
}
