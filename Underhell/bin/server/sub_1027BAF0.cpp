int __thiscall sub_1027BAF0(int this)
{
  double v2; // st7
  int result; // eax

  sub_100D4A70((_DWORD *)this);
  *(_BYTE *)(this + 1127) = 0;
  *(_BYTE *)(this + 1388) = 1;
  *(_DWORD *)this = &CWeaponPistolSocom::`vftable';
  *(_DWORD *)(this + 1412) = -1;
  *(_BYTE *)(this + 1411) = 0;
  v2 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(this + 1408) = 0;
  *(float *)(this + 1392) = v2;
  *(_BYTE *)(this + 1208) = 0;
  *(_WORD *)(this + 1409) = 0;
  *(float *)(this + 1400) = 0.0;
  result = this;
  *(float *)(this + 1212) = 24.0;
  *(float *)(this + 1220) = 1500.0;
  *(float *)(this + 1216) = 24.0;
  *(float *)(this + 1224) = 200.0;
  return result;
}
