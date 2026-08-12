int sub_10324F20()
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
  dword_106E50A8 = sub_100C7680();
  dword_106E50AC = sub_100C7680();
  dword_106E50B0 = sub_100C7680();
  dword_106E50B4 = sub_100C7680();
  dword_106E50A4 = sub_100032E0((int)"ACT_BARNACLE_SLURP");
  sub_10008F60((int)"ACT_BARNACLE_SLURP", dword_106E50A4);
  dword_106E50A0 = sub_100032E0((int)"ACT_BARNACLE_BITE_HUMAN");
  sub_10008F60((int)"ACT_BARNACLE_BITE_HUMAN", dword_106E50A0);
  dword_106E509C = sub_100032E0((int)"ACT_BARNACLE_BITE_PLAYER");
  sub_10008F60((int)"ACT_BARNACLE_BITE_PLAYER", dword_106E509C);
  dword_106E5098 = sub_100032E0((int)"ACT_BARNACLE_CHEW_HUMAN");
  sub_10008F60((int)"ACT_BARNACLE_CHEW_HUMAN", dword_106E5098);
  dword_106E5094 = sub_100032E0((int)"ACT_BARNACLE_BARF_HUMAN");
  sub_10008F60((int)"ACT_BARNACLE_BARF_HUMAN", dword_106E5094);
  dword_106E5090 = sub_100032E0((int)"ACT_BARNACLE_TONGUE_WRAP");
  sub_10008F60((int)"ACT_BARNACLE_TONGUE_WRAP", dword_106E5090);
  dword_106E508C = sub_100032E0((int)"ACT_BARNACLE_TASTE_SPIT");
  sub_10008F60((int)"ACT_BARNACLE_TASTE_SPIT", dword_106E508C);
  dword_106E5088 = sub_100032E0((int)"ACT_BARNACLE_BITE_SMALL_THINGS");
  sub_10008F60((int)"ACT_BARNACLE_BITE_SMALL_THINGS", dword_106E5088);
  dword_106E5084 = sub_100032E0((int)"ACT_BARNACLE_CHEW_SMALL_THINGS");
  sub_10008F60((int)"ACT_BARNACLE_CHEW_SMALL_THINGS", dword_106E5084);
  dword_106E5080 = sub_1013BF10((int)"AE_BARNACLE_PUKEGIB");
  sub_1006AFD0((int)"AE_BARNACLE_PUKEGIB", dword_106E5080);
  dword_106E507C = sub_1013BF10((int)"AE_BARNACLE_BITE");
  sub_1006AFD0((int)"AE_BARNACLE_BITE", dword_106E507C);
  dword_106E5078 = sub_1013BF10((int)"AE_BARNACLE_SPIT");
  sub_1006AFD0((int)"AE_BARNACLE_SPIT", dword_106E5078);
  sub_1004BBC0(&dword_106E5180, (int)"CNPC_Barnacle", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E51CC, (int)dword_1069528C, (int)&unk_10690E74);
  sub_1004C500((int)v5, sub_10333A80);
  sub_1004C500((int)v4, sub_10333A80);
  sub_1004C500((int)v3, sub_10333A80);
  sub_1004C500((int)v2, sub_10333A80);
  return sub_102375F0(v1);
}
