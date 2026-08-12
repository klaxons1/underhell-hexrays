int sub_100334F0()
{
  if ( (dword_10404918 & 1) == 0 )
  {
    dword_10404918 |= 1u;
    sub_1009AED0(&unk_104048A0, "should_never_see_this", 0, 4, 0, 0);
    sub_101160A0(&unk_104048DC, "m_flNextAttack", 3016, 4);
  }
  sub_1009AC10(&unk_104048DC, 1, "DT_BCCLocalPlayerExclusive");
  return 1;
}
