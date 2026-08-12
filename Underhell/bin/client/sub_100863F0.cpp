__int16 __thiscall sub_100863F0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1042BFEC & 1) == 0 )
  {
    dword_1042BFEC |= 1u;
    dword_1042BFE4 = -1;
    dword_1042BFE8 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_1042BFE4);
  else
    return *(_WORD *)(this[1] + 10 * a2 + 2);
}
