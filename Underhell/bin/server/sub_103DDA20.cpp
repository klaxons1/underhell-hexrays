int __thiscall sub_103DDA20(int this)
{
  sub_10041230((float *)this);
  *(float *)(this + 3620) = 1.0;
  *(_DWORD *)this = &CProtoSniper::`vftable';
  *(_DWORD *)(this + 2104) = &CProtoSniper::`vftable';
  *(float *)(this + 3624) = 0.75;
  *(_DWORD *)(this + 3656) = -1;
  *(_DWORD *)(this + 3660) = -1;
  *(_DWORD *)(this + 3808) = -1;
  *(_DWORD *)(this + 3840) = -1;
  *(_DWORD *)(this + 3828) = 0;
  *(_DWORD *)(this + 3844) = 5;
  sub_10043190();
  if ( dword_1067FA44 != dword_10694898 )
  {
    sub_103DC4B0();
    byte_1067FA40 = 1;
    dword_1067FA44 = dword_10694898;
  }
  *(_DWORD *)(this + 3652) = 0;
  *(float *)(this + 3708) = 256.0;
  *(_BYTE *)(this + 3716) = 0;
  *(_DWORD *)(this + 3792) = 100;
  return this;
}
