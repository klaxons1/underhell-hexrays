float *__thiscall sub_10144240(float *this, int a2)
{
  *((_DWORD *)this + 1) = 1;
  this[24] = 0.0;
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 100) = 0;
  *((_WORD *)this + 60) = 1;
  *((_DWORD *)this + 31) = a2 + 456;
  *((_DWORD *)this + 32) = a2;
  this[33] = 0.0;
  this[34] = 0.0;
  this[35] = 0.0;
  this[36] = 0.0;
  this[37] = 0.0;
  this[38] = 0.0;
  *(_DWORD *)this = &CFreezeFrameView::`vftable';
  sub_10233590(0, 0, 1);
  sub_10233590(0, 0, 1);
  return this;
}
