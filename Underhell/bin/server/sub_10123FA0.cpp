int sub_10123FA0()
{
  if ( (dword_1069D0D4 & 1) == 0 )
  {
    dword_1069D0D4 |= 1u;
    sub_10122040((int)&unk_1069CA98, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10121D30((int)&unk_1069CAE4, (int)"m_vOrigin[0]", 0, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069CB30, (int)"m_vOrigin[1]", 4, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069CB7C, (int)"m_vOrigin[2]", 8, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069CBC8, (int)"m_vStart[0]", 12, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069CC14, (int)"m_vStart[1]", 16, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069CC60, (int)"m_vStart[2]", 20, 4, 17, 0, -16384.0, 16384.0, (int)sub_10121A20);
    sub_10121FA0((int)&unk_1069CCAC, (int)"m_vAngles", 36, 12, 7, 0, (int)sub_10121A30);
    sub_10121E50((int)&unk_1069CCF8, (int)"m_vNormal", 24, 12, 0, 32, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122040((int)&unk_1069CD44, (int)"m_fFlags", 48, 4, 8, 1, 0);
    sub_10121D30((int)&unk_1069CD90, (int)"m_flMagnitude", 60, 4, 12, 8, 0.0, 1023.0, (int)sub_10121A20);
    sub_10121D30((int)&unk_1069CDDC, (int)"m_flScale", 56, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_1069CE28, (int)"m_nAttachmentIndex", 68, 4, 5, 1, 0);
    sub_10234760(&unk_1069CE74, "m_nSurfaceProp", 72, 2, 8, sub_102346E0);
    sub_10122040((int)&unk_1069CEC0, (int)"m_iEffectName", 92, 4, 10, 1, 0);
    sub_10122040((int)&unk_1069CF0C, (int)"m_nMaterial", 76, 4, 10, 1, 0);
    sub_10122040((int)&unk_1069CF58, (int)"m_nDamageType", 80, 4, 32, 1, 0);
    sub_10122040((int)&unk_1069CFA4, (int)"m_nHitBox", 84, 4, 11, 1, 0);
    sub_10122040((int)&unk_1069CFF0, (int)"entindex", 52, 4, 11, 1, 0);
    sub_10122040((int)&unk_1069D03C, (int)"m_nColor", 88, 1, 8, 1, 0);
    sub_10121D30((int)&unk_1069D088, (int)"m_flRadius", 64, 4, 10, 8, 0.0, 1023.0, (int)sub_10121A20);
    atexit(sub_104708A0);
  }
  sub_10121D00(byte_1069D0D8, (int)&unk_1069CAE4, 20, (int)off_10619850);
  return 1;
}
