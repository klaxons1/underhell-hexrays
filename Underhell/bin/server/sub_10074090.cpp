bool __thiscall sub_10074090(float *this)
{
  bool result; // al
  unsigned int v2; // eax
  int *v3; // ecx

  result = 0;
  if ( *(float *)(dword_106B31C8 + 12) <= (double)this[6] )
  {
    if ( *(_DWORD *)this )
      return 1;
    v2 = *((_DWORD *)this + 1);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * ((_DWORD)this[1] & 0xFFF) + 1];
      if ( v3[1] == v2 >> 12 )
      {
        if ( *v3 )
          return 1;
      }
    }
  }
  return result;
}
