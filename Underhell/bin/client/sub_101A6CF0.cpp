int sub_101A6CF0()
{
  int result; // eax

  if ( (dword_1044C540 & 1) != 0 )
    return dword_1044C53C;
  dword_1044C540 |= 1u;
  result = sub_10242540("CHudDeathNotice");
  dword_1044C53C = result;
  return result;
}
