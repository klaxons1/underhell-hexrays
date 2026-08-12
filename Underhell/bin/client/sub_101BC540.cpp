int *__thiscall sub_101BC540(int *this, char a2)
{
  sub_1011A810(this + 9);
  sub_101BC1A0((int)(this + 2));
  *this = (int)&IBaseInterface::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
