bool __thiscall sub_1023C990(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_1023C1D0(this, a2);
  if ( (dword_1047CB44 & 1) == 0 )
  {
    dword_1047CB44 |= 1u;
    dword_1047CB34 = -1;
    dword_1047CB38 = -1;
    dword_1047CB3C = -1;
    dword_1047CB40 = 1;
  }
  if ( v3 == -1 )
    return dword_1047CB34 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v3) == a2;
}
