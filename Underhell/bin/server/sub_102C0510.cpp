int __thiscall sub_102C0510(_DWORD *this, int a2)
{
  if ( (dword_106DE020 & 1) == 0 )
  {
    dword_106DE020 |= 1u;
    dword_106DE010 = -1;
    dword_106DE014 = -1;
    dword_106DE018 = -1;
    dword_106DE01C = 1;
  }
  if ( a2 == -1 )
    return dword_106DE014;
  else
    return *(_DWORD *)(this[1] + 40 * a2 + 4);
}
