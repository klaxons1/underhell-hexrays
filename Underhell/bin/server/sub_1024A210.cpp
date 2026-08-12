int __thiscall sub_1024A210(int *this)
{
  *this = (int)&CTeam::`vftable';
  this[203] = 0;
  if ( this[202] >= 0 )
  {
    if ( this[200] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[200]);
      this[200] = 0;
    }
    this[201] = 0;
  }
  this[204] = this[200];
  this[208] = 0;
  if ( this[207] >= 0 )
  {
    if ( this[205] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[205]);
      this[205] = 0;
    }
    this[206] = 0;
  }
  this[209] = this[205];
  sub_102375F0(this + 205);
  sub_102375F0(this + 200);
  return sub_100DF1D0(this);
}
