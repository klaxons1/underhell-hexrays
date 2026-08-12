unsigned int __thiscall sub_102034D0(int this, int a2)
{
  unsigned int result; // eax

  if ( *(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 0;
    result = *(_DWORD *)(this + 808);
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1] )
          return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
  else
  {
    *(_BYTE *)(this + 800) = 1;
    return sub_100EC4A0((int *)this, -1.0, 0);
  }
  return result;
}
