_DWORD *__thiscall sub_10068920(_DWORD *this, char a2)
{
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &C_SlideshowDisplay::`vftable';
  this[1] = &C_SlideshowDisplay::`vftable';
  this[2] = &C_SlideshowDisplay::`vftable';
  this[3] = &C_SlideshowDisplay::`vftable';
  v4 = this;
  sub_1012D820(&v4);
  sub_1011A810(this + 363);
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
