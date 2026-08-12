int sub_10035820()
{
  if ( (dword_10405138 & 1) == 0 )
  {
    dword_10405138 |= 1u;
    sub_1009AED0(&unk_104050C0, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_104050FC, "m_flAnimTime", 96, 4, 0, sub_10035660);
  }
  sub_1009AC10(&unk_104050FC, 1, "DT_AnimTimeMustBeFirst");
  return 1;
}
