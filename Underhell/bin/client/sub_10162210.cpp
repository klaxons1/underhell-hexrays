int sub_10162210()
{
  if ( (dword_1044022C & 1) == 0 )
  {
    dword_1044022C |= 1u;
    sub_1009AED0((int)&unk_1043FF20, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043FF5C, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_1043FF98, (int)"m_SpreadSpeed", 1428, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1043FFD4, (int)"m_Speed", 1432, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10440010, (int)"m_StartSize", 1436, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_1044004C, (int)"m_EndSize", 1440, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10440088, (int)"m_Rate", 1444, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104400C4, (int)"m_JetLength", 1448, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10440100, (int)"m_bEmit", 1452, 4, 0, 0);
    sub_1009AED0((int)&unk_1044013C, (int)"m_bFaceLeft", 1460, 1, 0, 0);
    sub_1009AED0((int)&unk_10440178, (int)"m_nType", 1456, 4, 0, 0);
    sub_1009AED0((int)&unk_104401B4, (int)"m_spawnflags", 1464, 4, 0, 0);
    sub_1009AC40((int)&unk_104401F0, (int)"m_flRollSpeed", 1468, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10440230, (int)&unk_1043FF5C, 12, (int)"DT_SteamJet");
  return 1;
}
