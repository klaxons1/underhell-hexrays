int sub_10174060()
{
  if ( (dword_10444C18 & 1) == 0 )
  {
    dword_10444C18 |= 1u;
    sub_1009AED0((int)&unk_10444AB0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10444AEC, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10444B28, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10444B64, (int)"m_nModelIndex", 28, 4, 0, 0);
    sub_1009AC40((int)&unk_10444BA0, (int)"m_fScale", 32, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10444BDC, (int)"m_nBrightness", 36, 4, 0, 0);
  }
  sub_1009AC10(dword_10444C44, (int)&unk_10444AEC, 5, (int)"DT_TESprite");
  return 1;
}
