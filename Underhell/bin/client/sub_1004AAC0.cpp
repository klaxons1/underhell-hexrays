int sub_1004AAC0()
{
  if ( (dword_10409A9C & 1) == 0 )
  {
    dword_10409A9C |= 1u;
    sub_1009AED0(&unk_10409970, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_104099AC, "baseclass", 0, 0, off_103D7044, sub_1009AE70);
    sub_1009AED0(&unk_104099E8, "m_iMaterialName", 1424, 4, 0, 0);
    sub_1009AD30(&unk_10409A24, "m_Info", 1428, 0, &unk_1042D4FC, sub_1009AE70);
    sub_10116040(&unk_10409A60, "m_hConstraintEntity", 1448, 4, sub_10116120);
  }
  sub_1009AC10(&unk_104099AC, 4, "DT_EntityParticleTrail");
  return 1;
}
