int sub_10289AE0()
{
  if ( (dword_106D5678 & 1) == 0 )
  {
    dword_106D5678 |= 1u;
    sub_10122040((int)&unk_106D51B8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106D5204, (int)"m_nModelIndex", 12, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D5250, (int)"m_nHaloIndex", 16, 4, 11, 0, 0);
    sub_10122040((int)&unk_106D529C, (int)"m_nStartFrame", 20, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D52E8, (int)"m_nFrameRate", 24, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106D5334, (int)"m_fLife", 28, 4, 8, 0, 0.0, 25.6, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D5380, (int)"m_fWidth", 32, 4, 10, 0, 0.0, 128.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D53CC, (int)"m_fEndWidth", 36, 4, 10, 0, 0.0, 128.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106D5418, (int)"m_nFadeLength", 40, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106D5464, (int)"m_fAmplitude", 44, 4, 8, 0, 0.0, 64.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106D54B0, (int)"m_nSpeed", 64, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D54FC, (int)&unk_1053B95C, 48, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D5548, (int)&unk_1053B958, 52, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D5594, (int)&unk_1053B954, 56, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D55E0, (int)"a", 60, 4, 8, 1, 0);
    sub_10122040((int)&unk_106D562C, (int)"m_nFlags", 68, 4, 32, 1, 0);
    atexit(sub_10475900);
  }
  sub_10121D00(byte_106D5690, (int)&unk_106D5204, 15, (int)off_1065C6B4);
  return 1;
}
