int sub_10185530()
{
  int result; // eax

  if ( (dword_10445520 & 1) != 0 )
    return dword_1044551C;
  dword_10445520 |= 1u;
  result = sub_10242580("CIconPanel");
  dword_1044551C = result;
  return result;
}
