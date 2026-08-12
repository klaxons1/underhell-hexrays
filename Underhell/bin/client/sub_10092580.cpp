int sub_10092580()
{
  int result; // eax

  if ( (dword_1042CAEC & 1) != 0 )
    return dword_1042CAE8;
  dword_1042CAEC |= 1u;
  result = sub_10242580("CCommentaryModelPanel");
  dword_1042CAE8 = result;
  return result;
}
