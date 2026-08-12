int sub_100BEBE0()
{
  int result; // eax

  if ( (dword_1043010C & 1) != 0 )
    return dword_10430108;
  dword_1043010C |= 1u;
  result = sub_10242540("CHudBleeding");
  dword_10430108 = result;
  return result;
}
