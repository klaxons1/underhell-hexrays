int sub_1010E960()
{
  if ( (dword_104371BC & 1) == 0 )
  {
    dword_104371BC |= 1u;
    sub_1009AED0((int)&unk_10436FA0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10436FDC, (int)"baseclass", 0, 0, (int)off_103D7B8C, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10437018, (int)"m_ragAngles[0]", 2248, 12, 0, (int)sub_1009ADD0);
    sub_1009AD80((int)&unk_10437054, 24, 12, (int)"m_ragAngles", 0);
    sub_1009AC90((int)&unk_10437090, (int)"m_ragPos[0]", 1960, 12, 0, (int)sub_1009ADD0);
    sub_1009AD80((int)&unk_104370CC, 24, 12, (int)"m_ragPos", 0);
    sub_10116040(&unk_10437108, "m_hUnragdoll", 2724, 4, sub_10116120);
    sub_1009AC40((int)&unk_10437144, (int)"m_flBlendWeight", 2728, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10437180, (int)"m_nOverlaySequence", 2736, 4, 0, 0);
  }
  sub_1009AC10(dword_10437354, (int)&unk_10436FDC, 8, (int)"DT_Ragdoll");
  return 1;
}
