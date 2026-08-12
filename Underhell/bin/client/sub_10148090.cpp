_DWORD *__thiscall sub_10148090(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 1;
  *((float *)this + 24) = 0.0;
  *((_WORD *)this + 60) = 1;
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 100) = 0;
  this[32] = a2;
  this[33] = 0;
  this[34] = 0;
  this[35] = 0;
  this[36] = 0;
  this[37] = 0;
  this[38] = 0;
  *this = &CBaseWaterView::`vftable';
  this[31] = a2 + 456;
  this[40] = 1;
  *((float *)this + 63) = 0.0;
  *((_WORD *)this + 138) = 1;
  *((_BYTE *)this + 248) = 0;
  *((_BYTE *)this + 256) = 0;
  this[70] = a2 + 456;
  this[71] = a2;
  this[72] = 0;
  this[73] = 0;
  this[74] = 0;
  this[75] = 0;
  this[76] = 0;
  this[77] = 0;
  this[39] = &CBaseWaterView::CSoftwareIntersectionView::`vftable';
  return result;
}
