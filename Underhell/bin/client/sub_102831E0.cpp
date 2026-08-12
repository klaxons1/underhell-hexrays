int __thiscall sub_102831E0(_DWORD *this, int a2)
{
  if ( (dword_10481A88 & 1) == 0 )
  {
    dword_10481A88 |= 1u;
    dword_10481A78 = -1;
    dword_10481A7C = -1;
    dword_10481A80 = -1;
    dword_10481A84 = 1;
  }
  if ( a2 == -1 )
    return dword_10481A7C;
  else
    return *(_DWORD *)(this[1] + 20 * a2 + 4);
}
