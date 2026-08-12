__int16 __thiscall sub_100F85D0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104360CC & 1) == 0 )
  {
    dword_104360CC |= 1u;
    word_104360C4 = -1;
    word_104360C6 = -1;
    dword_104360C8 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return word_104360C4;
  else
    return *(_WORD *)(this[1] + 36 * a2);
}
