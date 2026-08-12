int sub_102717E0()
{
  if ( (dword_106CF82C & 1) == 0 )
  {
    dword_106CF82C |= 1u;
    sub_10122040((int)&unk_106CF580, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106CF5CC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106CF618, (int)"m_flWidth", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106CF664, (int)"m_flHeight", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106CF6B0, (int)"m_nAttachmentIndex", 816, 4, 5, 1, 0);
    sub_10122040((int)&unk_106CF6FC, (int)"m_nPanelName", 812, 4, 8, 1, 0);
    sub_10122040((int)&unk_106CF748, (int)"m_fScreenFlags", 824, 4, 5, 1, 0);
    sub_10122040((int)&unk_106CF794, (int)"m_nOverlayMaterial", 820, 4, 10, 1, 0);
    sub_10234730((int)&unk_106CF7E0, (int)"m_hPlayerOwner", 828, 4, -1, sub_10234830);
    atexit(sub_10474B70);
  }
  sub_10121D00(byte_106CF864, (int)&unk_106CF5CC, 8, (int)off_10655ECC[0]);
  return 1;
}
