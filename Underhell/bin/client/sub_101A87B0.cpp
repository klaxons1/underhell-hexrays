_DWORD *sub_101A87B0()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(28);
  if ( !result )
    return 0;
  *result = &CFleshInteriorMaterialProxy::`vftable';
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  return result;
}
