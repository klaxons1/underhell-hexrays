int sub_103D2160()
{
  if ( (dword_106ECB60 & 1) == 0 )
  {
    dword_106ECB60 |= 1u;
    sub_10122040((int)&unk_106EC998, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EC9E4,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106ECA30, (int)"m_bEmit", 1176, 1);
    sub_10121D30((int)&unk_106ECA7C, (int)"m_flRadius", 1180, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700((int)&unk_106ECAC8, (int)"m_bHeld", 1177, 1);
    sub_10234700((int)&unk_106ECB14, (int)"m_bLaunched", 1178, 1);
    atexit(sub_10478FC0);
  }
  sub_10121D00(byte_106ECD68, (int)&unk_106EC9E4, 5, (int)off_1067E6C8);
  return 1;
}
