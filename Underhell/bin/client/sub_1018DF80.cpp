_DWORD *sub_1018DF80()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(12);
  if ( !result )
    return 0;
  *result = &CHeliBladeMaterialProxy::`vftable';
  result[1] = 0;
  return result;
}
