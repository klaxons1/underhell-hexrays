int sub_10150B80()
{
  if ( (dword_1043DD80 & 1) == 0 )
  {
    dword_1043DD80 |= 1u;
    sub_1009AED0((int)&unk_1043DC18, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043DC54, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_1043DC90, (int)"m_nDensity", 1192, 4, 0, 0);
    sub_1009AED0((int)&unk_1043DCCC, (int)"m_nLifetime", 1196, 4, 0, 0);
    sub_1009AED0((int)&unk_1043DD08, (int)"m_nSpeed", 1200, 4, 0, 0);
    sub_1009AED0((int)&unk_1043DD44, (int)"m_bEmit", 1204, 1, 0, 0);
  }
  sub_1009AC10(dword_1043D764, (int)&unk_1043DC54, 5, (int)"DT_Embers");
  return 1;
}
