int __cdecl sub_102278C0(int a1, int a2, unsigned __int8 (__cdecl *a3)(_DWORD *, int *))
{
  int result; // eax
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  result = ((a2 - a1) >> 4) - ((a2 - a1) >> 31);
  v4 = ((a2 - a1) >> 4) / 2;
  if ( v4 > 0 )
  {
    v5 = a1 + 16 * v4;
    do
    {
      v6 = *(_DWORD *)(v5 - 16);
      v7 = *(_DWORD *)(v5 - 12);
      v5 -= 16;
      result = sub_102277F0(a1, --v4, (a2 - a1) >> 4, v6, v7, *(_DWORD *)(v5 + 8), *(_DWORD *)(v5 + 12), a3);
    }
    while ( v4 > 0 );
  }
  return result;
}
