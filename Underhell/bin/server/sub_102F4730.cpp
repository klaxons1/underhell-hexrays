int __thiscall sub_102F4730(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx

  v1 = this[1423];
  if ( v1 == -1 )
    return 0;
  v2 = &off_1061BE18[4 * (this[1423] & 0xFFF) + 1];
  if ( v2[1] != v1 >> 12 )
    return 0;
  else
    return *v2;
}
