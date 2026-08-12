int sub_10150AB0()
{
  if ( (dword_1043DC14 & 1) == 0 )
  {
    dword_1043DC14 |= 1u;
    sub_1009AED0((int)&unk_1043DB60, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043DB9C, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AD30((int)&unk_1043DBD8, (int)"m_EnvWindShared", 1192, 0, (int)dword_1043D734, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1043D74C, (int)&unk_1043DB9C, 2, (int)"DT_EnvWind");
  return 1;
}
