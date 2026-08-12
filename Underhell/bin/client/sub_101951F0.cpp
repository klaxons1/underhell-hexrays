int sub_101951F0()
{
  if ( (dword_10447BF8 & 1) == 0 )
  {
    dword_10447BF8 |= 1u;
    sub_1009AED0((int)&unk_10447A90, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10447ACC, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_10447B08, (int)"m_bIsOpen", 3384, 1, 0, 0);
    sub_1009AC40((int)&unk_10447B44, (int)"m_flActiveTime", 3388, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10447B80, (int)"m_bHackedByAlyx", 3392, 1, 0, 0);
    sub_1009AED0((int)&unk_10447BBC, (int)"m_bPowerDown", 3393, 1, 0, 0);
  }
  sub_1009AC10(dword_10447BFC, (int)&unk_10447ACC, 5, (int)"DT_RollerMine");
  return 1;
}
