int sub_1039D740()
{
  if ( (dword_106EA688 & 1) == 0 )
  {
    dword_106EA688 |= 1u;
    sub_10122040((int)&unk_106EA558, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106EA5A4,
      (int)"baseclass",
      0,
      (int)off_105FE144,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730((int)&unk_106EA5F0, (int)"m_hAnimationTarget", 3628, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106EA63C, (int)"m_nTargetAttachment", 3632, 4, -1, 0, 0);
    atexit(sub_10478960);
  }
  sub_10121D00(byte_106EA6C4, (int)&unk_106EA5A4, 3, (int)off_1067808C[0]);
  return 1;
}
