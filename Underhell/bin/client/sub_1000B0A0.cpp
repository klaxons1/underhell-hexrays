int sub_1000B0A0()
{
  if ( (dword_104013E0 & 1) == 0 )
  {
    dword_104013E0 |= 1u;
    sub_1009AED0(&unk_104012F0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1040132C, "m_iPrimaryAmmoType", 2032, 4, 0, 0);
    sub_1009AED0(&unk_10401368, "m_iSecondaryAmmoType", 2036, 4, 0, 0);
    sub_1009AED0(&unk_104013A4, "m_nViewModelIndex", 1968, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040132C, 3, "DT_LocalWeaponData");
  return 1;
}
