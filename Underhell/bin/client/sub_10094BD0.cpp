int __cdecl sub_10094BD0(int a1, int a2, int a3, _DWORD *a4, unsigned __int8 (__cdecl *a5)(_DWORD *, _DWORD *))
{
  int v5; // edi
  int i; // esi
  _DWORD *v7; // ebx
  int result; // eax

  v5 = a2;
  for ( i = (a2 - 1) / 2; a3 < v5; i = (i - 1) / 2 )
  {
    v7 = (_DWORD *)(a1 + 8 * i);
    if ( !a5(v7, a4) )
      break;
    *(_DWORD *)(a1 + 8 * v5) = *v7;
    *(_DWORD *)(a1 + 8 * v5 + 4) = v7[1];
    v5 = i;
  }
  *(_DWORD *)(a1 + 8 * v5) = *a4;
  result = a4[1];
  *(_DWORD *)(a1 + 8 * v5 + 4) = result;
  return result;
}
