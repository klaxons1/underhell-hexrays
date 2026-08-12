int sub_101A8490()
{
  if ( (dword_1044CAA0 & 1) == 0 )
  {
    dword_1044CAA0 |= 1u;
    sub_1009AED0((int)&unk_1044C9B0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044C9EC, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_1009AC40((int)&unk_1044CA28, (int)"m_flRadius", 1192, 4, 0, (int)sub_101A8440);
    sub_1009AC40((int)&unk_1044CA64, (int)"m_flScaleTime", 1204, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1044CAA4, (int)&unk_1044C9EC, 3, (int)"DT_FleshEffectTarget");
  return 1;
}
