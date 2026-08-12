_DWORD *__thiscall sub_10219C00(_DWORD *this, char a2)
{
  *this = &CRecipientFilter::`vftable';
  sub_102375F0(this + 2);
  *this = &IRecipientFilter::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660((int)this);
  return this;
}
