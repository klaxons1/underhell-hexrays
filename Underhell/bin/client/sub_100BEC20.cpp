int sub_100BEC20()
{
  int result; // eax

  if ( (dword_10430114 & 1) != 0 )
    return dword_10430110;
  dword_10430114 |= 1u;
  result = sub_10242580("CHudBleeding");
  dword_10430110 = result;
  return result;
}
