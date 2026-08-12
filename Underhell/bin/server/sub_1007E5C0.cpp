int __thiscall sub_1007E5C0(_DWORD *this)
{
  int v2; // edi
  int result; // eax

  v2 = this[9];
  *this = &CAI_Navigator::`vftable';
  this[2] = &CAI_Navigator::`vftable';
  if ( v2 )
  {
    sub_100A61E0(v2);
    sub_10184660(v2);
  }
  sub_100B9C50(this[10]);
  result = sub_10184660(this[10]);
  *this = &CAI_Component::`vftable';
  return result;
}
