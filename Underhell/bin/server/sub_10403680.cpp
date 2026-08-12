int __thiscall sub_10403680(int this)
{
  double v2; // st7
  int result; // eax

  sub_100D4A70((_DWORD *)this);
  *(_BYTE *)(this + 1388) = 1;
  *(_BYTE *)(this + 1127) = 0;
  *(_DWORD *)this = &CWeaponPistol::`vftable';
  v2 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(this + 1208) = 1;
  *(float *)(this + 1392) = v2;
  result = this;
  *(float *)(this + 1400) = 0.0;
  *(float *)(this + 1212) = 24.0;
  *(float *)(this + 1220) = 1500.0;
  *(float *)(this + 1216) = 24.0;
  *(float *)(this + 1224) = 200.0;
  return result;
}
