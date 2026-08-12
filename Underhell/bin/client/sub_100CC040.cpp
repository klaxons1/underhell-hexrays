int __thiscall sub_100CC040(_DWORD *this, int a2)
{
  if ( (dword_10430EA8 & 1) == 0 )
  {
    dword_10430EA8 |= 1u;
    dword_10430E98 = -1;
    dword_10430E9C = -1;
    dword_10430EA0 = -1;
    dword_10430EA4 = 1;
  }
  if ( a2 == -1 )
    return dword_10430EA0;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
