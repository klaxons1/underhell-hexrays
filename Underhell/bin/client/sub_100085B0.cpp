_DWORD *sub_100085B0()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  v0 = (_DWORD *)sub_100DDA40(36);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_1000A3C0(v0);
  *v1 = &CAnimateSpecificTexture::`vftable';
  sub_1022D3E0(v1 + 5);
  return v1;
}
