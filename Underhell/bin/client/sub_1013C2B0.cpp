int __thiscall sub_1013C2B0(int *this)
{
  int v2; // edi

  v2 = this[303] - 1;
  *this = (int)&CViewAngleAnimation::`vftable';
  this[1] = (int)&CViewAngleAnimation::`vftable';
  this[2] = (int)&CViewAngleAnimation::`vftable';
  for ( this[3] = (int)&CViewAngleAnimation::`vftable'; v2 >= 0; --v2 )
    sub_10034930(*(_DWORD *)(this[300] + 4 * v2));
  this[303] = 0;
  sub_1011A810(this + 300);
  return sub_1003D350((int)this);
}
