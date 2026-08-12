int sub_10073320()
{
  if ( (dword_10412D10 & 1) == 0 )
  {
    dword_10412D10 |= 1u;
    sub_1009AED0(&unk_10412C20, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10412C5C, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_10412C98, "m_flCheapWaterStartDistance", 1192, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10412CD4, "m_flCheapWaterEndDistance", 1196, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_10412C5C, 3, "DT_WaterLODControl");
  return 1;
}
