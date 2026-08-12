_DWORD *__thiscall sub_101BC4D0(_DWORD *this)
{
  this[1] = &IClientEntityListener::`vftable';
  *this = &CClientTools::`vftable';
  this[1] = &CClientTools::`vftable';
  this[2] = sub_10182380;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  *((_WORD *)this + 12) = -1;
  *((_WORD *)this + 13) = 0;
  *((_WORD *)this + 14) = -1;
  *((_WORD *)this + 15) = -1;
  this[8] = this[3];
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  *((_BYTE *)this + 56) = 0;
  sub_1007C420(off_103DCD78, (int)(this + 1));
  return this;
}
