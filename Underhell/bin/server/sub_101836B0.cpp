int sub_101836B0()
{
  if ( (dword_106B6C48 & 1) == 0 )
  {
    dword_106B6C48 |= 1u;
    sub_10122040((int)&unk_106B6820, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106B686C,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122120((int)&unk_106B68B8, (int)"m_szMaterialName", 800, 255, 0, (int)sub_10121B10);
    sub_10122120((int)&unk_106B6904, (int)"m_szMaterialVar", 1055, 255, 0, (int)sub_10121B10);
    sub_10122120((int)&unk_106B6950, (int)"m_szMaterialVarValue", 1310, 255, 0, (int)sub_10121B10);
    sub_10122040((int)&unk_106B699C, (int)"m_iFrameStart", 1568, 4, 8, 0, 0);
    sub_10122040((int)&unk_106B69E8, (int)"m_iFrameEnd", 1572, 4, 8, 0, 0);
    sub_10122040((int)&unk_106B6A34, (int)"m_bWrap", 1576, 1, 1, 1, 0);
    sub_10121D30((int)&unk_106B6A80, (int)"m_flFramerate", 1580, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106B6ACC, (int)"m_bNewAnimCommandsSemaphore", 1584, 1, 1, 1, 0);
    sub_10121D30((int)&unk_106B6B18, (int)"m_flFloatLerpStartValue", 1588, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B6B64, (int)"m_flFloatLerpEndValue", 1592, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106B6BB0,
      (int)"m_flFloatLerpTransitionTime",
      1596,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10122040((int)&unk_106B6BFC, (int)"m_nModifyMode", 1600, 4, 2, 1, 0);
    atexit(sub_104720C0);
  }
  sub_10121D00(byte_106B6CD0, (int)&unk_106B686C, 13, (int)off_10630880[0]);
  return 1;
}
