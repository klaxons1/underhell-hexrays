int sub_10143C40()
{
  if ( (dword_106B1258 & 1) == 0 )
  {
    dword_106B1258 |= 1u;
    sub_10122040((int)&unk_106B0D98, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106B0DE4, (int)"m_fog.enable", 864, 1, 1, 1, 0);
    sub_10122040((int)&unk_106B0E30, (int)"m_fog.blend", 865, 1, 1, 1, 0);
    sub_10121E50((int)&unk_106B0E7C, (int)"m_fog.dirPrimary", 804, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_106B0EC8, (int)"m_fog.colorPrimary", 816, 4, 32, 1, 0);
    sub_10122040((int)&unk_106B0F14, (int)"m_fog.colorSecondary", 820, 4, 32, 1, 0);
    sub_10121D30((int)&unk_106B0F60, (int)"m_fog.start", 832, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B0FAC, (int)"m_fog.end", 836, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B0FF8, (int)"m_fog.maxdensity", 844, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B1044, (int)"m_fog.farz", 840, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106B1090, (int)"m_fog.colorPrimaryLerpTo", 824, 4, 32, 1, 0);
    sub_10122040((int)&unk_106B10DC, (int)"m_fog.colorSecondaryLerpTo", 828, 4, 32, 1, 0);
    sub_10121D30((int)&unk_106B1128, (int)"m_fog.startLerpTo", 848, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B1174, (int)"m_fog.endLerpTo", 852, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B11C0, (int)"m_fog.lerptime", 856, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B120C, (int)"m_fog.duration", 860, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_10471220);
  }
  sub_10121D00(byte_106B12A4, (int)&unk_106B0DE4, 15, (int)off_10623F84[0]);
  return 1;
}
