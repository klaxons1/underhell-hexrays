bool __thiscall sub_10295D00(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx

  v1 = this[15];
  if ( v1 == -1 )
    return 0;
  v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
  v3 = v1 >> 12;
  if ( v2[1] != v3 || !*v2 )
    return 0;
  if ( v2[1] == v3 )
    return *(_DWORD *)(*v2 + 860) == 1;
  return MEMORY[0x35C] == 1;
}
