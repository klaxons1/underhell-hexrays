void __thiscall sub_1007EF90(_DWORD *this)
{
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
}
