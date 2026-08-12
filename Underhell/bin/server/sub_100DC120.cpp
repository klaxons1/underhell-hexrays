int sub_100DC120()
{
  if ( (dword_106982BC & 1) == 0 )
  {
    dword_106982BC |= 1u;
    sub_10122040(&unk_10697A20, "should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(&unk_10697A6C, "AnimTimeMustBeFirst", 0, &unk_106972D8, sub_100D9880);
    sub_10122040(&unk_10697AB8, "m_flSimulationTime", 128, 4, 8, 66561, sub_100D7AE0);
    sub_10121E50((int)&unk_10697B04, (int)"m_vecOrigin", 716, 12, -1, 1026, 0.0, -121121.12, (int)sub_100D9930);
    sub_10122040(&unk_10697B50, "m_nModelIndex", 114, 2, 11, 0, 0);
    sub_101221E0(
      &unk_10697B9C,
      "m_Collision",
      320,
      &unk_1069B4CC,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10122040(&unk_10697BE8, "m_nRenderFX", 112, 1, 8, 1, 0);
    sub_10122040(&unk_10697C34, "m_nRenderMode", 113, 1, 8, 1, 0);
    sub_10122040(&unk_10697C80, "m_fEffects", 192, 4, 11, 1, 0);
    sub_10122040(&unk_10697CCC, "m_clrRender", 116, 4, 32, 1, 0);
    sub_10122040(&unk_10697D18, "m_iTeamNum", 440, 4, 6, 0, 0);
    sub_10122040(&unk_10697D64, "m_CollisionGroup", 420, 4, 5, 1, 0);
    sub_10121D30((int)&unk_10697DB0, (int)"m_flElasticity", 560, 4, 0, 2, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_10697DFC, (int)"m_flShadowCastDistance", 428, 4, 12, 1, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234730(&unk_10697E48, "m_hOwnerEntity", 412, 4, -1, sub_10234830);
    sub_10234730(&unk_10697E94, "m_hEffectEntity", 416, 4, -1, sub_10234830);
    sub_10234730(&unk_10697EE0, "moveparent", 308, 4, -1, sub_10234830);
    sub_10122040(&unk_10697F2C, "m_iParentAttachment", 305, 1, 6, 1, 0);
    sub_10122040(&unk_10697F78, "movetype", 306, 1, 4, 1, 0);
    sub_10122040(&unk_10697FC4, "movecollide", 307, 1, 3, 1, 0);
    sub_10121FA0(&unk_10698010, "m_angRotation", 728, 12, 13, 1024, sub_100D99A0);
    sub_10122040(&unk_1069805C, "m_iTextureFrameIndex", 604, 1, 8, 1, 0);
    sub_101221E0(&unk_106980A8, "predictable_id", 0, &unk_106972F0, sub_100DC0B0);
    sub_10122040(&unk_106980F4, "m_bSimulatedEveryTick", 605, 1, 1, 1, 0);
    sub_10122040(&unk_10698140, "m_bAnimatedEveryTick", 606, 1, 1, 1, 0);
    sub_10234700(&unk_1069818C, "m_bAlternateSorting", 607, 1);
    sub_10234700(&unk_106981D8, "m_bIsMirrorOnly", 768, 1);
    sub_10234700(&unk_10698224, "m_bGlow", 769, 1);
    sub_10122040(&unk_10698270, "m_GlowColor", 771, 4, 32, 1, sub_102346A0);
    atexit(sub_1046FBF0);
  }
  sub_10121D00(&unk_10697A6C, 28, off_1060F5DC);
  return 1;
}
