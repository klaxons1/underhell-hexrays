int __thiscall sub_1026B780(_DWORD *this, int a2)
{
  int v2; // esi

  if ( a2 >= 0
    && a2 < this[59]
    && a2 <= this[65]
    && ((v2 = 12 * a2 + this[58], *(_DWORD *)(v2 + 4) != a2) || *(_DWORD *)(v2 + 8) == a2) )
  {
    return *(_DWORD *)(12 * a2 + this[58]);
  }
  else
  {
    return 0;
  }
}
