int __thiscall sub_10032580(int *this)
{
  sub_100310E0(this + 495);
  if ( this[497] >= 0 )
  {
    if ( this[495] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[495]);
      this[495] = 0;
    }
    this[496] = 0;
  }
  sub_1011A810(this + 490);
  return sub_10030270((int)this);
}
