int __thiscall sub_102948C0(_DWORD *this)
{
  _DWORD *v2; // esi
  int i; // ebx

  sub_1010BB10(this + 276);
  sub_1010BB10(this + 270);
  v2 = this + 264;
  sub_1010BB10(this + 264);
  for ( i = 9; i >= 0; --i )
  {
    v2 -= 6;
    sub_1010BB10(v2);
  }
  return sub_100DF1D0(this);
}
