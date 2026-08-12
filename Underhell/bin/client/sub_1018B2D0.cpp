int sub_1018B2D0()
{
  int result; // eax

  if ( (dword_10445884 & 1) != 0 )
    return dword_10445880;
  dword_10445884 |= 1u;
  result = sub_10242580("CTextWindow");
  dword_10445880 = result;
  return result;
}
