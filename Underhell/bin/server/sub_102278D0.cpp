__int16 __thiscall sub_102278D0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106C42F4 & 1) == 0 )
  {
    dword_106C42F4 |= 1u;
    dword_106C42EC = -1;
    dword_106C42F0 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_106C42EC;
  else
    return *(_WORD *)(this[1] + 16 * a2);
}
