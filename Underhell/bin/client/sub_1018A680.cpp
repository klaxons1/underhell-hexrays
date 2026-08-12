int sub_1018A680()
{
  int result; // eax

  if ( (dword_10445860 & 1) != 0 )
    return dword_1044585C;
  dword_10445860 |= 1u;
  result = sub_10242540("CTeamMenu");
  dword_1044585C = result;
  return result;
}
