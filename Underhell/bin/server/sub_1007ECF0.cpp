_DWORD *__thiscall sub_1007ECF0(_DWORD *this, char a2)
{
  int v3; // edi

  v3 = this[9];
  *this = &CAI_Navigator::`vftable';
  this[2] = &CAI_Navigator::`vftable';
  if ( v3 )
  {
    sub_100A61E0(v3);
    sub_10184660(v3);
  }
  sub_100B9C50(this[10]);
  sub_10184660(this[10]);
  *this = &CAI_Component::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660(this);
  return this;
}
