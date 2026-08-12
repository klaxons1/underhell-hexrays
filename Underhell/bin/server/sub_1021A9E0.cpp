int sub_1021A9E0()
{
  if ( (dword_106C3404 & 1) == 0 )
  {
    dword_106C3404 |= 1u;
    sub_10122040((int)&unk_106C2E60, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10234730(&unk_106C2EAC, "m_hStartPoint", 864, 4, -1, sub_10234830);
    sub_10234730(&unk_106C2EF8, "m_hEndPoint", 868, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106C2F44, (int)"m_iStartAttachment", 872, 2, 5, 0, 0);
    sub_10122040((int)&unk_106C2F90, (int)"m_iEndAttachment", 874, 2, 5, 0, 0);
    sub_10122040((int)&unk_106C2FDC, (int)"m_Slack", 812, 4, 12, 0, 0);
    sub_10122040((int)&unk_106C3028, (int)"m_RopeLength", 844, 4, 15, 0, 0);
    sub_10122040((int)&unk_106C3074, (int)"m_fLockedPoints", 848, 4, 4, 1, 0);
    sub_10122040((int)&unk_106C30C0, (int)"m_RopeFlags", 804, 4, 9, 1, 0);
    sub_10122040((int)&unk_106C310C, (int)"m_nSegments", 824, 4, 4, 1, 0);
    sub_10234700(&unk_106C3158, "m_bConstrainBetweenEndpoints", 828, 1);
    sub_10122040((int)&unk_106C31A4, (int)"m_iRopeMaterialModelIndex", 836, 4, 16, 1, 0);
    sub_10122040((int)&unk_106C31F0, (int)"m_Subdiv", 840, 4, 4, 1, 0);
    sub_10121D30((int)&unk_106C323C, (int)"m_TextureScale", 820, 4, 10, 0, 0.1, 10.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C3288, (int)"m_Width", 816, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C32D4, (int)"m_flScrollSpeed", 856, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106C3320, (int)"m_vecOrigin", 716, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10234730(&unk_106C336C, "moveparent", 308, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106C33B8, (int)"m_iParentAttachment", 305, 1, 6, 1, 0);
    atexit(sub_10473C80);
  }
  sub_10121D00(byte_106C343C, (int)&unk_106C2EAC, 18, (int)off_1064612C);
  return 1;
}
