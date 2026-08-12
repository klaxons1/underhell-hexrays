int sub_1014E160()
{
  if ( (dword_106B2124 & 1) == 0 )
  {
    dword_106B2124 |= 1u;
    sub_10122040((int)&unk_106B1D48, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040((int)&unk_106B1D94, (int)"m_Color", 800, 4, 32, 1, 0);
    sub_10122040((int)&unk_106B1DE0, (int)"m_SpawnRate", 804, 4, 12, 1, 0);
    sub_10122040((int)&unk_106B1E2C, (int)"m_SpeedMax", 816, 4, 12, 1, 0);
    sub_10121D30((int)&unk_106B1E78, (int)"m_flSizeMin", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106B1EC4, (int)"m_flSizeMax", 812, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106B1F10, (int)"m_DistMax", 828, 4, 16, 1, 0);
    sub_10122040((int)&unk_106B1F5C, (int)"m_LifetimeMin", 820, 4, 4, 1, 0);
    sub_10122040((int)&unk_106B1FA8, (int)"m_LifetimeMax", 824, 4, 4, 1, 0);
    sub_10122040((int)&unk_106B1FF4, (int)"m_DustFlags", 836, 4, 3, 1, 0);
    sub_10122040((int)&unk_106B2040, (int)"m_nModelIndex", 114, 2, 11, 0, 0);
    sub_10121D30((int)&unk_106B208C, (int)"m_FallSpeed", 832, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_101221E0(
      (int)&unk_106B20D8,
      (int)"m_Collision",
      320,
      (int)&unk_1069B4CC,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10471460);
  }
  sub_10121D00(byte_106B217C, (int)&unk_106B1D94, 12, (int)off_1062640C[0]);
  return 1;
}
