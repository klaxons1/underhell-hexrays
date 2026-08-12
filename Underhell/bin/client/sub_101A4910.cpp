int __thiscall sub_101A4910(int this)
{
  sub_10179270((_DWORD *)this);
  *(_DWORD *)this = &C_HopwireExplosion::`vftable';
  *(_DWORD *)(this + 4) = &C_HopwireExplosion::`vftable';
  sub_100A4E30((_DWORD *)(this + 44));
  sub_100A4E30((_DWORD *)(this + 64));
  *(float *)(this + 92) = -1.0;
  *(_DWORD *)(this + 84) = 0;
  *(float *)(this + 96) = 0.0;
  *(_DWORD *)(this + 88) = 0;
  *(_DWORD *)(this + 100) = -1;
  sub_100A4E50((float *)(this + 44), 0.0);
  sub_100A4E50((float *)(this + 64), 0.0);
  return this;
}
