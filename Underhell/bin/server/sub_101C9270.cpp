_DWORD *__thiscall sub_101C9270(_DWORD *this)
{
  _DWORD *v2; // ecx
  int i; // eax

  *this = &CEntityDataInstantiator<StepSimulationData>::`vftable';
  v2 = this + 1;
  *v2 = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = sub_101C4BD0;
  this[7] = unknown_libname_5;
  sub_101C8220(v2);
  sub_101C82C0(this + 1, this[4], 64, 0);
  for ( i = 0; i < 1280; i += 20 )
  {
    *(_DWORD *)(this[1] + i + 12) = 0;
    *(_DWORD *)(i + this[1] + 8) = 0;
  }
  *((_BYTE *)this + 32) = 1;
  this[9] = 63;
  return this;
}
