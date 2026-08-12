_DWORD *__thiscall sub_103F3100(_DWORD *this)
{
  sub_1020CE30(this);
  this[422] = &IDrivableVehicle::`vftable';
  *this = &CPropVehiclePrisonerPod::`vftable';
  this[280] = &CPropVehiclePrisonerPod::`vftable';
  this[281] = &CPropVehiclePrisonerPod::`vftable';
  this[422] = &CPropVehiclePrisonerPod::`vftable';
  this[423] = -1;
  sub_1026EEA0(this + 424);
  this[424] = &CPrisonerPodServerVehicle::`vftable';
  this[537] = -1;
  this[534] = 0;
  this[538] = 5;
  this[543] = -1;
  this[540] = 0;
  this[544] = 5;
  this[549] = -1;
  this[546] = 0;
  this[550] = 5;
  this[555] = -1;
  this[552] = 0;
  this[556] = 5;
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(this[424] + 252))(this + 424, this);
  return this;
}
