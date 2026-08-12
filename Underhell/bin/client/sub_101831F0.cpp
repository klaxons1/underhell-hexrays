__int16 __thiscall sub_101831F0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104454BC & 1) == 0 )
  {
    dword_104454BC |= 1u;
    dword_104454B4 = -1;
    dword_104454B8 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_104454B4);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
