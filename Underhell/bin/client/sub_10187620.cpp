int __thiscall sub_10187620(_DWORD *this, int a2, float *a3, float *a4)
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
      *(float *)(result + 60) = *a4;
      *(float *)(result + 64) = a4[1];
      *(float *)(result + 68) = a4[2];
      *(float *)(result + 48) = *a3;
      *(float *)(result + 52) = a3[1];
      *(float *)(result + 56) = a3[2];
    }
  }
  return result;
}
