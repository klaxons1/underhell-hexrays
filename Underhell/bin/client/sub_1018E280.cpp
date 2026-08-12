int sub_1018E280()
{
  int v1[15]; // [esp-40h] [ebp-84h] BYREF
  char v2[60]; // [esp+8h] [ebp-3Ch] BYREF

  if ( (dword_1044664C & 1) == 0 )
  {
    dword_1044664C |= 1u;
    sub_1009AED0((int)&unk_10446340, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044637C, (int)"baseclass", 0, 0, (int)off_103D99F0, (int)sub_1009AE70);
    sub_1009AD30((int)&unk_104463B8, (int)"m_HL2Local", 5164, 0, (int)&unk_104472B4, (int)sub_1009AE70);
    sub_10116070((int)&unk_104463F4, (int)"m_fIsSprinting", 5284, 1);
    sub_10116070((int)&unk_10446430, (int)"m_bShoulderFlashlight", 5285, 1);
    sub_10116070((int)&unk_1044646C, (int)"m_bFlashlightOn", 5286, 1);
    sub_10116070((int)&unk_104464A8, (int)"m_bInventoryEnabled", 5288, 1);
    sub_1009AED0((int)&unk_104464E4, (int)"m_iUHBatteryCount", 5292, 4, 0, 0);
    sub_1009AED0((int)&unk_10446520, (int)"m_iUHHermitCardsCount", 5296, 4, 0, 0);
    sub_1009AED0((int)&unk_1044655C, (int)"m_iUHHermitCurrentQuestCount", 5300, 4, 0, 0);
    sub_1009AED0((int)&unk_10446598, (int)"m_iUHHermitTotalQuestCount", 5304, 4, 0, 0);
    sub_10116070((int)&unk_104465D4, (int)"m_bDisplayHermitCard", 5287, 1);
    qmemcpy(v1, (const void *)sub_1009AED0((int)v2, (int)"m_iInventory[0]", 5052, 4, 0, 0), sizeof(v1));
    sub_1009AF50(
      (int)&unk_10446610,
      (int)"m_iInventory",
      5052,
      4,
      28,
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
  sub_1009AC10(dword_104466E0, (int)&unk_1044637C, 12, (int)"DT_HL2_Player");
  return 1;
}
