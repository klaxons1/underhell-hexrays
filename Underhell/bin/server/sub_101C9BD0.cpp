int *__thiscall sub_101C9BD0(int *this, char a2)
{
  sub_101C7570(this + 1);
  sub_101C8650(this + 1);
  *this = (int)&IEntityDataInstantiator::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660((int)this);
  return this;
}
