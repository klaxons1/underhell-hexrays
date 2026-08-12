float *__thiscall sub_1032C830(float *this)
{
  float *result; // eax

  sub_10043460((int)this);
  *((_DWORD *)this + 920) = &CDefaultPlayerPickupVPhysics::`vftable';
  *(_DWORD *)this = &CNPC_BaseScanner::`vftable';
  *((_DWORD *)this + 526) = &CNPC_BaseScanner::`vftable';
  *((_DWORD *)this + 905) = &CNPC_BaseScanner::`vftable';
  *((_DWORD *)this + 920) = &CNPC_BaseScanner::`vftable';
  sub_10247EC0((_DWORD *)this + 921);
  this[960] = NAN;
  sub_10043190();
  if ( dword_1066DC70 != dword_10694898 )
  {
    sub_1032B5E0();
    byte_1066DC6C = 1;
    dword_1066DC70 = dword_10694898;
  }
  this[956] = 150.0;
  this[959] = 0.0;
  *((_BYTE *)this + 3788) = 0;
  this[957] = 300.0;
  result = this;
  this[958] = 350.0;
  return result;
}
