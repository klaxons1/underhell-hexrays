_DWORD *__thiscall sub_1010B390(_DWORD *this)
{
  *(_BYTE *)this &= 0xFCu;
  this[1] = -1;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  sub_1022D3E0(this + 7);
  sub_1022D3E0(this + 11);
  this[47] = 0;
  this[48] = 0;
  this[49] = 0;
  this[50] = 0;
  this[51] = 0;
  memset(this + 15, 0, 0x80u);
  return this;
}
