int sub_10241D90()
{
  if ( (dword_106C5578 & 1) == 0 )
  {
    dword_106C5578 |= 1u;
    sub_10122040((int)&unk_106C5448, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C5494,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106C54E0, (int)"m_flLightScale", 800, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106C552C, (int)"m_Radius", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104741A0);
  }
  sub_10121D00(byte_106C55B0, (int)&unk_106C5494, 3, (int)off_1064DA18);
  return 1;
}
