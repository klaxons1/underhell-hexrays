int sub_1005F1B0()
{
  int result; // eax

  if ( (dword_1040DBBC & 1) != 0 )
    return dword_1040DBB8;
  dword_1040DBBC |= 1u;
  result = sub_10242540("CHudCommentary");
  dword_1040DBB8 = result;
  return result;
}
