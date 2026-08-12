int __thiscall sub_102E7440(int *this)
{
  *this = (int)&CTriggerWeaponDissolve::`vftable';
  this[294] = 0;
  if ( this[293] >= 0 )
  {
    if ( this[291] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[291]);
      this[291] = 0;
    }
    this[292] = 0;
  }
  this[295] = this[291];
  this[299] = 0;
  if ( this[298] >= 0 )
  {
    if ( this[296] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[296]);
      this[296] = 0;
    }
    this[297] = 0;
  }
  this[300] = this[296];
  sub_102375F0(this + 296);
  sub_102375F0(this + 291);
  sub_1010BB10(this + 285);
  sub_1010BB10(this + 279);
  sub_1010BB10(this + 273);
  return sub_10116BA0(this);
}
