int __thiscall sub_10234290(int this)
{
  int result; // eax

  if ( !dword_106C4714 )
    dword_106C4714 = sub_100C7680();
  sub_10112C00(this + 320, 0);
  result = *(_DWORD *)(this + 252) >> 11;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    result = sub_100DAE60(this);
  *(float *)(this + 3620) = *(float *)(this + 580);
  *(float *)(this + 3624) = *(float *)(this + 584);
  *(float *)(this + 3628) = *(float *)(this + 588);
  if ( !*(_DWORD *)(this + 3632) )
    return sub_10234220(this);
  return result;
}
