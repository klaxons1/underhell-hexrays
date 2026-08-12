_DWORD *__thiscall sub_100731A0(_DWORD *this, char a2)
{
  *this = &C_WaterBullet::`vftable';
  this[1] = &C_WaterBullet::`vftable';
  this[2] = &C_WaterBullet::`vftable';
  this[3] = &C_WaterBullet::`vftable';
  if ( this[490] )
    sub_100F2FF0();
  sub_10030270((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
