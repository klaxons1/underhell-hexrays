_DWORD *__thiscall sub_100CE690(_DWORD *this, char a2)
{
  if ( (int)this[16] >= 0 )
  {
    if ( this[14] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[14]);
      this[14] = 0;
    }
    this[15] = 0;
  }
  *this = &CLCDItem::`vftable';
  sub_1011A810(this + 9);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
