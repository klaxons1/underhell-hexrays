bool __thiscall sub_101E6D70(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_101E6B90(this, a2);
  if ( (dword_10458DF8 & 1) == 0 )
  {
    dword_10458DF8 |= 1u;
    dword_10458DE8 = -1;
    dword_10458DEC = -1;
    dword_10458DF0 = -1;
    dword_10458DF4 = 1;
  }
  if ( v3 == -1 )
    return dword_10458DE8 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v3) == a2;
}
