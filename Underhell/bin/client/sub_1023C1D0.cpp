int __thiscall sub_1023C1D0(_DWORD *this, int a2)
{
  if ( (dword_1047CB44 & 1) == 0 )
  {
    dword_1047CB44 |= 1u;
    dword_1047CB34 = -1;
    dword_1047CB38 = -1;
    dword_1047CB3C = -1;
    dword_1047CB40 = 1;
  }
  if ( a2 == -1 )
    return dword_1047CB3C;
  else
    return *(_DWORD *)(this[1] + 24 * a2 + 8);
}
