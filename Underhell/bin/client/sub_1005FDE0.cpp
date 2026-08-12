int sub_1005FDE0()
{
  if ( (dword_1040E060 & 1) == 0 )
  {
    dword_1040E060 |= 1u;
    sub_1009AED0(&unk_1040DFE8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1040E024, "m_iCurrentMaxRagdollCount", 1192, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040E024, 1, "DT_RagdollManager");
  return 1;
}
