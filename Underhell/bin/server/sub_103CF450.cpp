int __thiscall sub_103CF450(int this, int a2)
{
  unsigned int v2; // eax
  unsigned int v4; // eax

  if ( a2 == 64 )
  {
    if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3848) )
      return dword_106EC88C;
    v2 = *(_DWORD *)(this + 3860);
    if ( v2 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 2] == v2 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 1] )
    {
      return dword_106EC88C;
    }
  }
  else if ( a2 == 1 )
  {
    v4 = *(_DWORD *)(this + 3860);
    if ( v4 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 2] == v4 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3860) & 0xFFF) + 1] )
    {
      return dword_106EC890;
    }
  }
  return sub_1032EC20((_DWORD *)this, a2);
}
