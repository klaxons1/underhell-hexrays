_DWORD *__thiscall sub_100EFD80(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &CParticleMgr::`vftable';
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  *((_WORD *)this + 30) = -1;
  *((_WORD *)this + 26) = -1;
  *((_WORD *)this + 27) = -1;
  *((_WORD *)this + 28) = -1;
  *((_WORD *)this + 29) = 0;
  this[16] = this[10];
  this[17] = 0;
  this[18] = 0;
  this[19] = 0;
  this[20] = 0;
  this[21] = 0;
  this[22] = 0;
  this[40] = 0;
  this[41] = 0;
  this[42] = 0;
  this[43] = 0;
  this[44] = 0;
  this[45] = 0;
  this[46] = 0;
  this[47] = 0;
  this[48] = 0;
  *((_WORD *)this + 98) = -1;
  *((_WORD *)this + 99) = 0;
  *((_WORD *)this + 100) = -1;
  *((_WORD *)this + 101) = -1;
  this[51] = this[46];
  if ( !this[45] )
    this[45] = sub_10002020;
  this[57] = 0;
  *((float *)this + 52) = 0.0;
  this[58] = 0;
  this[56] = this + 57;
  *((float *)this + 54) = 1.0;
  this[59] = 0;
  this[60] = 0;
  this[61] = 0;
  this[62] = 0;
  *((_WORD *)this + 126) = -1;
  *((_WORD *)this + 127) = 0;
  *((_WORD *)this + 128) = -1;
  *((_WORD *)this + 129) = -1;
  this[65] = this[60];
  this[66] = 0;
  *((_WORD *)this + 19) = 256;
  this[23] = 0;
  this[67] = 0;
  this[68] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  *((float *)this + 53) = 0.0;
  *((float *)this + 52) = 0.0;
  *((_WORD *)this + 18) = 1;
  *((float *)this + 55) = 1.0;
  *((float *)this + 54) = 1.0;
  this[56] = this + 57;
  this[58] = 0;
  this[1] = 0;
  if ( !this[59] )
    this[59] = sub_100EB470;
  return result;
}
