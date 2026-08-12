float *__thiscall sub_100E9FD0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  float *result; // eax
  int v5; // edi
  _DWORD *i; // edx

  v3 = this[5];
  result = 0;
  if ( v3 > 0 )
  {
    v5 = this[2];
    for ( i = (_DWORD *)(v5 + 20); *i != a2; i += 6 )
    {
      result = (float *)((char *)result + 1);
      if ( (int)result >= v3 )
        return result;
    }
    if ( result != (float *)-1 )
      return sub_100E9B40((_DWORD *)(v5 + 24 * (_DWORD)result), 0, -1);
  }
  return result;
}
