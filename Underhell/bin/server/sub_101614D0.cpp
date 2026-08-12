_DWORD *__thiscall sub_101614D0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  *((_WORD *)this + 18) = 1;
  this[10] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  this[14] = 0;
  *((_WORD *)this + 30) = -1;
  *((_WORD *)this + 31) = 0;
  *((_WORD *)this + 32) = -1;
  *((_WORD *)this + 33) = -1;
  this[17] = this[12];
  if ( !this[11] )
    this[11] = sub_10002010;
  *((_BYTE *)this + 72) = 1;
  *((_BYTE *)this + 73) = 0;
  this[19] = 0;
  this[20] = 0;
  return result;
}
