int sub_100D2BE0()
{
  int result; // eax

  if ( (dword_10431100 & 1) != 0 )
    return dword_104310FC;
  dword_10431100 |= 1u;
  result = sub_10242580("CHudVehicle");
  dword_104310FC = result;
  return result;
}
