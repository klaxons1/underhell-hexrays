int sub_10168C80()
{
  if ( (dword_10442A8C & 1) == 0 )
  {
    dword_10442A8C |= 1u;
    sub_1009AED0((int)&unk_104429D8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10442A14, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AD30((int)&unk_10442A50, (int)"m_EffectData", 16, 0, (int)dword_1042CE80, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044294C, (int)&unk_10442A14, 2, (int)"DT_TEEffectDispatch");
  return 1;
}
