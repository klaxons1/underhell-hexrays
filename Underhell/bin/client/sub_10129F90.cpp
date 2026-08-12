int sub_10129F90()
{
  int result; // eax

  if ( (dword_104390EC & 1) != 0 )
    return dword_104390E8;
  dword_104390EC |= 1u;
  result = sub_10242540("CHudTrain");
  dword_104390E8 = result;
  return result;
}
