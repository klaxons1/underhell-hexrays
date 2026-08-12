int sub_1019FEC0()
{
  if ( (dword_10449D0C & 1) == 0 )
  {
    dword_10449D0C |= 1u;
    sub_1009AED0((int)&unk_10449C58, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10449C94, (int)"baseclass", 0, 0, off_103D89D4, (int)sub_1009AE70);
    sub_10116070((int)&unk_10449CD0, (int)"m_bFadeOut", 1204, 1);
  }
  sub_1009AC10(dword_10449D40, (int)&unk_10449C94, 2, (int)"DT_VortigauntEffectDispel");
  return 1;
}
