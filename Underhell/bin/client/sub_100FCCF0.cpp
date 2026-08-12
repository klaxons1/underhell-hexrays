int __thiscall sub_100FCCF0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104360F4 & 1) == 0 )
  {
    dword_104360F4 |= 1u;
    dword_104360EC = -1;
    dword_104360F0 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_104360F0);
  else
    return *(unsigned __int16 *)(this[1] + 16 * a2 + 6);
}
