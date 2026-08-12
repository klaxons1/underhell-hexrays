int sub_101250B0()
{
  if ( (dword_1069D738 & 1) == 0 )
  {
    dword_1069D738 |= 1u;
    sub_10122040((int)&unk_1069D570, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_1069D5BC,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_1069D608, (int)"m_nDensity", 800, 4, 32, 1, 0);
    sub_10122040((int)&unk_1069D654, (int)"m_nLifetime", 804, 4, 32, 1, 0);
    sub_10122040((int)&unk_1069D6A0, (int)"m_nSpeed", 808, 4, 32, 1, 0);
    sub_10122040((int)&unk_1069D6EC, (int)"m_bEmit", 812, 1, 2, 1, 0);
    atexit(sub_10470950);
  }
  sub_10121D00(byte_1069DDE4, (int)&unk_1069D5BC, 5, (int)off_10619A9C[0]);
  return 1;
}
