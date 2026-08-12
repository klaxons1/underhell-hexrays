_DWORD *sub_101505A0()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(12);
  if ( !result )
    return 0;
  *result = &CWorldDimsProxy::`vftable';
  result[2] = 0;
  result[1] = 0;
  return result;
}
