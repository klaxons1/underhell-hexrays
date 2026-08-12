float *__thiscall sub_103212C0(float *this)
{
  sub_102B42A0((int)this);
  *(_DWORD *)this = &CNPC_AttackHelicopter::`vftable';
  *((_DWORD *)this + 526) = &CNPC_AttackHelicopter::`vftable';
  sub_10043190();
  if ( dword_1066C904 != dword_10694898 )
  {
    sub_1031F520();
    byte_1066C900 = 1;
    dword_1066C904 = dword_10694898;
  }
  sub_101BD540((_DWORD *)this + 985);
  sub_102AA600((_DWORD *)this + 991);
  this[1032] = NAN;
  this[1037] = NAN;
  this[1038] = NAN;
  this[1039] = NAN;
  this[1040] = NAN;
  this[1041] = NAN;
  this[1044] = 2.0;
  *((_WORD *)this + 2090) = 0;
  this[1062] = NAN;
  this[1063] = NAN;
  this[1064] = NAN;
  this[1074] = NAN;
  this[1071] = 0.0;
  *((_DWORD *)this + 1075) = 5;
  this[1080] = NAN;
  this[1077] = 0.0;
  *((_DWORD *)this + 1081) = 5;
  this[1083] = NAN;
  this[958] = 0.0;
  return this;
}
