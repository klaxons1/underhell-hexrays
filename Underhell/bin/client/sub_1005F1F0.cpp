int sub_1005F1F0()
{
  int result; // eax

  if ( (dword_1040DBC4 & 1) != 0 )
    return dword_1040DBC0;
  dword_1040DBC4 |= 1u;
  result = sub_10242580("CHudCommentary");
  dword_1040DBC0 = result;
  return result;
}
