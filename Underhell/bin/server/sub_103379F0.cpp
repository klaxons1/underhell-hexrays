bool __thiscall sub_103379F0(int this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // ecx
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(this + 5956) )
  {
    v1 = *(_DWORD *)(this + 5952);
    if ( v1 != -1 )
    {
      v2 = &off_1061BE18[4 * (*(_DWORD *)(this + 5952) & 0xFFF) + 1];
      if ( v2[1] == v1 >> 12 )
      {
        v3 = *v2;
        if ( v3 )
        {
          if ( (*(_DWORD *)(v3 + 248) & 0x20) == 0 )
            return 1;
        }
      }
    }
  }
  return result;
}
