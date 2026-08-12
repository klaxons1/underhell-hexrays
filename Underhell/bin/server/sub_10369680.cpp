int __thiscall sub_10369680(int this)
{
  sub_102FAA30((char *)this);
  *(_DWORD *)this = &CNPC_Fisherman::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Fisherman::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Fisherman::`vftable';
  *(_DWORD *)(this + 3652) = &CNPC_Fisherman::`vftable';
  sub_1039B810();
  if ( dword_10673894 != dword_10694898 )
  {
    sub_10369510();
    byte_10673890 = 1;
    dword_10673894 = dword_10694898;
  }
  return this;
}
