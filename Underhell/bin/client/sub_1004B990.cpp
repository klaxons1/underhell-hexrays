_DWORD *__thiscall sub_1004B990(_DWORD *this)
{
  sub_1003D000((int)this);
  *this = &C_FogController::`vftable';
  this[1] = &C_FogController::`vftable';
  this[2] = &C_FogController::`vftable';
  this[3] = &C_FogController::`vftable';
  this[298] = &fogparams_t::`vftable';
  if ( *((_BYTE *)this + 1256) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[298])(this + 298, this + 314);
    *((_BYTE *)this + 1256) = 0;
  }
  if ( this[309] != COERCE_INT(1.0) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))this[298])(this + 298, this + 309);
    *((float *)this + 309) = 1.0;
  }
  return this;
}
