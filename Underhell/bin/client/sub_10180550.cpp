int sub_10180550()
{
  int result; // eax

  if ( (dword_1044539C & 1) != 0 )
    return dword_10445398;
  dword_1044539C |= 1u;
  result = sub_10242540("CModelPanel");
  dword_10445398 = result;
  return result;
}
