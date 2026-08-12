int sub_102DA410()
{
  if ( (dword_106E050C & 1) == 0 )
  {
    dword_106E050C |= 1u;
    sub_10122040((int)&unk_106E0428, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106E0474,
      (int)"baseclass",
      0,
      (int)off_10627F34,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0(
      (int)&unk_106E04C0,
      (int)"hl2_gamerules_data",
      0,
      (int)byte_106DEA70,
      (int (__cdecl *)(int, int, int))sub_10247950);
    atexit(sub_10476E10);
  }
  sub_10121D00(byte_106DEA9C, (int)&unk_106E0474, 2, (int)off_10665D68);
  return 1;
}
