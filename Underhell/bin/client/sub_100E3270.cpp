__int16 __thiscall sub_100E3270(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10435698 & 1) == 0 )
  {
    dword_10435698 |= 1u;
    dword_10435690 = -1;
    dword_10435694 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10435694;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 4);
}
