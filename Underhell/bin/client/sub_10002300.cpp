int __thiscall sub_10002300(_DWORD *this, int a2)
{
  if ( (dword_10400F90 & 1) == 0 )
  {
    dword_10400F90 |= 1u;
    dword_10400F80 = -1;
    dword_10400F84 = -1;
    dword_10400F88 = -1;
    dword_10400F8C = 1;
  }
  if ( a2 == -1 )
    return dword_10400F88;
  else
    return *(_DWORD *)(this[1] + 40 * a2 + 8);
}
