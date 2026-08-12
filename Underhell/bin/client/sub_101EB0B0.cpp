int __thiscall sub_101EB0B0(_DWORD *this, int a2)
{
  if ( (dword_10458E20 & 1) == 0 )
  {
    dword_10458E20 |= 1u;
    dword_10458E10 = -1;
    dword_10458E14 = -1;
    dword_10458E18 = -1;
    dword_10458E1C = 1;
  }
  if ( a2 == -1 )
    return dword_10458E10;
  else
    return *(_DWORD *)(this[1] + 48 * a2);
}
