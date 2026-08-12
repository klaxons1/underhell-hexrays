int sub_10052110()
{
  if ( (dword_1040B704 & 1) == 0 )
  {
    dword_1040B704 |= 1u;
    sub_1009AED0(&unk_1040B3F8, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AED0(&unk_1040B434, "m_Color", 1192, 4, 0, 0);
    sub_1009AED0(&unk_1040B470, "m_SpawnRate", 1196, 4, 0, 0);
    sub_1009AC40(&unk_1040B4AC, "m_flSizeMin", 1200, 4, 0, sub_1009ADC0);
    sub_1009AC40(&unk_1040B4E8, "m_flSizeMax", 1204, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_1040B524, "m_LifetimeMin", 1212, 4, 0, 0);
    sub_1009AED0(&unk_1040B560, "m_LifetimeMax", 1216, 4, 0, 0);
    sub_1009AED0(&unk_1040B59C, "m_DustFlags", 1228, 4, 0, 0);
    sub_1009AED0(&unk_1040B5D8, "m_SpeedMax", 1208, 4, 0, 0);
    sub_1009AED0(&unk_1040B614, "m_DistMax", 1220, 4, 0, 0);
    sub_1009AED0(&unk_1040B650, "m_nModelIndex", 132, 2, 0, 0);
    sub_1009AC40(&unk_1040B68C, "m_FallSpeed", 1224, 4, 0, sub_1009ADC0);
    sub_1009AD30(&unk_1040B6C8, "m_Collision", 352, 0, &unk_1042CA60, sub_1009AE70);
  }
  sub_1009AC10(&unk_1040B434, 12, "DT_Func_Dust");
  return 1;
}
