int sub_101CBA50()
{
  if ( (dword_106BAB18 & 1) == 0 )
  {
    dword_106BAB18 |= 1u;
    sub_10122040((int)&unk_106BA950, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106BA99C,
      (int)"baseclass",
      0,
      (int)off_10638D60,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040((int)&unk_106BA9E8, (int)"m_boneIndexAttached", 5652, 4, 7, 1, 0);
    sub_10122040((int)&unk_106BAA34, (int)"m_ragdollAttachedObjectIndex", 5656, 4, 5, 1, 0);
    sub_10121E50(
      (int)&unk_106BAA80,
      (int)"m_attachmentPointBoneSpace",
      5660,
      12,
      -1,
      2,
      0.0,
      -121121.12,
      (int)sub_10121AA0);
    sub_10121E50(
      (int)&unk_106BAACC,
      (int)"m_attachmentPointRagdollSpace",
      5672,
      12,
      -1,
      2,
      0.0,
      -121121.12,
      (int)sub_10121AA0);
    atexit(sub_104730D0);
  }
  sub_10121D00(byte_106BAE54, (int)&unk_106BA99C, 5, (int)off_10638DCC[0]);
  return 1;
}
