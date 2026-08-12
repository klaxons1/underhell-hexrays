int sub_1026F790()
{
  if ( (dword_106CF4E0 & 1) == 0 )
  {
    dword_106CF4E0 |= 1u;
    sub_10122040((int)&unk_106CF020, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106CF06C,
      (int)"baseclass",
      0,
      (int)off_10642FDC,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730((int)&unk_106CF0B8, (int)"m_hPlayer", 1580, 4, -1, sub_10234830);
    sub_10234700((int)&unk_106CF104, (int)"m_bEnterAnimOn", 2093, 1);
    sub_10234700((int)&unk_106CF150, (int)"m_bExitAnimOn", 2094, 1);
    sub_10121E50((int)&unk_106CF19C, (int)"m_vecEyeExitEndpoint", 2096, 12, -1, 2, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10234700((int)&unk_106CF1E8, (int)"m_vehicleView.bClampEyeAngles", 1588, 1);
    sub_10121D30(
      (int)&unk_106CF234,
      (int)"m_vehicleView.flPitchCurveZero",
      1592,
      4,
      32,
      0,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106CF280,
      (int)"m_vehicleView.flPitchCurveLinear",
      1596,
      4,
      32,
      0,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106CF2CC,
      (int)"m_vehicleView.flRollCurveZero",
      1600,
      4,
      32,
      0,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106CF318,
      (int)"m_vehicleView.flRollCurveLinear",
      1604,
      4,
      32,
      0,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30((int)&unk_106CF364, (int)"m_vehicleView.flFOV", 1608, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106CF3B0, (int)"m_vehicleView.flYawMin", 1612, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106CF3FC, (int)"m_vehicleView.flYawMax", 1616, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106CF448,
      (int)"m_vehicleView.flPitchMin",
      1620,
      4,
      32,
      0,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121D30(
      (int)&unk_106CF494,
      (int)"m_vehicleView.flPitchMax",
      1624,
      4,
      32,
      0,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    atexit(sub_10474B10);
  }
  sub_10121D00(byte_106CF540, (int)&unk_106CF06C, 15, (int)off_106554A4[0]);
  return 1;
}
