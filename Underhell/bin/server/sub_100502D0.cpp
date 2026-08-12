unsigned int __thiscall sub_100502D0(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  unsigned int v4; // ecx

  result = *(_DWORD *)(this + 48);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 48) & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        sub_10070510(0.0);
        result = sub_10070510(4.0);
        *(_DWORD *)(this + 48) = -1;
      }
    }
  }
  v4 = *(_DWORD *)(this + 52);
  if ( v4 != -1 )
  {
    result = (unsigned int)&off_1061BE18[4 * (*(_DWORD *)(this + 52) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 52) & 0xFFF) + 2] == v4 >> 12 )
    {
      if ( *(_DWORD *)result )
      {
        result = sub_10070510(0.0);
        *(_DWORD *)(this + 52) = -1;
      }
    }
  }
  *(float *)(this + 44) = -1.0;
  return result;
}
