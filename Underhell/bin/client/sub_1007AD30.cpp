__int16 __thiscall sub_1007AD30(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104138F4 & 1) == 0 )
  {
    dword_104138F4 |= 1u;
    dword_104138EC = -1;
    dword_104138F0 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_104138F0;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 4);
}
