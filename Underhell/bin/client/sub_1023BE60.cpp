int __thiscall sub_1023BE60(_DWORD *this, int a2)
{
  if ( (dword_1047CB1C & 1) == 0 )
  {
    dword_1047CB1C |= 1u;
    dword_1047CB0C = -1;
    dword_1047CB10 = -1;
    dword_1047CB14 = -1;
    dword_1047CB18 = 1;
  }
  if ( a2 == -1 )
    return dword_1047CB0C;
  else
    return *(_DWORD *)(this[1] + 24 * a2);
}
