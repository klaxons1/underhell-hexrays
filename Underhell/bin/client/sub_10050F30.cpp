_DWORD *__thiscall sub_10050F30(_DWORD *this)
{
  int v2; // edx
  int v3; // ebx
  char *v4; // edi

  sub_1003D000((int)this);
  this[298] = &IBrushRenderer::`vftable';
  *this = &C_BreakableSurface::`vftable';
  this[1] = &C_BreakableSurface::`vftable';
  this[2] = &C_BreakableSurface::`vftable';
  this[3] = &C_BreakableSurface::`vftable';
  this[298] = &C_BreakableSurface::`vftable';
  this[312] = 0;
  this[313] = 0;
  this[314] = 0;
  *((_WORD *)this + 634) = -1;
  v2 = this[312];
  this[315] = -1;
  this[316] = 0xFFFF;
  this[318] = v2;
  sub_10233590(0, 0, 1);
  sub_10233590(0, 0, 1);
  unknown_libname_2(this + 515);
  v3 = 11;
  v4 = (char *)(this + 519);
  do
  {
    sub_10233590(0, 0, 1);
    unknown_libname_2(v4);
    v4 += 16;
    --v3;
  }
  while ( v3 >= 0 );
  sub_10233590(0, 0, 1);
  unknown_libname_2(this + 565);
  *((float *)this + 303) = 0.0;
  *((float *)this + 304) = 0.0;
  *((float *)this + 305) = 0.0;
  *((float *)this + 306) = 0.0;
  *((float *)this + 307) = 0.0;
  *((float *)this + 308) = 0.0;
  *((_BYTE *)this + 1236) = 0;
  this[311] = 0;
  memset(this + 383, 255, 0x100u);
  return this;
}
