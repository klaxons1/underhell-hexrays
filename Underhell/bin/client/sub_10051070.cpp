int __thiscall sub_10051070(_DWORD *this)
{
  int v2; // ebx
  _DWORD *v3; // edi

  *this = &C_BreakableSurface::`vftable';
  this[1] = &C_BreakableSurface::`vftable';
  this[2] = &C_BreakableSurface::`vftable';
  this[3] = &C_BreakableSurface::`vftable';
  this[298] = &C_BreakableSurface::`vftable';
  sub_10233380(this + 565);
  sub_10233210(this + 564);
  v2 = 11;
  v3 = this + 566;
  do
  {
    v3 -= 4;
    sub_10233380(v3 + 1);
    sub_10233210(v3);
    --v2;
  }
  while ( v2 >= 0 );
  sub_10233380(this + 515);
  sub_10233210(this + 514);
  sub_10233210(this + 511);
  sub_10087F70(this + 312);
  if ( (int)this[314] >= 0 )
  {
    if ( this[312] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[312]);
      this[312] = 0;
    }
    this[313] = 0;
  }
  return sub_1003D350((int)this);
}
