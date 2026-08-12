int sub_1018A370()
{
  int result; // eax

  if ( (dword_10445854 & 1) != 0 )
    return dword_10445850;
  dword_10445854 |= 1u;
  result = sub_10242580("CSpectatorMenu");
  dword_10445850 = result;
  return result;
}
