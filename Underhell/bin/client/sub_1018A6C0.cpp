int sub_1018A6C0()
{
  int result; // eax

  if ( (dword_1044586C & 1) != 0 )
    return dword_10445868;
  dword_1044586C |= 1u;
  result = sub_10242580("CTeamMenu");
  dword_10445868 = result;
  return result;
}
