_DWORD *sub_1013EFE0()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(8);
  if ( !result )
    return 0;
  *result = &CMotionBlurMaterialProxy::`vftable';
  result[1] = 0;
  return result;
}
