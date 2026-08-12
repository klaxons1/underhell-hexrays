__int16 __thiscall sub_100EC5D0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10435BAC & 1) == 0 )
  {
    dword_10435BAC |= 1u;
    dword_10435BA4 = -1;
    dword_10435BA8 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_10435BA4);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
