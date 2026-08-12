__int16 __thiscall sub_100FB270(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_10436100 & 1) == 0 )
  {
    dword_10436100 |= 1u;
    dword_104360F8 = -1;
    dword_104360FC = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_104360F8;
  else
    return *(_WORD *)(this[1] + 36 * a2);
}
