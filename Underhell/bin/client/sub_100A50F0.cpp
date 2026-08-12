int __thiscall sub_100A50F0(int this, int a2)
{
  sub_1008D9C0((_DWORD *)this, (int)"Quad");
  *(_DWORD *)this = &CFXQuad::`vftable';
  *(float *)(this + 56) = 0.0;
  *(float *)(this + 52) = 0.0;
  *(_DWORD *)(this + 12) = 0;
  sub_100A5060((_DWORD *)(this + 12), a2);
  return this;
}
