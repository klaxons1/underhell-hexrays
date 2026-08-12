void sub_100634C0()
{
  int v0; // eax

  v0 = CVProfile::BudgetGroupNameToBudgetGroupID(g_VProfCurrentProfile, "AINet");
  CVProfile::OutputReport(g_VProfCurrentProfile, -517, "AINet", v0);
}
