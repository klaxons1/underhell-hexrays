_DWORD *__thiscall sub_10079890(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  this[1] = a2;
  this[2] = &CAI_ProxyMovementSink::`vftable';
  this[3] = 0;
  *this = &CAI_Motor::`vftable';
  this[2] = &CAI_Motor::`vftable';
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
  this[20] = 0;
  this[21] = 0;
  *((float *)this + 4) = 0.0;
  *((float *)this + 5) = 0.0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  this[22] = 0;
  *((_BYTE *)this + 92) = 0;
  return result;
}
