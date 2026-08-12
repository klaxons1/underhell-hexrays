int __thiscall sub_10188470(_DWORD *this, int a2, const char *a3, float a4)
{
  int v4; // esi
  int result; // eax
  _DWORD *i; // edx
  int v7; // esi

  v4 = this[1444];
  result = 0;
  if ( v4 > 0 )
  {
    for ( i = (_DWORD *)this[1441]; *i != a2; i += 24 )
    {
      if ( ++result >= v4 )
        return result;
    }
    v7 = this[1441] + 96 * result;
    if ( v7 )
    {
      result = sub_10188310((int)this, a3);
      *(float *)(v7 + 76) = a4;
      *(_DWORD *)(v7 + 8) = result;
    }
  }
  return result;
}
