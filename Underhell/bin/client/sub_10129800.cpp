_DWORD *sub_10129800()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(44);
  if ( !result )
    return 0;
  *result = &CTextureScrollMaterialProxy::`vftable';
  result[1] = 0;
  return result;
}
