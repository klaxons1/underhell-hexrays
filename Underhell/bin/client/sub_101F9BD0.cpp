_DWORD *__thiscall sub_101F9BD0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // edx
  int v3; // edi
  int v4; // edx

  for ( result = (_DWORD *)this[80]; result; result = (_DWORD *)this[80] )
  {
    v2 = result[16];
    if ( v2 )
    {
      v3 = result[1668];
      if ( *(_DWORD **)(v2 + 320) == result )
        *(_DWORD *)(v2 + 320) = v3;
      else
        *(_DWORD *)(result[1669] + 6672) = v3;
      v4 = result[1668];
      if ( v4 )
        *(_DWORD *)(v4 + 6676) = result[1669];
      result[1669] = 0;
      result[1668] = 0;
    }
  }
  return result;
}
