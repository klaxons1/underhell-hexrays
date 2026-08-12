int sub_10117790()
{
  if ( (dword_1069C3F8 & 1) == 0 )
  {
    dword_1069C3F8 |= 1u;
    sub_10122040(&unk_1069C100, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      &unk_1069C14C,
      "baseclass",
      0,
      off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700(&unk_1069C198, "m_bActive", 1268, 1);
    sub_102348B0(&unk_1069C1E4, "m_iszCommentaryFile", 1128);
    sub_102348B0(&unk_1069C230, "m_iszCommentaryFileNoHDR", 1132);
    sub_10234790(&unk_1069C27C, "m_flStartTime", 1272, 4);
    sub_102348B0(&unk_1069C2C8, "m_iszSpeakers", 1276);
    sub_10122040(&unk_1069C314, "m_iNodeNumber", 1280, 4, 8, 1, 0);
    sub_10122040(&unk_1069C360, "m_iNodeNumberMax", 1284, 4, 8, 1, 0);
    sub_10234730(&unk_1069C3AC, "m_hViewPosition", 1152, 4, -1, sub_10234830);
    atexit(sub_104706F0);
  }
  sub_10121D00(&unk_1069C14C, 9, off_10615970[0]);
  return 1;
}
