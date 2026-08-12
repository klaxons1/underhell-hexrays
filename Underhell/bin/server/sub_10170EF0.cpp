int sub_10170EF0()
{
  if ( (dword_106B5A9C & 1) == 0 )
  {
    dword_106B5A9C |= 1u;
    sub_10122040((int)&unk_106B59B8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106B5A04, (int)"m_iTextureFrameIndex", 604, 1, 8, 1, 0);
    sub_10122040((int)&unk_106B5A50, (int)"m_iOverlayID", 800, 4, 32, 1, 0);
    atexit(sub_10471DE0);
  }
  sub_10121D00(byte_106B5AD4, (int)&unk_106B5A04, 2, (int)off_10629950);
  return 1;
}
