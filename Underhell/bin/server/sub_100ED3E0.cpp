__int16 __thiscall sub_100ED3E0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10698698 & 1) == 0 )
  {
    dword_10698698 |= 1u;
    dword_10698690 = -1;
    dword_10698694 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10698694;
  else
    return *(_WORD *)(this[1] + 20 * a2 + 4);
}
