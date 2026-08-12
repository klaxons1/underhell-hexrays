int __thiscall sub_102094D0(_DWORD *this)
{
  int v2; // eax

  v2 = this[62] >> 22;
  *this = &CPhysicsProp::`vftable';
  this[280] = &CPhysicsProp::`vftable';
  this[281] = &CPhysicsProp::`vftable';
  if ( (v2 & 1) != 0 )
    --dword_106C1B68;
  sub_1010BB10(this + 409);
  sub_1010BB10(this + 403);
  sub_1010BB10(this + 397);
  sub_1010BB10(this + 391);
  sub_1010BB10(this + 385);
  sub_1010BB10(this + 379);
  sub_1010BB10(this + 373);
  sub_1010BB10(this + 367);
  sub_1010BB10(this + 361);
  return sub_10207300(this);
}
