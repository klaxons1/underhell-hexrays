int __thiscall sub_10159EB0(int this)
{
  int result; // eax

  sub_10011C00((_DWORD *)this);
  *(_DWORD *)(this + 1424) = &IPrototypeAppEffect::`vftable';
  *(_DWORD *)this = &C_ParticleSmokeGrenade::`vftable';
  *(_DWORD *)(this + 4) = &C_ParticleSmokeGrenade::`vftable';
  *(_DWORD *)(this + 8) = &C_ParticleSmokeGrenade::`vftable';
  *(_DWORD *)(this + 12) = &C_ParticleSmokeGrenade::`vftable';
  *(_DWORD *)(this + 1192) = &C_ParticleSmokeGrenade::`vftable';
  *(_DWORD *)(this + 1424) = &C_ParticleSmokeGrenade::`vftable';
  sub_1015E000(this + 7600);
  *(_DWORD *)(this + 2364) = 0;
  *(float *)(this + 7568) = 0.5;
  *(float *)(this + 7572) = 0.5;
  *(float *)(this + 7576) = 0.5;
  *(float *)(this + 7580) = 0.60000002;
  *(float *)(this + 7584) = 0.60000002;
  *(float *)(this + 7588) = 0.60000002;
  *(_DWORD *)(this + 2356) = 0;
  *(_BYTE *)(this + 1428) = 0;
  *(float *)(this + 7596) = 0.0;
  *(_WORD *)(this + 2360) = 0;
  *(float *)(this + 7592) = 0.0;
  result = this;
  *(float *)(this + 1448) = 0.0;
  *(float *)(this + 1452) = 0.0;
  *(float *)(this + 1444) = 0.0;
  return result;
}
