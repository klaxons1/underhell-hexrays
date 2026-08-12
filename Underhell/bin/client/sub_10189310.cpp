int sub_10189310()
{
  int result; // eax

  if ( (dword_10445840 & 1) != 0 )
    return dword_1044583C;
  dword_10445840 |= 1u;
  result = sub_10242580("CSpectatorGUI");
  dword_1044583C = result;
  return result;
}
