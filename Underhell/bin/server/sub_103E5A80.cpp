int __thiscall sub_103E5A80(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // esi

  v1 = this[430];
  if ( v1 == -1 || (v2 = &off_1061BE18[4 * (this[430] & 0xFFF) + 1], v2[1] != v1 >> 12) )
    v3 = 0;
  else
    v3 = *v2;
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  return v3 + 580;
}
