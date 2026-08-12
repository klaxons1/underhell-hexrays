BOOL __thiscall sub_100AC680(float *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  BOOL result; // eax

  result = 1;
  if ( *this >= (double)*(float *)(dword_106B31C8 + 12) )
  {
    v2 = *((_DWORD *)this + 1);
    if ( v2 == -1 || (v3 = &off_1061BE18[4 * ((_DWORD)this[1] & 0xFFF) + 1], v3[1] != v2 >> 12) )
      v4 = 0;
    else
      v4 = *v3;
    if ( v4 != a2 )
      return 0;
  }
  return result;
}
