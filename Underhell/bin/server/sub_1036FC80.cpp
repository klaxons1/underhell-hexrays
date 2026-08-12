char sub_1036FC80()
{
  int v0; // ebx
  int v1; // edi
  char result; // al
  int v3[5]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v4[5]; // [esp+20h] [ebp-58h] BYREF
  _DWORD v5[5]; // [esp+34h] [ebp-44h] BYREF
  _DWORD v6[5]; // [esp+48h] [ebp-30h] BYREF
  int v7[2]; // [esp+5Ch] [ebp-1Ch] BYREF
  int v8; // [esp+64h] [ebp-14h]
  int v9; // [esp+68h] [ebp-10h]
  int v10; // [esp+6Ch] [ebp-Ch]
  const char *v11; // [esp+70h] [ebp-8h] BYREF
  int v12; // [esp+74h] [ebp-4h]

  memset(v3, 0, sizeof(v3));
  memset(v6, 0, sizeof(v6));
  memset(v5, 0, sizeof(v5));
  memset(v4, 0, sizeof(v4));
  v7[0] = 0;
  v7[1] = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = "SQUAD_SLOT_ENGAGE1";
  v12 = 8;
  sub_10229160(v7, 0, &v11);
  v11 = "SQUAD_SLOT_ENGAGE2";
  v12 = 9;
  sub_10229160(v7, v9, &v11);
  v11 = "SQUAD_SLOT_ENGAGE3";
  v12 = 10;
  sub_10229160(v7, v9, &v11);
  v11 = "SQUAD_SLOT_ENGAGE4";
  v12 = 11;
  sub_10229160(v7, v9, &v11);
  sub_1004BBC0(&dword_106E83D8, (int)"CFastHeadcrab", (int)dword_10690E5C, (int)&dword_106E8308);
  sub_1007DAB0(dword_106E8424, (int)dword_1069528C, (int)dword_106E8354);
  sub_1004C500((int)v6, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v5, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v4, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  sub_1004C500((int)v7, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10333A80);
  v0 = v7[0];
  v1 = 0;
  if ( v9 <= 0 )
  {
LABEL_4:
    if ( v8 >= 0 )
    {
      if ( v0 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
    }
    return sub_102375F0(v3);
  }
  else
  {
    while ( 1 )
    {
      result = sub_1007DB90(
                 dword_106E8424,
                 *(_DWORD *)(v0 + 8 * v1),
                 *(_DWORD *)(v0 + 8 * v1 + 4),
                 "squadslot",
                 off_10673A30);
      if ( !result )
        break;
      if ( ++v1 >= v9 )
        goto LABEL_4;
    }
    if ( v8 >= 0 && v0 )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v0);
  }
  return result;
}
