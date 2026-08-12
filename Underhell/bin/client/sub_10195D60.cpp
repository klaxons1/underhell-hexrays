_DWORD *__thiscall sub_10195D60(_DWORD *this)
{
  int *v2; // eax
  int v3; // edi
  int v4; // ecx
  int v6; // [esp+8h] [ebp-4h] BYREF

  sub_1003D000((int)this);
  *this = &C_PlasmaBeamNode::`vftable';
  this[1] = &C_PlasmaBeamNode::`vftable';
  this[2] = &C_PlasmaBeamNode::`vftable';
  this[3] = &C_PlasmaBeamNode::`vftable';
  this[299] = 0;
  *((_BYTE *)this + 1192) = 0;
  v2 = sub_10195CF0(&v6, (int)"C_PlasmaBeamNode");
  v3 = *v2;
  if ( *v2 != this[299] )
  {
    if ( v3 )
      sub_100F2950((_DWORD *)*v2);
    v4 = this[299];
    if ( v4 )
      sub_100F2FF0(v4);
    this[299] = v3;
  }
  if ( v6 )
    sub_100F2FF0(v6);
  return this;
}
