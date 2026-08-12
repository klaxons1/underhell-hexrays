int sub_1004E3C0()
{
  if ( (dword_1040AE4C & 1) == 0 )
  {
    dword_1040AE4C |= 1u;
    sub_1009AED0(&unk_1040AC30, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AC90(&unk_1040AC6C, "m_poolOrigin", 2052, 12, 0, sub_1009ADD0);
    sub_1009AC40(&unk_1040ACA8, "m_x", 2028, 4, 0, sub_1004E370);
    sub_1009AC40(&unk_1040ACE4, "m_y", 2032, 4, 0, sub_1004E390);
    sub_1009AC40(&unk_1040AD20, "m_z", 2036, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040AD5C, "m_angle", 2044, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040AD98, "m_nModelIndex", 132, 2, 0, 0);
    sub_1009AED0(&unk_1040ADD4, "m_lifeState", 135, 1, 0, 0);
    sub_1009AC40(&unk_1040AE10, "m_waterLevel", 2064, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_1040AC6C, 8, "DT_CFish");
  return 1;
}
