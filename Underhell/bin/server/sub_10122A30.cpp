int __cdecl sub_10122A30(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // esi
  int result; // eax

  v6 = *(_DWORD *)(a1 + 72);
  v7 = (_DWORD *)(a2 + *(_DWORD *)(v6 + 16));
  v8 = *(_DWORD *)(a1 + 36);
  if ( v8 < v7[3] )
    return (*(int (__cdecl **)(int, int, int, _DWORD *, _DWORD, int))(v6 + 4))(
             a1,
             a3,
             *v7 + v8 * *(_DWORD *)(v6 + 12),
             a4,
             0,
             a6);
  result = 0;
  *a4 = 0;
  a4[1] = 0;
  a4[2] = 0;
  a4[3] = 0;
  return result;
}
