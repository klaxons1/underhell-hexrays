__int16 __thiscall sub_1016D650(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10443C48 & 1) == 0 )
  {
    dword_10443C48 |= 1u;
    dword_10443C40 = -1;
    dword_10443C44 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10443C40;
  else
    return *(_WORD *)(this[1] + 12 * a2);
}
