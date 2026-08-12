int __thiscall sub_1035FBE0(int this)
{
  sub_10041230((float *)this);
  *(_DWORD *)this = &CNPC_Crow::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Crow::`vftable';
  sub_10043190();
  if ( dword_1067222C != dword_10694898 )
  {
    sub_1035F1C0();
    byte_10672228 = 1;
    dword_1067222C = dword_10694898;
  }
  *(_DWORD *)this = &CNPC_Seagull::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Seagull::`vftable';
  return this;
}
