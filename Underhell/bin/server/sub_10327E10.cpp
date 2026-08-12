int sub_10327E10()
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
  sub_1004BBC0(&dword_106E5530, (int)"CNPC_Barney", (int)dword_10690E5C, (int)&unk_106EA398);
  sub_1007DAB0(dword_106E557C, (int)dword_1069528C, (int)&unk_106EA3E4);
  sub_1004C500((int)v5, sub_10333A80);
  sub_1004C500((int)v4, sub_10333A80);
  sub_1004C500((int)v3, sub_10333A80);
  sub_1004C500((int)v2, sub_10333A80);
  return sub_102375F0(v1);
}
