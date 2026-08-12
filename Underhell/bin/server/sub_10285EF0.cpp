int sub_10285EF0()
{
  if ( (dword_106D4798 & 1) == 0 )
  {
    dword_106D4798 |= 1u;
    sub_10122040((int)&unk_106D41A8, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106D41F4,
      (int)"baseclass",
      0,
      (int)off_10612678,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10121D30((int)&unk_106D4240, (int)"m_SpreadSpeed", 800, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D428C, (int)"m_Speed", 804, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D42D8, (int)"m_StartSize", 808, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4324, (int)"m_EndSize", 812, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D4370, (int)"m_Rate", 816, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D43BC, (int)"m_JetLength", 820, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106D4408, (int)"m_bEmit", 828, 4, 1, 1, 0);
    sub_10121D30((int)&unk_106D4454, (int)"m_flBaseSpread", 832, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121D30((int)&unk_106D44A0, (int)"m_flRollSpeed", 824, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106D44EC, (int)"m_DirLight.m_vPos", 872, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D4538, (int)"m_DirLight.m_vColor", 884, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D4584, (int)"m_DirLight.m_flIntensity", 896, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10121E50((int)&unk_106D45D0, (int)"m_AmbientLight.m_vPos", 840, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121E50((int)&unk_106D461C, (int)"m_AmbientLight.m_vColor", 852, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30(
      (int)&unk_106D4668,
      (int)"m_AmbientLight.m_flIntensity",
      864,
      4,
      0,
      4,
      0.0,
      -121121.12,
      (int)sub_10121A20);
    sub_10121E50((int)&unk_106D46B4, (int)"m_vWind", 920, 12, 0, 4, 0.0, -121121.12, (int)sub_10121AA0);
    sub_10121D30((int)&unk_106D4700, (int)"m_flTwist", 900, 4, 0, 4, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234760((int)&unk_106D474C, (int)"m_iMaterialModel", 908, 4, 16, sub_102346D0);
    atexit(sub_10475780);
  }
  sub_10121D00(byte_106D47F0, (int)&unk_106D41F4, 19, (int)off_1065BA90);
  return 1;
}
