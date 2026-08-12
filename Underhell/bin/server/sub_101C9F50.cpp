unsigned int __thiscall sub_101C9F50(int this)
{
  unsigned int result; // eax
  int v3; // edi
  unsigned int v4; // eax

  result = sub_100E0780(this);
  if ( *(_BYTE *)(this + 828) )
  {
    if ( *(_DWORD *)(this + 812) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] != *(_DWORD *)(this + 812) >> 12 )
    {
      v3 = 0;
    }
    else
    {
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1];
    }
    v4 = *(_DWORD *)(this + 808);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != v4 >> 12 )
      return sub_101DAAC0(0, v3);
    else
      return sub_101DAAC0(off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1], v3);
  }
  return result;
}
