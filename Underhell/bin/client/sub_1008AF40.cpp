_DWORD *__thiscall sub_1008AF40(_DWORD *this)
{
  int v2; // edx
  int v3; // ecx
  _DWORD *result; // eax

  *this = &CClientShadowMgr::`vftable';
  sub_10233590(0, 0, 1);
  sub_10233590(0, 0, 1);
  sub_10233590(0, 0, 1);
  unknown_libname_2(this + 8);
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *((_WORD *)this + 28) = -1;
  v2 = this[9];
  this[12] = -1;
  this[13] = 0xFFFF;
  this[15] = v2;
  sub_1008A4C0((int)(this + 16));
  *((_BYTE *)this + 208) = 0;
  this[55] = sub_100839A0;
  this[56] = 0;
  this[57] = 0;
  this[58] = 0;
  v3 = this[56];
  this[59] = 0xFFFF;
  this[60] = -1;
  this[61] = v3;
  this[62] = 0;
  this[63] = 0;
  this[64] = 0;
  this[65] = 0;
  this[66] = 0;
  *((_BYTE *)this + 268) = 0;
  this[69] = 0;
  this[70] = 0;
  this[71] = 0;
  this[72] = 0;
  this[73] = 0;
  this[74] = 0;
  this[75] = 0;
  this[76] = 0;
  this[77] = 0;
  this[78] = 0;
  this[68] = *(_DWORD *)(dword_1042C334 + 48);
  *((_BYTE *)this + 211) = 0;
  result = this;
  *((_BYTE *)this + 320) = *(_DWORD *)(dword_1042C13C + 48) != 0;
  return result;
}
