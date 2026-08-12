char __cdecl sub_10218080(int a1, int a2, int a3)
{
  int v3; // eax
  int v5; // esi
  int v6; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 4 * a3 + 588);
  if ( v3 < 0 || !*(_DWORD *)(a1 + 24 * a3 + 24) )
    return 0;
  v5 = 48 * v3;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 24 * a3 + 24) + 192))(
    *(_DWORD *)(a1 + 24 * a3 + 24),
    48 * v3 + *(_DWORD *)(a2 + 4));
  v6 = *(_DWORD *)(a1 + 24 * a3 + 32);
  if ( v6 >= 0 && !*(_BYTE *)(a1 + 4) )
  {
    sub_10421B40(a1 + 24 * a3 + 12, *(_DWORD *)(a2 + 4) + 48 * *(_DWORD *)(a1 + 4 * v6 + 588), v7);
    sub_10421D00(v7, 3, v5 + *(_DWORD *)(a2 + 4));
  }
  return 1;
}
