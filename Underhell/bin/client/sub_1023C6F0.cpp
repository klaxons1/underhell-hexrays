bool __thiscall sub_1023C6F0(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_1023BFF0(this, a2);
  if ( (dword_1047CB30 & 1) == 0 )
  {
    dword_1047CB30 |= 1u;
    dword_1047CB20 = -1;
    dword_1047CB24 = -1;
    dword_1047CB28 = -1;
    dword_1047CB2C = 1;
  }
  if ( v3 == -1 )
    return dword_1047CB20 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v3) == a2;
}
