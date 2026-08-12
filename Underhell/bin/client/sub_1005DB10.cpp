int sub_1005DB10()
{
  if ( (dword_1040DBA0 & 1) == 0 )
  {
    dword_1040DBA0 |= 1u;
    sub_1009AED0(&unk_1040D948, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040D984, "baseclass", 0, 0, off_103D7B8C, sub_1009AE70);
    sub_10116070(&unk_1040D9C0, "m_bActive", 1960, 1);
    sub_101160A0(&unk_1040D9FC, "m_flStartTime", 1964, 4);
    sub_1009ACE0(&unk_1040DA38, "m_iszCommentaryFile", 1968, 260, 0, sub_1009AE20);
    sub_1009ACE0(&unk_1040DA74, "m_iszCommentaryFileNoHDR", 2228, 260, 0, sub_1009AE20);
    sub_1009ACE0(&unk_1040DAB0, "m_iszSpeakers", 2488, 256, 0, sub_1009AE20);
    sub_1009AED0(&unk_1040DAEC, "m_iNodeNumber", 2744, 4, 0, 0);
    sub_1009AED0(&unk_1040DB28, "m_iNodeNumberMax", 2748, 4, 0, 0);
    sub_10116040(&unk_1040DB64, "m_hViewPosition", 2756, 4, sub_10116120);
  }
  sub_1009AC10(&unk_1040D984, 9, "DT_PointCommentaryNode");
  return 1;
}
