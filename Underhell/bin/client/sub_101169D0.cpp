_DWORD *__thiscall sub_101169D0(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v3; // edx

  result = (_DWORD *)this[6];
  if ( a2 >= 0 && a2 < result[3] )
  {
    v3 = a2 + *result;
    result[2] = a2;
    result[1] = v3;
  }
  return result;
}
