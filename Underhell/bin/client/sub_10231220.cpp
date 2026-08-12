__int16 __thiscall sub_10231220(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1047B82C & 1) == 0 )
  {
    dword_1047B82C |= 1u;
    dword_1047B824 = -1;
    dword_1047B828 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_1047B828;
  else
    return *(_WORD *)(this[1] + 12 * a2 + 4);
}
