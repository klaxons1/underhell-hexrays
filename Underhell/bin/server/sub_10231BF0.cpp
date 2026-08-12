int __thiscall sub_10231BF0(_DWORD *this)
{
  _DWORD *v2; // esi
  int i; // edi

  v2 = this + 304;
  for ( i = 7; i >= 0; --i )
  {
    v2 -= 6;
    sub_1010BB10(v2);
  }
  sub_1010BB10(this + 250);
  sub_1010BB10(this + 244);
  sub_1010BB10(this + 238);
  sub_1010BB10(this + 232);
  sub_1010BB10(this + 226);
  return sub_100DF1D0(this);
}
