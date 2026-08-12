int __thiscall sub_100FCC30(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_104360E8 & 1) == 0 )
  {
    dword_104360E8 |= 1u;
    dword_104360E0 = -1;
    dword_104360E4 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_104360E4);
  else
    return *(unsigned __int16 *)(this[1] + 16 * a2 + 6);
}
