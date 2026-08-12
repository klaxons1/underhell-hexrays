unsigned int __thiscall sub_100EAE60(unsigned int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int *v4; // ecx

  result = *(_DWORD *)(this + 760);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 760) & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
        result = sub_100F6AD0(this);
    }
  }
  *(_DWORD *)(this + 760) = -1;
  if ( *(_BYTE *)(this + 756) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 756) = 0;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 756);
      *(_BYTE *)(this + 756) = 0;
    }
  }
  return result;
}
