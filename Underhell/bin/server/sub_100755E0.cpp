_DWORD *__thiscall sub_100755E0(_DWORD *this, char a2)
{
  int v3; // edi

  v3 = this[51];
  *this = &CAI_LocalNavigator::`vftable';
  this[2] = &CAI_LocalNavigator::`vftable';
  if ( v3 )
  {
    sub_102375F0(v3 + 76);
    sub_102375F0(v3 + 56);
    sub_10184660(v3);
  }
  *this = &CAI_Component::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
