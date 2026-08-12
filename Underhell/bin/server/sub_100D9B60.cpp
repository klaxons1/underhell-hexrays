int __thiscall sub_100D9B60(int this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx

  if ( (*(_BYTE *)(this + 192) & 1) != 0
    && !*(_BYTE *)(this + 306)
    && (v1 = *(_DWORD *)(this + 308), v1 != -1)
    && (v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1], v3 = v1 >> 12, v2[1] == v3)
    && *v2
    && v2[1] == v3 )
  {
    return *v2;
  }
  else
  {
    return 0;
  }
}
