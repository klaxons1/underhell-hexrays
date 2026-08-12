int sub_10247980()
{
  if ( (dword_106C619C & 1) == 0 )
  {
    dword_106C619C |= 1u;
    sub_10122040((int)&unk_106C60B8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C6104,
      (int)"baseclass",
      0,
      (int)off_10627F34,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0(
      (int)&unk_106C6150,
      (int)"hl2_survival_gamerules_data",
      0,
      (int)&unk_106C61F4,
      (int (__cdecl *)(int, int, int))sub_10247950);
    atexit(sub_10474320);
  }
  sub_10121D00(byte_106C6220, (int)&unk_106C6104, 2, (int)off_1064ED08[0]);
  return 1;
}
