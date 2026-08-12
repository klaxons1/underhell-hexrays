int __thiscall sub_10234220(int this)
{
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 3620) = *(float *)(this + 580);
  *(float *)(this + 3624) = *(float *)(this + 584);
  *(float *)(this + 3628) = *(float *)(this + 588);
  sub_100EC3F0((_DWORD *)this, (int)sub_102341B0, 0.0, 0);
  *(_DWORD *)(this + 3632) = 0;
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
