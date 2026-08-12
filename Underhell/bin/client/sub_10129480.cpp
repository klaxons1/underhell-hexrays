int sub_10129480()
{
  if ( (dword_10438B68 & 1) == 0 )
  {
    dword_10438B68 |= 1u;
    sub_1009AED0((int)&unk_10438A78, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10438AB4, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_10116040((int)&unk_10438AF0, (int)"m_Handle", 1192, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_1009AED0((int)&unk_10438B2C, (int)"m_bSendHandle", 1196, 1, 0, 0);
  }
  sub_1009AC10(dword_10438B6C, (int)&unk_10438AB4, 3, (int)"DT_HandleTest");
  return 1;
}
