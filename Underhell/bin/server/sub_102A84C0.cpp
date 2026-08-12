int __thiscall sub_102A84C0(int this)
{
  int result; // eax

  sub_102A21E0((_DWORD *)this);
  *(_DWORD *)this = &CAI_PassengerBehaviorZombie::`vftable';
  sub_102A21B0();
  if ( dword_1065F4E8 != dword_10694898 )
  {
    sub_102A7E20();
    byte_1065F4E4 = 1;
    dword_1065F4E8 = dword_10694898;
  }
  result = this;
  *(float *)(this + 140) = 0.0;
  *(float *)(this + 144) = 0.0;
  *(float *)(this + 148) = 0.0;
  return result;
}
