int sub_10033550()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  int v2[15]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_10404A4C & 1) == 0 )
  {
    dword_10404A4C |= 1u;
    sub_1009AED0(&unk_10404920, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040495C, "baseclass", 0, 0, off_103D9430, sub_1009AE70);
    sub_1009AD30(&unk_10404998, "bcc_localdata", 0, 0, &unk_10404A50, sub_1009AE70);
    sub_10116040(&unk_104049D4, "m_hActiveWeapon", 3344, 4, sub_10116120);
    qmemcpy(v1, (const void *)sub_10116040(v2, "m_hMyWeapons[0]", 3152, 4, sub_10116120), sizeof(v1));
    sub_1009AF50(
      (int)&unk_10404A10,
      (char)"m_hMyWeapons",
      3152,
      4,
      48,
      v1[0],
      v1[1],
      v1[2],
      v1[3],
      v1[4],
      v1[5],
      v1[6],
      v1[7],
      v1[8],
      v1[9],
      v1[10],
      v1[11],
      v1[12],
      v1[13],
      v1[14],
      (int)sub_1009AE70);
  }
  sub_1009AC10(&unk_1040495C, 4, "DT_BaseCombatCharacter");
  return 1;
}
