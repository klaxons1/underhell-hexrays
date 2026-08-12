int __thiscall sub_102C0230(_DWORD *this, int a2)
{
  if ( (dword_106DE00C & 1) == 0 )
  {
    dword_106DE00C |= 1u;
    dword_106DDFFC = -1;
    dword_106DE000 = -1;
    dword_106DE004 = -1;
    dword_106DE008 = 1;
  }
  if ( a2 == -1 )
    return dword_106DDFFC;
  else
    return *(_DWORD *)(this[1] + 28 * a2);
}
