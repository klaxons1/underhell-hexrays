int __thiscall sub_101875D0(_DWORD *this, int a2, float a3, int a4)
{
  int v4; // edx
  int result; // eax
  _DWORD *v6; // esi
  _DWORD *i; // ecx

  v4 = this[1444];
  result = 0;
  if ( v4 > 0 )
  {
    v6 = (_DWORD *)this[1441];
    for ( i = v6; *i != a2; i += 24 )
    {
      if ( ++result >= v4 )
        return result;
    }
    result = (int)&v6[24 * result];
    if ( result )
    {
      *(float *)(result + 80) = a3;
      *(_DWORD *)(result + 84) = a4;
    }
  }
  return result;
}
