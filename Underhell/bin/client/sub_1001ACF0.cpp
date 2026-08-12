int __thiscall sub_1001ACF0(int *this)
{
  int v2; // esi

  while ( 1 )
  {
    _mm_pause();
    v2 = *this;
    if ( !*this )
      break;
    if ( (unsigned __int8)ThreadInterlockedAssignIf64(this, 0, this[1] & 0xFFFF0000, v2, this[1]) )
      return v2;
  }
  return 0;
}
