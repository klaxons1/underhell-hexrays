_DWORD *__stdcall sub_10169640(int *a1)
{
  int v1; // ecx
  _DWORD *result; // eax
  bool i; // zf

  v1 = a1[1];
  result = *(_DWORD **)(v1 + 8);
  for ( i = result == (_DWORD *)(v1 + 4); !i; i = result == (_DWORD *)(a1[1] + 4) )
  {
    a1[4] = result[1];
    sub_100EB9C0(*a1, result);
    result = (_DWORD *)a1[4];
  }
  return result;
}
