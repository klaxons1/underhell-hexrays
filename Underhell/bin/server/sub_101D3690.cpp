__int16 __thiscall sub_101D3690(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106BAE88 & 1) == 0 )
  {
    dword_106BAE88 |= 1u;
    dword_106BAE80 = -1;
    dword_106BAE84 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106BAE80);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
