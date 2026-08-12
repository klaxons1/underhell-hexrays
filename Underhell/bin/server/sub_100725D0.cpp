int __thiscall sub_100725D0(_DWORD *this)
{
  this[12] = 0;
  if ( (int)this[11] >= 0 )
  {
    if ( this[9] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[9]);
      this[9] = 0;
    }
    this[10] = 0;
  }
  this[13] = this[9];
  this[17] = 0;
  if ( (int)this[16] >= 0 )
  {
    if ( this[14] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[14]);
      this[14] = 0;
    }
    this[15] = 0;
  }
  this[18] = this[14];
  this[3] = 0;
  if ( (int)this[2] >= 0 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  this[4] = *this;
  sub_102375F0(this + 14);
  sub_102375F0(this + 9);
  return sub_102375F0(this);
}
