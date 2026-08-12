int sub_10283AD0()
{
  if ( (dword_106D3638 & 1) == 0 )
  {
    dword_106D3638 |= 1u;
    sub_10122040((int)&unk_106D3508, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D3554,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106D35A0, (int)"m_nAttachment", 800, 4, 32, 0, 0);
    sub_10121D30((int)&unk_106D35EC, (int)"m_flLifetime", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    atexit(sub_104756A0);
  }
  sub_10121D00(byte_106D4160, (int)&unk_106D3554, 3, (int)off_1065AAD4[0]);
  return 1;
}
