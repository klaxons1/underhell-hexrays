int sub_101A6AC0()
{
  int result; // eax

  if ( (dword_1044C320 & 1) != 0 )
    return dword_1044C31C;
  dword_1044C320 |= 1u;
  result = sub_10242580("CHudViewport");
  dword_1044C31C = result;
  return result;
}
