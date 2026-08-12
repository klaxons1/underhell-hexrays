int sub_102CB7A0()
{
  if ( (dword_106DE404 & 1) == 0 )
  {
    dword_106DE404 |= 1u;
    sub_10122040((int)&unk_106DE288, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106DE2D4,
      (int)"baseclass",
      0,
      off_1060F310,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106DE320, (int)"m_flLifespan", 872, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106DE36C, (int)"m_flRadius", 876, 4, -1, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106DE3B8, (int)"m_vecSurfaceNormal", 880, 12, 0, 32, 0.0, -121121.12, (int)sub_10121AA0);
    atexit(sub_10476BF0);
  }
  sub_10121D00(byte_106DE5C0, (int)&unk_106DE2D4, 4, (int)off_106630F4[0]);
  return 1;
}
