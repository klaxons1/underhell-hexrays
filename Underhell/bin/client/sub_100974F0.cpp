int __thiscall sub_100974F0(int *this)
{
  int v2; // eax

  sub_100310E0(this + 7);
  this[5] = 0;
  if ( this[4] >= 0 )
  {
    if ( this[2] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2]);
      this[2] = 0;
    }
    this[3] = 0;
  }
  this[6] = this[2];
  this[15] = 0;
  if ( this[14] >= 0 )
  {
    if ( this[12] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[12]);
      this[12] = 0;
    }
    this[13] = 0;
  }
  this[16] = this[12];
  this[20] = 0;
  if ( this[19] >= 0 )
  {
    if ( this[17] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[17]);
      this[17] = 0;
    }
    this[18] = 0;
  }
  this[21] = this[17];
  this[25] = 0;
  if ( this[24] >= 0 )
  {
    if ( this[22] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[22]);
      this[22] = 0;
    }
    this[23] = 0;
  }
  this[26] = this[22];
  sub_10233210(this + 28);
  v2 = this[27];
  if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)((v2 & 0xFFFFFFFC) - 4));
    this[27] = 0;
  }
  return sub_10094FA0(this);
}
