int __thiscall sub_1023BE10(_DWORD *this, int a2)
{
  if ( (dword_1047CB08 & 1) == 0 )
  {
    dword_1047CB08 |= 1u;
    dword_1047CAF8 = -1;
    dword_1047CAFC = -1;
    dword_1047CB00 = -1;
    dword_1047CB04 = 1;
  }
  if ( a2 == -1 )
    return dword_1047CAF8;
  else
    return *(_DWORD *)(this[1] + 44 * a2);
}
