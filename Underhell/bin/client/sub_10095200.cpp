_DWORD *__cdecl sub_10095200(int a1, int a2, int a3, _DWORD *a4, unsigned __int8 (__cdecl *a5)(int, int))
{
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  bool v8; // zf
  int i; // edi
  _DWORD *result; // eax

  v5 = a3;
  v6 = a2;
  v7 = 2 * a2 + 2;
  v8 = v7 == a3;
  if ( v7 < a3 )
  {
    do
    {
      if ( a5(a1 + 8 * v7, a1 + 8 * v7 - 8) )
        --v7;
      *(_DWORD *)(a1 + 8 * v6) = *(_DWORD *)(a1 + 8 * v7);
      *(_DWORD *)(a1 + 8 * v6 + 4) = *(_DWORD *)(a1 + 8 * v7 + 4);
      v6 = v7;
      v7 = 2 * v7 + 2;
    }
    while ( v7 < a3 );
    v5 = a3;
    v8 = v7 == a3;
  }
  if ( v8 )
  {
    *(_DWORD *)(a1 + 8 * v6) = *(_DWORD *)(a1 + 8 * v5 - 8);
    *(_DWORD *)(a1 + 8 * v6 + 4) = *(_DWORD *)(a1 + 8 * v5 - 4);
    v6 = v5 - 1;
  }
  for ( i = (v6 - 1) / 2; a2 < v6; i = (i - 1) / 2 )
  {
    if ( !a5(a1 + 8 * i, (int)a4) )
      break;
    *(_DWORD *)(a1 + 8 * v6) = *(_DWORD *)(a1 + 8 * i);
    *(_DWORD *)(a1 + 8 * v6 + 4) = *(_DWORD *)(a1 + 8 * i + 4);
    v6 = i;
  }
  result = a4;
  *(_DWORD *)(a1 + 8 * v6) = *a4;
  *(_DWORD *)(a1 + 8 * v6 + 4) = a4[1];
  return result;
}
