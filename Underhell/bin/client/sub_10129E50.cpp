_DWORD *sub_10129E50()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(16);
  if ( !result )
    return 0;
  *result = &CBaseToggleTextureProxy::`vftable';
  result[1] = 0;
  result[2] = 0;
  return result;
}
