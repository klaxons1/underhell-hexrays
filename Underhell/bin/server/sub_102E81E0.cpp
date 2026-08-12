int __thiscall sub_102E81E0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx

  v1 = *(_DWORD *)(this[1] + 5144);
  if ( v1 == -1 )
    return 0;
  v2 = &off_1061BE18[4 * (*(_DWORD *)(this[1] + 5144) & 0xFFF) + 1];
  if ( v2[1] != v1 >> 12 )
    return 0;
  else
    return *v2;
}
