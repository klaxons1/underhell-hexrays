_DWORD *__thiscall sub_100FC940(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = &IPhysSaveRestoreManager::`vftable';
  *this = &CPhysSaveRestoreBlockHandler::`vftable';
  this[1] = &CPhysSaveRestoreBlockHandler::`vftable';
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *((_WORD *)this + 24) = -1;
  *((_WORD *)this + 25) = 0;
  *((_WORD *)this + 26) = -1;
  *((_WORD *)this + 27) = -1;
  this[14] = this[9];
  this[16] = 0;
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
  *((_WORD *)this + 40) = -1;
  *((_WORD *)this + 41) = 0;
  *((_WORD *)this + 42) = -1;
  *((_WORD *)this + 43) = -1;
  this[22] = this[17];
  this[23] = 0;
  this[24] = 0;
  this[25] = 0;
  this[26] = 0;
  *((_WORD *)this + 54) = -1;
  *((_WORD *)this + 55) = 0;
  *((_WORD *)this + 56) = -1;
  *((_WORD *)this + 57) = -1;
  this[29] = this[24];
  this[30] = 0;
  this[31] = 0;
  this[32] = 0;
  this[33] = 0;
  *((_WORD *)this + 68) = -1;
  *((_WORD *)this + 69) = 0;
  *((_WORD *)this + 70) = -1;
  *((_WORD *)this + 71) = -1;
  this[36] = this[31];
  this[7] = sub_100FAD00;
  if ( !this[8] )
    this[8] = sub_100FACE0;
  if ( !this[16] )
    this[16] = sub_100FACE0;
  if ( !this[23] )
    this[23] = sub_100FACE0;
  if ( !this[30] )
    this[30] = sub_100FACE0;
  return result;
}
