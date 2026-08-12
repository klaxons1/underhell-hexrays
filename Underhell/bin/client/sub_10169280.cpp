int sub_10169280()
{
  if ( (dword_10442E28 & 1) == 0 )
  {
    dword_10442E28 |= 1u;
    sub_1009AED0((int)&unk_10442BD0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10442C0C, (int)"baseclass", 0, 0, (int)off_103E9F64, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10442C48, (int)"m_nModelIndex", 28, 4, 0, 0);
    sub_1009AC40((int)&unk_10442C84, (int)"m_fScale", 32, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10442CC0, (int)"m_nFrameRate", 36, 4, 0, 0);
    sub_1009AED0((int)&unk_10442CFC, (int)"m_nFlags", 40, 4, 0, 0);
    sub_1009AC90((int)&unk_10442D38, (int)"m_vecNormal", 44, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10442D74, (int)"m_chMaterialType", 56, 1, 0, 0);
    sub_1009AED0((int)&unk_10442DB0, (int)"m_nRadius", 60, 4, 0, 0);
    sub_1009AED0((int)&unk_10442DEC, (int)"m_nMagnitude", 64, 4, 0, 0);
  }
  sub_1009AC10(dword_10442E80, (int)&unk_10442C0C, 9, (int)"DT_TEExplosion");
  return 1;
}
