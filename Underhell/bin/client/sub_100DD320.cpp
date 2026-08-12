_DWORD *sub_100DD320()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)sub_100DDA40(44);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1009ECC0(v0);
  *v1 = &CWrapMinMaxProxy::`vftable';
  return v1;
}
