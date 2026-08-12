int sub_10164ED0()
{
  if ( (dword_1044030C & 1) == 0 )
  {
    dword_1044030C |= 1u;
    sub_1009AED0((int)&unk_10440258, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC90((int)&unk_10440294, (int)"m_vecPos", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_104402D0, (int)"m_vecDir", 28, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_104403B8, (int)&unk_10440294, 2, (int)"DT_TEMetalSparks");
  return 1;
}
