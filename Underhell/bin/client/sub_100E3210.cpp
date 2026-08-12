int __thiscall sub_100E3210(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104356B0 & 1) == 0 )
  {
    dword_104356B0 |= 1u;
    dword_104356A8 = -1;
    dword_104356AC = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_104356AC);
  else
    return *(unsigned __int16 *)(this[1] + 16 * a2 + 6);
}
