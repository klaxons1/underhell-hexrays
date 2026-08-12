_DWORD *sub_100DD1D0()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(4);
  if ( !result )
    return 0;
  *result = &CEmptyProxy::`vftable';
  return result;
}
