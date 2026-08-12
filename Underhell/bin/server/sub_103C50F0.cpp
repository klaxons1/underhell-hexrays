float *__thiscall sub_103C50F0(float *this)
{
  float *result; // eax

  sub_1039E9F0((int)this);
  *((_DWORD *)this + 918) = &CDefaultPlayerPickupVPhysics::`vftable';
  this[936] = 0.0;
  this[937] = 0.0;
  *(_DWORD *)this = &CNPC_FloorTurret::`vftable';
  this[938] = 0.0;
  *((_DWORD *)this + 526) = &CNPC_FloorTurret::`vftable';
  this[939] = 0.0;
  *((_DWORD *)this + 905) = &CNPC_FloorTurret::`vftable';
  this[940] = 0.0;
  *((_DWORD *)this + 918) = &CNPC_FloorTurret::`vftable';
  this[942] = 0.0;
  this[932] = NAN;
  this[933] = 0.0;
  *((_BYTE *)this + 3737) = 0;
  *((_WORD *)this + 1882) = 0;
  this[944] = NAN;
  this[952] = NAN;
  this[953] = NAN;
  this[954] = NAN;
  this[955] = NAN;
  this[959] = NAN;
  this[964] = NAN;
  this[961] = 0.0;
  *((_DWORD *)this + 965) = 5;
  this[970] = NAN;
  this[967] = 0.0;
  *((_DWORD *)this + 971) = 5;
  this[976] = NAN;
  this[973] = 0.0;
  *((_DWORD *)this + 977) = 5;
  this[982] = NAN;
  this[979] = 0.0;
  *((_DWORD *)this + 983) = 5;
  this[988] = NAN;
  this[985] = 0.0;
  *((_DWORD *)this + 989) = 5;
  sub_10043190();
  if ( dword_1067BBAC != dword_10694898 )
  {
    sub_103C3CB0();
    byte_1067BBA8 = 1;
    dword_1067BBAC = dword_10694898;
  }
  result = this;
  this[946] = 0.0;
  this[947] = 0.0;
  this[948] = 0.0;
  this[956] = flt_10689730;
  this[957] = flt_10689734;
  this[958] = flt_10689738;
  return result;
}
