__int16 __thiscall sub_102263E0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106C42E8 & 1) == 0 )
  {
    dword_106C42E8 |= 1u;
    dword_106C42E0 = -1;
    dword_106C42E4 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_106C42E4;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 4);
}
