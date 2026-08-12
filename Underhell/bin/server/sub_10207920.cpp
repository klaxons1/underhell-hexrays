int sub_10207920()
{
  if ( (dword_106C20CC & 1) == 0 )
  {
    dword_106C20CC |= 1u;
    sub_10122040((int)&unk_106C1FE8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106C2034,
      (int)"baseclass",
      0,
      (int)off_10642FA8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234700(&unk_106C2080, "m_bUseHitboxesForRenderBox", 1551, 1);
    atexit(sub_10473970);
  }
  sub_10121D00(byte_106C1E68, (int)&unk_106C2034, 2, (int)off_106430EC[0]);
  return 1;
}
