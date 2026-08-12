int sub_10174DA0()
{
  if ( (dword_1044516C & 1) == 0 )
  {
    dword_1044516C |= 1u;
    sub_1009AED0((int)&unk_10444FC8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0((int)&unk_10445004, (int)"m_clrRender", 88, 4, 0, 0);
    sub_1009AC90((int)&unk_10445040, (int)"m_vecOrigin", 708, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_1044507C, (int)"m_angRotation[0]", 720, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104450B8, (int)"m_angRotation[1]", 724, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_104450F4, (int)"m_angRotation[2]", 728, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10445130, (int)"moveparent", 340, 4, 0, (int (__cdecl *)(int, int, int))sub_10116120);
  }
  sub_1009AC10(dword_10445170, (int)&unk_10445004, 6, (int)"DT_TestTraceline");
  return 1;
}
