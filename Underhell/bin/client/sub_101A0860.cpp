_DWORD *sub_101A0860()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(12);
  if ( !result )
    return 0;
  *result = &CVortEmissiveProxy::`vftable';
  result[1] = 0;
  result[2] = 0;
  return result;
}
