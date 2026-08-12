float *__thiscall sub_102DC280(float *this, char a2)
{
  bool v3; // c0

  v3 = this[1343] > 0.0;
  *(_DWORD *)this = &CHL2_Player::`vftable';
  if ( v3 )
    sub_1042C7F0(this[1343]);
  sub_101F7EC0((int)this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
