_DWORD *__thiscall sub_1011A960(_DWORD *this, int a2)
{
  int *v3; // ecx
  int v4; // edx

  v3 = this + 1;
  *this = &CSave::`vftable';
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
  *((_BYTE *)this + 36) = *(_BYTE *)(a2 + 1436);
  sub_10096290(v3, 32);
  this[8] = 0;
  return this;
}
