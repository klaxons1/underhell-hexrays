bool __thiscall sub_1023C450(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_1023AEA0(this, a2);
  if ( (dword_1047CB1C & 1) == 0 )
  {
    dword_1047CB1C |= 1u;
    dword_1047CB0C = -1;
    dword_1047CB10 = -1;
    dword_1047CB14 = -1;
    dword_1047CB18 = 1;
  }
  if ( v3 == -1 )
    return dword_1047CB0C == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v3) == a2;
}
