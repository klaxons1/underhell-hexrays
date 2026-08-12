int __thiscall sub_101B2B80(_DWORD *this)
{
  int v2; // eax

  if ( this[232] )
  {
    v2 = sub_1023DBA0();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 40))(v2, this[232]);
    this[232] = 0;
  }
  this[215] = &IWatcherCallback::`vftable';
  *this = &CPhysConstraint::`vftable';
  sub_101B0490((int)this);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, this[200]);
  sub_1010BB10(this + 209);
  return sub_100DF1D0(this);
}
