int sub_100333F0()
{
  int v1[15]; // [esp-3Ch] [ebp-80h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_10404850 & 1) == 0 )
  {
    dword_10404850 |= 1u;
    sub_1009AED0(&unk_104047D8, "should_never_see_this", 0, 4, 0, 0);
    qmemcpy(v1, (const void *)sub_1009AD30(v2, 0, 0, 0, &unk_10404854, sub_1009AE70), sizeof(v1));
    sub_1009B210(
      (int)&unk_10404814,
      (char)"m_AnimOverlay",
      1960,
      32,
      (int)sub_100332D0,
      (int)sub_100316D0,
      15,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9]);
  }
  sub_1009AC10(&unk_10404814, 1, "DT_OverlayVars");
  return 1;
}
