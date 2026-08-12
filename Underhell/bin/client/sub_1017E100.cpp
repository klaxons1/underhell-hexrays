int sub_1017E100()
{
  int result; // eax

  if ( (dword_10445324 & 1) != 0 )
    return dword_10445320;
  dword_10445324 |= 1u;
  result = sub_10242540("CBaseModelPanel");
  dword_10445320 = result;
  return result;
}
