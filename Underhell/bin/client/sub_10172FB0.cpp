int sub_10172FB0()
{
  if ( (dword_1044444C & 1) == 0 )
  {
    dword_1044444C |= 1u;
    sub_1009AED0((int)&unk_10444320, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044435C, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10444398, (int)"m_vecOrigin", 20, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_104443D4, (int)"m_nEntity", 32, 4, 0, 0);
    sub_1009AED0((int)&unk_10444410, (int)"m_nPlayer", 16, 4, 0, 0);
  }
  sub_1009AC10(dword_104444BC, (int)&unk_1044435C, 4, (int)"DT_TEPlayerDecal");
  return 1;
}
