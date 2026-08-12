_DWORD *__thiscall sub_10070DF0(_DWORD *this)
{
  sub_1003D000((int)this);
  *this = &C_VGuiScreen::`vftable';
  this[1] = &C_VGuiScreen::`vftable';
  this[2] = &C_VGuiScreen::`vftable';
  this[3] = &C_VGuiScreen::`vftable';
  sub_10233590(0, 0, 1);
  sub_10233590(0, 0, 1);
  unknown_libname_2(this + 333);
  this[334] = -1;
  this[302] = -1;
  this[312] = -1;
  this[310] = -1;
  this[313] = -1;
  this[307] = -1;
  this[306] = -1;
  this[303] = 0;
  *((_WORD *)this + 628) = 256;
  sub_102334D0("engine/writez", "VGUI textures", 1);
  sub_10233340(this + 315);
  return this;
}
