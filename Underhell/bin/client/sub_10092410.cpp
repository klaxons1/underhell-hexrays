int sub_10092410()
{
  int result; // eax

  if ( (dword_1042CADC & 1) != 0 )
    return dword_1042CAD8;
  dword_1042CADC |= 1u;
  result = sub_10242580("CCommentaryModelViewer");
  dword_1042CAD8 = result;
  return result;
}
