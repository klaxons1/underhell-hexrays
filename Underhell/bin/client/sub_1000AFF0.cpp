int sub_1000AFF0()
{
  if ( (dword_104012EC & 1) == 0 )
  {
    dword_104012EC |= 1u;
    sub_1009AED0(&unk_104011C0, "should_never_see_this", 0, 4, 0, 0);
    sub_101160A0(&unk_104011FC, "m_flNextPrimaryAttack", 1972, 4);
    sub_101160A0(&unk_10401238, "m_flNextSecondaryAttack", 1976, 4);
    sub_1009AED0(&unk_10401274, "m_nNextThinkTick", 124, 4, 0, 0);
    sub_101160A0(&unk_104012B0, "m_flTimeWeaponIdle", 1980, 4);
  }
  sub_1009AC10(&unk_104011FC, 4, "DT_LocalActiveWeaponData");
  return 1;
}
