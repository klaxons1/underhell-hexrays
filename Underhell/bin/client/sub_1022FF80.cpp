__int16 __thiscall sub_1022FF80(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1047B81C & 1) == 0 )
  {
    dword_1047B81C |= 1u;
    dword_1047B814 = -1;
    dword_1047B818 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_1047B818;
  else
    return *(_WORD *)(this[1] + 12 * a2 + 4);
}
