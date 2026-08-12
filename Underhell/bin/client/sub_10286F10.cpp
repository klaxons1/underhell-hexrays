int __thiscall sub_10286F10(_DWORD *this, int a2)
{
  int v2; // esi

  if ( a2 >= 0
    && a2 < this[53]
    && a2 <= this[59]
    && ((v2 = 16 * a2 + this[52], *(_DWORD *)(v2 + 8) != a2) || *(_DWORD *)(v2 + 12) == a2) )
  {
    return *(_DWORD *)(16 * a2 + this[52]);
  }
  else
  {
    return 0;
  }
}
