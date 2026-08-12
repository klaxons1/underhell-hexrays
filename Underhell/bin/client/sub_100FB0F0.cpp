__int16 __thiscall sub_100FB0F0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104360E8 & 1) == 0 )
  {
    dword_104360E8 |= 1u;
    dword_104360E0 = -1;
    dword_104360E4 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return dword_104360E0;
  else
    return *(_WORD *)(this[1] + 16 * a2);
}
