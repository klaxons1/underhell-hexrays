int __thiscall sub_102C0710(_DWORD *this, int a2)
{
  if ( (dword_106DE034 & 1) == 0 )
  {
    dword_106DE034 |= 1u;
    dword_106DE024 = -1;
    dword_106DE028 = -1;
    dword_106DE02C = -1;
    dword_106DE030 = 1;
  }
  if ( a2 == -1 )
    return dword_106DE02C;
  else
    return *(_DWORD *)(this[1] + 48 * a2 + 8);
}
