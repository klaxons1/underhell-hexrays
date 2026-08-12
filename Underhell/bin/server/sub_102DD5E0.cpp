int sub_102DD5E0()
{
  char v1; // [esp-50h] [ebp-50h] BYREF
  int v2; // [esp-4Ch] [ebp-4Ch]
  int v3; // [esp-48h] [ebp-48h]
  int v4; // [esp-44h] [ebp-44h]
  float v5; // [esp-40h] [ebp-40h]
  float v6; // [esp-3Ch] [ebp-3Ch]
  int v7; // [esp-38h] [ebp-38h]
  int v8; // [esp-34h] [ebp-34h]
  int v9; // [esp-30h] [ebp-30h]
  int v10; // [esp-2Ch] [ebp-2Ch]
  int v11; // [esp-28h] [ebp-28h]
  int v12; // [esp-24h] [ebp-24h]
  float v13; // [esp-20h] [ebp-20h]
  int v14; // [esp-1Ch] [ebp-1Ch]
  int v15; // [esp-18h] [ebp-18h]
  int v16; // [esp-14h] [ebp-14h]
  int v17; // [esp-10h] [ebp-10h]
  int v18; // [esp-Ch] [ebp-Ch]
  int v19; // [esp-8h] [ebp-8h]
  int (__cdecl *v20)(int, int, int); // [esp-4h] [ebp-4h]

  if ( (dword_106E102C & 1) == 0 )
  {
    dword_106E102C |= 1u;
    sub_10122040((int)&unk_106E0C50, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106E0C9C,
      (int)"baseclass",
      0,
      (int)off_1063C5A0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0(
      (int)&unk_106E0CE8,
      (int)"m_HL2Local",
      5080,
      (int)&unk_106E157C,
      (int (__cdecl *)(int, int, int))sub_10122360);
    sub_10234700((int)&unk_106E0D34, (int)"m_fIsSprinting", 5216, 1);
    sub_10234700((int)&unk_106E0D80, (int)"m_bShoulderFlashlight", 5040, 1);
    sub_10234700((int)&unk_106E0DCC, (int)"m_bFlashlightOn", 5061, 1);
    sub_10234700((int)&unk_106E0E18, (int)"m_bInventoryEnabled", 5062, 1);
    sub_10122040((int)&unk_106E0E64, (int)"m_iUHBatteryCount", 5044, 4, -1, 0, 0);
    sub_10122040((int)&unk_106E0EB0, (int)"m_iUHHermitCardsCount", 5048, 4, -1, 0, 0);
    sub_10122040((int)&unk_106E0EFC, (int)"m_iUHHermitCurrentQuestCount", 5052, 4, -1, 0, 0);
    sub_10122040((int)&unk_106E0F48, (int)"m_iUHHermitTotalQuestCount", 5056, 4, -1, 0, 0);
    sub_10234700((int)&unk_106E0F94, (int)"m_bDisplayHermitCard", 5060, 1);
    v20 = std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>;
    sub_10122040((int)&v1, (int)"m_iInventory", 4928, 4, -1, 0, 0);
    sub_101223F0(
      (int)&unk_106E0FE0,
      (int)"m_iInventory",
      4928,
      4,
      28,
      v1,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    atexit(sub_10477420);
  }
  sub_10121D00(byte_106E0B0C, (int)&unk_106E0C9C, 12, (int)off_10665FA0);
  return 1;
}
