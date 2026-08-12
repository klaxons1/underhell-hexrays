_DWORD *__thiscall sub_1011EC20(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  *this = &IDecalEmitterSystem::`vftable';
  sub_10170440(a2);
  *this = &CDecalEmitterSystem::`vftable';
  this[1] = &CDecalEmitterSystem::`vftable';
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  this[13] = -1;
  this[14] = 0;
  this[15] = -1;
  this[16] = -1;
  this[17] = this[10];
  if ( !this[9] )
    this[9] = sub_10002010;
  sub_1042F8A0(0, 32, 0);
  this[32] = 0;
  this[33] = 0;
  this[34] = 0;
  this[35] = 0;
  this[36] = -1;
  this[37] = 0;
  this[38] = -1;
  this[39] = -1;
  this[40] = this[33];
  result = this;
  if ( !this[32] )
    this[32] = sub_10002010;
  return result;
}
