int sub_101A6D30()
{
  int result; // eax

  if ( (dword_1044C548 & 1) != 0 )
    return dword_1044C544;
  dword_1044C548 |= 1u;
  result = sub_10242580("CHudDeathNotice");
  dword_1044C544 = result;
  return result;
}
