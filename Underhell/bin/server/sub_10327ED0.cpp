int __thiscall sub_10327ED0(int this)
{
  sub_102FAA30((char *)this);
  *(_DWORD *)this = &CNPC_Barney::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Barney::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Barney::`vftable';
  *(_DWORD *)(this + 3652) = &CNPC_Barney::`vftable';
  sub_1029D560((float *)(this + 5684));
  *(_DWORD *)(this + 5732) = -1;
  *(_DWORD *)(this + 5720) = 0;
  *(_DWORD *)(this + 5736) = 5;
  sub_1039B810();
  if ( dword_1066DB54 != dword_10694898 )
  {
    sub_10327E10();
    byte_1066DB50 = 1;
    dword_1066DB54 = dword_10694898;
  }
  return this;
}
