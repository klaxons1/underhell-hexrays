int *__thiscall sub_1015B8D0(int *this, char a2)
{
  *this = (int)&C_RecipientFilter::`vftable';
  sub_1011A810(this + 2);
  *this = (int)&IRecipientFilter::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
