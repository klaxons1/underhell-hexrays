unsigned int __thiscall sub_10205260(int this)
{
  unsigned int result; // eax
  int *v3; // ecx

  result = *(_DWORD *)(this + 800);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        if ( *(_BYTE *)(this + 816) )
        {
          sub_102050A0(this);
          return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
        }
      }
    }
  }
  return result;
}
