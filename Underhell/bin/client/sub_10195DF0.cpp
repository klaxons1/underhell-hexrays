_DWORD *__thiscall sub_10195DF0(_DWORD *this, char a2)
{
  int v3; // ecx

  *this = &C_PlasmaBeamNode::`vftable';
  this[1] = &C_PlasmaBeamNode::`vftable';
  this[2] = &C_PlasmaBeamNode::`vftable';
  this[3] = &C_PlasmaBeamNode::`vftable';
  v3 = this[299];
  if ( v3 )
    sub_100F2FF0(v3);
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
