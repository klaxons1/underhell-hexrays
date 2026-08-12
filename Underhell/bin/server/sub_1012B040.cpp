BOOL __thiscall sub_1012B040(unsigned int *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx

  v2 = *this;
  if ( *this == -1 )
    return a2 == 0;
  v3 = &off_1061BE18[4 * (*this & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return a2 == 0;
  else
    return *v3 == a2;
}
