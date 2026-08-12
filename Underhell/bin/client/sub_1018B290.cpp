int sub_1018B290()
{
  int result; // eax

  if ( (dword_10445878 & 1) != 0 )
    return dword_10445874;
  dword_10445878 |= 1u;
  result = sub_10242540("CTextWindow");
  dword_10445874 = result;
  return result;
}
