_DWORD *sub_100DD2F0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)sub_100DDA40(28);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1009ECC0(v0);
  *v1 = &CLessOrEqualProxy::`vftable';
  return v1;
}
