unsigned int __thiscall sub_101B3A60(int this)
{
  unsigned int result; // eax
  int *v3; // ecx

  result = *(_DWORD *)(this + 300);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        sub_101B39B0(dword_106B9E30, this, *(float *)(this + 800));
        return sub_1025FAC0(this);
      }
    }
  }
  return result;
}
