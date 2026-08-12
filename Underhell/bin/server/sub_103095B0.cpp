int sub_103095B0()
{
  if ( (dword_106E33D4 & 1) == 0 )
  {
    dword_106E33D4 |= 1u;
    sub_10122040((int)&unk_106E3258, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106E32A4,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700((int)&unk_106E32F0, (int)"m_bCavernBreed", 3674, 1);
    sub_10234700((int)&unk_106E333C, (int)"m_bInCavern", 3675, 1);
    sub_10122040((int)&unk_106E3388, (int)"m_iBleedingLevel", 3820, 1, 2, 1, 0);
    atexit(sub_10477920);
  }
  sub_10121D00(byte_106E31D4, (int)&unk_106E32A4, 4, (int)off_1066BD14[0]);
  return 1;
}
