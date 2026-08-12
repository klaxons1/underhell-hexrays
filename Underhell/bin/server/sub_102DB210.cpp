int __thiscall sub_102DB210(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx

  v2 = this[851];
  if ( v2 == -1 )
    return sub_103FA810(0, a2);
  v3 = &off_1061BE18[4 * (this[851] & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return sub_103FA810(0, a2);
  else
    return sub_103FA810(*v3, a2);
}
