int __thiscall sub_1023C040(_DWORD *this, int a2)
{
  if ( (dword_1047CB30 & 1) == 0 )
  {
    dword_1047CB30 |= 1u;
    dword_1047CB20 = -1;
    dword_1047CB24 = -1;
    dword_1047CB28 = -1;
    dword_1047CB2C = 1;
  }
  if ( a2 == -1 )
    return dword_1047CB20;
  else
    return *(_DWORD *)(this[1] + 24 * a2);
}
