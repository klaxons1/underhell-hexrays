int sub_1017E140()
{
  int result; // eax

  if ( (dword_1044532C & 1) != 0 )
    return dword_10445328;
  dword_1044532C |= 1u;
  result = sub_10242580("CBaseModelPanel");
  dword_10445328 = result;
  return result;
}
