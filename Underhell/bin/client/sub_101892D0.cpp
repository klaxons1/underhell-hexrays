int sub_101892D0()
{
  int result; // eax

  if ( (dword_10445834 & 1) != 0 )
    return dword_10445830;
  dword_10445834 |= 1u;
  result = sub_10242540("CSpectatorGUI");
  dword_10445830 = result;
  return result;
}
