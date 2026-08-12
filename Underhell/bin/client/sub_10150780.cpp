int sub_10150780()
{
  if ( (dword_1043D84C & 1) == 0 )
  {
    dword_1043D84C |= 1u;
    sub_1009AED0((int)&unk_1043D798, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043D7D4, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_1043D810, (int)"m_nPrecipType", 1232, 4, 0, 0);
  }
  sub_1009AC10(dword_1043CF68, (int)&unk_1043D7D4, 2, (int)"DT_Precipitation");
  return 1;
}
