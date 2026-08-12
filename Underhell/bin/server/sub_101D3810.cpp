__int16 __thiscall sub_101D3810(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106BAEA0 & 1) == 0 )
  {
    dword_106BAEA0 |= 1u;
    dword_106BAE98 = -1;
    dword_106BAE9C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106BAE98);
  else
    return *(_WORD *)(this[1] + 36 * a2 + 2);
}
