int __thiscall sub_1008D320(int *this, int a2)
{
  int v3; // edi

  v3 = 0;
  if ( this[21] <= 0 )
    return 0;
  while ( sub_10074630(*(__int16 **)(this[18] + 4 * v3), *this) != a2 )
  {
    if ( ++v3 >= this[21] )
      return 0;
  }
  return *(_DWORD *)(this[18] + 4 * v3);
}
