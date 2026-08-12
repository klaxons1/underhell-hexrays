int sub_103FB090()
{
  if ( (dword_106F02A0 & 1) == 0 )
  {
    dword_106F02A0 |= 1u;
    sub_10122040((int)&unk_106F0170, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106F01BC,
      (int)"baseclass",
      0,
      (int)off_106609C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106F0208, (int)"m_bIsCurrentlyUpgrading", 1412, 1);
    sub_10121D30((int)&unk_106F0254, (int)"m_flTimeForceView", 1416, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104798D0);
  }
  sub_10121D00(byte_106F0144, (int)&unk_106F01BC, 3, (int)off_106857DC[0]);
  return 1;
}
