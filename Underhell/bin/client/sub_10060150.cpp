int sub_10060150()
{
  if ( (dword_1040E4F4 & 1) == 0 )
  {
    dword_1040E4F4 |= 1u;
    sub_1009AED0(&unk_1040E080, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1040E0BC, "m_iRopeMaterialModelIndex", 1252, 4, 0, 0);
    sub_10116040(&unk_1040E0F8, "m_hStartPoint", 1908, 4, sub_10116120);
    sub_10116040(&unk_1040E134, "m_hEndPoint", 1912, 4, sub_10116120);
    sub_1009AED0(&unk_1040E170, "m_iStartAttachment", 1916, 2, 0, 0);
    sub_1009AED0(&unk_1040E1AC, "m_iEndAttachment", 1918, 2, 0, 0);
    sub_1009AED0(&unk_1040E1E8, "m_fLockedPoints", 1936, 4, 0, 0);
    sub_1009AED0(&unk_1040E224, "m_Slack", 1928, 4, 0, sub_10060100);
    sub_1009AED0(&unk_1040E260, "m_RopeLength", 1924, 4, 0, sub_10060100);
    sub_1009AED0(&unk_1040E29C, "m_RopeFlags", 1248, 4, 0, 0);
    sub_1009AC40(&unk_1040E2D8, "m_TextureScale", 1932, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040E314, "m_nSegments", 1904, 4, 0, 0);
    sub_10116070(&unk_1040E350, "m_bConstrainBetweenEndpoints", 2072, 1);
    sub_1009AED0(&unk_1040E38C, "m_Subdiv", 1920, 1, 0, 0);
    sub_1009AC40(&unk_1040E3C8, "m_Width", 1940, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040E404, "m_flScrollSpeed", 1244, 4, 0, sub_1009ADC0);
    sub_1009AC90(&unk_1040E440, "m_vecOrigin", 708, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_1040E47C, "moveparent", 340, 4, 0, sub_10116120);
    sub_1009AED0(&unk_1040E4B8, "m_iParentAttachment", 318, 1, 0, 0);
  }
  sub_1009AC10(&unk_1040E0BC, 18, "DT_RopeKeyframe");
  return 1;
}
