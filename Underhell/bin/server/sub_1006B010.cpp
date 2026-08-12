int __thiscall sub_1006B010(_DWORD *this, int a2)
{
  if ( (dword_10692F00 & 1) == 0 )
  {
    dword_10692F00 |= 1u;
    dword_10692EF0 = -1;
    dword_10692EF4 = -1;
    dword_10692EF8 = -1;
    dword_10692EFC = 1;
  }
  if ( a2 == -1 )
    return dword_10692EFC;
  else
    return *(_DWORD *)(this[1] + 32 * a2 + 12);
}
