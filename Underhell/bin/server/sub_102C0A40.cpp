__int16 __thiscall sub_102C0A40(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106DE040 & 1) == 0 )
  {
    dword_106DE040 |= 1u;
    dword_106DE038 = -1;
    dword_106DE03C = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106DE038);
  else
    return *(_WORD *)(this[1] + 392 * a2 + 2);
}
