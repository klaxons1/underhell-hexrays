int sub_10057A90()
{
  if ( (dword_1040C2BC & 1) == 0 )
  {
    dword_1040C2BC |= 1u;
    sub_1009AED0(&unk_1040C208, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1040C244, "m_iTextureFrameIndex", 1112, 1, 0, 0);
    sub_1009AED0(&unk_1040C280, "m_iOverlayID", 1192, 4, 0, 0);
  }
  sub_1009AC10(&unk_1040C244, 2, "DT_InfoOverlayAccessor");
  return 1;
}
