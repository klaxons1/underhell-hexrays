int __thiscall sub_101BA2C0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1044F1F8 & 1) == 0 )
  {
    dword_1044F1F8 |= 1u;
    dword_1044F1F0 = -1;
    dword_1044F1F4 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_1044F1F4);
  else
    return *(unsigned __int16 *)(this[1] + 16 * a2 + 6);
}
