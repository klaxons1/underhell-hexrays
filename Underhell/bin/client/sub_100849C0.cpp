_DWORD *sub_100849C0()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(8);
  if ( !result )
    return 0;
  *result = &CShadowProxy::`vftable';
  result[1] = 0;
  return result;
}
