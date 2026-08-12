int __thiscall sub_10097CF0(int *this)
{
  int v2; // eax

  v2 = this[27];
  *this = (int)&CDetailObjectSystem::`vftable';
  this[1] = (int)&CDetailObjectSystem::`vftable';
  if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)((v2 & 0xFFFFFFFC) - 4));
    this[27] = 0;
  }
  sub_10094FA0(this);
  sub_10233210(this + 29);
  sub_10233210(this + 28);
  sub_1011A810(this + 22);
  sub_1011A810(this + 17);
  sub_1011A810(this + 12);
  sub_100310E0(this + 7);
  if ( this[9] >= 0 )
  {
    if ( this[7] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[7]);
      this[7] = 0;
    }
    this[8] = 0;
  }
  sub_1011A810(this + 2);
  return sub_100D3300((int)this);
}
