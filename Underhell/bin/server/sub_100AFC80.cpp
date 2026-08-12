float *__thiscall sub_100AFC80(float *this, int a2)
{
  *(_DWORD *)this = &CAI_Expresser::`vftable';
  this[1] = 0.0;
  this[2] = 0.0;
  this[3] = 0.0;
  this[4] = 0.0;
  this[5] = 0.0;
  this[6] = NAN;
  this[7] = 0.0;
  this[8] = NAN;
  this[9] = NAN;
  this[10] = this[3];
  if ( !*((_DWORD *)this + 2) )
    *((_DWORD *)this + 2) = sub_10002010;
  this[11] = 0.0;
  *((_DWORD *)this + 14) = 100;
  this[12] = 0.0;
  this[13] = 0.0;
  this[16] = NAN;
  if ( a2 )
    this[16] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[16] = NAN;
  return this;
}
