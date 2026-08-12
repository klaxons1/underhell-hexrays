unsigned int __thiscall sub_100F7F20(unsigned int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int *v4; // ecx
  int *v5; // ecx

  result = *(_DWORD *)(this + 3504);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 3504) & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        result = this;
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v4 = *(int **)(this + 24);
          if ( v4 )
            result = sub_100194B0(v4, 3504);
        }
        *(_DWORD *)(this + 3504) = -1;
      }
    }
  }
  if ( *(_DWORD *)(this + 3480) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 3480);
    }
    *(_DWORD *)(this + 3480) = 0;
  }
  *(_DWORD *)(this + 3416) &= ~8u;
  *(_DWORD *)(this + 3500) = 6;
  *(_BYTE *)(this + 3508) = 0;
  return result;
}
