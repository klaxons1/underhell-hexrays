int __thiscall sub_101D51B0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106BAE88 & 1) == 0 )
  {
    dword_106BAE88 |= 1u;
    dword_106BAE80 = -1;
    dword_106BAE84 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106BAE84);
  else
    return *(unsigned __int16 *)(this[1] + 16 * a2 + 6);
}
