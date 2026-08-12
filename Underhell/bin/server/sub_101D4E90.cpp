_DWORD *__thiscall sub_101D4E90(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = &IPhysSaveRestoreManager::`vftable';
  this[2] = &IEntityListener::`vftable';
  *this = &CPhysSaveRestoreBlockHandler::`vftable';
  this[1] = &CPhysSaveRestoreBlockHandler::`vftable';
  this[2] = &CPhysSaveRestoreBlockHandler::`vftable';
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  *((_WORD *)this + 26) = -1;
  *((_WORD *)this + 27) = 0;
  *((_WORD *)this + 28) = -1;
  *((_WORD *)this + 29) = -1;
  this[15] = this[10];
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
  this[20] = 0;
  *((_WORD *)this + 42) = -1;
  *((_WORD *)this + 43) = 0;
  *((_WORD *)this + 44) = -1;
  *((_WORD *)this + 45) = -1;
  this[23] = this[18];
  this[24] = 0;
  this[25] = 0;
  this[26] = 0;
  this[27] = 0;
  *((_WORD *)this + 56) = -1;
  *((_WORD *)this + 57) = 0;
  *((_WORD *)this + 58) = -1;
  *((_WORD *)this + 59) = -1;
  this[30] = this[25];
  this[31] = 0;
  this[32] = 0;
  this[33] = 0;
  this[34] = 0;
  *((_WORD *)this + 70) = -1;
  *((_WORD *)this + 71) = 0;
  *((_WORD *)this + 72) = -1;
  *((_WORD *)this + 73) = -1;
  this[37] = this[32];
  this[8] = sub_101D3280;
  if ( !this[9] )
    this[9] = sub_1005D140;
  if ( !this[17] )
    this[17] = sub_1005D140;
  if ( !this[24] )
    this[24] = sub_1005D140;
  if ( !this[31] )
    this[31] = sub_1005D140;
  return result;
}
