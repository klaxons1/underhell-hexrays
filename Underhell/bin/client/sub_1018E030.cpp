int sub_1018E030()
{
  if ( (dword_10446270 & 1) == 0 )
  {
    dword_10446270 |= 1u;
    sub_1009AED0((int)&unk_104461F8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10446234, (int)"baseclass", 0, 0, (int)off_103EAA14, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044630C, (int)&unk_10446234, 1, (int)"DT_HLSelectFireMachineGun");
  return 1;
}
