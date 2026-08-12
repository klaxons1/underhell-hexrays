int __thiscall sub_10046E80(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // edi
  int v7; // eax

  *this = &C_BasePlayer::`vftable';
  this[1] = &C_BasePlayer::`vftable';
  this[2] = &C_BasePlayer::`vftable';
  this[3] = &C_BasePlayer::`vftable';
  v2 = this[1066];
  if ( v2 == -1 || (v3 = (int *)((char *)off_103DCD74 + 16 * (this[1066] & 0xFFF) + 4), v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  sub_10070850(v4);
  if ( this == (_DWORD *)dword_10407394 )
    dword_10407394 = 0;
  v5 = this[1067];
  if ( v5 )
  {
    sub_1009D410(this[1067]);
    sub_10034930(v5);
  }
  v6 = this[1068];
  if ( v6 )
  {
    sub_100E26B0(this[1068]);
    sub_10034930(v6);
  }
  if ( this[1147] )
    sub_100F2FF0();
  this[1121] = &CUserCmd::`vftable';
  sub_1011A810(this + 1137);
  sub_1011A810(this + 1070);
  this[1039] = &CInterpolatedVarArrayBase<Vector,0>::`vftable';
  *(_DWORD *)((char *)this + 4170) = 0;
  sub_10034930(this[1047]);
  sub_10034930(this[1044]);
  v7 = this[1041];
  if ( v7 )
    sub_10034930(v7 - 4);
  this[1041] = 0;
  this[1039] = &IInterpolatedVar::`vftable';
  this[990] = &CPlayerState::`vftable';
  sub_10046A90(this + 865);
  return sub_10033490(this);
}
