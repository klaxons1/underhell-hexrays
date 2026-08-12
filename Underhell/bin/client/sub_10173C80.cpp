int sub_10173C80()
{
  if ( (dword_104448F0 & 1) == 0 )
  {
    dword_104448F0 |= 1u;
    sub_1009AED0((int)&unk_10444788, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104447C4, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10444800, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_1044483C, (int)"m_nModelIndex", 28, 4, 0, 0);
    sub_1009AC40((int)&unk_10444878, (int)"m_fScale", 32, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_104448B4, (int)"m_nFrameRate", 36, 4, 0, 0);
  }
  sub_1009AC10(dword_1044491C, (int)&unk_104447C4, 5, (int)"DT_TESmoke");
  return 1;
}
