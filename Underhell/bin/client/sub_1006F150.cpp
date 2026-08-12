int sub_1006F150()
{
  if ( (dword_104122A8 & 1) == 0 )
  {
    dword_104122A8 |= 1u;
    sub_1009AED0(&unk_10412230, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1041226C, "m_WithProxy", 1192, 4, 0, 0);
  }
  sub_1009AC10(&unk_1041226C, 1, "DT_ProxyToggle_ProxiedData");
  return 1;
}
