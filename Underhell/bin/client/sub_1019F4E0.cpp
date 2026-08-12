int sub_1019F4E0()
{
  if ( (dword_104498C4 & 1) == 0 )
  {
    dword_104498C4 |= 1u;
    sub_1009AED0((int)&unk_10449720, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044975C, (int)"baseclass", 0, 0, (int)off_103DC440, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10449798, (int)"m_iNumRadarContacts", 2296, 4, 0, 0);
    sub_1009AC90((int)&unk_104497D4, (int)"m_vecRadarContactPos[0]", 2300, 12, 0, (int)sub_1009ADD0);
    sub_1009AD80((int)&unk_10449810, 24, 12, (int)"m_vecRadarContactPos", 0);
    sub_1009AED0((int)&unk_1044984C, (int)"m_iRadarContactType[0]", 2588, 4, 0, 0);
    sub_1009AD80((int)&unk_10449888, 24, 4, (int)"m_iRadarContactType", 0);
  }
  sub_1009AC10(dword_10449708, (int)&unk_1044975C, 6, (int)"DT_CPropJeepEpisodic");
  return 1;
}
