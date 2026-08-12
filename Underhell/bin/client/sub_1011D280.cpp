_DWORD *__thiscall sub_1011D280(_DWORD *this, char a2)
{
  _DWORD *v3; // ecx

  v3 = (_DWORD *)this[4];
  *this = &SEditModelRender::`vftable';
  this[1] = &SEditModelRender::`vftable';
  if ( v3 )
    sub_10038340(v3);
  this[4] = 0;
  *((_BYTE *)this + 20) = 0;
  this[70] = 0;
  sub_100D3350(this + 1);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
