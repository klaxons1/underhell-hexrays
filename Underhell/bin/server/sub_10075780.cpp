int __thiscall sub_10075780(_DWORD *this, unsigned __int8 a2)
{
  if ( (dword_106931E0 & 1) == 0 )
  {
    dword_106931E0 |= 1u;
    dword_106931DC = 0x1FFFFFF;
  }
  if ( a2 == 0xFF )
    return HIBYTE(dword_106931DC);
  else
    return *(unsigned __int8 *)(this[1] + 12 * a2 + 3);
}
