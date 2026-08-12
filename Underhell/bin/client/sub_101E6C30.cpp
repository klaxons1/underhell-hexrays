int __thiscall sub_101E6C30(_DWORD *this, int a2)
{
  if ( (dword_10458DF8 & 1) == 0 )
  {
    dword_10458DF8 |= 1u;
    dword_10458DE8 = -1;
    dword_10458DEC = -1;
    dword_10458DF0 = -1;
    dword_10458DF4 = 1;
  }
  if ( a2 == -1 )
    return dword_10458DEC;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 4);
}
