int sub_1006F360()
{
  if ( (dword_10412730 & 1) == 0 )
  {
    dword_10412730 |= 1u;
    sub_1009AED0(&unk_10412370, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104123AC, "baseclass", 0, 0, off_103DBA58, sub_1009AE70);
    sub_10116040(&unk_104123E8, "m_hPlayer", 1996, 4, sub_10116120);
    sub_10116070(&unk_10412424, "m_bEnterAnimOn", 2004, 1);
    sub_10116070(&unk_10412460, "m_bExitAnimOn", 2005, 1);
    sub_1009AC90(&unk_1041249C, "m_vecEyeExitEndpoint", 2008, 12, 0, sub_1009ADD0);
    sub_10116070(&unk_104124D8, "m_vehicleView.bClampEyeAngles", 2148, 1);
    sub_1009AC40(&unk_10412514, "m_vehicleView.flPitchCurveZero", 2152, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10412550, "m_vehicleView.flPitchCurveLinear", 2156, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1041258C, "m_vehicleView.flRollCurveZero", 2160, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104125C8, "m_vehicleView.flRollCurveLinear", 2164, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10412604, "m_vehicleView.flFOV", 2168, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_10412640, "m_vehicleView.flYawMin", 2172, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1041267C, "m_vehicleView.flYawMax", 2176, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104126B8, "m_vehicleView.flPitchMin", 2180, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_104126F4, "m_vehicleView.flPitchMax", 2184, 4, 0, sub_1009ADC0);
  }
  sub_1009AC10(&unk_104123AC, 15, "DT_PropVehicleChoreoGeneric");
  return 1;
}
