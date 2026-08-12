int sub_103B2130()
{
  if ( (dword_106EBA64 & 1) == 0 )
  {
    dword_106EBA64 |= 1u;
    sub_10122040((int)&unk_106EB7B8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EB804,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121E50((int)&unk_106EB850, (int)"m_vecHitPos", 3700, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106EB89C, (int)"m_vecIKTarget[0]", 3712, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106EB8E8, (int)"m_vecIKTarget[1]", 3724, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106EB934, (int)"m_vecIKTarget[2]", 3736, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106EB980, (int)"m_vecIKTarget[3]", 3748, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106EB9CC, (int)"m_vecIKTarget[4]", 3760, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106EBA18, (int)"m_vecIKTarget[5]", 3772, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10478CA0);
  }
  sub_10121D00(byte_106EB70C, (int)&unk_106EB804, 8, (int)off_10679EF8);
  return 1;
}
