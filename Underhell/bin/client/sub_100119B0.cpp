_DWORD *__thiscall sub_100119B0(_DWORD *this)
{
  sub_100336A0();
  *this = &C_BaseGrenade::`vftable';
  this[1] = &C_BaseGrenade::`vftable';
  this[2] = &C_BaseGrenade::`vftable';
  this[3] = &C_BaseGrenade::`vftable';
  this[845] = -1;
  this[846] = -1;
  if ( this[845] != -1
    && *((_DWORD *)off_103DCD74 + 4 * (this[845] & 0xFFF) + 2) == this[845] >> 12
    && *((_DWORD *)off_103DCD74 + 4 * (this[845] & 0xFFF) + 1) )
  {
    this[845] = -1;
  }
  this[846] = -1;
  if ( *((_BYTE *)this + 3353) )
    *((_BYTE *)this + 3353) = 0;
  if ( this[839] != COERCE_INT(100.0) )
    *((float *)this + 839) = 100.0;
  *((float *)this + 841) = 0.0;
  *((_BYTE *)this + 3352) = 0;
  if ( *((_BYTE *)this + 1109) != 1 )
  {
    *((_BYTE *)this + 1109) = 1;
    sub_10039160(this + 5);
  }
  return this;
}
