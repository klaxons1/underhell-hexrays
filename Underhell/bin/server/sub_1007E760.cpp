double __thiscall sub_1007E760(_DWORD *this)
{
  int v2; // edi
  double result; // st7

  v2 = this[1];
  result = 0.0;
  if ( 0.0 != *(float *)(v2 + 800) )
  {
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(this[1]);
    return sub_100A64F0(v2 + 580) / *(float *)(this[1] + 800);
  }
  return result;
}
