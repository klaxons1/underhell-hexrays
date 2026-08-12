_DWORD *__thiscall sub_101D4DE0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // eax
  bool v7; // cc

  sub_101C6BE0(this, a2, a3, a4, a5);
  v6 = 8 * this[1];
  v7 = this[3] <= v6;
  *this = &off_10393690;
  if ( v7 )
    this[3] = v6;
  if ( !this[5] )
    this[5] = sub_100DDA40(this[3] * this[2]);
  return this;
}
