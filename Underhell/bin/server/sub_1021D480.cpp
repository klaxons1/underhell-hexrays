int __thiscall sub_1021D480(_DWORD *this, int a2, int a3)
{
  int v3; // eax

  v3 = this[7];
  if ( !v3 || a2 < 0 || a2 > *(_DWORD *)(v3 + 1372) )
    return 0;
  *(_DWORD *)(*(_DWORD *)(this[7] + 1376) + 56 * a2 + 28) |= a3;
  return *(_DWORD *)(*(_DWORD *)(this[7] + 1376) + 56 * a2 + 28);
}
