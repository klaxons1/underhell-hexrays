int __thiscall sub_10262260(_DWORD *this, int a2)
{
  int v2; // esi

  if ( a2 >= 0
    && a2 < this[73]
    && a2 <= this[79]
    && ((v2 = 12 * a2 + this[72], *(_DWORD *)(v2 + 4) != a2) || *(_DWORD *)(v2 + 8) == a2) )
  {
    return **(_DWORD **)(12 * a2 + this[72]);
  }
  else
  {
    return 0;
  }
}
