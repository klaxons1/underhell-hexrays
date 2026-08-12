__int16 __thiscall sub_101C5500(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106BA8F8 & 1) == 0 )
  {
    dword_106BA8F8 |= 1u;
    dword_106BA8F0 = -1;
    dword_106BA8F4 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106BA8F0);
  else
    return *(_WORD *)(this[1] + 36 * a2 + 2);
}
