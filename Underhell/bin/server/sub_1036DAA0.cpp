int sub_1036DAA0()
{
  int v1[5]; // [esp+0h] [ebp-64h] BYREF
  _DWORD v2[5]; // [esp+14h] [ebp-50h] BYREF
  _DWORD v3[5]; // [esp+28h] [ebp-3Ch] BYREF
  _DWORD v4[5]; // [esp+3Ch] [ebp-28h] BYREF
  _DWORD v5[5]; // [esp+50h] [ebp-14h] BYREF

  memset(v1, 0, sizeof(v1));
  memset(v5, 0, sizeof(v5));
  memset(v4, 0, sizeof(v4));
  memset(v3, 0, sizeof(v3));
  memset(v2, 0, sizeof(v2));
  dword_106E80E8 = sub_100032E0((int)"ACT_BLACKHEADCRAB_RUN_PANIC");
  sub_10008F60((int)"ACT_BLACKHEADCRAB_RUN_PANIC", dword_106E80E8);
  dword_106E813C = sub_1013BF10((int)"AE_POISONHEADCRAB_FLINCH_HOP");
  sub_1006AFD0((int)"AE_POISONHEADCRAB_FLINCH_HOP", dword_106E813C);
  dword_106E8138 = sub_1013BF10((int)"AE_POISONHEADCRAB_FOOTSTEP");
  sub_1006AFD0((int)"AE_POISONHEADCRAB_FOOTSTEP", dword_106E8138);
  dword_106E8134 = sub_1013BF10((int)"AE_POISONHEADCRAB_THREAT_SOUND");
  sub_1006AFD0((int)"AE_POISONHEADCRAB_THREAT_SOUND", dword_106E8134);
  sub_1004BBC0(&dword_106E8370, (int)"CBlackHeadcrab", (int)dword_10690E5C, (int)&unk_106E8308);
  sub_1007DAB0(dword_106E83BC, (int)dword_1069528C, (int)dword_106E8354);
  sub_1004C500((int)v5, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v4, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v3, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v2, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  return sub_102375F0(v1);
}
