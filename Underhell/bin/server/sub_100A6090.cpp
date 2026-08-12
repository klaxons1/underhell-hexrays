int __thiscall sub_100A6090(float *this, int a2)
{
  int result; // eax

  result = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    while ( *(_DWORD *)(result + 40) )
      result = *(_DWORD *)(result + 40);
    this[13] = *(float *)result;
    this[14] = *(float *)(result + 4);
    this[15] = *(float *)(result + 8);
    *((_BYTE *)this + 48) = 1;
    *(_DWORD *)(result + 32) |= 8u;
  }
  return result;
}
