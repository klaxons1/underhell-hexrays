_DWORD *__thiscall sub_1009C5C0(_DWORD *this, char a2)
{
  *this = &C_EnvDetailController::`vftable';
  this[1] = &C_EnvDetailController::`vftable';
  this[2] = &C_EnvDetailController::`vftable';
  this[3] = &C_EnvDetailController::`vftable';
  if ( (_DWORD *)dword_1042D514 == this )
    dword_1042D514 = 0;
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
