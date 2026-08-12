int sub_1034D6A0()
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
  dword_106E66FC = sub_100032E0((int)"ACT_DROPSHIP_FLY_IDLE");
  sub_10008F60((int)"ACT_DROPSHIP_FLY_IDLE", dword_106E66FC);
  dword_106E66F8 = sub_100032E0((int)"ACT_DROPSHIP_FLY_IDLE_EXAGG");
  sub_10008F60((int)"ACT_DROPSHIP_FLY_IDLE_EXAGG", dword_106E66F8);
  dword_106E66F0 = sub_100032E0((int)"ACT_DROPSHIP_DESCEND_IDLE");
  sub_10008F60((int)"ACT_DROPSHIP_DESCEND_IDLE", dword_106E66F0);
  dword_106E66EC = sub_100032E0((int)"ACT_DROPSHIP_DEPLOY_IDLE");
  sub_10008F60((int)"ACT_DROPSHIP_DEPLOY_IDLE", dword_106E66EC);
  dword_106E66E8 = sub_100032E0((int)"ACT_DROPSHIP_LIFTOFF");
  sub_10008F60((int)"ACT_DROPSHIP_LIFTOFF", dword_106E66E8);
  dword_106E66F4 = sub_100032E0((int)"ACT_DROPSHIP_FLY_IDLE_CARGO");
  sub_10008F60((int)"ACT_DROPSHIP_FLY_IDLE_CARGO", dword_106E66F4);
  sub_1004BBC0(&dword_106E6800, (int)"CNPC_CombineDropship", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E684C, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v5, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v4, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v3, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v2, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  return sub_102375F0(v1);
}
