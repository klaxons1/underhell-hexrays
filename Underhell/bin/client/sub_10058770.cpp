_DWORD *sub_10058770()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)sub_100DDA40(60);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1000A3C0(v0);
  *v1 = &CMaterialModifyProxy::`vftable';
  return v1;
}
