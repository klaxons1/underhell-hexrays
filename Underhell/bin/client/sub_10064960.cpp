_DWORD *__thiscall sub_10064960(_DWORD *this, char a2)
{
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &C_RopeKeyframe::`vftable';
  this[1] = &C_RopeKeyframe::`vftable';
  this[2] = &C_RopeKeyframe::`vftable';
  this[3] = &C_RopeKeyframe::`vftable';
  sub_10062D00((char *)&dword_1040EE00, (int)this);
  v4 = this;
  sub_10063D90(&dword_103DBBD8, &v4);
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
