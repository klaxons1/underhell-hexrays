__int16 __thiscall sub_1006D7C0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10692FB0 & 1) == 0 )
  {
    dword_10692FB0 |= 1u;
    dword_10692FA8 = -1;
    dword_10692FAC = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10692FAC;
  else
    return *(_WORD *)(this[1] + 12 * a2 + 4);
}
