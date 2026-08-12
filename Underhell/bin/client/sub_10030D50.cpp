int sub_10030D50()
{
  if ( (dword_104046E0 & 1) == 0 )
  {
    dword_104046E0 |= 1u;
    sub_1009AED0(&unk_10404578, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_104045B4, "m_nSequence", 0, 4, 0, 0);
    sub_1009AC40(&unk_104045F0, "m_flCycle", 20, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040462C, "m_flPrevCycle", 4, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10404668, "m_flWeight", 8, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_104046A4, "m_nOrder", 12, 4, 0, 0);
  }
  sub_1009AC10(&unk_104045B4, 5, "DT_Animationlayer");
  return 1;
}
