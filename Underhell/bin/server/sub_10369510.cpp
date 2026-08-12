int sub_10369510()
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
  dword_106E7FFC = sub_100032E0((int)"ACT_FISHERMAN_HAT_UP");
  sub_10008F60((int)"ACT_FISHERMAN_HAT_UP", dword_106E7FFC);
  dword_106E7FF8 = sub_100032E0((int)"ACT_FISHERMAN_HAT_DOWN");
  sub_10008F60((int)"ACT_FISHERMAN_HAT_DOWN", dword_106E7FF8);
  dword_106E7FF4 = sub_1013BF10((int)"AE_FISHERMAN_HAT_UP");
  sub_1006AFD0((int)"AE_FISHERMAN_HAT_UP", dword_106E7FF4);
  dword_106E7FF0 = sub_1013BF10((int)"AE_FISHERMAN_HAT_DOWN");
  sub_1006AFD0((int)"AE_FISHERMAN_HAT_DOWN", dword_106E7FF0);
  dword_106E7FEC = sub_1013BF10((int)"AE_FISHERMAN_HAT_ON");
  sub_1006AFD0((int)"AE_FISHERMAN_HAT_ON", dword_106E7FEC);
  dword_106E7FE8 = sub_1013BF10((int)"AE_FISHERMAN_HAT_OFF");
  sub_1006AFD0((int)"AE_FISHERMAN_HAT_OFF", dword_106E7FE8);
  sub_1004BBC0(&dword_106E8008, (int)"CNPC_Fisherman", (int)dword_10690E5C, (int)&unk_106EA398);
  sub_1007DAB0(dword_106E8054, (int)dword_1069528C, (int)&unk_106EA3E4);
  sub_1004C500((int)v5, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v4, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v3, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v2, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  return sub_102375F0(v1);
}
