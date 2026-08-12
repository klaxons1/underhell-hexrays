__int16 __thiscall sub_1020AD40(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106C2564 & 1) == 0 )
  {
    dword_106C2564 |= 1u;
    dword_106C255C = -1;
    dword_106C2560 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106C255C);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
