int *__thiscall sub_100FAB40(int *this, char a2)
{
  sub_100F9890(this + 1);
  sub_100F9DC0(this + 1);
  *this = (int)&IEntityDataInstantiator::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
