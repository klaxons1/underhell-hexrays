int __thiscall sub_103268B0(int this)
{
  int result; // eax

  sub_10041230((float *)this);
  *(_DWORD *)this = &CNPC_Barnacle::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Barnacle::`vftable';
  *(_DWORD *)(this + 3632) = -1;
  *(_DWORD *)(this + 3620) = 0;
  *(_DWORD *)(this + 3636) = 5;
  *(_DWORD *)(this + 3656) = -1;
  *(_DWORD *)(this + 3644) = 0;
  *(_DWORD *)(this + 3660) = 5;
  *(_DWORD *)(this + 3732) = -1;
  *(_DWORD *)(this + 3736) = -1;
  *(_DWORD *)(this + 3740) = -1;
  *(_DWORD *)(this + 9900) = -1;
  *(float *)(this + 9952) = -1.0;
  sub_10043190();
  if ( dword_1066D1C4 != dword_10694898 )
  {
    sub_10324F20();
    byte_1066D1C0 = 1;
    dword_1066D1C4 = dword_10694898;
  }
  *(_DWORD *)(this + 9912) = 1;
  *(float *)(this + 9892) = 16.0;
  *(_BYTE *)(this + 3693) = 0;
  result = this;
  *(float *)(this + 9908) = -1.0;
  return result;
}
