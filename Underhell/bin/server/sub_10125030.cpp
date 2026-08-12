int sub_10125030()
{
  if ( (dword_1069D568 & 1) == 0 )
  {
    dword_1069D568 |= 1u;
    sub_10122040((int)&unk_1069D4D0, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_1069D51C,
      (int)"m_EnvWindShared",
      800,
      (int)byte_1069DD88,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    atexit(sub_10470920);
  }
  sub_10121D00(byte_1069DDB4, (int)&unk_1069D51C, 1, (int)off_10619A98[0]);
  return 1;
}
