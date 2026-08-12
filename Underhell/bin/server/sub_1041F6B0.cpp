int __thiscall sub_1041F6B0(_DWORD *this, int a2)
{
  if ( (dword_106F1888 & 1) == 0 )
  {
    dword_106F1888 |= 1u;
    dword_106F1878 = -1;
    dword_106F187C = -1;
    dword_106F1880 = -1;
    dword_106F1884 = 1;
  }
  if ( a2 == -1 )
    return dword_106F187C;
  else
    return *(_DWORD *)(this[1] + 48 * a2 + 4);
}
