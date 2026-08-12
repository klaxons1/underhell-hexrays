int sub_1018A330()
{
  int result; // eax

  if ( (dword_1044584C & 1) != 0 )
    return dword_10445848;
  dword_1044584C |= 1u;
  result = sub_10242540("CSpectatorMenu");
  dword_10445848 = result;
  return result;
}
