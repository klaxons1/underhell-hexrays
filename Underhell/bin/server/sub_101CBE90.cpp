int sub_101CBE90()
{
  if ( (dword_106BADCC & 1) == 0 )
  {
    dword_106BADCC |= 1u;
    sub_10122040((int)&unk_106BAB20, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106BAB6C,
      (int)"baseclass",
      0,
      (int)off_1060D114,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121FA0((int)&unk_106BABB8, (int)"m_ragAngles", 4728, 12, 13, 0, (int)sub_10121A30);
    sub_10122270((int)&unk_106BAC04, 24, 12, (int)"m_ragAngles", 0);
    sub_10121E50((int)&unk_106BAC50, (int)"m_ragPos", 4440, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10122270((int)&unk_106BAC9C, 24, 12, (int)"m_ragPos", 0);
    sub_10234730(&unk_106BACE8, "m_hUnragdoll", 5020, 4, -1, sub_10234830);
    sub_10121D30((int)&unk_106BAD34, (int)"m_flBlendWeight", 5064, 4, 8, 8, 0.0, 1.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106BAD80, (int)"m_nOverlaySequence", 5068, 4, 11, 0, 0);
    atexit(sub_104730F0);
  }
  sub_10121D00(byte_106BAE24, (int)&unk_106BAB6C, 8, (int)off_10638E38);
  return 1;
}
