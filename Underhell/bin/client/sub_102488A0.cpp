char __thiscall sub_102488A0(int *this)
{
  const char *v2; // eax
  int i; // edi

  sub_101FBF20(this + 53);
  LOBYTE(v2) = sub_10244520(this);
  for ( i = 0; i < this[75]; ++i )
  {
    v2 = sub_10230460(dword_1047CCCC, *(_WORD *)(this[72] + 2 * i));
    if ( strlen(v2) )
      LOBYTE(v2) = sub_102482F0(this, v2);
  }
  return (char)v2;
}
