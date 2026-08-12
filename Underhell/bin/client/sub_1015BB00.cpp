_DWORD *__thiscall sub_1015BB00(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // edx

  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[6] = 0;
  *((_BYTE *)this + 4) = 0;
  this[5] = 0;
  *((_WORD *)this + 14) = 0;
  *this = &CLocalPlayerFilter::`vftable';
  if ( sub_100422D0() )
  {
    v2 = (_DWORD *)sub_100422D0();
    sub_1015B9D0((int)this, v3, v2);
  }
  return this;
}
