int sub_10092540()
{
  int result; // eax

  if ( (dword_1042CAE4 & 1) != 0 )
    return dword_1042CAE0;
  dword_1042CAE4 |= 1u;
  result = sub_10242540("CCommentaryModelPanel");
  dword_1042CAE0 = result;
  return result;
}
