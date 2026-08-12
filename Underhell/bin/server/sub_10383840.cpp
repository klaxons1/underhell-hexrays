int sub_10383840()
{
  if ( (dword_106E9CE4 & 1) == 0 )
  {
    dword_106E9CE4 |= 1u;
    sub_10122040((int)&unk_106E9B68, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106E9BB4,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234760((int)&unk_106E9C00, (int)"m_nEnginePitch1", 3916, 4, 8, sub_102346D0);
    sub_10121D30((int)&unk_106E9C4C, (int)"m_flEnginePitch1Time", 3924, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234760((int)&unk_106E9C98, (int)"m_nEnginePitch2", 3920, 4, 8, sub_102346D0);
    atexit(sub_10478750);
  }
  sub_10121D00(byte_106E9AE4, (int)&unk_106E9BB4, 4, (int)off_10675CE0);
  return 1;
}
