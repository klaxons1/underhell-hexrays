_DWORD *sub_100587A0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)sub_100DDA40(48);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1000A3C0(v0);
  *v1 = &CMaterialModifyAnimatedProxy::`vftable';
  return v1;
}
