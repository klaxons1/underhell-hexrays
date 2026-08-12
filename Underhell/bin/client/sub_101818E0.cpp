int sub_101818E0()
{
  int result; // eax

  if ( (dword_10445490 & 1) != 0 )
    return dword_1044548C;
  dword_10445490 |= 1u;
  result = sub_10242540("Frame");
  dword_1044548C = result;
  return result;
}
