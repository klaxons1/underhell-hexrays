int sub_1018DC60()
{
  if ( (dword_10446078 & 1) == 0 )
  {
    dword_10446078 |= 1u;
    sub_1009AED0((int)&unk_10446000, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044603C, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044607C, (int)&unk_1044603C, 1, (int)"DT_NPC_Barney");
  return 1;
}
