int sub_10129E80()
{
  if ( (dword_1069E210 & 1) == 0 )
  {
    dword_1069E210 |= 1u;
    sub_10122040((int)&unk_1069DE80, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_1069DECC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234790(&unk_1069DF18, "m_flStartTime", 800, 4);
    sub_10121D30((int)&unk_1069DF64, (int)"m_flFadeInStart", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069DFB0, (int)"m_flFadeInLength", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069DFFC, (int)"m_flFadeOutModelStart", 812, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069E048, (int)"m_flFadeOutModelLength", 816, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069E094, (int)"m_flFadeOutStart", 820, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069E0E0, (int)"m_flFadeOutLength", 824, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_1069E12C, (int)"m_nDissolveType", 828, 4, 3, 1, 0);
    sub_10121E50((int)&unk_1069E178, (int)"m_vDissolverOrigin", 832, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_1069E1C4, (int)"m_nMagnitude", 844, 4, 8, 1, 0);
    atexit(sub_10470B10);
  }
  sub_10121D00(byte_1069E24C, (int)&unk_1069DECC, 11, (int)off_1061B8E4[0]);
  return 1;
}
