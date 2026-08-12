float *__thiscall sub_1006FA50(float *this)
{
  float *result; // eax
  int v3; // [esp+8h] [ebp-4h]

  sub_1015B6D0();
  *(_DWORD *)this = &C_PropJeep::`vftable';
  *((_DWORD *)this + 1) = &C_PropJeep::`vftable';
  *((_DWORD *)this + 2) = &C_PropJeep::`vftable';
  *((_DWORD *)this + 3) = &C_PropJeep::`vftable';
  *((_DWORD *)this + 490) = &C_PropJeep::`vftable';
  this[564] = 0.0;
  this[565] = 0.0;
  this[566] = 0.0;
  this[570] = 0.0;
  this[572] = 0.0;
  sub_10229600("r_JeepFOV");
  result = this;
  this[534] = *(float *)(v3 + 44);
  return result;
}
