__int16 __thiscall sub_100FAF40(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104360DC & 1) == 0 )
  {
    dword_104360DC |= 1u;
    dword_104360D4 = -1;
    dword_104360D8 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_104360D4;
  else
    return *(_WORD *)(this[1] + 16 * a2);
}
