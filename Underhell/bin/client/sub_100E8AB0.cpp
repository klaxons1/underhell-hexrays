int __thiscall sub_100E8AB0(void *this)
{
  int v1; // ecx
  int v2; // ecx

  sub_100E8860((int)this);
  *(float *)(v1 + 104) = 800.0;
  *(_DWORD *)v1 = &CParticleCollision::`vftable';
  *(float *)(v1 + 108) = 0.5;
  *(float *)(v1 + 112) = 0.25;
  sub_100E8860(v1);
  return v2;
}
