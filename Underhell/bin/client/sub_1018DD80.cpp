int sub_1018DD80()
{
  if ( (dword_1044614C & 1) == 0 )
  {
    dword_1044614C |= 1u;
    sub_1009AED0((int)&unk_10446098, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104460D4, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
    sub_101160A0((int)&unk_10446110, (int)"m_flStartupTime", 3384, 4);
  }
  sub_1009AC10(dword_10446150, (int)&unk_104460D4, 2, (int)"DT_BaseHelicopter");
  return 1;
}
