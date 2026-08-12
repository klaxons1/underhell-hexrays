BOOL __thiscall sub_10316780(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi

  v2 = *(_DWORD *)(this + 412);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  return v4 == sub_10261B20() && *(_BYTE *)(this + 2145);
}
