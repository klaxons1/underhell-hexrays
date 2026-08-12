int __thiscall sub_10274680(_DWORD *this, int a2)
{
  int v2; // esi

  if ( a2 >= 0
    && a2 < this[54]
    && a2 <= this[60]
    && ((v2 = 12 * a2 + this[53], *(_DWORD *)(v2 + 4) != a2) || *(_DWORD *)(v2 + 8) == a2) )
  {
    return *(_DWORD *)(*(_DWORD *)(12 * a2 + this[53]) + 216);
  }
  else
  {
    return 0;
  }
}
