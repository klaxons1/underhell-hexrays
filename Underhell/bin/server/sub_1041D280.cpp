int __thiscall sub_1041D280(_DWORD *this, int a2)
{
  if ( (dword_106F1860 & 1) == 0 )
  {
    dword_106F1860 |= 1u;
    dword_106F1850 = -1;
    dword_106F1854 = -1;
    dword_106F1858 = -1;
    dword_106F185C = 1;
  }
  if ( a2 == -1 )
    return dword_106F1858;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
