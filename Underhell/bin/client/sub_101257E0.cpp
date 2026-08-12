__int16 __thiscall sub_101257E0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1043818C & 1) == 0 )
  {
    dword_1043818C |= 1u;
    dword_10438184 = -1;
    dword_10438188 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10438184;
  else
    return *(_WORD *)(this[1] + 16 * a2);
}
