int sub_101A0FA0()
{
  if ( (dword_1044A030 & 1) == 0 )
  {
    dword_1044A030 |= 1u;
    sub_1009AED0((int)&unk_10449FB8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10449FF4, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BB50, (int)&unk_10449FF4, 1, (int)"DT_Flaregun");
  return 1;
}
