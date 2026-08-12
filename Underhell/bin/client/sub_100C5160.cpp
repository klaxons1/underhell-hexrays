int __thiscall sub_100C5160(_DWORD *this, int a2, _DWORD *a3)
{
  int result; // eax
  int v5; // esi
  int v6; // eax
  int i; // [esp+8h] [ebp-4h]

  result = this[5];
  v5 = 0;
  for ( i = result; v5 < i; ++v5 )
  {
    v6 = *(_DWORD *)(this[2] + 4 * v5);
    result = sub_100C4FD0(
               (int)&dword_10430978,
               a2,
               *(_DWORD *)(v6 + 8),
               *(_DWORD *)(*(_DWORD *)(84 * *(_DWORD *)(v6 + 8) + *a3 + 28) + 12 * *(_DWORD *)(v6 + 4) + 4));
  }
  return result;
}
