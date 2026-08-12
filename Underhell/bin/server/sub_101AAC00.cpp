int __thiscall sub_101AAC00(int this)
{
  int result; // eax

  sub_10041230((float *)this);
  *(_DWORD *)this = &CNPC_VehicleDriver::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_VehicleDriver::`vftable';
  sub_10043190();
  if ( dword_10633888 != dword_10694898 )
  {
    sub_101AA7E0();
    byte_10633884 = 1;
    dword_10633888 = dword_10694898;
  }
  result = this;
  *(_DWORD *)(this + 3632) = -1;
  return result;
}
