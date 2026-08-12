__int16 __thiscall sub_100EC820(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10435BB8 & 1) == 0 )
  {
    dword_10435BB8 |= 1u;
    dword_10435BB0 = -1;
    dword_10435BB4 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_10435BB0);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
