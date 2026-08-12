int sub_1019FDB0()
{
  if ( (dword_10449C54 & 1) == 0 )
  {
    dword_10449C54 |= 1u;
    sub_1009AED0((int)&unk_10449BA0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10449BDC, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_10116070((int)&unk_10449C18, (int)"m_bFadeOut", 1200, 1);
  }
  sub_1009AC10(dword_10449D28, (int)&unk_10449BDC, 2, (int)"DT_VortigauntChargeToken");
  return 1;
}
