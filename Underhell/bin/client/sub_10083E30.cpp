_DWORD *sub_10083E30()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(32);
  if ( !result )
    return 0;
  *result = &CShadowModelProxy::`vftable';
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  return result;
}
