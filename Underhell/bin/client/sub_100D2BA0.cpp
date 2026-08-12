int sub_100D2BA0()
{
  int result; // eax

  if ( (dword_104310F8 & 1) != 0 )
    return dword_104310F4;
  dword_104310F8 |= 1u;
  result = sub_10242540("CHudVehicle");
  dword_104310F4 = result;
  return result;
}
