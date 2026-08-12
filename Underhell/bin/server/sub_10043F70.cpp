int __thiscall sub_10043F70(float *this, int a2, float a3)
{
  int result; // eax

  if ( a2 )
  {
    result = *(_DWORD *)(a2 + 252) >> 11;
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      result = sub_100DAE60(a2);
    *this = *(float *)(a2 + 580);
    this[1] = *(float *)(a2 + 584);
    this[2] = *(float *)(a2 + 588);
    this[3] = a3;
  }
  return result;
}
