int sub_1000B140()
{
  if ( (dword_10401640 & 1) == 0 )
  {
    dword_10401640 |= 1u;
    sub_1009AED0(&unk_104013E8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10401424, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
    sub_1009AD30(&unk_10401460, "LocalWeaponData", 0, 0, &unk_1040166C, sub_1009AE70);
    sub_1009AD30(&unk_1040149C, "LocalActiveWeaponData", 0, 0, &unk_10401654, sub_1009AE70);
    sub_1009AED0(&unk_104014D8, "m_iViewModelIndex", 1988, 4, 0, 0);
    sub_1009AED0(&unk_10401514, "m_iWorldModelIndex", 1992, 4, 0, 0);
    sub_1009AED0(&unk_10401550, "m_iState", 2024, 4, 0, 0);
    sub_10116040(&unk_1040158C, "m_hOwner", 1960, 4, sub_10116120);
    sub_10116040(&unk_104015C8, "m_iClip1", 2040, 4, sub_10116000);
    sub_10116040(&unk_10401604, "m_iClip2", 2044, 4, sub_10116000);
  }
  sub_1009AC10(&unk_10401424, 9, "DT_BaseCombatWeapon");
  return 1;
}
