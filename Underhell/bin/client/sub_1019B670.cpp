int sub_1019B670()
{
  if ( (dword_10448E94 & 1) == 0 )
  {
    dword_10448E94 |= 1u;
    sub_1009AED0((int)&unk_10448C78, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10448CB4, (int)"baseclass", 0, 0, (int)off_103D8844, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_10448CF0, (int)"m_flTimeBurnOut", 3612, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10448D2C, (int)"m_flScale", 3616, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10448D68, (int)"m_bLight", 3620, 1, 0, 0);
    sub_1009AED0((int)&unk_10448DA4, (int)"m_bSmoke", 3621, 1, 0, 0);
    sub_1009AED0((int)&unk_10448DE0, (int)"m_bPropFlare", 3622, 1, 0, 0);
    sub_1009AED0((int)&unk_10448E1C, (int)"m_bGlowStick", 3623, 1, 0, 0);
    sub_1009AED0((int)&unk_10448E58, (int)"m_nSkinNumber", 3624, 4, 0, 0);
  }
  sub_1009AC10(dword_10448EE0, (int)&unk_10448CB4, 8, (int)"DT_Flare");
  return 1;
}
