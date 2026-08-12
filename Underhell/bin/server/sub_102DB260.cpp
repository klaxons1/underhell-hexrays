double __thiscall sub_102DB260(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  double result; // st7
  int v7; // eax

  v3 = this[851];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[851] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  result = sub_103FA910(v5, a2);
  if ( 0.0 == result )
  {
    v7 = sub_100CF460(this);
    return sub_103FA870(v7, a2);
  }
  return result;
}
