__int16 __thiscall sub_10070CB0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10693058 & 1) == 0 )
  {
    dword_10693058 |= 1u;
    dword_10693050 = -1;
    dword_10693054 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_10693050);
  else
    return *(_WORD *)(this[1] + 32 * a2 + 2);
}
