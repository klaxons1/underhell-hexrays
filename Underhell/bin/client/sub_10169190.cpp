int sub_10169190()
{
  if ( (dword_10442B80 & 1) == 0 )
  {
    dword_10442B80 |= 1u;
    sub_1009AED0((int)&unk_10442A90, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC90((int)&unk_10442ACC, (int)"m_vecPos", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10442B08, (int)"m_vecDir", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10442B44, (int)"m_bExplosive", 40, 1, 0, 0);
  }
  sub_1009AC10(dword_10442BB4, (int)&unk_10442ACC, 3, (int)"DT_TEEnergySplash");
  return 1;
}
