int sub_1018C5D0()
{
  if ( (dword_10445E54 & 1) == 0 )
  {
    dword_10445E54 |= 1u;
    sub_1009AED0((int)&unk_10445DA0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10445DDC, (int)"baseclass", 0, 0, (int)off_103D7044, (int)sub_1009AE70);
    sub_1009ACE0((int)&unk_10445E18, (int)"m_szMaterialName", 1436, 255, 0, (int)sub_1009AE20);
  }
  sub_1009AC10(dword_10445E60, (int)&unk_10445DDC, 2, (int)"DT_AR2Explosion");
  return 1;
}
