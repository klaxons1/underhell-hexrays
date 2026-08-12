_DWORD *__thiscall sub_1002D610(_DWORD *this, char a2)
{
  *this = &CInterpolatedVarArrayBase<float,1>::`vftable';
  sub_10027860((int)this);
  sub_10034930(this[8]);
  sub_10034930(this[5]);
  sub_1010F720(this + 2);
  *this = &IInterpolatedVar::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
