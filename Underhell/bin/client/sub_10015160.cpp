int sub_10015160()
{
  if ( (dword_10402AE4 & 1) == 0 )
  {
    dword_10402AE4 |= 1u;
    sub_1009AED0(&unk_104026E8, "should_never_see_this", 0, 4, 0, 0);
    sub_10116070(&unk_10402724, "m_bExpSighted", 1960, 1);
    sub_1009AED0(&unk_10402760, "m_nModelIndex", 132, 2, 0, 0);
    sub_1009AED0(&unk_1040279C, "m_nSkin", 1196, 4, 0, 0);
    sub_1009AED0(&unk_104027D8, "m_nBody", 1200, 4, 0, 0);
    sub_1009AED0(&unk_10402814, "m_nSequence", 1808, 4, 0, sub_10014BD0);
    sub_1009AED0(&unk_10402850, "m_nViewModelIndex", 1980, 4, 0, 0);
    sub_1009AC40(&unk_1040288C, "m_flPlaybackRate", 1236, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_104028C8, "m_fEffects", 112, 4, 0, sub_10034050);
    sub_1009AED0(&unk_10402904, "m_nAnimationParity", 1996, 4, 0, 0);
    sub_10116040(&unk_10402940, "m_hWeapon", 2012, 4, sub_100144F0);
    sub_10116040(&unk_1040297C, "m_hOwner", 1984, 4, sub_10116120);
    sub_1009AED0(&unk_104029B8, "m_nNewSequenceParity", 1764, 4, 0, 0);
    sub_1009AED0(&unk_104029F4, "m_nResetEventsParity", 1768, 4, 0, 0);
    sub_1009AED0(&unk_10402A30, "m_nMuzzleFlashParity", 1936, 1, 0, 0);
    sub_1009AC40(&unk_10402A6C, "m_flPoseParameter[0]", 1404, 4, 0, sub_1009ADC0);
    sub_1009AD80(&unk_10402AA8, 24, 4, "m_flPoseParameter", 0);
  }
  sub_1009AC10(&unk_10402724, 16, "DT_BaseViewModel");
  return 1;
}
