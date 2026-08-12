float *__thiscall sub_100F2A50(float *this, int a2)
{
  int v3; // edi
  int *v4; // eax

  v3 = (int)(this + 2);
  *(_DWORD *)this = &CParticleEffect::`vftable';
  sub_100EEC80((_DWORD *)this + 2);
  *((_DWORD *)this + 1) = a2;
  this[56] = 0.0;
  this[57] = 0.0;
  this[58] = 0.0;
  *((_DWORD *)this + 59) = 2;
  this[61] = NAN;
  this[62] = 0.0;
  *((_BYTE *)this + 240) = 1;
  v4 = sub_100F0920();
  sub_100F0010(v4, v3, (int)this);
  return this;
}
