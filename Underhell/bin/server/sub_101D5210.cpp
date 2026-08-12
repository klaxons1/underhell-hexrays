__int16 __thiscall sub_101D5210(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106BAE94 & 1) == 0 )
  {
    dword_106BAE94 |= 1u;
    dword_106BAE8C = -1;
    dword_106BAE90 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_106BAE90;
  else
    return *(_WORD *)(this[1] + 16 * a2 + 4);
}
