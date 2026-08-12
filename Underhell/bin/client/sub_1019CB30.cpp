int sub_1019CB30()
{
  if ( (dword_104490AC & 1) == 0 )
  {
    dword_104490AC |= 1u;
    sub_1009AED0((int)&unk_10448F08, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10448F44, (int)"baseclass", 0, 0, (int)off_103E9074, (int)sub_1009AE70);
    sub_10116070((int)&unk_10448F80, (int)"m_bHeadlightIsOn", 2284, 1);
    sub_1009AED0((int)&unk_10448FBC, (int)"m_nAmmoCount", 2288, 4, 0, 0);
    sub_1009AED0((int)&unk_10448FF8, (int)"m_nExactWaterLevel", 2296, 4, 0, 0);
    sub_1009AED0((int)&unk_10449034, (int)"m_nWaterLevel", 320, 1, 0, 0);
    sub_1009AC90((int)&unk_10449070, (int)"m_vecPhysVelocity", 3192, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10449358, (int)&unk_10448F44, 6, (int)"DT_PropAirboat");
  return 1;
}
