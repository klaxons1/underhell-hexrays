__int16 __thiscall sub_100B4230(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1042FC0C & 1) == 0 )
  {
    dword_1042FC0C |= 1u;
    dword_1042FC04 = -1;
    dword_1042FC08 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_1042FC04);
  else
    return *(_WORD *)(this[1] + 16 * a2 + 2);
}
