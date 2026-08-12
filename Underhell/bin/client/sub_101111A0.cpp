int __thiscall sub_101111A0(_DWORD *this)
{
  _DWORD *v2; // ecx

  v2 = this + 645;
  *v2 = &CInterpolatedVarArrayBase<QAngle,1>::`vftable';
  sub_10027860((int)v2);
  sub_10034930(this[653]);
  sub_10034930(this[650]);
  sub_1010F720(this + 647);
  this[645] = &IInterpolatedVar::`vftable';
  this[634] = &CInterpolatedVarArrayBase<Vector,1>::`vftable';
  sub_10027860((int)(this + 634));
  sub_10034930(this[642]);
  sub_10034930(this[639]);
  sub_1010F720(this + 636);
  this[634] = &IInterpolatedVar::`vftable';
  return sub_10030270((int)this);
}
