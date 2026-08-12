int __thiscall sub_103C5BD0(int this)
{
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( fabs(*(float *)(this + 588) - *(float *)(this + 3708)) > 1.0 )
    return 9;
  else
    return 0;
}
