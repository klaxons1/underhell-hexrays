int __thiscall sub_1005C1D0(_DWORD *this)
{
  int v2; // esi
  int i; // ebx

  *this = &C_Plasma::`vftable';
  this[1] = &C_Plasma::`vftable';
  this[2] = &C_Plasma::`vftable';
  this[3] = &C_Plasma::`vftable';
  sub_1003D350((int)(this + 2278));
  v2 = (int)(this + 2272);
  for ( i = 5; i >= 0; --i )
  {
    v2 -= 1304;
    sub_1003D350(v2);
  }
  return sub_1003D350((int)this);
}
