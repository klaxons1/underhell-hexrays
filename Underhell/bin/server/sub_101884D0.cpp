_DWORD *__thiscall sub_101884D0(_DWORD *this, char a2)
{
  *this = &CMoveHelperServer::`vftable';
  dword_106B6E60 = 0;
  sub_102375F0(this + 2);
  *this = &IMoveHelper::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660((int)this);
  return this;
}
