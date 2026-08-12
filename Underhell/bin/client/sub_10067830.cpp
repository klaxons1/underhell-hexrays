int sub_10067830()
{
  int v1[15]; // [esp-3Ch] [ebp-80h] BYREF
  _BYTE v2[60]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_10410C90 & 1) == 0 )
  {
    dword_10410C90 |= 1u;
    sub_1009AED0(&unk_10410AB0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10410AEC, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AED0(&unk_10410B28, "m_nSceneStringIndex", 1208, 4, 0, 0);
    sub_10116070(&unk_10410B64, "m_bIsPlayingBack", 1196, 1);
    sub_10116070(&unk_10410BA0, "m_bPaused", 1197, 1);
    sub_10116070(&unk_10410BDC, "m_bMultiplayer", 1198, 1);
    sub_1009AC40(&unk_10410C18, "m_flForceClientTime", 1204, 4, 0, sub_10065B50);
    qmemcpy(v1, (const void *)sub_10116040(v2, 0, 0, 0, sub_10116120), sizeof(v1));
    sub_1009B210(
      (int)&unk_10410C54,
      (char)"m_hActorList",
      1220,
      4,
      (int)sub_10067550,
      (int)sub_100665E0,
      16,
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
  sub_1009AC10(&unk_10410AEC, 7, "DT_SceneEntity");
  return 1;
}
