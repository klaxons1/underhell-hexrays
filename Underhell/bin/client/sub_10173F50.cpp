int sub_10173F50()
{
  if ( (dword_10444A64 & 1) == 0 )
  {
    dword_10444A64 |= 1u;
    sub_1009AED0((int)&unk_10444938, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10444974, (int)"baseclass", 0, 0, (int)off_103E9F64, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_104449B0, (int)"m_nMagnitude", 28, 4, 0, 0);
    sub_1009AED0((int)&unk_104449EC, (int)"m_nTrailLength", 32, 4, 0, 0);
    sub_1009AC90((int)&unk_10444A28, (int)"m_vecDir", 36, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10444A98, (int)&unk_10444974, 4, (int)"DT_TESparks");
  return 1;
}
