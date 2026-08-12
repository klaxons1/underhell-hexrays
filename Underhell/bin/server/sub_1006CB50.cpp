void __thiscall sub_1006CB50(_DWORD *this)
{
  sub_1006C050(this);
  this[6] = -1;
  if ( (int)this[3] >= 0 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  this[7] = -1;
  if ( (int)this[3] >= 0 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
}
