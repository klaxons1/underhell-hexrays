int __thiscall sub_10093050(_DWORD *this, int a2)
{
  if ( (dword_1042CB50 & 1) == 0 )
  {
    dword_1042CB50 |= 1u;
    dword_1042CB40 = -1;
    dword_1042CB44 = -1;
    dword_1042CB48 = -1;
    dword_1042CB4C = 1;
  }
  if ( a2 == -1 )
    return dword_1042CB44;
  else
    return *(_DWORD *)(this[1] + 40 * a2 + 4);
}
