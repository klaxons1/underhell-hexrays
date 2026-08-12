_DWORD *__thiscall sub_1011ACF0(_DWORD *this, int a2)
{
  int *v3; // ecx
  int v4; // eax

  v3 = this + 1;
  *this = &CRestore::`vftable';
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  this[6] = a2;
  if ( a2 )
    v4 = a2 + 24;
  else
    v4 = 0;
  this[7] = v4;
  this[8] = 0;
  *((_BYTE *)this + 36) = 1;
  sub_10096290(v3, 32);
  return this;
}
