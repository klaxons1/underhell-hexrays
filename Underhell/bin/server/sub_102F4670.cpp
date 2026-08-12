BOOL __thiscall sub_102F4670(int this)
{
  unsigned int v1; // edx
  int *v2; // eax
  unsigned int v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // edx
  BOOL result; // eax

  v1 = *(_DWORD *)(this + 5688);
  result = 1;
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (*(_DWORD *)(this + 5688) & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 5688) & 0xFFF) + 2] == v3 )
    {
      if ( *v2 )
      {
        v4 = off_1061BE18[4 * (*(_DWORD *)(this + 5688) & 0xFFF) + 2] == v3 ? *v2 : 0;
        v5 = *(_DWORD *)(v4 + 300);
        if ( v5 == -1 || off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
        if ( v6 == this && !*(_BYTE *)(this + 5709) )
          return 0;
      }
    }
  }
  return result;
}
