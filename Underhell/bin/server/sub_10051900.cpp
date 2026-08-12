bool __stdcall sub_10051900(unsigned int a1, int *a2)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v5; // eax

  v2 = *a2;
  if ( !*a2 )
    return 0;
  v3 = a2[1];
  if ( v3 < 0 || v3 >= *(_DWORD *)(v2 + 4) )
    return 0;
  if ( a1 >= v2 + 8 && a1 < v2 + 8 + 76 * *(_DWORD *)(v2 + 4) )
    return (int)a1 > 76 * v3 + v2 + 8;
  v5 = *(_DWORD **)v2;
  if ( !v5 )
    return 0;
  while ( a1 < (unsigned int)(v5 + 2) || a1 >= (unsigned int)&v5[19 * v5[1] + 2] )
  {
    v5 = (_DWORD *)*v5;
    if ( !v5 )
      return 0;
  }
  return 1;
}
