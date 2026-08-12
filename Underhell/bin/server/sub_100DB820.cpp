__int16 __thiscall sub_100DB820(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_1069796C & 1) == 0 )
  {
    dword_1069796C |= 1u;
    dword_10697964 = -1;
    dword_10697968 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_10697968;
  else
    return *(_WORD *)(this[1] + 24 * a2 + 4);
}
