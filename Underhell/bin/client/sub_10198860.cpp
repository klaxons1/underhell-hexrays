int sub_10198860()
{
  if ( (dword_1044895C & 1) == 0 )
  {
    dword_1044895C |= 1u;
    sub_1009AED0((int)&unk_10448740, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044877C, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104487B8, (int)"m_vecHitPos", 3468, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_104487F4, (int)"m_vecIKTarget[0]", 3480, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10448830, (int)"m_vecIKTarget[1]", 3492, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1044886C, (int)"m_vecIKTarget[2]", 3504, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_104488A8, (int)"m_vecIKTarget[3]", 3516, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_104488E4, (int)"m_vecIKTarget[4]", 3528, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_10448920, (int)"m_vecIKTarget[5]", 3540, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10448960, (int)&unk_1044877C, 8, (int)"DT_NPC_Strider");
  return 1;
}
