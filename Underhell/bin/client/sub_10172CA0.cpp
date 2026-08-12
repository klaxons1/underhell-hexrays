int sub_10172CA0()
{
  if ( (dword_104442BC & 1) == 0 )
  {
    dword_104442BC |= 1u;
    sub_1009AED0((int)&unk_10444028, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10444064, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104440A0, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC40((int)&unk_104440DC, (int)"m_angRotation[0]", 28, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10444118, (int)"m_angRotation[1]", 32, 4, 0, (int)sub_1009ADC0);
    sub_1009AC40((int)&unk_10444154, (int)"m_angRotation[2]", 36, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_10444190, (int)"m_vecVelocity", 40, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_104441CC, (int)"m_nModelIndex", 52, 4, 0, 0);
    sub_1009AED0((int)&unk_10444208, (int)"m_nFlags", 60, 4, 0, 0);
    sub_1009AED0((int)&unk_10444244, (int)"m_nSkin", 56, 4, 0, 0);
    sub_1009AED0((int)&unk_10444280, (int)"m_nEffects", 64, 4, 0, 0);
  }
  sub_1009AC10(dword_10444304, (int)&unk_10444064, 10, (int)"DT_TEPhysicsProp");
  return 1;
}
