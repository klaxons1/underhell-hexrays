__int16 __thiscall sub_10262AE0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106CC5D8 & 1) == 0 )
  {
    dword_106CC5D8 |= 1u;
    dword_106CC5D0 = -1;
    dword_106CC5D4 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_106CC5D4;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 4);
}
