char __thiscall sub_103CFA60(int *this, int a2, int a3, int a4)
{
  unsigned int v5; // eax

  if ( a2 == dword_106E50B0 )
  {
    v5 = this[965];
    if ( v5 != -1 && off_1061BE18[4 * (this[965] & 0xFFF) + 2] == v5 >> 12 && off_1061BE18[4 * (this[965] & 0xFFF) + 1] )
      sub_103CF7A0(this, flt_106F1CA8, flt_106F1CAC, flt_106F1CB0);
  }
  return sub_10038420(this, a2, a3, a4);
}
