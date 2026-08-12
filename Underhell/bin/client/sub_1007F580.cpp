void __thiscall sub_1007F580(_DWORD *this)
{
  int v2; // ecx

  sub_1007E270(this);
  if ( (int)this[2] >= 0 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  this[8] = *this;
  this[5] = 0xFFFF;
  this[7] = -1;
  sub_1007E1F0(this + 9);
  if ( (int)this[11] >= 0 )
  {
    if ( this[9] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[9]);
      this[9] = 0;
    }
    this[10] = 0;
  }
  v2 = this[9];
  this[14] = 0xFFFF;
  this[16] = -1;
  this[17] = v2;
}
