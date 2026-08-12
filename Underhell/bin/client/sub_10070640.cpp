int sub_10070640()
{
  if ( (dword_10412B44 & 1) == 0 )
  {
    dword_10412B44 |= 1u;
    sub_1009AED0(&unk_10412928, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10412964, "baseclass", 0, 0, off_103D89D4, sub_1009AE70);
    sub_1009AC40(&unk_104129A0, "m_flWidth", 1200, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104129DC, "m_flHeight", 1204, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_10412A18, "m_fScreenFlags", 1244, 4, 0, 0);
    sub_1009AED0(&unk_10412A54, "m_nPanelName", 1208, 4, 0, 0);
    sub_1009AED0(&unk_10412A90, "m_nAttachmentIndex", 1236, 4, 0, 0);
    sub_1009AED0(&unk_10412ACC, "m_nOverlayMaterial", 1240, 4, 0, 0);
    sub_10116040(&unk_10412B08, "m_hPlayerOwner", 1336, 4, sub_10116120);
  }
  sub_1009AC10(&unk_10412964, 8, "DT_VGuiScreen");
  return 1;
}
