_DWORD *sub_10007E30()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(8);
  if ( !result )
    return 0;
  *result = &CAlphaMaterialProxy::`vftable';
  result[1] = 0;
  return result;
}
