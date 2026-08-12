int sub_100F8EA0()
{
  if ( (dword_106997B4 & 1) == 0 )
  {
    dword_106997B4 |= 1u;
    sub_10122040(&unk_106992A8, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_10122040(&unk_106992F4, "m_nModelIndex", 114, 2, 11, 0, 0);
    sub_10234700(&unk_10699340, "m_bExpSighted", 1120, 1);
    sub_10122040(&unk_1069938C, "m_nBody", 852, 4, 8, 0, 0);
    sub_10122040(&unk_106993D8, "m_nSkin", 848, 4, 10, 0, 0);
    sub_10122040(&unk_10699424, "m_nSequence", 908, 4, 8, 1, 0);
    sub_10122040(&unk_10699470, "m_nViewModelIndex", 1140, 4, 2, 1, 0);
    sub_10121D30((int)&unk_106994BC, (int)"m_flPlaybackRate", 864, 4, 8, 16, -4.0, 12.0, (int)sub_10121A20);
    sub_10122040(&unk_10699508, "m_fEffects", 192, 4, 10, 1, 0);
    sub_10122040(&unk_10699554, "m_nAnimationParity", 1156, 4, 3, 1, 0);
    sub_10234730(&unk_106995A0, "m_hWeapon", 1168, 4, -1, sub_10234830);
    sub_10234730(&unk_106995EC, "m_hOwner", 1144, 4, -1, sub_10234830);
    sub_10122040(&unk_10699638, "m_nNewSequenceParity", 1028, 4, 3, 1, 0);
    sub_10122040(&unk_10699684, "m_nResetEventsParity", 1032, 4, 3, 1, 0);
    sub_10122040(&unk_106996D0, "m_nMuzzleFlashParity", 1036, 1, 2, 1, 0);
    sub_10121D30((int)&unk_1069971C, (int)"m_flPoseParameter", 912, 4, 8, 0, 0.0, 1.0, (int)sub_10121A20);
    sub_10122270(&unk_10699768, 24, 4, "m_flPoseParameter", 0);
    atexit(sub_10470130);
  }
  sub_10121D00(&unk_106992F4, 16, off_10612940[0]);
  return 1;
}
