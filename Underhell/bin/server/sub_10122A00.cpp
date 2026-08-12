int __cdecl sub_10122A00(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // eax
  int v5; // ecx
  int result; // eax

  v4 = *(_DWORD *)(a1 + 72);
  v5 = *(_DWORD *)(*(_DWORD *)(v4 + 16) + a2 + 12);
  *a4 = v5;
  result = *(_DWORD *)(v4 + 20);
  if ( v5 > result )
    *a4 = result;
  return result;
}
