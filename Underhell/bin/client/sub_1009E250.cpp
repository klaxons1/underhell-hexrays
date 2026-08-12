int sub_1009E250()
{
  if ( (dword_1042DFB8 & 1) == 0 )
  {
    dword_1042DFB8 |= 1u;
    sub_1009AED0((int)&unk_1042DF40, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1042DF7C, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1042E010, (int)&unk_1042DF7C, 1, (int)"DT_InfoLadderDismount");
  return 1;
}
