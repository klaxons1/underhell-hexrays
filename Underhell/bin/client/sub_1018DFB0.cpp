int sub_1018DFB0()
{
  if ( (dword_104461F0 & 1) == 0 )
  {
    dword_104461F0 |= 1u;
    sub_1009AED0((int)&unk_10446178, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104461B4, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_104462F4, (int)&unk_104461B4, 1, (int)"DT_HLMachineGun");
  return 1;
}
