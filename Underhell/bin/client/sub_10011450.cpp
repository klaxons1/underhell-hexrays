int sub_10011450()
{
  if ( (dword_104021EC & 1) == 0 )
  {
    dword_104021EC |= 1u;
    sub_1009AED0(&unk_10401FD0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040200C, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
    sub_1009AC40(&unk_10402048, "m_flDamage", 3372, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10402084, "m_DmgRadius", 3356, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_104020C0, "m_bIsLive", 3353, 1, 0, 0);
    sub_10116040(&unk_104020FC, "m_hThrower", 3380, 4, sub_10116120);
    sub_1009AC90(&unk_10402138, "m_vecVelocity", 232, 12, 0, sub_100357C0);
    sub_1009AED0(&unk_10402174, "m_fFlags", 732, 4, 0, 0);
    sub_101160A0(&unk_104021B0, "m_flNextAttack", 3360, 4);
  }
  sub_1009AC10(&unk_1040200C, 8, "DT_BaseGrenade");
  return 1;
}
