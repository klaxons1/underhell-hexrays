int sub_10193400()
{
  if ( (dword_104476AC & 1) == 0 )
  {
    dword_104476AC |= 1u;
    sub_1009AED0((int)&unk_104475F8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10447634, (int)"baseclass", 0, 0, (int)off_103EA9B0, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10447670, (int)"m_vecHitPos", 3464, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10447778, (int)&unk_10447634, 2, (int)"DT_CombineGunship");
  return 1;
}
