int sub_10024850()
{
  if ( (dword_10403644 & 1) == 0 )
  {
    dword_10403644 |= 1u;
    sub_1009AED0(&unk_10403338, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_10403374, "baseclass", 0, 0, off_103D8844, sub_1009AE70);
    sub_1009AED0(&unk_104033B0, "m_lifeState", 135, 1, 0, 0);
    sub_10116070(&unk_104033EC, "m_bPerformAvoidance", 3372, 1);
    sub_10116070(&unk_10403428, "m_bIsMoving", 3373, 1);
    sub_10116070(&unk_10403464, "m_bFadeCorpse", 3374, 1);
    sub_1009AED0(&unk_104034A0, "m_iDeathPose", 3356, 4, 0, 0);
    sub_1009AED0(&unk_104034DC, "m_iDeathFrame", 3360, 4, 0, 0);
    sub_1009AED0(&unk_10403518, "m_iSpeedModRadius", 3364, 4, 0, 0);
    sub_1009AED0(&unk_10403554, "m_iSpeedModSpeed", 3368, 4, 0, 0);
    sub_1009AED0(&unk_10403590, "m_bSpeedModActive", 3375, 1, 0, 0);
    sub_10116070(&unk_104035CC, "m_bImportanRagdoll", 3376, 1);
    sub_1009AC40(&unk_10403608, "m_flTimePingEffect", 3352, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_10403374, 12, "DT_AI_BaseNPC");
  return 1;
}
