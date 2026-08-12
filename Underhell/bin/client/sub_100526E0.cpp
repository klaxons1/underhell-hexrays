float *__thiscall sub_100526E0(float *this)
{
  sub_1003D000((int)this);
  *(_DWORD *)this = &C_Func_Dust::`vftable';
  *((_DWORD *)this + 1) = &C_Func_Dust::`vftable';
  *((_DWORD *)this + 2) = &C_Func_Dust::`vftable';
  *((_DWORD *)this + 3) = &C_Func_Dust::`vftable';
  sub_100F2A50("C_Func_Dust");
  *((_DWORD *)this + 308) = &CDustEffect::`vftable';
  this[373] = -1.0;
  this[374] = 0.0;
  *((_DWORD *)this + 371) = this;
  sub_100F2930(0);
  return this;
}
