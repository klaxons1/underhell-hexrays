int __thiscall sub_10274FF0(_DWORD *this, int a2)
{
  int v2; // esi
  _DWORD *v4; // esi
  _DWORD *v5; // eax

  if ( a2 >= 0
    && a2 < this[54]
    && a2 <= this[60]
    && ((v2 = 12 * a2 + this[53], *(_DWORD *)(v2 + 4) != a2) || *(_DWORD *)(v2 + 8) == a2)
    && (v4 = *(_DWORD **)(12 * a2 + this[53]), (v5 = (_DWORD *)sub_10273C00(v4)) != 0) )
  {
    return sub_10274050(v5, (int)v4);
  }
  else
  {
    return -1;
  }
}
