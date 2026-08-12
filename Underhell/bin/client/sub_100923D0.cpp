int sub_100923D0()
{
  int result; // eax

  if ( (dword_1042CAD0 & 1) != 0 )
    return dword_1042CACC;
  dword_1042CAD0 |= 1u;
  result = sub_10242540("CCommentaryModelViewer");
  dword_1042CACC = result;
  return result;
}
