__int16 __thiscall sub_1015FEA0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106B4B70 & 1) == 0 )
  {
    dword_106B4B70 |= 1u;
    dword_106B4B68 = -1;
    dword_106B4B6C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_106B4B6C;
  else
    return *(_WORD *)(this[1] + 52 * a2 + 4);
}
