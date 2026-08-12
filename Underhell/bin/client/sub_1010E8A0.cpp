_DWORD *sub_1010E8A0()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(40);
  if ( !result )
    return 0;
  *result = &CPupilProxy::`vftable';
  return result;
}
