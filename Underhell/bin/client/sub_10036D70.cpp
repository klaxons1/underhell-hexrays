int sub_10036D70()
{
  if ( (dword_1040580C & 1) == 0 )
  {
    dword_1040580C |= 1u;
    sub_1009AED0(&unk_10405140, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040517C, "AnimTimeMustBeFirst", 0, 0, &unk_10404D18, sub_1009AE70);
    sub_1009AED0(&unk_104051B8, "m_flSimulationTime", 104, 4, 0, sub_10035710);
    sub_1009AC90(&unk_104051F4, "m_vecOrigin", 708, 12, 0, sub_1009ADD0);
    sub_1009AC90(&unk_10405230, "m_angRotation", 720, 12, 0, sub_1009ADD0);
    sub_1009AED0(&unk_1040526C, "m_nModelIndex", 132, 2, 0, 0);
    sub_1009AED0(&unk_104052A8, "m_fEffects", 112, 4, 0, sub_10034050);
    sub_1009AED0(&unk_104052E4, "m_nRenderMode", 116, 1, 0, 0);
    sub_1009AED0(&unk_10405320, "m_nRenderFX", 84, 1, 0, 0);
    sub_1009AED0(&unk_1040535C, "m_clrRender", 88, 4, 0, 0);
    sub_1009AED0(&unk_10405398, "m_iTeamNum", 144, 4, 0, 0);
    sub_1009AED0(&unk_104053D4, "m_CollisionGroup", 736, 4, 0, 0);
    sub_1009AC40(&unk_10405410, "m_flElasticity", 476, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040544C, "m_flShadowCastDistance", 480, 4, 0, sub_1009ADC0);
    sub_10116040(&unk_10405488, "m_hOwnerEntity", 1124, 4, sub_10116120);
    sub_10116040(&unk_104054C4, "m_hEffectEntity", 1128, 4, sub_10116120);
    sub_1009AED0(&unk_10405500, "moveparent", 340, 4, 0, sub_10116120);
    sub_1009AED0(&unk_1040553C, "m_iParentAttachment", 318, 1, 0, 0);
    sub_1009AED0(&unk_10405578, "movetype", 0, -1, 0, sub_10036D40);
    sub_1009AED0(&unk_104055B4, "movecollide", 0, -1, 0, sub_10035800);
    sub_1009AD30(&unk_104055F0, "m_Collision", 352, 0, &unk_1042CA60, sub_1009AE70);
    sub_1009AED0(&unk_1040562C, "m_iTextureFrameIndex", 1112, 1, 0, 0);
    sub_1009AD30(&unk_10405668, "predictable_id", 0, 0, &unk_10404D30, sub_1009AE70);
    sub_1009AED0(&unk_104056A4, "m_bSimulatedEveryTick", 1109, 1, 0, sub_10116160);
    sub_1009AED0(&unk_104056E0, "m_bAnimatedEveryTick", 1110, 1, 0, sub_10116160);
    sub_10116070(&unk_1040571C, "m_bAlternateSorting", 1111, 1);
    sub_10116070(&unk_10405758, "m_bIsMirrorOnly", 1161, 1);
    sub_10116070(&unk_10405794, "m_bGlow", 1162, 1);
    sub_1009AED0(&unk_104057D0, "m_GlowColor", 1163, 4, 0, sub_10115FD0);
  }
  sub_1009AC10(&unk_1040517C, 28, "DT_BaseEntity");
  return 1;
}
