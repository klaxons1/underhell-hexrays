int __thiscall sub_100AEE70(_DWORD *this)
{
  this[625] = &CUserCmd::`vftable';
  sub_1011A810(this + 641);
  if ( (int)this[611] >= 0 )
  {
    if ( this[609] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[609]);
      this[609] = 0;
    }
    this[610] = 0;
  }
  return sub_100D3350((int)this);
}
