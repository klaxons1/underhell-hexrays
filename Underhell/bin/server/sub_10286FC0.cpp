int sub_10286FC0()
{
  if ( (dword_106D4B08 & 1) == 0 )
  {
    dword_106D4B08 |= 1u;
    sub_10122040((int)&unk_106D4810, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D485C,
      (int)"baseclass",
      0,
      (int)off_1064DB3C,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D48A8, (int)"m_flLifeTime", 880, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D48F4, (int)"m_flStartWidth", 884, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4940, (int)"m_flEndWidth", 888, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D498C, (int)"m_flStartWidthVariance", 892, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D49D8, (int)"m_flTextureRes", 896, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4A24, (int)"m_flMinFadeLength", 900, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106D4A70, (int)"m_vecSkyboxOrigin", 904, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D4ABC, (int)"m_flSkyboxScale", 916, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104757D0);
  }
  sub_10121D00(byte_106D4B44, (int)&unk_106D485C, 9, (int)off_1065C04C);
  return 1;
}
