int __thiscall sub_103938D0(int this)
{
  sub_102FA8F0(this);
  *(_DWORD *)this = &CNPC_Monk::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Monk::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Monk::`vftable';
  *(_DWORD *)(this + 3652) = &CNPC_Monk::`vftable';
  sub_10097C10();
  if ( dword_10677384 != dword_10694898 )
  {
    sub_10393530();
    byte_10677380 = 1;
    dword_10677384 = dword_10694898;
  }
  sub_1004FB20((_DWORD *)(this + 4432));
  sub_102F71E0((float *)(this + 4484));
  return this;
}
