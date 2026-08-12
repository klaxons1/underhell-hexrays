int __thiscall sub_101D33C0(_DWORD *this, unsigned __int16 a2)
{
  if ( (dword_106BAE7C & 1) == 0 )
  {
    dword_106BAE7C |= 1u;
    dword_106BAE74 = -1;
    dword_106BAE78 = 0x1FFFF;
  }
  if ( a2 == 0xFFFF )
    return HIWORD(dword_106BAE78);
  else
    return *(unsigned __int16 *)(this[1] + 16 * a2 + 6);
}
